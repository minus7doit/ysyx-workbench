#include <am.h>
#include <ysyxsoc.h>

void __am_uart_rx(AM_UART_RX_T *rx) {
  if (inb(UART_BASE + UART_LSR) & LSR_DR) {
    rx->data = inb(UART_BASE + UART_RBR);
  } 
  else {
    rx->data = 0xff;
  }
}