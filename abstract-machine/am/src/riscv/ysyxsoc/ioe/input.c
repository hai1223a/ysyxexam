#include <am.h>
#include <riscv/ysyxsoc/ysyxsoc.h>

const int ps2_scancode_to_amkey[256] = {
    // 0x00 - 0x0F
    0, AM_KEY_F9, 0, AM_KEY_F5, 
    AM_KEY_F3, AM_KEY_F1, AM_KEY_F2, AM_KEY_F12,
    0, AM_KEY_F10, AM_KEY_F8, AM_KEY_F6, 
    AM_KEY_F4, AM_KEY_TAB, AM_KEY_GRAVE, 0,
    
    // 0x10 - 0x1F
    0, AM_KEY_LALT, AM_KEY_LSHIFT, 0,
    AM_KEY_LCTRL, AM_KEY_Q,    AM_KEY_1,    0,
    0, 0, AM_KEY_Z,    AM_KEY_S,
    AM_KEY_A,    AM_KEY_W,    AM_KEY_2,    0,
    
    // 0x20 - 0x2F
    0, AM_KEY_C,    AM_KEY_X,    AM_KEY_D,
    AM_KEY_E,    AM_KEY_4,    AM_KEY_3,    0,
    0, AM_KEY_SPACE,AM_KEY_V,    AM_KEY_F,
    AM_KEY_T,    AM_KEY_R,    AM_KEY_5,    0,
    
    // 0x30 - 0x3F
    0, AM_KEY_N,    AM_KEY_B,    AM_KEY_H,
    AM_KEY_G,    AM_KEY_Y,    AM_KEY_6,    0,
    0, 0, AM_KEY_M,    AM_KEY_J,
    AM_KEY_U,    AM_KEY_7,    AM_KEY_8,    0,
    
    // 0x40 - 0x4F
    0, AM_KEY_COMMA,AM_KEY_K,    AM_KEY_I,
    AM_KEY_O,    AM_KEY_0,    AM_KEY_9,    0,
    0, AM_KEY_PERIOD,AM_KEY_SLASH,AM_KEY_L,
    AM_KEY_SEMICOLON, AM_KEY_P, AM_KEY_MINUS, 0,
    
    // 0x50 - 0x5F
    0, 0, AM_KEY_APOSTROPHE, 0,
    AM_KEY_LEFTBRACKET, AM_KEY_EQUALS, 0, 0,
    AM_KEY_CAPSLOCK, AM_KEY_RSHIFT, AM_KEY_RETURN, AM_KEY_RIGHTBRACKET,
    0, AM_KEY_BACKSLASH, 0, 0,
    
    // 0x60 - 0x6F
    0, 0, 0, 0,
    0, 0, AM_KEY_BACKSPACE, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    
    // 0x70 - 0x7F
    0, 0, 0, 0,
    0, 0, AM_KEY_ESCAPE, 0,
    AM_KEY_F11, 0, 0, 0,
    0, 0, AM_KEY_F11, 0,
    // 0x80 - 0x8F
    0, 0, 0, AM_KEY_F7,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    // 0x90 - 0x9F
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    // 0xa0 - 0xaF
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    // 0xc0 - 0xcF
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    // 0xd0 - 0xdF
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    // 0xe0 - 0xeF
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    // 0xf0 - 0xfF
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
   };

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  bool extend = false;
  kbd->keycode = inb(PS2_ADDR);
  if(kbd->keycode == 0xe0) {
    extend = true;
    kbd->keycode = inb(PS2_ADDR);
  }
  if(kbd->keycode == 0xf0) {
    kbd->keycode = inb(PS2_ADDR);
  if(kbd->keycode == 0xe0) {
    extend = true;
    kbd->keycode = inb(PS2_ADDR);
  }
    kbd->keydown = false;
  } else {
    kbd->keydown = true;
  }
  if(extend) {
    
  } else {
    kbd->keyname = ps2_scancode_to_amkey[kbd->keycode];
  }
}