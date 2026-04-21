#include <stdlib.h>
#include <iostream>
#include <assert.h>
#include <cstdio>
#include <cstring>
#include <cstdint>

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "svdpi.h"
#include "VysyxSoCFull__Dpi.h"

#include "npc.h"
#include "device.h"

#include <llvm-c/Target.h>
#include <llvm-c/Disassembler.h>

#if CONFIG_NVBOARD
#include <nvboard.h>
void nvboard_bind_all_pins(VysyxSoCFull* top);
#endif

VysyxSoCFull *dut = new VysyxSoCFull;

#if WAVE
VerilatedVcdC *m_trace = new VerilatedVcdC;
#endif

vluint64_t sim_time = 0;
bool sim_break = 0;

void cpu_sim(int n);
void sdb_set_batch_mode();
void sdb_mainloop();
void inst_trace(uint32_t pc, uint32_t inst);
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();

extern void init_elf(const char *elf_file);

/* =========================
 * 编译期开关
 * 1: 开启 bootloader payload 加载
 * 0: 关闭，不执行 init_flash_load()
 * ========================= */
#ifndef BOOTLOADER_LOAD
#define BOOTLOADER_LOAD 0
#endif

/* payload 固定路径 */
#ifndef PAYLOAD_BIN_PATH
#define PAYLOAD_BIN_PATH "/home/minus7/Temp/rt-thread-am/bsp/abstract-machine/build/rtthread-riscv32e-ysyxsoc.bin"
#endif

static inline uint32_t read_u32_le(const uint8_t *p) {
  return (uint32_t)p[0]
       | ((uint32_t)p[1] << 8)
       | ((uint32_t)p[2] << 16)
       | ((uint32_t)p[3] << 24);
}

// 如果后面发现传进来的 addr 是 0x30000000 这种物理地址，
// 就把 off 改成：((uint32_t)addr - (uint32_t)FLASH_BASE)
extern "C" void flash_read(int32_t addr, int32_t *data) {
  uint32_t off = (uint32_t)addr;

  if (off + 3 >= FLASH_SIZE) {
    *data = 0;
    return;
  }

  uint32_t val = read_u32_le(&flash[off]);
  *data = (int32_t)val;
}

static size_t init_mrom(const char *bin_path) {
  FILE *fp = fopen(bin_path, "rb");
  if (!fp) {
    perror("open mrom bin");
    exit(1);
  }

  size_t n = fread(mrom, 1, MROM_SIZE, fp);
  fclose(fp);

  for (size_t i = n; i < MROM_SIZE; i++) {
    mrom[i] = 0;
  }
  return n;
}

extern "C" void mrom_read(int32_t addr, int32_t *data) {
  uint32_t a = (uint32_t)addr;

  if (a < (uint32_t)MROM_BASE || a + 3 >= (uint32_t)(MROM_BASE + MROM_SIZE)) {
    *data = 0x00000013;
    return;
  }

  uint32_t off = a - (uint32_t)MROM_BASE;
  uint32_t inst = read_u32_le(&mrom[off]);
  *data = (int32_t)inst;
}

static long init_flash(const char *bin_path) {
  FILE *fp = fopen(bin_path, "rb");
  if (!fp) {
    perror("open boot image");
    exit(1);
  }

  size_t n = fread(flash, 1, FLASH_SIZE, fp);
  fclose(fp);

  for (size_t i = n; i < FLASH_SIZE; i++) {
    flash[i] = 0;
  }

  printf("[FLASH] load boot image %s -> off=0x%08x, size=0x%zx (%zu)\n",
         bin_path, 0u, n, n);

  return (long)n;
}

