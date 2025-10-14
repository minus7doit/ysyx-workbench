
#include <SDL2/SDL.h>
#include "npc.h"
#include "device.h"
void send_key(uint8_t, bool);
void vga_update_screen();

void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;

    #ifdef CONFIG_HAS_VGA
        vga_update_screen();
    #endif
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        finish_sim();
      break;
#ifdef CONFIG_HAS_KEYBOARD
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
#endif
      default: break;
    }
  }
}

void sdl_clear_event_queue() {
  SDL_Event event;
  while (SDL_PollEvent(&event));
}


void init_device() {
  #if CONFIG_HAS_VGA
    init_vga();
  #endif
  #if CONFIG_HAS_KEYBOARD
    init_i8042();
  #endif
}
