OUTPUT_ARCH(riscv)
ENTRY(_start)

SRAM_SIZE  = 0x00002000;   /* 8KB */
FLASH_SIZE = 0x08000000;
MROM_SIZE  = 0x00020000;
PSRAM_SIZE = 0x00400000;   /* 4MB */
SDRAM_SIZE = 0x02000000;   /* 4MB */

/* FLASH前64KB留给bootloader */
BOOTLOADER_SIZE = 0x00010000;
APP_FLASH_BASE  = _flash_start + BOOTLOADER_SIZE;
HDR_SIZE        = 0x40;

MEMORY {
  SDRAM (rwx) : ORIGIN = _sdram_start, LENGTH = SDRAM_SIZE
  PSRAM (rwx) : ORIGIN = _psram_start, LENGTH = PSRAM_SIZE
  MROM  (rx)  : ORIGIN = _mrom_start,  LENGTH = MROM_SIZE
  FLASH (rx)  : ORIGIN = _flash_start, LENGTH = FLASH_SIZE
  SRAM  (rwx) : ORIGIN = _sram_start,  LENGTH = SRAM_SIZE
}

SECTIONS {
  /* 应用运行在SDRAM */
  . = ORIGIN(SDRAM);

  .text : AT(APP_FLASH_BASE + HDR_SIZE) {
    _text_start = .;
    *(.text.entry)
    *(.text*)
    *(.rodata*)
    *(.srodata*)
    _text_end = ALIGN(4);
  } > SDRAM
  _text_lma  = LOADADDR(.text);
  _text_size = SIZEOF(.text);

.data : AT(ALIGN(LOADADDR(.text) + SIZEOF(.text), 4)) {
  _data_start = .;
  _data_vma   = .;   /* 关键：补这个 */
  *(.data*)
  *(.sdata*)
  _data_end = ALIGN(8);
} > SDRAM
_data_lma  = LOADADDR(.data);
_data_size = SIZEOF(.data);

  .bss (NOLOAD) : ALIGN(8) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    _bss_end = ALIGN(8);
  } > SDRAM
  _bss_size = SIZEOF(.bss);

  . = ALIGN(8);
  _heap_start = .;
  __heap_start = _heap_start;

  _heap_end = ORIGIN(SDRAM) + LENGTH(SDRAM);
  __heap_end = _heap_end;

  end  = _heap_start;
  _end = _heap_start;

  _stack_top = ORIGIN(SRAM) + LENGTH(SRAM);

  /* FLASH中放镜像头，bootloader靠它知道怎么搬 */
  .image_hdr APP_FLASH_BASE : {
    LONG(0x59535958)   /* IMAGE_MAGIC */

    LONG(_start)       /* entry */
    LONG(_stack_top)   /* stack_top */

    LONG(_text_lma)
    LONG(_text_start)
    LONG(_text_size)

    LONG(_data_lma)
    LONG(_data_start)
    LONG(_data_size)

    LONG(_bss_start)
    LONG(_bss_size)
  } > FLASH
}