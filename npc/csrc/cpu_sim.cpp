#include "npc.h"
#include <stdint.h>
#include <stdio.h>
#include "VysyxSoCFull___024root.h"

enum InstClass {
    CLS_ALU = 0,
    CLS_LOAD,
    CLS_STORE,
    CLS_BRANCH,
    CLS_JUMP,
    CLS_SYSTEM,
    CLS_OTHER,
    CLS_NUM
};

typedef struct {
    // 基本统计
    uint64_t cycle_cnt;            // 有效周期数（非reset，上升沿）
    uint64_t inst_retire_cnt;      // 动态指令数 / 提交数（all_bresp）

    // IFU
    uint64_t ifu_req_cnt;          // IFU 请求被 icache 接收次数
    uint64_t ifu_to_dec_cnt;       // IFU成功送到译码器次数

    // IFU取不到指令的原因
    uint64_t ifu_noinst_cycles;       // 这一拍没有送到decoder
    uint64_t ifu_block_dec_cycles;    // IFU已有指令，但decoder没ready
    uint64_t ifu_block_ar_cycles;     // icache miss请求阶段（等待向下游发起访问）
    uint64_t ifu_wait_resp_cycles;    // icache等待下游返回
    uint64_t ifu_backend_hold_cycles; // 后端当前指令未完成导致前端推进受阻
    uint64_t ifu_other_cycles;        // 兜底

    // EXU
    uint64_t exu_done_cnt;         // EXU完成计算（exc_wb握手）
    uint64_t exu_csr_cnt;          // CSR写类完成次数

    // LSU
    uint64_t lsu_load_req_cnt;     // load AR握手
    uint64_t lsu_load_resp_cnt;    // load R握手
    uint64_t lsu_store_req_cnt;    // store AW握手

    uint64_t lsu_load_lat_sum;     // load平均延迟统计：AR -> R
    uint64_t lsu_load_lat_max;
    uint64_t lsu_store_lat_sum;    // store端到端延迟：AW -> retire
    uint64_t lsu_store_lat_max;

    // 各类指令占比与平均执行周期
    uint64_t cls_cnt[CLS_NUM];
    uint64_t cls_cycle_sum[CLS_NUM];

    // 调试辅助
    uint64_t overlap_warn_cnt;     // 如果发现“多条在飞”近似被打破，则告警
} perf_cnt_t;

static perf_cnt_t perf;

// 当前“在飞”的一条动态指令（基于你当前设计的单主线推进近似）
static int      inflight_valid = 0;
static int      inflight_cls = CLS_OTHER;
static uint64_t inflight_start_cycle = 0;

// IFU取指请求是否已发出但尚未送到Decoder
static int fetch_pending = 0;

// LSU延迟跟踪
static int      load_pending = 0;
static uint64_t load_start_cycle = 0;

static int      store_pending = 0;
static uint64_t store_start_cycle = 0;

// ===================== opcode定义 =====================
#define OPC_LOAD     0x03
#define OPC_OP_IMM   0x13
#define OPC_AUIPC    0x17
#define OPC_STORE    0x23
#define OPC_OP       0x33
#define OPC_LUI      0x37
#define OPC_BRANCH   0x63
#define OPC_JALR     0x67
#define OPC_JAL      0x6F
#define OPC_SYSTEM   0x73

// ===================== icache状态定义 =====================
#define IC_ST_IDLE       0u
#define IC_ST_HIT        1u
#define IC_ST_MISS       2u
#define IC_ST_WAIT_RESP  3u

// ===================== 工具函数 =====================
static inline double ratio_u64(uint64_t a, uint64_t b) {
    if (b == 0) return 0.0;
    return (double)a / (double)b;
}

static inline const char *yesno(int ok) {
    return ok ? "PASS" : "FAIL";
}

static inline const char* cls_name(int cls) {
    switch (cls) {
        case CLS_ALU:    return "ALU";
        case CLS_LOAD:   return "LOAD";
        case CLS_STORE:  return "STORE";
        case CLS_BRANCH: return "BRANCH";
        case CLS_JUMP:   return "JUMP";
        case CLS_SYSTEM: return "SYSTEM/CSR";
        default:         return "OTHER";
    }
}

