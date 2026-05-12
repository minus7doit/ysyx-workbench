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
    uint64_t cycle_cnt;
    uint64_t inst_retire_cnt;

    // IFU
    uint64_t ifu_req_cnt;
    uint64_t ifu_to_dec_cnt;

    // IFU 取不到指令的原因（原有）
    uint64_t ifu_noinst_cycles;
    uint64_t ifu_block_dec_cycles;
    uint64_t ifu_block_ar_cycles;
    uint64_t ifu_wait_resp_cycles;
    uint64_t ifu_backend_hold_cycles;
    uint64_t ifu_other_cycles;

    // IFU / ICache 更细分
    uint64_t ifu_missreq_cycles;      // ICache 处于 MISSREQ
    uint64_t ifu_refill_cycles;       // ICache 处于 REFILL
    uint64_t ifu_buf_wait_cycles;     // IFU buf_valid=1 但本拍没送入 ID
    uint64_t ifu_flush_cycles;        // global_flush 周期数
    uint64_t ifu_redirect_cnt;        // ctrl_redirect 次数

    // backend_hold 细分
    uint64_t hold_load_cycles;
    uint64_t hold_store_cycles;
    uint64_t hold_ctrl_cycles;
    uint64_t hold_mdu_cycles;

    // EXU
    uint64_t exu_done_cnt;
    uint64_t exu_csr_cnt;

    // ALU 状态分布
    uint64_t alu_state_rec_cycles;
    uint64_t alu_state_ex_cycles;
    uint64_t alu_state_mdu_cycles;
    uint64_t alu_state_wb_cycles;
    uint64_t alu_state_store_cycles;
    uint64_t alu_state_load_cycles;

    // LSU
    uint64_t lsu_load_req_cnt;
    uint64_t lsu_load_resp_cnt;
    uint64_t lsu_store_req_cnt;

    uint64_t lsu_load_lat_sum;
    uint64_t lsu_load_lat_max;
    uint64_t lsu_store_lat_sum;
    uint64_t lsu_store_lat_max;

    // LSU / Arbiter 更细分
    uint64_t load_mem_wait_cycles;    // load_pending=1 且还未 r_fire
    uint64_t store_aw_wait_cycles;    // wr_busy && !wr_aw_done
    uint64_t store_w_wait_cycles;     // wr_busy && wr_aw_done && !wr_w_done
    uint64_t store_b_wait_cycles;     // wr_busy && wr_aw_done && wr_w_done

    // 指令类别统计
    uint64_t cls_cnt[CLS_NUM];

    // 兼容保留
    uint64_t overlap_warn_cnt;
    // RAW / forwarding 估算
    uint64_t raw_stall_cycles;            // 当前真正因 RAW 而 stall 的周期
    uint64_t raw_forwardable_cycles;      // 其中理想可被 forwarding 消掉的周期
    uint64_t raw_rs1_forwardable_cycles;  // rs1 依赖且可 forward
    uint64_t raw_rs2_forwardable_cycles;  // rs2 依赖且可 forward
    uint64_t raw_dual_forwardable_cycles; // rs1/rs2 同时依赖且可 forward
    uint64_t load_use_stall_cycles;       // load-use，forwarding 仍消不掉
    uint64_t raw_nonforwardable_cycles;   // 其它不可 forward 的 RAW stall
        // Control hazard / speculation estimate
    uint64_t jal_commit_cnt;
    uint64_t jalr_commit_cnt;

    // 不重叠的“控制冒险导致 noinst”的周期
    uint64_t ctrl_hazard_noinst_cycles;
    uint64_t ctrl_hold_noinst_cycles;
    uint64_t ctrl_flush_noinst_cycles;

    // 按类型拆分：hold
    uint64_t branch_hold_noinst_cycles;
    uint64_t jal_hold_noinst_cycles;
    uint64_t jalr_hold_noinst_cycles;
    uint64_t csr_hold_noinst_cycles;

    // 按类型拆分：flush
    uint64_t branch_flush_cycles;
    uint64_t jal_flush_cycles;
    uint64_t jalr_flush_cycles;
    uint64_t csr_flush_cycles;

    // 按类型拆分：不重叠 hazard 周期（用于直接估算收益）
    uint64_t branch_hazard_noinst_cycles;
    uint64_t jal_hazard_noinst_cycles;
    uint64_t jalr_hazard_noinst_cycles;
    uint64_t csr_hazard_noinst_cycles;
        // ===== refined forwarding estimate =====
    uint64_t raw_visible_dep_cycles;          // 当前显式可见的 EX->ID 依赖周期
    uint64_t raw_visible_forwardable_cycles;  // 其中若有 forwarding 可直接消掉的周期
    uint64_t raw_visible_load_use_cycles;     // 显式依赖中属于 load-use 的周期

    uint64_t serial_dep_cycles;               // 被 id_hold_serial / backend_hold 掩盖的依赖周期
    uint64_t serial_forwardable_cycles;       // 掩盖依赖中，理论上可由 forwarding 消掉的周期
    uint64_t serial_load_use_cycles;          // 掩盖依赖中，属于 load-use 的周期
    uint64_t serial_nonforwardable_cycles;    // 掩盖依赖中，其它不可 forward 的周期

    uint64_t dep_rs1_cycles;                  // rs1 发生依赖的周期
    uint64_t dep_rs2_cycles;                  // rs2 发生依赖的周期
    uint64_t dep_dual_src_cycles;             // rs1/rs2 同时依赖的周期

    uint64_t ideal_fwd_total_savable_cycles;  // = visible_forwardable + serial_forwardable
} perf_cnt_t;

