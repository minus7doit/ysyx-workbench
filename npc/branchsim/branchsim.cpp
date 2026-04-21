#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <stdexcept>

namespace {

constexpr uint32_t ITRACE_MAGIC = 0x49545243u;  // 'ITRC'
constexpr uint32_t BTRACE_MAGIC = 0x42545243u;  // 'BTRC'

struct TraceHeader {
  uint32_t magic;
  uint32_t version;
  uint32_t record_bytes;
  uint32_t reserved;
};

struct BTraceRecord {
  uint32_t pc;
  uint32_t inst;
  uint32_t npc;
  uint32_t flags;   // bit0=taken
};

enum class PredictorKind {
  AlwaysNotTaken,
  AlwaysTaken,
  BTFN
};

struct PredictorStat {
  const char *name;
  uint64_t total = 0;
  uint64_t correct = 0;
  double accuracy = 0.0;
};

struct BranchMeta {
  uint32_t pc;
  uint32_t inst;
  bool taken;
  int32_t offset;
  bool backward;
};

static void die(const std::string &msg) {
  std::cerr << "[branchsim] " << msg << "\n";
  std::exit(1);
}

static int32_t sign_extend(uint32_t value, int bits) {
  const uint32_t m = 1u << (bits - 1);
  return static_cast<int32_t>((value ^ m) - m);
}

// RISC-V B-type immediate decode
static int32_t decode_b_imm(uint32_t inst) {
  uint32_t imm12   = ((inst >> 31) & 0x1u) << 12;
  uint32_t imm11   = ((inst >> 7)  & 0x1u) << 11;
  uint32_t imm10_5 = ((inst >> 25) & 0x3fu) << 5;
  uint32_t imm4_1  = ((inst >> 8)  & 0x0fu) << 1;
  uint32_t imm = imm12 | imm11 | imm10_5 | imm4_1;
  return sign_extend(imm, 13);
}

static bool predict(PredictorKind kind, const BranchMeta &br) {
  switch (kind) {
    case PredictorKind::AlwaysNotTaken: return false;
    case PredictorKind::AlwaysTaken:    return true;
    case PredictorKind::BTFN:           return br.backward; // backward taken, forward not-taken
    default:                            return false;
  }
}

static std::vector<BranchMeta> load_btrace(const std::string &path) {
  FILE *fp = std::fopen(path.c_str(), "rb");
  if (!fp) die("failed to open btrace file: " + path);

  TraceHeader hdr{};
  if (std::fread(&hdr, sizeof(hdr), 1, fp) != 1) {
    std::fclose(fp);
    die("failed to read btrace header");
  }

  if (hdr.magic != BTRACE_MAGIC) {
    std::fclose(fp);
    die("invalid btrace magic");
  }
  if (hdr.record_bytes != sizeof(BTraceRecord)) {
    std::fclose(fp);
    die("unexpected btrace record size");
  }

  std::vector<BranchMeta> recs;
  BTraceRecord rec{};
  while (std::fread(&rec, sizeof(rec), 1, fp) == 1) {
    BranchMeta b{};
    b.pc       = rec.pc;
    b.inst     = rec.inst;
    b.taken    = (rec.flags & 1u) != 0;
    b.offset   = decode_b_imm(rec.inst);
    b.backward = (b.offset < 0);
    recs.push_back(b);
  }

  std::fclose(fp);
  return recs;
}

static uint64_t count_itrace_records(const std::string &path) {
  FILE *fp = std::fopen(path.c_str(), "rb");
  if (!fp) die("failed to open itrace file: " + path);

  TraceHeader hdr{};
  if (std::fread(&hdr, sizeof(hdr), 1, fp) != 1) {
    std::fclose(fp);
    die("failed to read itrace header");
  }

  if (hdr.magic != ITRACE_MAGIC) {
    std::fclose(fp);
    die("invalid itrace magic");
  }
  if (hdr.record_bytes != sizeof(uint32_t)) {
    std::fclose(fp);
    die("unexpected itrace record size");
  }

  std::fseek(fp, 0, SEEK_END);
  long sz = std::ftell(fp);
  std::fclose(fp);

  if (sz < static_cast<long>(sizeof(TraceHeader))) {
    die("itrace file too small");
  }

  long payload = sz - static_cast<long>(sizeof(TraceHeader));
  if (payload % static_cast<long>(sizeof(uint32_t)) != 0) {
    die("itrace payload size is not aligned");
  }

  return static_cast<uint64_t>(payload / sizeof(uint32_t));
}

static PredictorStat eval_predictor(const std::vector<BranchMeta> &branches, PredictorKind kind, const char *name) {
  PredictorStat st{};
  st.name = name;
  st.total = branches.size();

  for (const auto &br : branches) {
    bool pred = predict(kind, br);
    if (pred == br.taken) st.correct++;
  }

  st.accuracy = (st.total == 0) ? 0.0 : (100.0 * static_cast<double>(st.correct) / static_cast<double>(st.total));
  return st;
}

// base cycles = N / width
// extra cycles = N * branch_freq * mispred_rate * penalty
// IPC = N / cycles = 1 / (1/width + f*m*penalty)
static double estimate_ipc(double branch_freq, double accuracy, int width, int mispred_penalty) {
  double m = 1.0 - accuracy; // accuracy in [0,1]
  double cpi = (1.0 / static_cast<double>(width)) + branch_freq * m * static_cast<double>(mispred_penalty);
  return 1.0 / cpi;
}

static void print_ipc_table(double branch_freq, const PredictorStat &st) {
  double acc = st.accuracy / 100.0;

  double ipc_5_single   = estimate_ipc(branch_freq, acc, 1, 2);   // 5级, EX解分支 => penalty=2
  double ipc_15_single  = estimate_ipc(branch_freq, acc, 1, 12);  // 15级, 第13级解分支 => penalty=12
  double ipc_15_four    = estimate_ipc(branch_freq, acc, 4, 12);  // 四发射15级

  std::cout << "  IPC(5-stage single-issue)      = " << std::fixed << std::setprecision(6) << ipc_5_single  << "\n";
  std::cout << "  IPC(15-stage OoO single-issue) = " << std::fixed << std::setprecision(6) << ipc_15_single << "\n";
  std::cout << "  IPC(15-stage OoO four-issue)   = " << std::fixed << std::setprecision(6) << ipc_15_four   << "\n";
}

static void usage(const char *prog) {
  std::cerr
    << "Usage:\n"
    << "  " << prog << " --btrace btrace.bin [--itrace itrace.bin]\n"
    << "  " << prog << " --btrace btrace.bin [--inst-total N]\n\n"
    << "Options:\n"
    << "  --btrace FILE      input btrace.bin\n"
    << "  --itrace FILE      optional itrace.bin, used to count total dynamic instructions\n"
    << "  --inst-total N     optional total dynamic instruction count\n";
}

} // namespace