static inline int classify_opcode(uint32_t opcode) {
    switch (opcode) {
        case OPC_OP:
        case OPC_OP_IMM:
        case OPC_LUI:
        case OPC_AUIPC:
            return CLS_ALU;
        case OPC_LOAD:
            return CLS_LOAD;
        case OPC_STORE:
            return CLS_STORE;
        case OPC_BRANCH:
            return CLS_BRANCH;
        case OPC_JAL:
        case OPC_JALR:
            return CLS_JUMP;
        case OPC_SYSTEM:
            return CLS_SYSTEM;
        default:
            return CLS_OTHER;
    }
}

// ===================== 读信号 helper =====================

// 退休/完成：沿用 all_bresp
static inline uint32_t get_commit_valid() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__all_bresp;
}

// 读取 icache 状态
static inline uint32_t get_icache_state() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state;
}

// IFU 请求被 icache 接收
static inline uint32_t get_ifu_req_fire() {
    uint32_t ifu_arvalid =
        dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid;
    return ifu_arvalid && (get_icache_state() == IC_ST_IDLE);
}

// IFU成功送给Decoder
static inline uint32_t get_ifu_to_dec_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_ifu_dec_rvalid &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_dec_ready;
}

// IFU中当前是否已有待送给Decoder的指令
static inline uint32_t get_ifu_valid_buf() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_ifu_dec_rvalid;
}

// Decoder -> EXU 握手
static inline uint32_t get_dec_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dec_exc_valid &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dec_exc_ready;
}

// EXU -> WB 握手
static inline uint32_t get_exu_done_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exc_wb_valid &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exc_wb_ready;
}

// CSR写完成
static inline uint32_t get_exu_csr_fire() {
    return get_exu_done_fire() &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__csr_wen;
}

// LSU load请求
static inline uint32_t get_lsu_load_req_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready;
}

// LSU load返回
static inline uint32_t get_lsu_load_resp_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready;
}

// LSU store请求
static inline uint32_t get_lsu_store_req_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready;
}

// Decoder当前opcode
static inline uint32_t get_dec_opcode() {
    return (uint32_t)dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_opcode;
}

// ===================== icache AMAT计数器读取 =====================
static inline uint64_t get_ic_req_cnt() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt;
}

static inline uint64_t get_ic_hit_cnt() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt;
}

static inline uint64_t get_ic_miss_cnt() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt;
}

static inline uint64_t get_ic_total_access_cycles() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles;
}

static inline uint64_t get_ic_miss_penalty_cycles() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles;
}

// ===================== 基本接口 =====================
void perf_stat_reset() {
    perf = {};

    inflight_valid = 0;
    inflight_cls = CLS_OTHER;
    inflight_start_cycle = 0;

    fetch_pending = 0;

    load_pending = 0;
    load_start_cycle = 0;

    store_pending = 0;
    store_start_cycle = 0;
}

uint64_t inst_num_get() {
    return perf.inst_retire_cnt;
}

uint64_t cycle_num_get() {
    return perf.cycle_cnt;
}

double ipc_cal(uint64_t cycle, uint64_t inst_num) {
    if (cycle == 0) return 0.0;
    return (double)inst_num / (double)cycle;
}

double cpi_cal(uint64_t cycle, uint64_t inst_num) {
    if (inst_num == 0) return 0.0;
    return (double)cycle / (double)inst_num;
}

