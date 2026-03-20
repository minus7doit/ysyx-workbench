#include <am.h>
#include <klib-macros.h>
#include <ysyxsoc.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

#define soc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

extern char _heap_start;
extern char _heap_end;
extern char _stack_top;
extern char _bss_start;
extern char _bss_end;

static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER;

Area heap = {};

static inline uint8_t mmio_read8(uintptr_t addr) {
  return *(volatile uint8_t *)addr;
}

static inline void mmio_write8(uintptr_t addr, uint8_t val) {
  *(volatile uint8_t *)addr = val;
}

static void uart_init(void) {
  mmio_write8(UART_BASE + UART_LCR, 0x03);
  mmio_write8(UART_BASE + UART_LCR, 0x03 | LCR_DLAB);
  mmio_write8(UART_BASE + UART_RBR /* DLL */, 0x01);
  mmio_write8(UART_BASE + UART_IER /* DLM */, 0x00);
  mmio_write8(UART_BASE + UART_LCR, 0x03);
  mmio_write8(UART_BASE + UART_FCR, 0x06);
}

void putch(char ch) {
  while ((mmio_read8(UART_BASE + UART_LSR) & LSR_THRE) == 0) {
  }
  mmio_write8(UART_BASE + UART_THR, (uint8_t)ch);
}

void halt(int code) {
  soc_trap(code);
  while (1) {
  }
}

static uintptr_t brk_ptr = 0;

void *heap_alloc(ptrdiff_t inc) {
  if (brk_ptr == 0) brk_ptr = (uintptr_t)&_heap_start;

  uintptr_t old  = brk_ptr;
  uintptr_t newb = brk_ptr + (uintptr_t)inc;

  newb = (newb + 7) & ~((uintptr_t)7);

  if (newb > (uintptr_t)&_heap_end) return NULL;

  brk_ptr = newb;
  return (void *)old;
}

extern int main(const char *args);

/*static void mark(char c) {
  putch(c);
  putch('\n');
}*/

#ifndef APP_LOADED_BY_BOOTLOADER
static void bss_init(void) {
  for (char *p = &_bss_start; p < &_bss_end; p++) {
    *p = 0;
  }
}
#endif

void _trm_init(void) {
  uart_init();
  //mark('P');   // entered _trm_init

#ifndef APP_LOADED_BY_BOOTLOADER
  bss_init();
 // mark('Q');   // bss ok
#else
  mark('B');   // bootloader already initialized bss/data
#endif

  heap = RANGE(&_heap_start, &_heap_end);
  brk_ptr = (uintptr_t)&_heap_start;
  //mark('R');   // heap ok

  int ret = main(mainargs);
 // mark('X');   // main returned

  halt(ret);
}