static perf_cnt_t perf;

// LSU 延迟跟踪
static int      load_pending  = 0;
static uint64_t load_start_cycle = 0;

static int      store_pending = 0;
static uint64_t store_start_cycle = 0;

// ===================== opcode 定义 =====================
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

// ===================== icache 状态定义 =====================
#define IC_ST_IDLE       0u
#define IC_ST_MISSREQ    1u
#define IC_ST_REFILL     2u

// ===================== 工具函数 =====================
static inline double ratio_u64(uint64_t a, uint64_t b) {
    if (b == 0) return 0.0;
    return (double)a / (double)b;
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

// 最终提交：顶层 ex_commit = wb_fire || store_done
static inline uint32_t get_commit_valid() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_commit;
}

// 当前提交指令 opcode（来自 EX）
static inline uint32_t get_commit_opcode() {
    return (uint32_t)(dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst & 0x7fU);
}

// 当前 ID 指令 opcode
static inline uint32_t get_dec_opcode() {
    return (uint32_t)(dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst & 0x7fU);
}

// 读取 icache 状态
static inline uint32_t get_icache_state() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state;
}

// IF 请求被 IFU 发给 ICache 接收
static inline uint32_t get_ifu_req_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire;
}

// IFU 缓冲中的一条指令成功送入 ID
static inline uint32_t get_ifu_to_dec_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__id_fire;
}

// IFU 当前是否缓存了一条待送入 ID 的指令
static inline uint32_t get_ifu_valid_buf() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid;
}

// ID 级成功推进到 EX
static inline uint32_t get_dec_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire;
}

// EXU 完成：近似按提交统计
static inline uint32_t get_exu_done_fire() {
    return get_commit_valid();
}

// CSR / SYSTEM 提交
static inline uint32_t get_exu_csr_fire() {
    return get_commit_valid() && (get_commit_opcode() == OPC_SYSTEM);
}

// LSU load 请求：ID 发起的 load AR 真握手
static inline uint32_t get_lsu_load_req_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_dec_ar_valid &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready;
}

// LSU load 返回：送到 ALU 的返回脉冲
static inline uint32_t get_lsu_load_resp_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_fire;
}

// LSU store 请求：统计真正发往 SoC 的 AW 握手
static inline uint32_t get_lsu_store_req_fire() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awvalid &&
           dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awready;
}

// ===================== icache AMAT 计数器读取 =====================
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
// ===================== 新增 helper =====================

#define ALU_ST_REC    0u
#define ALU_ST_EX     1u
#define ALU_ST_MDU    2u
#define ALU_ST_WB     3u
#define ALU_ST_STORE  4u
#define ALU_ST_LOAD   5u

static inline uint32_t get_id_is_load() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_load;
}
static inline uint32_t get_id_is_store() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_store;
}
static inline uint32_t get_id_is_ctrl() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_ctrl;
}
static inline uint32_t get_id_is_mdu() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_mdu;
}

static inline uint32_t get_ctrl_redirect() {
    uint32_t ex_commit =
        dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_commit;

    uint32_t ex_is_ctrl =
        dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_ctrl;

    uint32_t ex_inst =
        dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst;

    uint32_t global_flush =
        dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush;

    uint32_t opcode = ex_inst & 0x7fU;

    if (!ex_commit || !ex_is_ctrl) return 0;

    // jal / jalr 提交时一定改向
    if (opcode == 0x6fU) return 1;  // JAL
    if (opcode == 0x67U) return 1;  // JALR

    // branch 只有 taken 才改向；当前设计里 taken branch 会触发 global_flush
    if (opcode == 0x63U) return global_flush ? 1U : 0U;

    // CSR 类（例如 ecall / mret）若会改向，也会体现为 flush
    if (opcode == 0x73U) return global_flush ? 1U : 0U;

    return 0;
}
static inline uint32_t get_global_flush() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush;
}

static inline uint32_t get_icache_resp_valid() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid;
}
static inline uint32_t get_icache_hit_now() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit;
}
static inline uint32_t get_icache_req_inflight() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy;
}

static inline uint32_t get_lsu_load_pending() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_pending;
}
static inline uint32_t get_lsu_store_buf_valid() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_buf_valid;
}

static inline uint32_t get_alu_state() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state;
}
static inline uint32_t get_alu_opcode_ex() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex;
}
static inline uint32_t get_alu_is_div_op() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_div_op;
}
static inline uint32_t get_alu_fencei_ex() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fencei_ex;
}

static inline uint32_t get_arb_wr_busy() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy;
}
static inline uint32_t get_arb_wr_aw_done() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done;
}
static inline uint32_t get_arb_wr_w_done() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done;
}
static inline uint32_t get_arb_b_wait_en() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__b_wait_en;
}

static inline uint32_t get_id_inst_word() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst;
}

static inline uint32_t get_ex_inst_word() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst;
}

static inline uint32_t get_ex_rd_num() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd;
}

static inline uint32_t get_ex_wen_expect() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect;
}

static inline uint32_t get_id_use_rs1_sig() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_use_rs1;
}

static inline uint32_t get_id_use_rs2_sig() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_use_rs2;
}

static inline uint32_t decode_rs1(uint32_t inst) {
    return (inst >> 15) & 0x1f;
}

static inline uint32_t decode_rs2(uint32_t inst) {
    return (inst >> 20) & 0x1f;
}

static inline uint32_t get_id_is_branch_sig() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_branch;
}

static inline uint32_t get_id_is_jal_sig() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_jal;
}

static inline uint32_t get_id_is_jalr_sig() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_jalr;
}

