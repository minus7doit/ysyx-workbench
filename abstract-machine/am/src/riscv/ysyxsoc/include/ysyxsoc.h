#ifndef YSYXSOC_H__
#define YSYXSOC_H__

#include <klib-macros.h>

#include ISA_H // the macro `ISA_H` is defined in CFLAGS
               // it will be expanded as "x86/x86.h", "mips/mips32.h", ..

#define UART_BASE 0x10000000
#define UART_TX   0x0
// 适配 uart_top_apb: reg_adr = in_paddr[2:0]
#define UART_RBR 0x00  // 读
#define UART_THR 0x00  // 写(=TX)
#define UART_IER 0x04
#define UART_IIR 0x08  // 读
#define UART_FCR 0x08  // 写
#define UART_LCR 0x0c
#define UART_MCR 0x10
#define UART_LSR 0x14
#define UART_MSR 0x18
#define UART_SCR 0x1c
#define LCR_DLAB   (1 << 7)
#define LSR_THRE   (1 << 5)   // THR Empty
#define MVENDORID 0xF11
#define MARCHID 0xF12

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define NEMU_PADDR_SPACE \
  RANGE(&_pmem_start, PMEM_END), \
  RANGE(FB_ADDR, FB_ADDR + 0x200000), \
  RANGE(MMIO_BASE, MMIO_BASE + 0x1000) /* serial, rtc, screen, keyboard */


#define PGSIZE    4096

#endif
