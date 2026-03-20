OUTPUT_ARCH(riscv)
ENTRY(_start)

PROVIDE(_mrom_start  = 0x20000000);
PROVIDE(_sram_start  = 0x0f000000);
PROVIDE(_flash_start = 0x30000000);
PROVIDE(_psram_start = 0x80000000);

SRAM_SIZE      = 0x00002000;   /* 8KB */
STACK_RESERVE  = 0x00000400;   /* 给 mem-test 预留 1KB 栈 */

MEMORY {
  SRAM (rwx) : ORIGIN = _sram_start, LENGTH = SRAM_SIZE
}

SECTIONS {
  . = ORIGIN(SRAM);
  _image_start = .;

  .text : ALIGN(4) {
    KEEP(*(.text.entry))
    *(.text*)
    *(.gnu.linkonce.t*)
  } > SRAM

  .rodata : ALIGN(4) {
    *(.rodata*)
    *(.srodata*)
    *(.gnu.linkonce.r*)
    *(.eh_frame*)
    *(.eh_frame_hdr*)
    *(.gcc_except_table*)
  } > SRAM

  .data : ALIGN(4) {
    *(.data*)
    *(.sdata*)
    *(.got*)
    *(.got.plt*)
    *(.gnu.linkonce.d*)
  } > SRAM

  _image_load_end = ALIGN(16);
  _image_size     = _image_load_end - _image_start;

  .bss (NOLOAD) : ALIGN(8) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    _bss_end = ALIGN(8);
  } > SRAM

  . = ALIGN(8);
  _heap_start = .;
  __heap_start = _heap_start;

  _heap_end = ORIGIN(SRAM) + LENGTH(SRAM);
  __heap_end = _heap_end;

  end = _heap_start;
  _end = _heap_start;

  _stack_top = ORIGIN(SRAM) + LENGTH(SRAM);
  __stack_top = _stack_top;
}

ASSERT(_bss_end <= (_stack_top - STACK_RESERVE), "mem-test does not fit in 8KB SRAM")