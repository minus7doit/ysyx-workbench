  .section .text.entry, "ax"
  .globl _entry
  .type _entry, @function

_entry:
  li   sp, 0x10000000      # 选一个能写的栈地址：这里用 SRAM 顶部附近即可
  j    _start              # 严格跳到题目里的 C 函数 _start