int main(int argc, char **argv) {
  std::string btrace_path;
  std::string itrace_path;
  uint64_t inst_total = 0;
  bool has_inst_total = false;

  for (int i = 1; i < argc; ++i) {
    if (std::strcmp(argv[i], "--btrace") == 0 && i + 1 < argc) {
      btrace_path = argv[++i];
    } else if (std::strcmp(argv[i], "--itrace") == 0 && i + 1 < argc) {
      itrace_path = argv[++i];
    } else if (std::strcmp(argv[i], "--inst-total") == 0 && i + 1 < argc) {
      inst_total = std::strtoull(argv[++i], nullptr, 10);
      has_inst_total = true;
    } else {
      usage(argv[0]);
      return 1;
    }
  }

  if (btrace_path.empty()) {
    usage(argv[0]);
    return 1;
  }

  auto branches = load_btrace(btrace_path);
  if (branches.empty()) {
    die("no branch records found in btrace");
  }

  if (!itrace_path.empty()) {
    inst_total = count_itrace_records(itrace_path);
    has_inst_total = true;
  }

  uint64_t taken_cnt = 0;
  uint64_t backward_cnt = 0;
  uint64_t backward_taken_cnt = 0;
  uint64_t forward_cnt = 0;
  uint64_t forward_taken_cnt = 0;

  for (const auto &br : branches) {
    if (br.taken) taken_cnt++;
    if (br.backward) {
      backward_cnt++;
      if (br.taken) backward_taken_cnt++;
    } else {
      forward_cnt++;
      if (br.taken) forward_taken_cnt++;
    }
  }

  auto ant  = eval_predictor(branches, PredictorKind::AlwaysNotTaken, "Always Not-Taken");
  auto at   = eval_predictor(branches, PredictorKind::AlwaysTaken,    "Always Taken");
  auto btfn = eval_predictor(branches, PredictorKind::BTFN,           "BTFN");

  std::cout << "================ branchsim ================\n";
  std::cout << "btrace records (dynamic branches) = " << branches.size() << "\n";
  std::cout << "taken count                       = " << taken_cnt
            << " (" << std::fixed << std::setprecision(3)
            << 100.0 * static_cast<double>(taken_cnt) / static_cast<double>(branches.size()) << "%)\n";
  std::cout << "backward branches                = " << backward_cnt
            << " (" << 100.0 * static_cast<double>(backward_cnt) / static_cast<double>(branches.size()) << "%)\n";
  std::cout << "  backward taken rate            = "
            << (backward_cnt ? (100.0 * static_cast<double>(backward_taken_cnt) / static_cast<double>(backward_cnt)) : 0.0)
            << "%\n";
  std::cout << "forward branches                 = " << forward_cnt
            << " (" << 100.0 * static_cast<double>(forward_cnt) / static_cast<double>(branches.size()) << "%)\n";
  std::cout << "  forward taken rate             = "
            << (forward_cnt ? (100.0 * static_cast<double>(forward_taken_cnt) / static_cast<double>(forward_cnt)) : 0.0)
            << "%\n";

  if (has_inst_total) {
    double x = static_cast<double>(inst_total) / static_cast<double>(branches.size());
    double branch_freq = static_cast<double>(branches.size()) / static_cast<double>(inst_total);

    std::cout << "total dynamic instructions       = " << inst_total << "\n";
    std::cout << "avg every x inst has 1 branch    = " << std::fixed << std::setprecision(6) << x << "\n";
    std::cout << "branch frequency                 = " << std::fixed << std::setprecision(6) << branch_freq << "\n";
  }

  auto print_one = [&](const PredictorStat &st) {
    std::cout << "\n[" << st.name << "]\n";
    std::cout << "  correct                        = " << st.correct << "\n";
    std::cout << "  total                          = " << st.total << "\n";
    std::cout << "  accuracy                       = " << std::fixed << std::setprecision(6) << st.accuracy << "%\n";

    if (has_inst_total) {
      double branch_freq = static_cast<double>(branches.size()) / static_cast<double>(inst_total);
      print_ipc_table(branch_freq, st);
    }
  };

  print_one(ant);
  print_one(at);
  print_one(btfn);

  std::cout << "===========================================\n";
  return 0;
}