static inline uint32_t get_id_is_csr_sig() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_csr;
}

static inline uint32_t get_ex_wen_expect_sig() {
    return dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect;
}




// ===================== 基本接口 =====================
void perf_stat_reset() {
    perf = {};

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
    if (dut->clock != 1) return;
    if (dut->reset) return;

    perf.cycle_cnt++;

    uint32_t commit_fire        = get_commit_valid();
    uint32_t ifu_req_fire       = get_ifu_req_fire();
    uint32_t ifu_to_dec_fire    = get_ifu_to_dec_fire();
    uint32_t exu_done_fire      = get_exu_done_fire();
    uint32_t exu_csr_fire       = get_exu_csr_fire();
    uint32_t load_req_fire      = get_lsu_load_req_fire();
    uint32_t load_resp_fire     = get_lsu_load_resp_fire();
    uint32_t store_req_fire     = get_lsu_store_req_fire();

    uint32_t ic_state           = get_icache_state();
    uint32_t ic_resp_valid      = get_icache_resp_valid();
    uint32_t ic_req_inflight    = get_icache_req_inflight();

    uint32_t id_valid           = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid;
    uint32_t id_fire_now        = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire;
    uint32_t id_hold_serial     = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_hold_serial;
    uint32_t ex_valid           = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid;
    uint32_t ex_serial          = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_serial;
    uint32_t ifu_arvalid        = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid;
    uint32_t ifu_arready        = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_ifu_arready;
    uint32_t ifu_buf_valid      = get_ifu_valid_buf();

    uint32_t id_is_load         = get_id_is_load();
    uint32_t id_is_store        = get_id_is_store();
    uint32_t id_is_ctrl         = get_id_is_ctrl();
    uint32_t id_is_mdu          = get_id_is_mdu();

    uint32_t ctrl_redirect      = get_ctrl_redirect();
    uint32_t global_flush       = get_global_flush();

    uint32_t alu_state          = get_alu_state();
    uint32_t alu_opcode_ex      = get_alu_opcode_ex();
    uint32_t alu_is_div_op      = get_alu_is_div_op();
    uint32_t alu_fencei_ex      = get_alu_fencei_ex();

    uint32_t lsu_load_pending   = get_lsu_load_pending();

    uint32_t arb_wr_busy        = get_arb_wr_busy();
    uint32_t arb_wr_aw_done     = get_arb_wr_aw_done();
    uint32_t arb_wr_w_done      = get_arb_wr_w_done();
    uint32_t arb_b_wait_en      = get_arb_b_wait_en();
    
        uint32_t id_is_branch      = get_id_is_branch_sig();
    uint32_t id_is_jal         = get_id_is_jal_sig();
    uint32_t id_is_jalr        = get_id_is_jalr_sig();
    uint32_t id_is_csr         = get_id_is_csr_sig();

    uint32_t ex_inst_word      = get_ex_inst_word();
    uint32_t ex_opcode         = ex_inst_word & 0x7fU;
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

    // ---------------- 指令类别统计 ----------------
    if (commit_fire) {
        int committed_cls = classify_opcode(get_commit_opcode());
        perf.cls_cnt[committed_cls]++;
    }
    if (commit_fire) {
        if (get_commit_opcode() == OPC_JAL) {
            perf.jal_commit_cnt++;
        } else if (get_commit_opcode() == OPC_JALR) {
            perf.jalr_commit_cnt++;
        }
    }
    // ---------------- 控制流事件 ----------------
    if (ctrl_redirect) {
        perf.ifu_redirect_cnt++;
    }
    if (global_flush) {
        perf.ifu_flush_cycles++;
    }

    // ---------------- ICache/IFU 细分周期 ----------------
    if (ic_state == IC_ST_MISSREQ) {
        perf.ifu_missreq_cycles++;
    }
    if (ic_state == IC_ST_REFILL) {
        perf.ifu_refill_cycles++;
    }
    if (ifu_buf_valid && !ifu_to_dec_fire) {
        perf.ifu_buf_wait_cycles++;
    }

    // ---------------- ALU 状态分布 ----------------
    switch (alu_state) {
        case ALU_ST_REC:   perf.alu_state_rec_cycles++;   break;
        case ALU_ST_EX:    perf.alu_state_ex_cycles++;    break;
        case ALU_ST_MDU:   perf.alu_state_mdu_cycles++;   break;
        case ALU_ST_WB:    perf.alu_state_wb_cycles++;    break;
        case ALU_ST_STORE: perf.alu_state_store_cycles++; break;
        case ALU_ST_LOAD:  perf.alu_state_load_cycles++;  break;
        default: break;
    }

    // ---------------- LSU load 延迟：AR -> Rvalid ----------------
    if (load_req_fire) {
        load_pending = 1;
        load_start_cycle = perf.cycle_cnt;
    }

    if (lsu_load_pending && !load_resp_fire) {
        perf.load_mem_wait_cycles++;
    }

    if (load_resp_fire && load_pending) {
        uint64_t load_lat = perf.cycle_cnt - load_start_cycle + 1;
        perf.lsu_load_lat_sum += load_lat;
        if (load_lat > perf.lsu_load_lat_max) perf.lsu_load_lat_max = load_lat;
        load_pending = 0;
    }

    // ---------------- LSU store 延迟：AW -> commit ----------------
    if (store_req_fire) {
        store_pending = 1;
        store_start_cycle = perf.cycle_cnt;
    }

    if (arb_wr_busy && !arb_wr_aw_done) {
        perf.store_aw_wait_cycles++;
    }
    if (arb_wr_busy && arb_wr_aw_done && !arb_wr_w_done) {
        perf.store_w_wait_cycles++;
    }
    if (arb_b_wait_en) {
        perf.store_b_wait_cycles++;
    }

    if (commit_fire && store_pending) {
        int committed_cls = classify_opcode(get_commit_opcode());
        if (committed_cls == CLS_STORE) {
            uint64_t store_lat = perf.cycle_cnt - store_start_cycle + 1;
            perf.lsu_store_lat_sum += store_lat;
            if (store_lat > perf.lsu_store_lat_max) perf.lsu_store_lat_max = store_lat;
            store_pending = 0;
        }
    }
        // ---------------- RAW / forwarding 估算 ----------------
    {
        uint32_t id_inst       = get_id_inst_word();
        uint32_t ex_inst       = get_ex_inst_word();
        uint32_t ex_rd         = get_ex_rd_num();
        uint32_t ex_wen_expect = get_ex_wen_expect();
        uint32_t id_use_rs1    = get_id_use_rs1_sig();
        uint32_t id_use_rs2    = get_id_use_rs2_sig();

        uint32_t id_rs1        = decode_rs1(id_inst);
        uint32_t id_rs2        = decode_rs2(id_inst);
        uint32_t ex_opcode     = ex_inst & 0x7fU;

        uint32_t raw_rs1 = id_valid && ex_valid && ex_wen_expect && (ex_rd != 0) &&
                           id_use_rs1 && (id_rs1 == ex_rd);
        uint32_t raw_rs2 = id_valid && ex_valid && ex_wen_expect && (ex_rd != 0) &&
                           id_use_rs2 && (id_rs2 == ex_rd);

        uint32_t raw_hazard_now = raw_rs1 || raw_rs2;

        // 只统计“当前真的因为这个 RAW 没推进”的周期
        uint32_t raw_stall_now = id_valid && !id_fire_now && raw_hazard_now;

        // forwarding 能解决的前提：
        // 1) 这条老指令会写 rd
        // 2) 不是 load（load-use 仍要等数据回来）
        // 3) 不是 div/rem 这类多周期结果未就绪
        uint32_t ex_result_ready_early =
            ex_valid &&
            ex_wen_expect &&
            (ex_rd != 0) &&
            (ex_opcode != OPC_LOAD) &&
            !get_alu_is_div_op();

        uint32_t forwardable_now = raw_stall_now && ex_result_ready_early;
        uint32_t load_use_now    = raw_stall_now && (ex_opcode == OPC_LOAD);
        uint32_t nonfwd_now      = raw_stall_now && !ex_result_ready_early && !load_use_now;

        if (raw_stall_now) {
            perf.raw_stall_cycles++;
        }

        if (forwardable_now) {
            perf.raw_forwardable_cycles++;

            if (raw_rs1) perf.raw_rs1_forwardable_cycles++;
            if (raw_rs2) perf.raw_rs2_forwardable_cycles++;
            if (raw_rs1 && raw_rs2) perf.raw_dual_forwardable_cycles++;
        }

        if (load_use_now) {
            perf.load_use_stall_cycles++;
        }

        if (nonfwd_now) {
            perf.raw_nonforwardable_cycles++;
        }
    }
        // ---------------- Refined RAW / Forwarding Estimate ----------------
    {
        uint32_t id_inst        = get_id_inst_word();
        uint32_t ex_inst        = get_ex_inst_word();
        uint32_t ex_rd          = get_ex_rd_num();
        uint32_t ex_wen_expect  = get_ex_wen_expect_sig();
        uint32_t id_use_rs1     = get_id_use_rs1_sig();
        uint32_t id_use_rs2     = get_id_use_rs2_sig();

        uint32_t id_rs1         = decode_rs1(id_inst);
        uint32_t id_rs2         = decode_rs2(id_inst);
        uint32_t ex_opcode      = ex_inst & 0x7fU;

        // 当前 ID 对 EX 的真实寄存器依赖
        uint32_t dep_rs1_now = id_valid && ex_valid && ex_wen_expect && (ex_rd != 0) &&
                               id_use_rs1 && (id_rs1 == ex_rd);
        uint32_t dep_rs2_now = id_valid && ex_valid && ex_wen_expect && (ex_rd != 0) &&
                               id_use_rs2 && (id_rs2 == ex_rd);
        uint32_t dep_now = dep_rs1_now || dep_rs2_now;

        if (dep_rs1_now) perf.dep_rs1_cycles++;
        if (dep_rs2_now) perf.dep_rs2_cycles++;
        if (dep_rs1_now && dep_rs2_now) perf.dep_dual_src_cycles++;

        // producer 是否“理论上可以早转发”
        // 当前粗略规则：
        // - 非 load
        // - 非 div/rem 多周期
        // - 会写 rd
        uint32_t producer_ready_early =
            ex_valid &&
            ex_wen_expect &&
            (ex_rd != 0) &&
            (ex_opcode != OPC_LOAD) &&
            !get_alu_is_div_op();

        uint32_t producer_is_load = ex_valid && ex_wen_expect && (ex_rd != 0) &&
                                    (ex_opcode == OPC_LOAD);

        // A. 当前显式 RAW stall：真的因为 raw_hazard / id_fire 被挡住
        uint32_t visible_raw_stall_now = id_valid && !id_fire_now && dep_now && !id_hold_serial;

        if (visible_raw_stall_now) {
            perf.raw_visible_dep_cycles++;

            if (producer_ready_early) {
                perf.raw_visible_forwardable_cycles++;
            } else if (producer_is_load) {
                perf.raw_visible_load_use_cycles++;
            }
        }

        // B. 被 serial 掩盖掉的依赖：
        // 当前 ID 指令因为 serial/backend_hold 没法走，但它其实也依赖 EX 的 rd
        uint32_t serial_hidden_dep_now = id_valid && id_hold_serial && dep_now;

        if (serial_hidden_dep_now) {
            perf.serial_dep_cycles++;

            if (producer_ready_early) {
                perf.serial_forwardable_cycles++;
            } else if (producer_is_load) {
                perf.serial_load_use_cycles++;
            } else {
                perf.serial_nonforwardable_cycles++;
            }
        }

        perf.ideal_fwd_total_savable_cycles =
            perf.raw_visible_forwardable_cycles + perf.serial_forwardable_cycles;
    }

        // ---------------- Control hazard / speculation 估算 ----------------
    {
        // flush 只统计真正由控制改向引起的那部分
        uint32_t flush_due_ctrl = global_flush && ctrl_redirect;

        uint32_t flush_branch = flush_due_ctrl && (ex_opcode == OPC_BRANCH);
        uint32_t flush_jal    = flush_due_ctrl && (ex_opcode == OPC_JAL);
        uint32_t flush_jalr   = flush_due_ctrl && (ex_opcode == OPC_JALR);
        uint32_t flush_csr    = flush_due_ctrl && (ex_opcode == OPC_SYSTEM);

        // hold：控制类 serial 指令导致前端不能继续推进
        // 为避免和 flush 重叠，这里显式要求 !flush_due_ctrl
        uint32_t hold_branch =
            !flush_due_ctrl &&
            ((id_hold_serial && id_is_branch) ||
             (ex_valid && ex_serial && (ex_opcode == OPC_BRANCH)));

        uint32_t hold_jal =
            !flush_due_ctrl &&
            ((id_hold_serial && id_is_jal) ||
             (ex_valid && ex_serial && (ex_opcode == OPC_JAL)));

        uint32_t hold_jalr =
            !flush_due_ctrl &&
            ((id_hold_serial && id_is_jalr) ||
             (ex_valid && ex_serial && (ex_opcode == OPC_JALR)));

        uint32_t hold_csr =
            !flush_due_ctrl &&
            ((id_hold_serial && id_is_csr) ||
             (ex_valid && ex_serial && (ex_opcode == OPC_SYSTEM)));

        // 只在“本拍没有成功送入 IF/ID”时，统计控制冒险造成的 noinst 周期
        if (!ifu_to_dec_fire) {
            uint32_t ctrl_hazard_now =
                flush_branch || flush_jal || flush_jalr || flush_csr ||
                hold_branch  || hold_jal  || hold_jalr  || hold_csr;

            if (ctrl_hazard_now) {
                perf.ctrl_hazard_noinst_cycles++;
            }

            // flush 和 hold 分开记，但总 hazard 周期只记一次
            if (flush_branch || flush_jal || flush_jalr || flush_csr) {
                perf.ctrl_flush_noinst_cycles++;

                if (flush_branch) {
                    perf.branch_flush_cycles++;
                    perf.branch_hazard_noinst_cycles++;
                } else if (flush_jal) {
                    perf.jal_flush_cycles++;
                    perf.jal_hazard_noinst_cycles++;
                } else if (flush_jalr) {
                    perf.jalr_flush_cycles++;
                    perf.jalr_hazard_noinst_cycles++;
                } else if (flush_csr) {
                    perf.csr_flush_cycles++;
                    perf.csr_hazard_noinst_cycles++;
                }
            }
            else if (hold_branch || hold_jal || hold_jalr || hold_csr) {
                perf.ctrl_hold_noinst_cycles++;

                if (hold_branch) {
                    perf.branch_hold_noinst_cycles++;
                    perf.branch_hazard_noinst_cycles++;
                } else if (hold_jal) {
                    perf.jal_hold_noinst_cycles++;
                    perf.jal_hazard_noinst_cycles++;
                } else if (hold_jalr) {
                    perf.jalr_hold_noinst_cycles++;
                    perf.jalr_hazard_noinst_cycles++;
                } else if (hold_csr) {
                    perf.csr_hold_noinst_cycles++;
                    perf.csr_hazard_noinst_cycles++;
                }
            }
        }
    }
    // ---------------- IFU 取不到指令原因拆分 ----------------
    if (!ifu_to_dec_fire) {
        perf.ifu_noinst_cycles++;

        if (id_hold_serial || (ex_valid && ex_serial)) {
            perf.ifu_backend_hold_cycles++;

            // 进一步细分 backend_hold 到哪类 serial 指令
            if (id_hold_serial) {
                if (id_is_load)  perf.hold_load_cycles++;
                else if (id_is_store) perf.hold_store_cycles++;
                else if (id_is_mdu)   perf.hold_mdu_cycles++;
                else if (id_is_ctrl)  perf.hold_ctrl_cycles++;
                else                  perf.hold_ctrl_cycles++; // fencei 等并入 ctrl
            } else {
                if (alu_is_div_op) {
                    perf.hold_mdu_cycles++;
                } else if (alu_opcode_ex == OPC_LOAD) {
                    perf.hold_load_cycles++;
                } else if (alu_opcode_ex == OPC_STORE) {
                    perf.hold_store_cycles++;
                } else if ((alu_opcode_ex == OPC_BRANCH) ||
                           (alu_opcode_ex == OPC_JAL)    ||
                           (alu_opcode_ex == OPC_JALR)   ||
                           (alu_opcode_ex == OPC_SYSTEM) ||
                           alu_fencei_ex) {
                    perf.hold_ctrl_cycles++;
                } else {
                    perf.hold_ctrl_cycles++;
                }
            }
        }
        else if (id_valid && !id_fire_now) {
            perf.ifu_block_dec_cycles++;
        }
        else if (ifu_arvalid && !ifu_arready) {
            perf.ifu_block_ar_cycles++;
        }
        else if ((ic_state == IC_ST_MISSREQ) || (ic_state == IC_ST_REFILL) ||
                 ic_req_inflight) {
            perf.ifu_wait_resp_cycles++;
        }
        else {
            perf.ifu_other_cycles++;
        }
    }
}

