#include <am.h>
#include <stdint.h>
#include <stddef.h>

#define IMAGE_MAGIC 0x4D544553u   /* "MTES" */

/* 这些偏移你可以自己定 */
#define IMG_OFFSET_MEMTEST    0x00010000u
#define IMG_OFFSET_MICROBENCH 0x00040000u
#define IMG_OFFSET_RTTHREAD   0x00100000u

extern char _flash_start[];

typedef struct __attribute__((packed)) {
  uint32_t magic;
  uint32_t load_addr;
  uint32_t entry_addr;
  uint32_t image_size;
  uint32_t bss_start;
  uint32_t bss_size;
  uint32_t stack_top;
  uint32_t flags;
} image_header_t;

static void put_str(const char *s) {
  while (*s) putch(*s++);
}

static void put_hex32(uint32_t x) {
  static const char lut[] = "0123456789ABCDEF";
  for (int i = 7; i >= 0; i--) {
    putch(lut[(x >> (i * 4)) & 0xF]);
  }
}

static void panic_boot(uint32_t code) {
  put_str("BOOT FAIL 0x");
  put_hex32(code);
  put_str("\n");
  halt((int)code);
  while (1) { }
}

static void copy_bytes(volatile uint8_t *dst, const volatile uint8_t *src, uintptr_t n) {
  while (n--) {
    *dst++ = *src++;
  }
}

static void zero_bytes(volatile uint8_t *dst, uintptr_t n) {
  while (n--) {
    *dst++ = 0;
  }
}

static inline void sync_after_load(void) {
  asm volatile("fence rw, rw" ::: "memory");
  asm volatile("fence.i" ::: "memory");
}

/* 跳转前关中断，避免沿用 bootloader 上下文 */
__attribute__((noreturn))
static void jump_to_image(uintptr_t new_sp, uintptr_t entry) {
  asm volatile(
    "csrci mstatus, 8\n"   /* 清 MIE */
    "mv sp, %0\n"
    "jr %1\n"
    :
    : "r"(new_sp), "r"(entry)
    : "memory"
  );
  __builtin_unreachable();
}

static void boot_load_image(uint32_t flash_offset) {
  uintptr_t flash_base = (uintptr_t)_flash_start;
  const image_header_t *hdr =
      (const image_header_t *)(flash_base + flash_offset);

  if (hdr->magic != IMAGE_MAGIC) {
    panic_boot(0xE001);
  }
  if (hdr->image_size == 0) {
    panic_boot(0xE002);
  }

  put_str("BL: load image\n");
  put_str("  load_addr = 0x");
  put_hex32(hdr->load_addr);
  put_str("\n");
  put_str("  entry     = 0x");
  put_hex32(hdr->entry_addr);
  put_str("\n");
  put_str("  image_sz  = 0x");
  put_hex32(hdr->image_size);
  put_str("\n");
  put_str("  bss_start = 0x");
  put_hex32(hdr->bss_start);
  put_str("\n");
  put_str("  bss_size  = 0x");
  put_hex32(hdr->bss_size);
  put_str("\n");
  put_str("  stack_top = 0x");
  put_hex32(hdr->stack_top);
  put_str("\n");

  const volatile uint8_t *src =
      (const volatile uint8_t *)((uintptr_t)hdr + sizeof(image_header_t));
  volatile uint8_t *dst =
      (volatile uint8_t *)(uintptr_t)hdr->load_addr;

  /* 1) 拷贝 image */
  copy_bytes(dst, src, hdr->image_size);

  /* 2) 清 bss */
  zero_bytes((volatile uint8_t *)(uintptr_t)hdr->bss_start, hdr->bss_size);

  /* 3) 同步 */
  sync_after_load();

  /* 4) 跳转 */
  jump_to_image((uintptr_t)hdr->stack_top, (uintptr_t)hdr->entry_addr);
}

int boot_main(void) {
  put_str("Bootloader start\n");

  /*
   * 这里你可以先固定加载某个镜像：
   * boot_load_image(IMG_OFFSET_MEMTEST);
   * boot_load_image(IMG_OFFSET_MICROBENCH);
   * boot_load_image(IMG_OFFSET_RTTHREAD);
   */

  boot_load_image(IMG_OFFSET_MICROBENCH);

  while (1) { }
}