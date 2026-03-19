OUTPUT_ARCH(riscv)
ENTRY(_start)

/* ===== 按你的 SoC 实际地址修改 ===== */
PROVIDE(_sram_start  = 0x0f000000);
PROVIDE(_psram_start = 0x80000000);
/* ================================== */

SRAM_SIZE     = 0x00002000;   /* 8KB */
STACK_RESERVE = 0x00000400;   /* 给 mem-test 预留 1KB 栈 */

MEMORY {
  SRAM (rwx) : ORIGIN = _sram_start, LENGTH = SRAM_SIZE
}

SECTIONS {
  . = ORIGIN(SRAM);
  _image_start = .;

  .text : ALIGN(4) {
    *(.text.entry)
    *(.text*)
  } > SRAM

  .rodata : ALIGN(4) {
    *(.rodata*)
    *(.srodata*)
  } > SRAM

  .data : ALIGN(4) {
    *(.data*)
    *(.sdata*)
  } > SRAM

  _image_load_end = ALIGN(16);
  _image_size = _image_load_end - _image_start;

  .bss (NOLOAD) : ALIGN(8) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    _bss_end = ALIGN(8);
  } > SRAM

  . = ALIGN(16);
  _heap_start = .;
  _stack_top  = ORIGIN(SRAM) + LENGTH(SRAM);

  PROVIDE(end = _heap_start);
  PROVIDE(_end = _heap_start);
}

ASSERT(_image_load_end <= _bss_start, "memtest image overlaps bss")
ASSERT(_bss_end <= _stack_top - STACK_RESERVE, "memtest too large for 8KB SRAM")