static long init_flash_load(const char *bin_path) {
  FILE *fp = fopen(bin_path, "rb");
  if (!fp) {
    perror("open payload image");
    exit(1);
  }

  size_t max_len = FLASH_SIZE - FLASH_OFFSET;
  size_t n = fread(flash + FLASH_OFFSET, 1, max_len, fp);
  fclose(fp);

  for (size_t i = n; i < max_len; i++) {
    flash[FLASH_OFFSET + i] = 0;
  }

  printf("[FLASH] load payload %s -> off=0x%08x, size=0x%zx (%zu)\n",
         bin_path, FLASH_OFFSET, n, n);

  return (long)n;
}

void finish_sim() {
  sim_break = true;
}

static char *elf_file = NULL;
static char *diff_so_file = NULL;
static const char *img_bin = nullptr;

static const char *find_img_arg(int argc, char **argv) {
  for (int i = 1; i < argc - 1; i++) {
    if (strcmp(argv[i], "--img") == 0) return argv[i + 1];
  }
  for (int i = 1; i < argc; i++) {
    if (argv[i][0] != '-') return argv[i];
  }
  return nullptr;
}

int main(int argc, char **argv, char **env) {
  Verilated::commandArgs(argc, argv);

#if WAVE
  Verilated::traceEverOn(true);
  dut->trace(m_trace, 5);
  m_trace->open("ysyxSoCFull_waveform.vcd");
#endif

  for (int i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);

    if (strcmp(argv[i], "-b") == 0) {
      sdb_set_batch_mode();
    }

    if (strcmp(argv[i], "-diff") == 0 && i + 1 < argc) {
      diff_so_file = argv[i + 1];
    }

    if (strcmp(argv[i], "-f") == 0 && i + 1 < argc) {
      elf_file = argv[i + 1];
    }
  }

  if (elf_file != NULL) {
    printf("\033[34mELF file is %s\033[0m\n", elf_file);
    init_elf(elf_file);
  }

  img_bin = find_img_arg(argc, argv);

  size_t flash_img_size = 0;
  size_t payload_img_size = 0;

 if (img_bin) {
  printf("[FLASH] load boot image bin: %s\n", img_bin);
  flash_img_size = (size_t)init_flash(img_bin);
} else {
  printf("\033[34mNo .bin image is given. use default bootloader.bin\033[0m\n");
  flash_img_size = (size_t)init_flash("bootloader.bin");
}
#if(BOOTLOADER_LOAD)
if (flash_img_size > (size_t)FLASH_OFFSET) {
  printf("[FLASH] ERROR: boot image too large! size=0x%zx, FLASH_OFFSET=0x%08x\n",
         flash_img_size, FLASH_OFFSET);
  assert(0);
}
#endif
#if BOOTLOADER_LOAD
  printf("[BOOTLOADER_LOAD] enabled\n");
  payload_img_size = (size_t)init_flash_load(PAYLOAD_BIN_PATH);

  if ((size_t)FLASH_OFFSET + payload_img_size > FLASH_SIZE) {
    printf("[FLASH] ERROR: payload out of flash range! off=0x%08x size=0x%zx flash=0x%08x\n",
           FLASH_OFFSET, payload_img_size, FLASH_SIZE);
    assert(0);
  }
#else
  printf("[BOOTLOADER_LOAD] disabled, skip init_flash_load()\n");
#endif


size_t total_flash_used = flash_img_size;
#if BOOTLOADER_LOAD
  if ((size_t)FLASH_OFFSET + payload_img_size > total_flash_used) {
    total_flash_used = (size_t)FLASH_OFFSET + payload_img_size;
  }
#endif

  if (diff_so_file != NULL) {
    printf("\033[34mDiff file is %s\033[0m\n", diff_so_file);
    init_difftest(diff_so_file, (long)total_flash_used, difftest_port);
  } else {
    printf("\033[34mNo diff file is given.\033[0m\n");
  }

#if CONFIG_DEVICE
  init_device();
#endif

#if CONFIG_NVBOARD
  nvboard_bind_all_pins(dut);
  nvboard_init(2);
#endif

  dut->clock = 0;
  sdb_mainloop();

#if WAVE
  m_trace->close();
#endif

  delete dut;
  exit(EXIT_SUCCESS);
}