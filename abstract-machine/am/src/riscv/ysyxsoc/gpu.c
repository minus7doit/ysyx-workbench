#include <am.h>
#include <ysyxsoc.h>
//#include <stdio.h>
#define SYNC_ADDR (VGACTL_ADDR + 4)

static struct gpu_canvas display;

void __am_gpu_init() {
  uint16_t h = inw(VGACTL_ADDR);  
  uint16_t w = inw(VGACTL_ADDR+2);  
  display.w=w;
  display.h=h;
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = false, .has_accel = false,
    .width = display.w, .height = display.h,
    .vmemsz = display.w * display.h * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int i;
  int x = ctl->x;
  int y = ctl->y;
  int w = ctl->w;
  int h = ctl->h;
  uint32_t *pixels = (uint32_t *)(ctl->pixels);
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for(i=0;i<h;i++){
    for(int j=0;j<w;j++){
      fb[(y+i)*display.w+x+j]=pixels[i*w+j];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
