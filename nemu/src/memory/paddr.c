/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

#define DIFF_ENABLE 1

#if DIFF_ENABLE
#define CONFIG_RTC_MMIO 0xa0000048
#define CONFIG_SERIAL_MMIO 0xa00003f8
#define CONFIG_KBD_MMIO 0xa0000060
#define CONFIG_VGA_CTL_MMIO 0xa0000100
#define CONFIG_FB_ADDR 0xa1000000
#define SCREEN_W 400
#define SCREEN_H 300
#define VMEM_SIZE (SCREEN_W*SCREEN_H*sizeof(uint32_t))
#endif


uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr, const char *op) {
  panic("address = " FMT_PADDR " is out of bound of nemu pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD " during %s operation",
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc, op);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {  
  //printf("program is reading nemu memory: 0x%x \n", addr);
  #ifdef CONFIG_MTRACE
    //printf("program is reading memory: 0x%x \n", addr);
  #endif
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));

  #if DIFF_ENABLE
    if (addr>=CONFIG_RTC_MMIO&&addr<CONFIG_RTC_MMIO+8) return 0;
    if (addr>=CONFIG_VGA_CTL_MMIO&&addr<CONFIG_VGA_CTL_MMIO+8) return 0;
    if (addr>=CONFIG_KBD_MMIO&&addr<CONFIG_KBD_MMIO+8) return 0;
  #endif
  
  out_of_bound(addr, "read");  // 传递 "read" 作为操作类型
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  #ifdef CONFIG_MTRACE
    printf("program is writing 0x%08x to memory: 0x%x \n", data, addr);
  #endif
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);

  #if DIFF_ENABLE
  printf("program is writing data 0x%08x to nemu memory: 0x%x \n", data, addr);
  if (addr>=CONFIG_SERIAL_MMIO&&addr<CONFIG_SERIAL_MMIO+8) return;
  if (addr>=CONFIG_FB_ADDR&&addr<CONFIG_FB_ADDR+VMEM_SIZE) return ;
  if (addr>=CONFIG_VGA_CTL_MMIO&&addr<CONFIG_VGA_CTL_MMIO+8) return ;
  #endif

  out_of_bound(addr, "write");  // 传递 "write" 作为操作类型
}
