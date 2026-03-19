.section .text.entry, "ax", @progbits
.globl _start
_start:
  /* bootloader 自己的栈在 SRAM */
  la sp, _stack_top

  /* 拷贝 bootloader 自己的 .data: FLASH -> SRAM */
  la t0, _data_lma
  la t1, _data_start
  la t2, _data_end
1:
  bgeu t1, t2, 2f
  lw t3, 0(t0)
  sw t3, 0(t1)
  addi t0, t0, 4
  addi t1, t1, 4
  j 1b

  /* 清 bootloader 自己的 .bss */
2:
  la t1, _bss_start
  la t2, _bss_end
3:
  bgeu t1, t2, 4f
  sw zero, 0(t1)
  addi t1, t1, 4
  j 3b

4:
  call boot_main

5:
  j 5b