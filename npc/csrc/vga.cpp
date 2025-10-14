
#include "npc.h"
#include "device.h"
#ifdef CONFIG_HAS_VGA
static uint32_t vmem[SCREEN_W*SCREEN_H];

vaddr_t* vga_guest_to_host(vaddr_t vga_addr) {
    return (vaddr_t *)vmem + (vga_addr - CONFIG_FB_ADDR)/4; 
}

void vmem_wirte(uint32_t addr, uint32_t data) {
  uint8_t *vmem_addr = ((uint8_t*)(vga_guest_to_host(addr))+ addr%4);
  for (int i = 0; i < 4; i++) {
            vmem_addr[i] = (data >> (i * 8)) & 0xFF; // 写入每个字节
    }
}

#ifdef CONFIG_VGA_SHOW_SCREEN
#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NPC", "riscv32e");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * MULTI_NUM,
      SCREEN_H * MULTI_NUM,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
  SDL_RenderPresent(renderer);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

#endif

void vga_update_screen() {
  update_screen();
}
 

void init_vga() {
  #ifdef CONFIG_VGA_SHOW_SCREEN
    init_screen();
    memset(vmem, 0, VMEM_SIZE);
  #endif
}
#endif