// ===================== 每拍更新 =====================
void perf_stat_update() {
    // 只统计上升沿
    if (dut->clock != 1) return;
    // reset期间不统计
    if (dut->reset) return;

    perf.cycle_cnt++;

    uint32_t commit_fire     = get_commit_valid();
    uint32_t ifu_req_fire    = get_ifu_req_fire();
    uint32_t ifu_to_dec_fire = get_ifu_to_dec_fire();
    uint32_t dec_fire        = get_dec_fire();
    uint32_t exu_done_fire   = get_exu_done_fire();
    uint32_t exu_csr_fire    = get_exu_csr_fire();
    uint32_t load_req_fire   = get_lsu_load_req_fire();
    uint32_t load_resp_fire  = get_lsu_load_resp_fire();
    uint32_t store_req_fire  = get_lsu_store_req_fire();
    uint32_t ic_state        = get_icache_state();

    // ---------------- 基本计数 ----------------
    if (commit_fire) {
        perf.inst_retire_cnt++;
    }

    if (ifu_req_fire) {
        perf.ifu_req_cnt++;
    }

    if (ifu_to_dec_fire) {
        perf.ifu_to_dec_cnt++;
    }

    if (exu_done_fire) {
        perf.exu_done_cnt++;
    }

    if (exu_csr_fire) {
        perf.exu_csr_cnt++;
    }

    if (load_req_fire) {
        perf.lsu_load_req_cnt++;
    }

    if (load_resp_fire) {
        perf.lsu_load_resp_cnt++;
    }

    if (store_req_fire) {
        perf.lsu_store_req_cnt++;
    }

    // ---------------- 指令类别与平均执行周期 ----------------
    if (dec_fire) {
        if (inflight_valid) {
            perf.overlap_warn_cnt++;
        }
        inflight_valid = 1;
        inflight_cls = classify_opcode(get_dec_opcode());
        inflight_start_cycle = perf.cycle_cnt;
    }

    if (commit_fire && inflight_valid) {
        uint64_t lat = perf.cycle_cnt - inflight_start_cycle + 1;
        int committed_cls = inflight_cls;

        perf.cls_cnt[committed_cls]++;
        perf.cls_cycle_sum[committed_cls] += lat;

        // store端到端延迟：AW -> retire
        if (store_pending && committed_cls == CLS_STORE) {
            uint64_t store_lat = perf.cycle_cnt - store_start_cycle + 1;
            perf.lsu_store_lat_sum += store_lat;
            if (store_lat > perf.lsu_store_lat_max) perf.lsu_store_lat_max = store_lat;
            store_pending = 0;
        }

        inflight_valid = 0;
    }

    // ---------------- LSU load延迟：AR -> R ----------------
    if (load_req_fire) {
        load_pending = 1;
        load_start_cycle = perf.cycle_cnt;
    }

    if (load_resp_fire && load_pending) {
        uint64_t load_lat = perf.cycle_cnt - load_start_cycle + 1;
        perf.lsu_load_lat_sum += load_lat;
        if (load_lat > perf.lsu_load_lat_max) perf.lsu_load_lat_max = load_lat;
        load_pending = 0;
    }

    // store起点：AW握手
    if (store_req_fire) {
        store_pending = 1;
        store_start_cycle = perf.cycle_cnt;
    }

    // ---------------- IFU取不到指令原因拆分（接入 icache 后重定义） ----------------
    if (!ifu_to_dec_fire) {
        perf.ifu_noinst_cycles++;

        if (get_ifu_valid_buf() &&
           !dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_dec_ready) {
            // IFU里已经有指令，但decoder不给ready
            perf.ifu_block_dec_cycles++;
        }
        else if (ic_state == IC_ST_MISS) {
            // icache 正在发 miss 请求 / 等待下游接收 miss 请求
            perf.ifu_block_ar_cycles++;
        }
        else if ((ic_state == IC_ST_WAIT_RESP) || fetch_pending) {
            // icache 正在等下游返回，或者从 IFU 角度这次取指还没真正送到 decoder
            perf.ifu_wait_resp_cycles++;
        }
        else if (!commit_fire) {
            // 推断：当前指令后端未完成，PC/前端整体推进受限
            perf.ifu_backend_hold_cycles++;
        }
        else {
            perf.ifu_other_cycles++;
        }
    }

    // ---------------- 更新 fetch_pending 状态 ----------------
    // IFU 请求被 icache 接收后，直到真正送进 decoder 前，都认为这次 fetch 还在进行中
    if (ifu_req_fire) {
        fetch_pending = 1;
    }
    if (ifu_to_dec_fire) {
        fetch_pending = 0;
    }
}

