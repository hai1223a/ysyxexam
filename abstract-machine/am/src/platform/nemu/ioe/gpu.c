#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
    int i;
    int w = 400;  
    int h = 300;  
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    for (i = 0; i < w * h; i ++) fb[i] = 0x00FFFFFF;
    outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = (int)(uint32_t)inw(VGACTL_ADDR + 2), .height = (int)(uint32_t)inw(VGACTL_ADDR),
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  static uint32_t *pb;
  static int x,y,w,h,point;
  int width = (int)(uint32_t)inw(VGACTL_ADDR + 2);
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  if (ctl->sync) {
    int i, j;
    for(i = 0; i < h; i++) 
      for(j = 0; j < w; j++) {
        fb[point + h * width + j] = pb[(i+1)*(j+1)-1];
      }
    outl(SYNC_ADDR, 1);
  } else {
    pb = (uint32_t *)ctl->pixels;
    x = ctl->x;
    y = ctl->y;
    h = ctl->h;
    w = ctl->w;
    point = y * width + x;
  }
}
// *((uint32_t *)ctl->pixels + ((i + 1) * (j + 1) - 1))
void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
