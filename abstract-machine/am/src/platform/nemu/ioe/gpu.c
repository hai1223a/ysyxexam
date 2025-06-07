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
  if (ctl->sync) {
    // int i, j;
    // int height = 300;
    // int width = 400;
    // int point = (width * ctl->y) + ctl->x;
    // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    // for(i = 0; i < ctl->y; i++) 
    //   for(j = 0; j < ctl->x; j++) {
    //     fb[point + j + i * height] = i * j;
    //   }
    int i;
    int w = 400;  
    int h = 300;  
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    for (i = w * 12; i < w * h; i ++) fb[i] = 0;
    outl(SYNC_ADDR, 1);
  }
}
// *((uint32_t *)ctl->pixels + ((i + 1) * (j + 1) - 1))
void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