// ===================== 输出统计 =====================
void print_perf_stat() {
    uint64_t ic_req   = get_ic_req_cnt();
    uint64_t ic_hit   = get_ic_hit_cnt();
    uint64_t ic_miss  = get_ic_miss_cnt();
    uint64_t ic_total = get_ic_total_access_cycles();
    uint64_t ic_pen   = get_ic_miss_penalty_cycles();

    double ic_hit_rate         = ratio_u64(ic_hit, ic_req);
    double ic_measured_amat    = ratio_u64(ic_total, ic_req);
    double ic_avg_miss_penalty = ratio_u64(ic_pen, ic_miss);
    double ic_formula_amat     = 1.0 + (1.0 - ic_hit_rate) * ic_avg_miss_penalty;

    printf("\n================ Extended Performance Counters ================\n");
    printf("cycle_cnt                  = %llu\n", (unsigned long long)perf.cycle_cnt);
    printf("inst_retire_cnt            = %llu\n", (unsigned long long)perf.inst_retire_cnt);
    printf("IPC                        = %.6f\n", ipc_cal(perf.cycle_cnt, perf.inst_retire_cnt));
    printf("CPI                        = %.6f\n", cpi_cal(perf.cycle_cnt, perf.inst_retire_cnt));

    printf("\n[Instruction Class Ratio]\n");
    for (int i = 0; i < CLS_NUM; i++) {
        double pct = 100.0 * ratio_u64(perf.cls_cnt[i], perf.inst_retire_cnt);
        printf("%-12s count=%-8llu ratio=%7.3f%%\n",
               cls_name(i),
               (unsigned long long)perf.cls_cnt[i],
               pct);
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

    printf("  missreq_cycles           = %llu\n",
           (unsigned long long)perf.ifu_missreq_cycles);
    printf("  refill_cycles            = %llu\n",
           (unsigned long long)perf.ifu_refill_cycles);
    printf("  ifu_buf_wait_cycles      = %llu\n",
           (unsigned long long)perf.ifu_buf_wait_cycles);
    printf("  redirect_cnt             = %llu\n",
           (unsigned long long)perf.ifu_redirect_cnt);
    printf("  flush_cycles             = %llu\n",
           (unsigned long long)perf.ifu_flush_cycles);

    printf("\n[Backend Hold Breakdown]\n");
    printf("hold_load_cycles           = %llu\n", (unsigned long long)perf.hold_load_cycles);
    printf("hold_store_cycles          = %llu\n", (unsigned long long)perf.hold_store_cycles);
    printf("hold_ctrl_cycles           = %llu\n", (unsigned long long)perf.hold_ctrl_cycles);
    printf("hold_mdu_cycles            = %llu\n", (unsigned long long)perf.hold_mdu_cycles);

    printf("\n[EXU]\n");
    printf("exu_done_cnt               = %llu\n", (unsigned long long)perf.exu_done_cnt);
    printf("exu_csr_cnt                = %llu\n", (unsigned long long)perf.exu_csr_cnt);

    printf("\n[ALU State Cycles]\n");
    printf("alu_state_rec_cycles       = %llu\n", (unsigned long long)perf.alu_state_rec_cycles);
    printf("alu_state_ex_cycles        = %llu\n", (unsigned long long)perf.alu_state_ex_cycles);
    printf("alu_state_mdu_cycles       = %llu\n", (unsigned long long)perf.alu_state_mdu_cycles);
    printf("alu_state_wb_cycles        = %llu\n", (unsigned long long)perf.alu_state_wb_cycles);
    printf("alu_state_store_cycles     = %llu\n", (unsigned long long)perf.alu_state_store_cycles);
    printf("alu_state_load_cycles      = %llu\n", (unsigned long long)perf.alu_state_load_cycles);

    printf("\n[LSU]\n");
    printf("lsu_load_req_cnt           = %llu\n", (unsigned long long)perf.lsu_load_req_cnt);
    printf("lsu_load_resp_cnt          = %llu\n", (unsigned long long)perf.lsu_load_resp_cnt);
    printf("lsu_store_req_cnt          = %llu\n", (unsigned long long)perf.lsu_store_req_cnt);
    printf("load_avg_latency           = %.3f cycles\n",
           ratio_u64(perf.lsu_load_lat_sum, perf.lsu_load_resp_cnt));
    printf("load_max_latency           = %llu cycles\n",
           (unsigned long long)perf.lsu_load_lat_max);
    printf("store_avg_latency          = %.3f cycles\n",
           ratio_u64(perf.lsu_store_lat_sum, perf.lsu_store_req_cnt));
    printf("store_max_latency          = %llu cycles\n",
           (unsigned long long)perf.lsu_store_lat_max);

    printf("load_mem_wait_cycles       = %llu\n",
           (unsigned long long)perf.load_mem_wait_cycles);
    printf("store_aw_wait_cycles       = %llu\n",
           (unsigned long long)perf.store_aw_wait_cycles);
    printf("store_w_wait_cycles        = %llu\n",
           (unsigned long long)perf.store_w_wait_cycles);
    printf("store_b_wait_cycles        = %llu\n",
           (unsigned long long)perf.store_b_wait_cycles);

    printf("\n[I-Cache]\n");
    printf("ic_req_cnt                 = %llu\n", (unsigned long long)ic_req);
    printf("ic_hit_cnt                 = %llu\n", (unsigned long long)ic_hit);
    printf("ic_miss_cnt                = %llu\n", (unsigned long long)ic_miss);
    printf("ic_hit_rate                = %.3f%%\n", 100.0 * ic_hit_rate);
    printf("ic_total_access_cycles     = %llu\n", (unsigned long long)ic_total);
    printf("ic_miss_penalty_cycles     = %llu\n", (unsigned long long)ic_pen);
    printf("ic_measured_AMAT           = %.6f cycles\n", ic_measured_amat);
    printf("ic_avg_miss_penalty        = %.6f cycles\n", ic_avg_miss_penalty);
    printf("ic_formula_AMAT            = %.6f cycles\n", ic_formula_amat);

        uint64_t ideal_cycle_after_fwd =
        (perf.cycle_cnt > perf.raw_forwardable_cycles) ?
        (perf.cycle_cnt - perf.raw_forwardable_cycles) : 0;

    double ideal_cpi_after_fwd =
        ratio_u64(ideal_cycle_after_fwd, perf.inst_retire_cnt);

    double ideal_speedup_fwd =
        (ideal_cycle_after_fwd == 0) ? 0.0 :
        ((double)perf.cycle_cnt / (double)ideal_cycle_after_fwd);

    printf("\n[RAW / Forwarding Estimate]\n");
    printf("raw_stall_cycles           = %llu\n",
           (unsigned long long)perf.raw_stall_cycles);
    printf("raw_forwardable_cycles     = %llu\n",
           (unsigned long long)perf.raw_forwardable_cycles);
    printf("  rs1_forwardable          = %llu\n",
           (unsigned long long)perf.raw_rs1_forwardable_cycles);
    printf("  rs2_forwardable          = %llu\n",
           (unsigned long long)perf.raw_rs2_forwardable_cycles);
    printf("  dual_src_forwardable     = %llu\n",
           (unsigned long long)perf.raw_dual_forwardable_cycles);
    printf("load_use_stall_cycles      = %llu\n",
           (unsigned long long)perf.load_use_stall_cycles);
    printf("raw_nonforwardable_cycles  = %llu\n",
           (unsigned long long)perf.raw_nonforwardable_cycles);

    printf("ideal_cycle_after_fwd      = %llu\n",
           (unsigned long long)ideal_cycle_after_fwd);
    printf("ideal_cpi_after_fwd        = %.6f\n", ideal_cpi_after_fwd);
    printf("ideal_speedup_from_fwd     = %.6f x\n", ideal_speedup_fwd);
            uint64_t ideal_cycle_after_fwd_refined =
        (perf.cycle_cnt > perf.ideal_fwd_total_savable_cycles) ?
        (perf.cycle_cnt - perf.ideal_fwd_total_savable_cycles) : 0;

    double ideal_cpi_after_fwd_refined =
        ratio_u64(ideal_cycle_after_fwd_refined, perf.inst_retire_cnt);

    double ideal_speedup_fwd_refined =
        (ideal_cycle_after_fwd_refined == 0) ? 0.0 :
        ((double)perf.cycle_cnt / (double)ideal_cycle_after_fwd_refined);

    printf("\n[Refined RAW / Forwarding Estimate]\n");
    printf("raw_visible_dep_cycles          = %llu\n",
           (unsigned long long)perf.raw_visible_dep_cycles);
    printf("  raw_visible_forwardable       = %llu\n",
           (unsigned long long)perf.raw_visible_forwardable_cycles);
    printf("  raw_visible_load_use          = %llu\n",
           (unsigned long long)perf.raw_visible_load_use_cycles);

    printf("serial_dep_cycles               = %llu\n",
           (unsigned long long)perf.serial_dep_cycles);
    printf("  serial_forwardable            = %llu\n",
           (unsigned long long)perf.serial_forwardable_cycles);
    printf("  serial_load_use               = %llu\n",
           (unsigned long long)perf.serial_load_use_cycles);
    printf("  serial_nonforwardable         = %llu\n",
           (unsigned long long)perf.serial_nonforwardable_cycles);

    printf("dep_rs1_cycles                  = %llu\n",
           (unsigned long long)perf.dep_rs1_cycles);
    printf("dep_rs2_cycles                  = %llu\n",
           (unsigned long long)perf.dep_rs2_cycles);
    printf("dep_dual_src_cycles             = %llu\n",
           (unsigned long long)perf.dep_dual_src_cycles);

    printf("ideal_fwd_total_savable_cycles  = %llu\n",
           (unsigned long long)perf.ideal_fwd_total_savable_cycles);
    printf("ideal_cycle_after_fwd_refined   = %llu\n",
           (unsigned long long)ideal_cycle_after_fwd_refined);
    printf("ideal_cpi_after_fwd_refined     = %.6f\n",
           ideal_cpi_after_fwd_refined);
    printf("ideal_speedup_fwd_refined       = %.6f x\n",
           ideal_speedup_fwd_refined);
        uint64_t ideal_cycle_no_ctrl =
        (perf.cycle_cnt > perf.ctrl_hazard_noinst_cycles) ?
        (perf.cycle_cnt - perf.ctrl_hazard_noinst_cycles) : 0;

    uint64_t ideal_cycle_jal_spec =
        (perf.cycle_cnt > perf.jal_hazard_noinst_cycles) ?
        (perf.cycle_cnt - perf.jal_hazard_noinst_cycles) : 0;

    uint64_t ideal_cycle_jalr_spec =
        (perf.cycle_cnt > perf.jalr_hazard_noinst_cycles) ?
        (perf.cycle_cnt - perf.jalr_hazard_noinst_cycles) : 0;

    double ideal_cpi_no_ctrl =
        ratio_u64(ideal_cycle_no_ctrl, perf.inst_retire_cnt);

    double ideal_cpi_jal_spec =
        ratio_u64(ideal_cycle_jal_spec, perf.inst_retire_cnt);

    double ideal_cpi_jalr_spec =
        ratio_u64(ideal_cycle_jalr_spec, perf.inst_retire_cnt);

    double ideal_speedup_no_ctrl =
        (ideal_cycle_no_ctrl == 0) ? 0.0 :
        ((double)perf.cycle_cnt / (double)ideal_cycle_no_ctrl);

    double ideal_speedup_jal_spec =
        (ideal_cycle_jal_spec == 0) ? 0.0 :
        ((double)perf.cycle_cnt / (double)ideal_cycle_jal_spec);

    double ideal_speedup_jalr_spec =
        (ideal_cycle_jalr_spec == 0) ? 0.0 :
        ((double)perf.cycle_cnt / (double)ideal_cycle_jalr_spec);

    printf("\n[Control Hazard Estimate]\n");
    printf("jal_commit_cnt              = %llu\n",
           (unsigned long long)perf.jal_commit_cnt);
    printf("jalr_commit_cnt             = %llu\n",
           (unsigned long long)perf.jalr_commit_cnt);

    printf("ctrl_hazard_noinst_cycles   = %llu\n",
           (unsigned long long)perf.ctrl_hazard_noinst_cycles);
    printf("  ctrl_hold_noinst_cycles   = %llu\n",
           (unsigned long long)perf.ctrl_hold_noinst_cycles);
    printf("  ctrl_flush_noinst_cycles  = %llu\n",
           (unsigned long long)perf.ctrl_flush_noinst_cycles);

    printf("branch_hold_noinst_cycles   = %llu\n",
           (unsigned long long)perf.branch_hold_noinst_cycles);
    printf("jal_hold_noinst_cycles      = %llu\n",
           (unsigned long long)perf.jal_hold_noinst_cycles);
    printf("jalr_hold_noinst_cycles     = %llu\n",
           (unsigned long long)perf.jalr_hold_noinst_cycles);
    printf("csr_hold_noinst_cycles      = %llu\n",
           (unsigned long long)perf.csr_hold_noinst_cycles);

    printf("branch_flush_cycles         = %llu\n",
           (unsigned long long)perf.branch_flush_cycles);
    printf("jal_flush_cycles            = %llu\n",
           (unsigned long long)perf.jal_flush_cycles);
    printf("jalr_flush_cycles           = %llu\n",
           (unsigned long long)perf.jalr_flush_cycles);
    printf("csr_flush_cycles            = %llu\n",
           (unsigned long long)perf.csr_flush_cycles);

    printf("branch_hazard_noinst_cycles = %llu\n",
           (unsigned long long)perf.branch_hazard_noinst_cycles);
    printf("jal_hazard_noinst_cycles    = %llu\n",
           (unsigned long long)perf.jal_hazard_noinst_cycles);
    printf("jalr_hazard_noinst_cycles   = %llu\n",
           (unsigned long long)perf.jalr_hazard_noinst_cycles);
    printf("csr_hazard_noinst_cycles    = %llu\n",
           (unsigned long long)perf.csr_hazard_noinst_cycles);

    printf("ideal_cycle_no_ctrl_hazard  = %llu\n",
           (unsigned long long)ideal_cycle_no_ctrl);
    printf("ideal_cpi_no_ctrl_hazard    = %.6f\n", ideal_cpi_no_ctrl);
    printf("ideal_speedup_no_ctrl       = %.6f x\n", ideal_speedup_no_ctrl);

    printf("ideal_cycle_jal_spec        = %llu\n",
           (unsigned long long)ideal_cycle_jal_spec);
    printf("ideal_cpi_jal_spec          = %.6f\n", ideal_cpi_jal_spec);
    printf("ideal_speedup_jal_spec      = %.6f x\n", ideal_speedup_jal_spec);

    printf("ideal_cycle_jalr_spec       = %llu\n",
           (unsigned long long)ideal_cycle_jalr_spec);
    printf("ideal_cpi_jalr_spec         = %.6f\n", ideal_cpi_jalr_spec);
    printf("ideal_speedup_jalr_spec     = %.6f x\n", ideal_speedup_jalr_spec);

    printf("\n[Check]\n");
    printf("class_sum                  = %llu\n", (unsigned long long)(
        perf.cls_cnt[0] + perf.cls_cnt[1] + perf.cls_cnt[2] +
        perf.cls_cnt[3] + perf.cls_cnt[4] + perf.cls_cnt[5] +
        perf.cls_cnt[6]
    ));
    printf("===============================================================\n");
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

           // perf_stat_update();

            sim_time++;

#if WAVE
            m_trace->flush();
#endif

            if (sim_break) {
              //  print_perf_stat();
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

           // perf_stat_update();

            sim_time++;

#if WAVE
            m_trace->flush();
#endif

            if (sim_break) {
              //  print_perf_stat();
                break;
            }
        }
    }

    if (dut->reset) {
        printf("\033[34mwaiting for reset finish\033[34m\n");
    }
}