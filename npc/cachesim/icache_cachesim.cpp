#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <random>
#include <algorithm>
#include <cmath>

struct ITraceHeader {
    uint32_t magic;
    uint32_t version;
    uint32_t record_bytes;
    uint32_t reserved;
};

constexpr uint32_t ITRACE_MAGIC   = 0x49545243u; // 'ITRC'
constexpr uint32_t ITRACE_VERSION = 1u;

struct CacheLine {
    bool valid = false;
    uint32_t tag = 0;
    uint64_t last_used = 0;   // LRU
    uint64_t insert_ts = 0;   // FIFO
};

struct CacheStat {
    uint64_t req_cnt = 0;
    uint64_t hit_cnt = 0;
    uint64_t miss_cnt = 0;
};

enum class ReplacePolicy {
    LRU,
    FIFO,
    RANDOM
};

static bool is_power_of_two(uint32_t x) {
    return x != 0 && (x & (x - 1)) == 0;
}

static uint32_t log2_uint(uint32_t x) {
    uint32_t r = 0;
    while ((1u << r) < x) r++;
    return r;
}

static ReplacePolicy parse_policy(const std::string &s) {
    if (s == "lru" || s == "LRU") return ReplacePolicy::LRU;
    if (s == "fifo" || s == "FIFO") return ReplacePolicy::FIFO;
    if (s == "random" || s == "rand" || s == "RANDOM") return ReplacePolicy::RANDOM;

    std::cerr << "Unsupported policy: " << s << "\n";
    std::exit(1);
}

class ICacheSim {
public:
    ICacheSim(uint32_t block_size_bytes,
              uint32_t total_blocks,
              uint32_t associativity,
              ReplacePolicy policy)
        : block_size_bytes_(block_size_bytes),
          total_blocks_(total_blocks),
          associativity_(associativity),
          policy_(policy),
          rng_(1) {

        if (!is_power_of_two(block_size_bytes_)) {
            std::cerr << "block_size_bytes must be power of two\n";
            std::exit(1);
        }
        if (!is_power_of_two(total_blocks_)) {
            std::cerr << "total_blocks must be power of two\n";
            std::exit(1);
        }
        if (!is_power_of_two(associativity_)) {
            std::cerr << "associativity must be power of two\n";
            std::exit(1);
        }
        if (associativity_ == 0 || associativity_ > total_blocks_ || (total_blocks_ % associativity_) != 0) {
            std::cerr << "associativity must divide total_blocks, and 1 <= associativity <= total_blocks\n";
            std::exit(1);
        }

        num_sets_ = total_blocks_ / associativity_;
        if (!is_power_of_two(num_sets_)) {
            std::cerr << "num_sets must be power of two\n";
            std::exit(1);
        }

        offset_bits_ = log2_uint(block_size_bytes_);
        set_bits_    = log2_uint(num_sets_);
        set_mask_    = num_sets_ - 1;

        sets_.resize(num_sets_, std::vector<CacheLine>(associativity_));
    }

    void access(uint32_t pc) {
        stat_.req_cnt++;
        tick_++;

        uint32_t set_idx = (pc >> offset_bits_) & set_mask_;
        uint32_t tag     = pc >> (offset_bits_ + set_bits_);

        auto &set = sets_[set_idx];

        for (uint32_t way = 0; way < associativity_; ++way) {
            if (set[way].valid && set[way].tag == tag) {
                stat_.hit_cnt++;
                set[way].last_used = tick_;
                return;
            }
        }

        stat_.miss_cnt++;

        for (uint32_t way = 0; way < associativity_; ++way) {
            if (!set[way].valid) {
                fill_line(set[way], tag);
                return;
            }
        }

        uint32_t victim = choose_victim(set);
        fill_line(set[victim], tag);
    }

    const CacheStat& stat() const { return stat_; }

private:
    void fill_line(CacheLine &line, uint32_t tag) {
        line.valid = true;
        line.tag = tag;
        line.last_used = tick_;
        line.insert_ts = tick_;
    }

    uint32_t choose_victim(const std::vector<CacheLine> &set) {
        if (policy_ == ReplacePolicy::RANDOM) {
            std::uniform_int_distribution<uint32_t> dist(0, associativity_ - 1);
            return dist(rng_);
        }

        uint32_t victim = 0;
        uint64_t best = 0;

        if (policy_ == ReplacePolicy::LRU) {
            best = set[0].last_used;
            for (uint32_t i = 1; i < associativity_; ++i) {
                if (set[i].last_used < best) {
                    best = set[i].last_used;
                    victim = i;
                }
            }
            return victim;
        }

        best = set[0].insert_ts;
        for (uint32_t i = 1; i < associativity_; ++i) {
            if (set[i].insert_ts < best) {
                best = set[i].insert_ts;
                victim = i;
            }
        }
        return victim;
    }

private:
    uint32_t block_size_bytes_;
    uint32_t total_blocks_;
    uint32_t associativity_;
    uint32_t num_sets_;
    ReplacePolicy policy_;

