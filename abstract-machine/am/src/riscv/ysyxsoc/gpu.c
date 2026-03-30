#include <am.h>
#include <ysyxsoc.h>

static struct gpu_canvas display;

void __am_gpu_init() {
  uint32_t size = inl(VGACTL_ADDR);
  display.w = (size >> 16) & 0xFFFF;
  display.h = size & 0xFFFF;
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true,
    .has_accel = false,
    .width = display.w,
    .height = display.h,
    .vmemsz = display.w * display.h * sizeof(uint32_t)
  };
}

#define FB_INDEX(x, y)   (((x) << 9) | (y))

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  volatile uint32_t *fb = (volatile uint32_t *)(uintptr_t)FB_ADDR;
  const uint32_t *pixels = (const uint32_t *)ctl->pixels;

  if (pixels != NULL) {
    int x0 = ctl->x;
    int y0 = ctl->y;
    int w  = ctl->w;
    int h  = ctl->h;

    int x_start = (x0 < 0) ? 0 : x0;
    int y_start = (y0 < 0) ? 0 : y0;
    int x_end   = (x0 + w > display.w) ? display.w : (x0 + w);
    int y_end   = (y0 + h > display.h) ? display.h : (y0 + h);

    for (int x = x_start; x < x_end; x++) {
      int i = x - x0;
      for (int y = y_start; y < y_end; y++) {
        int j = y - y0;
        fb[FB_INDEX(x, y)] = pixels[j * w + i];
      }
    }
  }

  if (ctl->sync) {
    *(volatile uint32_t *)(uintptr_t)SYNC_ADDR = 1;
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}