// ===================== 输出统计 =====================
void print_perf_stat() {
    uint64_t cls_sum = 0;
    for (int i = 0; i < CLS_NUM; i++) cls_sum += perf.cls_cnt[i];

    printf("\n================ Extended Performance Counters ================\n");
    printf("cycle_cnt                  = %llu\n", (unsigned long long)perf.cycle_cnt);
    printf("inst_retire_cnt            = %llu\n", (unsigned long long)perf.inst_retire_cnt);
    printf("IPC                        = %.6f\n", ipc_cal(perf.cycle_cnt, perf.inst_retire_cnt));
    printf("CPI                        = %.6f\n", cpi_cal(perf.cycle_cnt, perf.inst_retire_cnt));

    printf("\n[Instruction Class Ratio / Avg Cycles]\n");
    for (int i = 0; i < CLS_NUM; i++) {
        double pct = 100.0 * ratio_u64(perf.cls_cnt[i], perf.inst_retire_cnt);
        double avg = ratio_u64(perf.cls_cycle_sum[i], perf.cls_cnt[i]);
        printf("%-12s count=%-8llu ratio=%7.3f%% avg_cycle=%8.3f\n",
               cls_name(i),
               (unsigned long long)perf.cls_cnt[i],
               pct,
               avg);
    }

    printf("\n[IFU]\n");
    printf("ifu_req_cnt                = %llu\n", (unsigned long long)perf.ifu_req_cnt);
    printf("ifu_to_dec_cnt             = %llu\n", (unsigned long long)perf.ifu_to_dec_cnt);
    printf("ifu_noinst_cycles          = %llu\n", (unsigned long long)perf.ifu_noinst_cycles);
    printf("  dec_backpressure         = %llu  (%7.3f%% of no-inst)\n",
           (unsigned long long)perf.ifu_block_dec_cycles,
           100.0 * ratio_u64(perf.ifu_block_dec_cycles, perf.ifu_noinst_cycles));
    printf("  ar_blocked               = %llu  (%7.3f%% of no-inst)\n",
           (unsigned long long)perf.ifu_block_ar_cycles,
           100.0 * ratio_u64(perf.ifu_block_ar_cycles, perf.ifu_noinst_cycles));
    printf("  wait_memory_resp         = %llu  (%7.3f%% of no-inst)\n",
           (unsigned long long)perf.ifu_wait_resp_cycles,
           100.0 * ratio_u64(perf.ifu_wait_resp_cycles, perf.ifu_noinst_cycles));
    printf("  backend_hold             = %llu  (%7.3f%% of no-inst)\n",
           (unsigned long long)perf.ifu_backend_hold_cycles,
           100.0 * ratio_u64(perf.ifu_backend_hold_cycles, perf.ifu_noinst_cycles));
    printf("  other                    = %llu  (%7.3f%% of no-inst)\n",
           (unsigned long long)perf.ifu_other_cycles,
           100.0 * ratio_u64(perf.ifu_other_cycles, perf.ifu_noinst_cycles));

    printf("\n[EXU]\n");
    printf("exu_done_cnt               = %llu\n", (unsigned long long)perf.exu_done_cnt);
    printf("exu_csr_cnt                = %llu\n", (unsigned long long)perf.exu_csr_cnt);

    printf("\n[LSU]\n");
    printf("lsu_load_req_cnt           = %llu\n", (unsigned long long)perf.lsu_load_req_cnt);
    printf("lsu_load_resp_cnt          = %llu\n", (unsigned long long)perf.lsu_load_resp_cnt);
    printf("lsu_store_req_cnt          = %llu\n", (unsigned long long)perf.lsu_store_req_cnt);
    printf("load_avg_latency           = %.3f cycles\n",
           ratio_u64(perf.lsu_load_lat_sum, perf.lsu_load_resp_cnt));
    printf("load_max_latency           = %llu cycles\n",
           (unsigned long long)perf.lsu_load_lat_max);
    printf("store_avg_e2e_latency      = %.3f cycles\n",
           ratio_u64(perf.lsu_store_lat_sum, perf.cls_cnt[CLS_STORE]));
    printf("store_max_e2e_latency      = %llu cycles\n",
           (unsigned long long)perf.lsu_store_lat_max);

    printf("\n[Check]\n");
    printf("sum(class_cnt)             = %llu\n", (unsigned long long)cls_sum);
    printf("class_sum == retire        : %s  (%llu vs %llu)\n",
           yesno(cls_sum == perf.inst_retire_cnt),
           (unsigned long long)cls_sum,
           (unsigned long long)perf.inst_retire_cnt);
    printf("overlap_warn_cnt           = %llu\n", (unsigned long long)perf.overlap_warn_cnt);

    printf("===============================================================\n");

    // ---------------- ICache Performance ----------------
    uint64_t ic_req_cnt = get_ic_req_cnt();
    uint64_t ic_hit_cnt = get_ic_hit_cnt();
    uint64_t ic_miss_cnt = get_ic_miss_cnt();
    uint64_t ic_total_access_cycles = get_ic_total_access_cycles();
    uint64_t ic_miss_penalty_cycles = get_ic_miss_penalty_cycles();

    double ic_hit_rate =
        (ic_req_cnt == 0) ? 0.0 : (double)ic_hit_cnt / (double)ic_req_cnt;

    double ic_amat =
        (ic_req_cnt == 0) ? 0.0 : (double)ic_total_access_cycles / (double)ic_req_cnt;

    double ic_miss_penalty =
        (ic_miss_cnt == 0) ? 0.0 : (double)ic_miss_penalty_cycles / (double)ic_miss_cnt;

    double ic_amat_formula =
        1.0 + (1.0 - ic_hit_rate) * ic_miss_penalty;

    printf("\n================ ICache Performance ================\n");
    printf("ic_req_cnt             = %llu\n", (unsigned long long)ic_req_cnt);
    printf("ic_hit_cnt             = %llu\n", (unsigned long long)ic_hit_cnt);
    printf("ic_miss_cnt            = %llu\n", (unsigned long long)ic_miss_cnt);
    printf("ic_hit_rate            = %.6f\n", ic_hit_rate);
    printf("ic_total_access_cycles = %llu\n", (unsigned long long)ic_total_access_cycles);
    printf("ic_miss_penalty_cycles = %llu\n", (unsigned long long)ic_miss_penalty_cycles);
    printf("AMAT(measured)         = %.6f cycles\n", ic_amat);
    printf("Miss penalty(avg)      = %.6f cycles\n", ic_miss_penalty);
    printf("AMAT(formula)          = %.6f cycles\n", ic_amat_formula);
    printf("====================================================\n\n");
}

// ===================== 主仿真循环 =====================
void cpu_sim(int n) {
    if (n == -1) {
        while (!sim_break) {
            if (sim_time <= 30) {
                dut->reset = 1;
            } else {
                dut->reset = 0;
            }

            dut->clock ^= 1;
            dut->eval();

#if CONFIG_NVBOARD
            nvboard_update();
#endif

#if WAVE
            m_trace->dump(sim_time);
#endif

            perf_stat_update();

            sim_time++;

#if WAVE
            m_trace->flush();
#endif

            if (sim_break) {
                print_perf_stat();
                break;
            }
        }
    } else {
        for (int i = 0; i < 2 * n; i++) {
            if (sim_time <= 30) {
                dut->reset = 1;
            } else {
                dut->reset = 0;
            }

            dut->clock ^= 1;
            dut->eval();

#if CONFIG_NVBOARD
            nvboard_update();
#endif

#if WAVE
            m_trace->dump(sim_time);
#endif

            perf_stat_update();

            sim_time++;

#if WAVE
            m_trace->flush();
#endif

            if (sim_break) {
                print_perf_stat();
                break;
            }
        }
    }

    if (dut->reset) {
        printf("\033[34mwaiting for reset finish\033[34m\n");
    }
}