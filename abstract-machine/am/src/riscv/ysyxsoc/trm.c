#include <am.h>
#include <klib-macros.h>
#include <ysyxsoc.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

#define soc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))
//#define CSR_MVENDORID 0xf11
//#define CSR_MARCHID   0xf12
/*
uint32_t csr_read(uint32_t csr_id){
  uint32_t val = 0;
  if(csr_id == CSR_MVENDORID)
    asm volatile ("csrr %0, 0xf11" : "=r"(val));
  else if (csr_id == CSR_MARCHID)
    asm volatile ("csrr %0, 0xf12" : "=r"(val));
  return val;
}*/
extern char _heap_start;
extern char _heap_end;
extern char _stack_top;
extern char _bss_start;
extern char _bss_end;

static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER;

Area heap = {};


static void uart_init(void) {
  outb(UART_BASE + UART_LCR, 0x03);
  outb(UART_BASE + UART_LCR, 0x03 | LCR_DLAB);
  outb(UART_BASE + UART_RBR /* DLL */, 0x01);
  outb(UART_BASE + UART_IER /* DLM */, 0x00);
  outb(UART_BASE + UART_LCR, 0x03);
  outb(UART_BASE + UART_FCR, 0x06);
}

void putch(char ch) {
  while ((inb(UART_BASE + UART_LSR) & LSR_THRE) == 0) {
  }
  outb(UART_BASE + UART_THR, (uint8_t)ch);
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

#ifndef APP_LOADED_BY_BOOTLOADER
static void bss_init(void) {
  for (char *p = &_bss_start; p < &_bss_end; p++) {
    *p = 0;
  }
}
#endif

void _trm_init(void) {
  uart_init();

  /*uint32_t mvendorid=csr_read(CSR_MVENDORID);
  uint32_t marchid  =csr_read(CSR_MARCHID);
  for (size_t i = 0; i < 4; i++)
  {
    uint8_t val =mvendorid>>((3-i)*8) & 0xFF;
    printf("%c",val);
  }
  printf("-%d\n",marchid);*/
#ifndef APP_LOADED_BY_BOOTLOADER
  bss_init();
#endif

  heap = RANGE(&_heap_start, &_heap_end);
  brk_ptr = (uintptr_t)&_heap_start;

  int ret = main(mainargs);

  halt(ret);
}