#include "npc.h"
#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>

NPC_state npc_cpu = {};

// ============================================================
// itrace 二进制格式
// [header]
//   magic        : 0x49545243  ('ITRC')
//   version      : 1
//   record_bytes : 4   (每条记录只存一个 uint32_t pc)
//   reserved     : 0
//
// [records]
//   pc0, pc1, pc2, ...
// ============================================================
//
// mtrace 二进制格式
// [header]
//   magic        : 0x4d545243  ('MTRC')
//   version      : 1
//   record_bytes : 16
//   reserved     : 0
//
// [records]
//   type(0=R,1=W), addr, len, data
// ============================================================

namespace {

constexpr uint32_t ITRACE_MAGIC   = 0x49545243u;  // 'ITRC'
constexpr uint32_t ITRACE_VERSION = 1u;
constexpr size_t   ITRACE_BUF_LEN = 4096;

constexpr uint32_t MTRACE_MAGIC   = 0x4d545243u;  // 'MTRC'
constexpr uint32_t MTRACE_VERSION = 1u;
constexpr size_t   MTRACE_BUF_LEN = 4096;

struct TraceHeader {
  uint32_t magic;
  uint32_t version;
  uint32_t record_bytes;
  uint32_t reserved;
};

struct MTraceRecord {
  uint32_t type;   // 0=read, 1=write
  uint32_t addr;
  uint32_t len;
  uint32_t data;   // read 时写 0；write 时记录写数据
};

// ---------------- itrace ----------------
static FILE *itrace_fp = nullptr;
static uint32_t pc_buf[ITRACE_BUF_LEN];
static size_t pc_buf_cnt = 0;
static bool itrace_inited = false;

// ---------------- mtrace ----------------
static FILE *mtrace_fp = nullptr;
static MTraceRecord mtrace_buf[MTRACE_BUF_LEN];
static size_t mtrace_buf_cnt = 0;
static bool mtrace_inited = false;

static void itrace_flush() {
  if (itrace_fp == nullptr || pc_buf_cnt == 0) return;

  size_t n = fwrite(pc_buf, sizeof(uint32_t), pc_buf_cnt, itrace_fp);
  if (n != pc_buf_cnt) {
    fprintf(stderr, "[ITRACE] fwrite failed: expect=%zu, got=%zu\n", pc_buf_cnt, n);
    fflush(stderr);
    std::abort();
  }
  pc_buf_cnt = 0;
}

static void mtrace_flush() {
  if (mtrace_fp == nullptr || mtrace_buf_cnt == 0) return;

  size_t n = fwrite(mtrace_buf, sizeof(MTraceRecord), mtrace_buf_cnt, mtrace_fp);
  if (n != mtrace_buf_cnt) {
    fprintf(stderr, "[MTRACE] fwrite failed: expect=%zu, got=%zu\n", mtrace_buf_cnt, n);
    fflush(stderr);
    std::abort();
  }
  mtrace_buf_cnt = 0;
}

static void trace_close() {
  if (itrace_inited) {
    itrace_flush();
    if (itrace_fp != nullptr) {
      fclose(itrace_fp);
      itrace_fp = nullptr;
    }
    itrace_inited = false;
  }

  if (mtrace_inited) {
    mtrace_flush();
    if (mtrace_fp != nullptr) {
      fclose(mtrace_fp);
      mtrace_fp = nullptr;
    }
    mtrace_inited = false;
  }
}

static void itrace_init() {
  if (itrace_inited) return;

  itrace_fp = fopen("itrace.bin", "wb");
  if (itrace_fp == nullptr) {
    fprintf(stderr, "[ITRACE] failed to open itrace.bin\n");
    fflush(stderr);
    std::abort();
  }

  TraceHeader hdr;
  hdr.magic        = ITRACE_MAGIC;
  hdr.version      = ITRACE_VERSION;
  hdr.record_bytes = 4;
  hdr.reserved     = 0;

  size_t n = fwrite(&hdr, sizeof(hdr), 1, itrace_fp);
  if (n != 1) {
    fprintf(stderr, "[ITRACE] failed to write header\n");
    fflush(stderr);
    std::abort();
  }

  itrace_inited = true;
}

static void mtrace_init() {
  if (mtrace_inited) return;

  mtrace_fp = fopen("mtrace.bin", "wb");
  if (mtrace_fp == nullptr) {
    fprintf(stderr, "[MTRACE] failed to open mtrace.bin\n");
    fflush(stderr);
    std::abort();
  }

  TraceHeader hdr;
  hdr.magic        = MTRACE_MAGIC;
  hdr.version      = MTRACE_VERSION;
  hdr.record_bytes = sizeof(MTraceRecord);
  hdr.reserved     = 0;

  size_t n = fwrite(&hdr, sizeof(hdr), 1, mtrace_fp);
  if (n != 1) {
    fprintf(stderr, "[MTRACE] failed to write header\n");
    fflush(stderr);
    std::abort();
  }

  mtrace_inited = true;
}

static inline void trace_global_init() {
  static bool registered = false;
  if (!registered) {
    std::atexit(trace_close);
    registered = true;
  }
}

static inline void itrace_write_pc(uint32_t pc) {
  trace_global_init();
  if (!itrace_inited) itrace_init();

  pc_buf[pc_buf_cnt++] = pc;
  if (pc_buf_cnt == ITRACE_BUF_LEN) {
    itrace_flush();
  }
}

static inline void mtrace_write_record(uint32_t type, uint32_t addr, uint32_t len, uint32_t data) {
  trace_global_init();
  if (!mtrace_inited) mtrace_init();

  mtrace_buf[mtrace_buf_cnt].type = type;
  mtrace_buf[mtrace_buf_cnt].addr = addr;
  mtrace_buf[mtrace_buf_cnt].len  = len;
  mtrace_buf[mtrace_buf_cnt].data = data;
  mtrace_buf_cnt++;

  if (mtrace_buf_cnt == MTRACE_BUF_LEN) {
    mtrace_flush();
  }
}

} // namespace

// ============================================================
// itrace 接口
// ============================================================
extern "C" void inst_trace(uint32_t pc, uint32_t inst, uint32_t npc) {
  (void)inst;
  (void)npc;

  npc_cpu.pc   = pc;
  npc_cpu.inst = inst;
  npc_cpu.npc  = npc;

  itrace_write_pc(pc);
}

extern "C" void function_trace(uint32_t pc, uint32_t inst, uint32_t npc) {
  exec_instructions(pc, inst, npc);
}

// ============================================================
// mtrace 接口：由 RTL 通过 DPI 调用
// ============================================================
extern "C" void mtrace_read(uint32_t addr, uint32_t len) {
  mtrace_write_record(0u, addr, len, 0u);
}

extern "C" void mtrace_write(uint32_t addr, uint32_t len, uint32_t data) {
  mtrace_write_record(1u, addr, len, data);
}