    uint32_t offset_bits_;
    uint32_t set_bits_;
    uint32_t set_mask_;

    uint64_t tick_ = 0;
    std::vector<std::vector<CacheLine>> sets_;
    CacheStat stat_;

    std::mt19937 rng_;
};

static double estimate_miss_penalty(uint32_t block_size_bytes,
                                    uint32_t bus_width_bytes,
                                    double base_transaction_cost) {
    uint32_t transactions_per_miss =
        (block_size_bytes + bus_width_bytes - 1) / bus_width_bytes;
    return static_cast<double>(transactions_per_miss) * base_transaction_cost;
}

int main(int argc, char** argv) {
    if (argc < 5) {
        std::cerr << "Usage: " << argv[0]
                  << " <itrace.bin> <block_size_bytes> <total_blocks> <associativity> [policy] [bus_width_bytes] [base_transaction_cost]\n";
        return 1;
    }

    const char* trace_file = argv[1];
    uint32_t block_size_bytes = std::stoul(argv[2]);
    uint32_t total_blocks     = std::stoul(argv[3]);
    uint32_t associativity    = std::stoul(argv[4]);

    std::string policy_str = "lru";
    uint32_t bus_width_bytes = 4;
    double base_transaction_cost = 1.0;

    if (argc >= 6) policy_str = argv[5];
    if (argc >= 7) bus_width_bytes = std::stoul(argv[6]);
    if (argc >= 8) base_transaction_cost = std::stod(argv[7]);

    if (bus_width_bytes == 0) {
        std::cerr << "bus_width_bytes must be > 0\n";
        return 1;
    }

    ReplacePolicy policy = parse_policy(policy_str);

    FILE* fp = fopen(trace_file, "rb");
    if (!fp) {
        std::perror(trace_file);
        return 1;
    }

    ITraceHeader hdr {};
    size_t n = fread(&hdr, sizeof(hdr), 1, fp);
    if (n != 1) {
        std::cerr << "Failed to read itrace header\n";
        fclose(fp);
        return 1;
    }

    if (hdr.magic != ITRACE_MAGIC) {
        std::cerr << "Bad itrace magic: 0x" << std::hex << hdr.magic
                  << ", expect 0x" << ITRACE_MAGIC << std::dec << "\n";
        fclose(fp);
        return 1;
    }

    if (hdr.version != ITRACE_VERSION) {
        std::cerr << "Unsupported itrace version: " << hdr.version << "\n";
        fclose(fp);
        return 1;
    }

    if (hdr.record_bytes != 4) {
        std::cerr << "Unsupported record_bytes: " << hdr.record_bytes << "\n";
        fclose(fp);
        return 1;
    }

    ICacheSim sim(block_size_bytes, total_blocks, associativity, policy);

    uint32_t pc = 0;
    while (fread(&pc, sizeof(pc), 1, fp) == 1) {
        sim.access(pc);
    }

    fclose(fp);

    const auto& st = sim.stat();
    double hit_rate = (st.req_cnt == 0) ? 0.0 : static_cast<double>(st.hit_cnt) / static_cast<double>(st.req_cnt);

    double miss_penalty = estimate_miss_penalty(
        block_size_bytes, bus_width_bytes, base_transaction_cost
    );
    double total_miss_time = static_cast<double>(st.miss_cnt) * miss_penalty;

    uint32_t transactions_per_miss =
        (block_size_bytes + bus_width_bytes - 1) / bus_width_bytes;

    std::cout << "===== icache cachesim result =====\n";
    std::cout << "block_size_bytes      = " << block_size_bytes << "\n";
    std::cout << "total_blocks          = " << total_blocks << "\n";
    std::cout << "associativity         = " << associativity << "\n";
    std::cout << "num_sets              = " << (total_blocks / associativity) << "\n";
    std::cout << "policy                = " << policy_str << "\n";
    std::cout << "bus_width_bytes       = " << bus_width_bytes << "\n";
    std::cout << "transactions_per_miss = " << transactions_per_miss << "\n";
    std::cout << "base_transaction_cost = " << std::fixed << std::setprecision(6)
              << base_transaction_cost << "\n";
    std::cout << "req_cnt               = " << st.req_cnt << "\n";
    std::cout << "hit_cnt               = " << st.hit_cnt << "\n";
    std::cout << "miss_cnt              = " << st.miss_cnt << "\n";
    std::cout << "hit_rate              = " << std::fixed << std::setprecision(6) << hit_rate << "\n";
    std::cout << "miss_penalty          = " << std::fixed << std::setprecision(6) << miss_penalty << "\n";
    std::cout << "TMT                   = " << std::fixed << std::setprecision(6) << total_miss_time << "\n";

    return 0;
}