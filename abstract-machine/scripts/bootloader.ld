OUTPUT_ARCH(riscv)
ENTRY(_start)

/* ===== 按你的 SoC 实际地址修改 ===== */
PROVIDE(_flash_start = 0x30000000);
PROVIDE(_sram_start  = 0x0f000000);
PROVIDE(_psram_start = 0x80000000);
PROVIDE(_mrom_start  = 0x20000000);
/* ================================== */

SRAM_SIZE       = 0x00002000;   /* 8KB */
BOOT_FLASH_SIZE = 0x00010000;   /* 64KB，给 bootloader 预留 */
STACK_GUARD     = 0x00000200;   /* 给 bootloader 预留 512B 栈空间 */

MEMORY {
  FLASH (rx)  : ORIGIN = _flash_start, LENGTH = BOOT_FLASH_SIZE
  SRAM  (rwx) : ORIGIN = _sram_start,  LENGTH = SRAM_SIZE
}

SECTIONS {
  . = ORIGIN(FLASH);

  .text : ALIGN(4) {
    _text_start = .;
    *(.text.entry)
    *(.text*)
    _text_end = ALIGN(4);
  } > FLASH

  .rodata : ALIGN(4) {
    *(.rodata*)
    *(.srodata*)
    _rodata_end = ALIGN(4);
  } > FLASH

  . = ORIGIN(SRAM);
  .data : AT(ALIGN(_rodata_end, 4)) {
    _data_start = .;
    *(.data*)
    *(.sdata*)
    _data_end = ALIGN(4);
  } > SRAM
  _data_lma = LOADADDR(.data);

  .bss (NOLOAD) : ALIGN(4) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    _bss_end = ALIGN(4);
  } > SRAM

  . = ALIGN(16);
  _heap_start = .;
  _stack_top  = ORIGIN(SRAM) + LENGTH(SRAM);

  PROVIDE(end = _heap_start);
  PROVIDE(_end = _heap_start);
}

ASSERT(_bss_end <= _stack_top - STACK_GUARD, "bootloader SRAM overflow")