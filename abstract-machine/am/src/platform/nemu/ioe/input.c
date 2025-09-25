#include <am.h>
#include <nemu.h>
#include<stdio.h>
#define KEYDOWN_MASK 0x8000
/*
static void input_keybrd(AM_INPUT_KEYBRD_T *ev) {
  if (inb(0x64) & 0x1) {
    int code = inb(0x60) & 0xff;
    ev->keydown = code < 128;
    ev->keycode = keylut[code & 0x7f];
  } else {
    ev->keydown = false;
    ev->keycode = AM_KEY_NONE;
  }
}*/

/*void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int k = AM_KEY_NONE;

  SDL_LockMutex(key_queue_lock);
  if (key_f != key_r) {
    k = key_queue[key_f];
    key_f = (key_f + 1) % KEY_QUEUE_LEN;
  }
  SDL_UnlockMutex(key_queue_lock);

  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  kbd->keycode = k & ~KEYDOWN_MASK;
}
*/
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int code = AM_KEY_NONE;
  if(inl(KBD_ADDR)){  
  code = inl(KBD_ADDR);
  kbd->keycode = code & ~KEYDOWN_MASK;
  kbd->keydown = (code & KEYDOWN_MASK) ? 1 : 0;
  if(kbd->keydown){
    printf("keycode = %d\n", kbd->keycode);
  }
  };
}
