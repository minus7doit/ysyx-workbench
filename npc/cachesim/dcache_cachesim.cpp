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

struct TraceHeader {
    uint32_t magic;
    uint32_t version;
    uint32_t record_bytes;
    uint32_t reserved;
};

struct MTraceRecord {
    uint32_t type;  // 0=read, 1=write
    uint32_t addr;
    uint32_t len;
    uint32_t data;
};

constexpr uint32_t MTRACE_MAGIC   = 0x4d545243u; // 'MTRC'
constexpr uint32_t MTRACE_VERSION = 1u;

struct CacheLine {
    bool valid = false;
    bool dirty = false;
    uint32_t tag = 0;
    uint64_t last_used = 0;
    uint64_t insert_ts = 0;
};

struct CacheStat {
    uint64_t load_access = 0;
    uint64_t store_access = 0;
    uint64_t load_hit = 0;
    uint64_t load_miss = 0;
    uint64_t store_hit = 0;
    uint64_t store_miss = 0;
    uint64_t writeback = 0;
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

class DCacheSim {
public:
    DCacheSim(uint32_t block_size_bytes,
              uint32_t total_blocks,
              uint32_t associativity,
              ReplacePolicy policy,
              bool write_allocate,
              bool write_back)
        : block_size_bytes_(block_size_bytes),
          total_blocks_(total_blocks),
          associativity_(associativity),
          policy_(policy),
          write_allocate_(write_allocate),
          write_back_(write_back),
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

    void access(uint32_t type, uint32_t addr, uint32_t len) {
        uint32_t start = addr;
        uint32_t end = addr + len - 1;
        uint32_t cur = start;

        while (cur <= end) {
            uint32_t line_base = (cur / block_size_bytes_) * block_size_bytes_;
            access_one_line(type, line_base);
            uint32_t next = line_base + block_size_bytes_;
            if (next <= cur) break;
            cur = next;
        }
    }

    const CacheStat& stat() const { return stat_; }

