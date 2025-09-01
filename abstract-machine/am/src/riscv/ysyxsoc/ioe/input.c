#include <am.h>
#include <riscv/ysyxsoc/ysyxsoc.h>

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keycode = inb(PS2_ADDR);
  if(kbd->keycode) {
    kbd->keydown = true;
  } else {
    kbd->keydown = false;
  }
}
