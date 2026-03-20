OUTPUT_ARCH(riscv)
ENTRY(_start)

SRAM_SIZE  = 0x00002000;   /* 8KB */
FLASH_SIZE = 0x08000000;
MROM_SIZE  = 0x00020000;
PSRAM_SIZE = 0x00400000;   /* 4MB */

SSBL_STACK_RESERVE = 0x400;  /* 给SSBL预留1KB栈 */

MEMORY {
  PSRAM (rwx) : ORIGIN = _psram_start, LENGTH = PSRAM_SIZE
  MROM  (rx)  : ORIGIN = _mrom_start,  LENGTH = MROM_SIZE
  FLASH (rx)  : ORIGIN = _flash_start, LENGTH = FLASH_SIZE
  SRAM  (rwx) : ORIGIN = _sram_start,  LENGTH = SRAM_SIZE
}

SECTIONS {
  /* =========================================================
   * FSBL: 在 FLASH 执行
   * ========================================================= */
  . = ORIGIN(FLASH);

  .text : ALIGN(4) {
    _text_start = .;
    *(.text.entry)
    *(.text*)
    *(.rodata*)
    *(.srodata*)
    . = ALIGN(4);
    _text_end = .;
  } > FLASH

  /* =========================================================
   * FSBL data/bss: 仍按你原来的方式放到 PSRAM
   * ========================================================= */
  . = ORIGIN(PSRAM);

  .data : AT(ALIGN(LOADADDR(.text) + SIZEOF(.text), 4)) {
    _data_start = .;
    _data_vma   = .;
    *(.data*)
    *(.sdata*)
    . = ALIGN(8);
    _data_end = .;
  } > PSRAM
  _data_lma = LOADADDR(.data);

  .bss (NOLOAD) : ALIGN(8) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    . = ALIGN(8);
    _bss_end = .;
  } > PSRAM

  . = ALIGN(8);
  _heap_start = .;
  __heap_start = _heap_start;

  _heap_end = ORIGIN(PSRAM) + LENGTH(PSRAM);
  __heap_end = _heap_end;

  end = _heap_start;
  _end = _heap_start;

  /* FSBL 启动栈仍放 SRAM 顶部 */
  _stack_top = ORIGIN(SRAM) + LENGTH(SRAM);

  /* =========================================================
   * SSBL: load in FLASH, run in SRAM
   * FSBL 通过这些符号把 SSBL 拷到 SRAM 再跳转
   * ========================================================= */
  . = ORIGIN(SRAM);

  __ssbl_lma = ALIGN(LOADADDR(.data) + SIZEOF(.data), 4);

  .ssbl : AT(__ssbl_lma) {
    __ssbl_start = .;
    *(.ssbl.text)
    *(.ssbl.text.*)
    *(.ssbl.rodata)
    *(.ssbl.rodata.*)
    *(.ssbl.data)
    *(.ssbl.data.*)
    . = ALIGN(8);
    __ssbl_end = .;
  } > SRAM

  .ssbl.bss (NOLOAD) : ALIGN(8) {
    __ssbl_bss_start = .;
    *(.ssbl.bss)
    *(.ssbl.bss.*)
    . = ALIGN(8);
    __ssbl_bss_end = .;
  } > SRAM

  __ssbl_stack_top = ORIGIN(SRAM) + LENGTH(SRAM);

  ASSERT(__ssbl_bss_end <= (__ssbl_stack_top - SSBL_STACK_RESERVE),
         "SSBL too large for SRAM")

  /DISCARD/ : {
    *(.comment)
    *(.note*)
    *(.riscv.attributes)
  }
}