OUTPUT_ARCH(riscv)
ENTRY(_start)

PROVIDE(_psram_start = 0x80000000);
PROVIDE(_sram_start  = 0x0f000000);

PSRAM_SIZE = 0x00400000;
SRAM_SIZE  = 0x00002000;

MEMORY {
  PSRAM (rwx) : ORIGIN = _psram_start, LENGTH = PSRAM_SIZE
  SRAM  (rwx) : ORIGIN = _sram_start,  LENGTH = SRAM_SIZE
}

SECTIONS {
  . = ORIGIN(PSRAM);
  _image_start = .;

  .text : ALIGN(4) {
    *(.text.entry)
    *(.text*)
  } > PSRAM

  .rodata : ALIGN(4) {
    *(.rodata*)
    *(.srodata*)
  } > PSRAM

  .data : ALIGN(4) {
    *(.data*)
    *(.sdata*)
  } > PSRAM

  _image_load_end = ALIGN(16);
  _image_size = _image_load_end - _image_start;

  .bss (NOLOAD) : ALIGN(8) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    _bss_end = ALIGN(8);
  } > PSRAM

  . = ALIGN(16);
  __heap_start = .;
  __heap_end   = ORIGIN(PSRAM) + LENGTH(PSRAM);

  _stack_top   = ORIGIN(SRAM) + LENGTH(SRAM);

  PROVIDE(end = __heap_start);
  PROVIDE(_end = __heap_start);
}

ASSERT(_bss_end <= __heap_end, "RT-Thread image overflow PSRAM")