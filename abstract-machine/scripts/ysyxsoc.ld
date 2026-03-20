OUTPUT_ARCH(riscv)
ENTRY(_start)

SRAM_SIZE  = 0x00002000;   /* 8KB */
FLASH_SIZE = 0x08000000;
MROM_SIZE  = 0x00020000;
PSRAM_SIZE = 0x00400000;   /* 4MB */

MEMORY {
  PSRAM (rwx) : ORIGIN = _psram_start, LENGTH = PSRAM_SIZE
  MROM  (rx)  : ORIGIN = _mrom_start,  LENGTH = MROM_SIZE
  FLASH (rx)  : ORIGIN = _flash_start, LENGTH = FLASH_SIZE
  SRAM  (rwx) : ORIGIN = _sram_start,  LENGTH = SRAM_SIZE
}

SECTIONS {
  . = ORIGIN(FLASH);
  .text : ALIGN(4) {
    _text_start = .;
    *(.text.entry)
    *(.text*)
    *(.rodata*)
    *(.srodata*)
    _text_end = ALIGN(4);
  } > FLASH

  . = ORIGIN(PSRAM);
  .data : AT(ALIGN(_text_end, 4)) {
    _data_start = .;
    _data_vma   = .;    /* 关键：补这个 */
    *(.data*)
    *(.sdata*)
    _data_end = ALIGN(8);
  } > PSRAM
  _data_lma = LOADADDR(.data);

  .bss (NOLOAD) : ALIGN(8) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    _bss_end = ALIGN(8);
  } > PSRAM

  . = ALIGN(8);
  _heap_start = .;
  __heap_start = _heap_start;

  _heap_end = ORIGIN(PSRAM) + LENGTH(PSRAM);
  __heap_end = _heap_end;

  end = _heap_start;
  _end = _heap_start;

  _stack_top = ORIGIN(SRAM) + LENGTH(SRAM);
}