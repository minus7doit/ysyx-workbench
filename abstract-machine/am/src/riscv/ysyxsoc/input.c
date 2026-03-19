#include <am.h>
#include <ysyxsoc.h>
#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  int code = AM_KEY_NONE;
  code = inl(KBD_ADDR);
  kbd->keycode = code & ~KEYDOWN_MASK;
  kbd->keydown = (code & KEYDOWN_MASK) ? 1 : 0;
}
