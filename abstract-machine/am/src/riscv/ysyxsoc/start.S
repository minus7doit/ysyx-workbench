.section .text.entry
.globl _start

_start:
  /* 1) 设置栈指针 */
  la sp, _stack_top

  /* 2) 拷贝 .data：如果 LMA == VMA，则跳过 */
  la a0, _data_lma
  la a1, _data_vma
  la a2, _data_end
  beq a0, a1, 2f

1:
  beq a1, a2, 2f
  lw  t0, 0(a0)
  sw  t0, 0(a1)
  addi a0, a0, 4
  addi a1, a1, 4
  j   1b

2:
  /* 3) 清零 .bss */
  la a0, _bss_start
  la a1, _bss_end

3:
  beq a0, a1, 4f
  sw  zero, 0(a0)
  addi a0, a0, 4
  j   3b

4:
  /* 4) 进入 TRM */
  call _trm_init

5:
  ebreak
  j 5b