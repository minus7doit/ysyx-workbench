OUTPUT_ARCH(riscv)
ENTRY(_start)

SRAM_SIZE  = 0x00002000;   /* 8KB */
FLASH_SIZE = 0x08000000;
MROM_SIZE  = 0x00020000;
PSRAM_SIZE = 0x00400000;   /* 4MB */
SDRAM_SIZE = 0x02000000;   /* 32MB */


BOOTLOADER_SIZE = 0x00010000;
APP_FLASH_BASE  = _flash_start + BOOTLOADER_SIZE;
HDR_SIZE        = 0x40;
IMAGE_MAGIC     = 0x59535958;   /* "YSYX" */

_stack_size = 64K;

MEMORY {
  SDRAM (rwx) : ORIGIN = _sdram_start, LENGTH = SDRAM_SIZE
  PSRAM (rwx) : ORIGIN = _psram_start, LENGTH = PSRAM_SIZE
  MROM  (rx)  : ORIGIN = _mrom_start,  LENGTH = MROM_SIZE
  FLASH (rx)  : ORIGIN = _flash_start, LENGTH = FLASH_SIZE
  SRAM  (rwx) : ORIGIN = _sram_start,  LENGTH = SRAM_SIZE
}

SECTIONS {
  . = ORIGIN(SDRAM);

  /* ---------------------------------------------------------
   * text + rodata
   * --------------------------------------------------------- */
  .text : AT(APP_FLASH_BASE + HDR_SIZE) {
    _text_start = .;

    KEEP(*(.text.entry))
    *(.text .text.*)
    *(.gnu.linkonce.t.*)

    *(.rodata .rodata.*)
    *(.srodata .srodata.*)
    *(.gnu.linkonce.r.*)

    __fsymtab_start = .;
    KEEP(*(FSymTab))
    KEEP(*(FSymTab.*))
    __fsymtab_end = .;

    __vsymtab_start = .;
    KEEP(*(VSymTab))
    KEEP(*(VSymTab.*))
    __vsymtab_end = .;

    __rt_init_start = .;
    KEEP(*(SORT(.rti_fn*)))
    __rt_init_end = .;

    KEEP(*(.init))
    KEEP(*(.fini))
    KEEP(*(.eh_frame*))
    KEEP(*(.gcc_except_table*))

    . = ALIGN(8);
    _text_end = .;
  } > SDRAM

  _text_lma  = LOADADDR(.text);
  _text_size = SIZEOF(.text);

  /* ---------------------------------------------------------
   * 显式接住 .data.extra
   * 关键：输出段名字就叫 ".data.extra"
   * 避免 ld 再把它当 orphan 输出段单独放置
   * --------------------------------------------------------- */
  .data.extra : AT(ALIGN(LOADADDR(.text) + SIZEOF(.text), 4)) {
    _data_start = .;
    _data_vma   = .;

    *(.data.extra)
    *(.data.extra.*)

    . = ALIGN(8);
    __data_extra_end = .;
  } > SDRAM

  _data_lma = LOADADDR(.data.extra);

  /* ---------------------------------------------------------
   * 普通 data
   * 与 .data.extra 在 VMA/LMA 上都连续
   * bootloader 仍按一整块 data copy
   * --------------------------------------------------------- */
  .data : AT(ALIGN(LOADADDR(.data.extra) + SIZEOF(.data.extra), 4)) {
    PROVIDE_HIDDEN(__preinit_array_start = .);
    KEEP(*(.preinit_array))
    KEEP(*(.preinit_array.*))
    PROVIDE_HIDDEN(__preinit_array_end = .);

    PROVIDE_HIDDEN(__init_array_start = .);
    KEEP(*(SORT_BY_INIT_PRIORITY(.init_array.*)))
    KEEP(*(.init_array))
    PROVIDE_HIDDEN(__init_array_end = .);

    PROVIDE_HIDDEN(__fini_array_start = .);
    KEEP(*(SORT_BY_INIT_PRIORITY(.fini_array.*)))
    KEEP(*(.fini_array))
    PROVIDE_HIDDEN(__fini_array_end = .);

    KEEP(*(.ctors))
    KEEP(*(.ctors.*))
    KEEP(*(.dtors))
    KEEP(*(.dtors.*))

    *(.data)
    *(.data.*)
    *(.sdata)
    *(.sdata.*)
    *(.gnu.linkonce.d.*)
    *(.gnu.linkonce.s.*)

    *(.got)
    *(.got.*)
    *(.got.plt)

    . = ALIGN(8);
    _data_end = .;
  } > SDRAM

  _data_size = _data_end - _data_start;

  /* ---------------------------------------------------------
   * 显式接住 .bss.extra
   * --------------------------------------------------------- */
  .bss.extra (NOLOAD) : ALIGN(8) {
    _bss_start  = .;
    __bss_start = .;

    *(.bss.extra)
    *(.bss.extra.*)

    . = ALIGN(8);
    __bss_extra_end = .;
  } > SDRAM

  /* ---------------------------------------------------------
   * 普通 bss
   * --------------------------------------------------------- */
  .bss (NOLOAD) : ALIGN(8) {
    *(.bss)
    *(.bss.*)
    *(.sbss)
    *(.sbss.*)
    *(.scommon)
    *(COMMON)

    . = ALIGN(8);
    _bss_end = .;
    __bss_end = .;
  } > SDRAM

  _bss_size = _bss_end - _bss_start;

  /* ---------------------------------------------------------
   * heap / stack
   * --------------------------------------------------------- */
  . = ALIGN(16);
  _heap_start  = .;
  __heap_start = _heap_start;

  _heap_end    = ORIGIN(SDRAM) + LENGTH(SDRAM) - _stack_size;
  __heap_end   = _heap_end;

  _stack_top   = ORIGIN(SDRAM) + LENGTH(SDRAM);
  PROVIDE(_stack_pointer = _stack_top);

  end  = _heap_start;
  _end = _heap_start;
  PROVIDE(edata = _data_end);

  /* ---------------------------------------------------------
   * FLASH 头，bootloader 固定从 0x30010000 读取
   * --------------------------------------------------------- */
  .image_hdr APP_FLASH_BASE : AT(APP_FLASH_BASE) {
    LONG(IMAGE_MAGIC)

    LONG(_start)
    LONG(_stack_top)

    LONG(_text_lma)
    LONG(_text_start)
    LONG(_text_size)

    LONG(_data_lma)
    LONG(_data_start)
    LONG(_data_size)

    LONG(_bss_start)
    LONG(_bss_size)

    . = ALIGN(4);
    . += (HDR_SIZE - 11 * 4);
  } > FLASH

}