    uint64_t total_access() const {
        return stat_.load_access + stat_.store_access;
    }
    uint64_t total_hit() const {
        return stat_.load_hit + stat_.store_hit;
    }
    uint64_t total_miss() const {
        return stat_.load_miss + stat_.store_miss;
    }

private:
    void access_one_line(uint32_t type, uint32_t line_addr) {
        tick_++;

        bool is_store = (type == 1);
        if (is_store) stat_.store_access++;
        else          stat_.load_access++;

        uint32_t block_addr = line_addr / block_size_bytes_;
        uint32_t set_idx = block_addr & set_mask_;
        uint32_t tag = block_addr >> set_bits_;

        auto &set = sets_[set_idx];

        for (uint32_t way = 0; way < associativity_; ++way) {
            if (set[way].valid && set[way].tag == tag) {
                if (is_store) {
                    stat_.store_hit++;
                    if (write_back_) set[way].dirty = true;
                } else {
                    stat_.load_hit++;
                }
                set[way].last_used = tick_;
                return;
            }
        }

        if (is_store) stat_.store_miss++;
        else          stat_.load_miss++;

        if (is_store && !write_allocate_) {
            return;
        }

        int victim = -1;
        for (uint32_t way = 0; way < associativity_; ++way) {
            if (!set[way].valid) {
                victim = static_cast<int>(way);
                break;
            }
        }
        if (victim < 0) victim = static_cast<int>(choose_victim(set));

        if (set[victim].valid && set[victim].dirty && write_back_) {
            stat_.writeback++;
        }

        set[victim].valid = true;
        set[victim].tag = tag;
        set[victim].last_used = tick_;
        set[victim].insert_ts = tick_;
        set[victim].dirty = is_store && write_back_;
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
    bool write_allocate_;
    bool write_back_;

    uint32_t offset_bits_;
    uint32_t set_bits_;
    uint32_t set_mask_;

    uint64_t tick_ = 0;
    std::vector<std::vector<CacheLine>> sets_;
    CacheStat stat_;
    std::mt19937 rng_;
};

int main(int argc, char** argv) {
    if (argc < 13) {
        std::cerr << "Usage: " << argv[0]
                  << " <mtrace.bin> <block_size_bytes> <total_blocks> <associativity>"
                  << " <policy> <load_hit_cycles> <store_hit_cycles>"
                  << " <load_miss_cycles> <store_miss_cycles> <writeback_cycles>"
                  << " <write_allocate:0|1> <write_back:0|1>\n";
        return 1;
    }

    const char* trace_file = argv[1];
    uint32_t block_size_bytes = std::stoul(argv[2]);
    uint32_t total_blocks     = std::stoul(argv[3]);
    uint32_t associativity    = std::stoul(argv[4]);

    std::string policy_str = argv[5];
    double load_hit_cycles   = std::stod(argv[6]);
    double store_hit_cycles  = std::stod(argv[7]);
    double load_miss_cycles  = std::stod(argv[8]);
    double store_miss_cycles = std::stod(argv[9]);
    double writeback_cycles  = std::stod(argv[10]);
    bool write_allocate      = std::stoul(argv[11]) != 0;
    bool write_back          = std::stoul(argv[12]) != 0;

    ReplacePolicy policy = parse_policy(policy_str);

    FILE* fp = fopen(trace_file, "rb");
    if (!fp) {
        std::perror(trace_file);
        return 1;
    }

    TraceHeader hdr {};
    size_t n = fread(&hdr, sizeof(hdr), 1, fp);
    if (n != 1) {
        std::cerr << "Failed to read mtrace header\n";
        fclose(fp);
        return 1;
    }

    if (hdr.magic != MTRACE_MAGIC) {
        std::cerr << "Bad mtrace magic: 0x" << std::hex << hdr.magic
                  << ", expect 0x" << MTRACE_MAGIC << std::dec << "\n";
        fclose(fp);
        return 1;
    }

    if (hdr.version != MTRACE_VERSION) {
        std::cerr << "Unsupported mtrace version: " << hdr.version << "\n";
        fclose(fp);
        return 1;
    }

    if (hdr.record_bytes != sizeof(MTraceRecord)) {
        std::cerr << "Unsupported record_bytes: " << hdr.record_bytes << "\n";
        fclose(fp);
        return 1;
    }

    DCacheSim sim(block_size_bytes, total_blocks, associativity, policy, write_allocate, write_back);

    MTraceRecord rec {};
    while (fread(&rec, sizeof(rec), 1, fp) == 1) {
        sim.access(rec.type, rec.addr, rec.len);
    }
    fclose(fp);

    const auto& st = sim.stat();
    double hit_rate = (sim.total_access() == 0) ? 0.0
                    : static_cast<double>(sim.total_hit()) / static_cast<double>(sim.total_access());

    double estimated_data_cycles =
        st.load_hit   * load_hit_cycles +
        st.store_hit  * store_hit_cycles +
        st.load_miss  * load_miss_cycles +
        st.store_miss * store_miss_cycles +
        st.writeback  * writeback_cycles;

    std::cout << "===== dcache cachesim result =====\n";
    std::cout << "block_size_bytes      = " << block_size_bytes << "\n";
    std::cout << "total_blocks          = " << total_blocks << "\n";
    std::cout << "associativity         = " << associativity << "\n";
    std::cout << "num_sets              = " << (total_blocks / associativity) << "\n";
    std::cout << "policy                = " << policy_str << "\n";
    std::cout << "write_allocate        = " << (write_allocate ? 1 : 0) << "\n";
    std::cout << "write_back            = " << (write_back ? 1 : 0) << "\n";

    std::cout << "load_access           = " << st.load_access << "\n";
    std::cout << "store_access          = " << st.store_access << "\n";
    std::cout << "total_access          = " << sim.total_access() << "\n";

    std::cout << "load_hit              = " << st.load_hit << "\n";
    std::cout << "store_hit             = " << st.store_hit << "\n";
    std::cout << "total_hit             = " << sim.total_hit() << "\n";

    std::cout << "load_miss             = " << st.load_miss << "\n";
    std::cout << "store_miss            = " << st.store_miss << "\n";
    std::cout << "total_miss            = " << sim.total_miss() << "\n";

    std::cout << "writeback             = " << st.writeback << "\n";
    std::cout << "hit_rate              = " << std::fixed << std::setprecision(6) << hit_rate << "\n";
    std::cout << "estimated_data_cycles = " << std::fixed << std::setprecision(6) << estimated_data_cycles << "\n";

    return 0;
}