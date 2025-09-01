#include <am.h>
#include <riscv/ysyxsoc/ysyxsoc.h>

const int ps2_scancode_to_amkey[128] = {
    // 0x00 - 0x0F
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, 
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, 
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_GRAVE, AM_KEY_NONE,
    
    // 0x10 - 0x1F
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_Q,    AM_KEY_1,    AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_Z,    AM_KEY_S,
    AM_KEY_A,    AM_KEY_W,    AM_KEY_2,    AM_KEY_NONE,
    
    // 0x20 - 0x2F
    AM_KEY_NONE, AM_KEY_C,    AM_KEY_X,    AM_KEY_D,
    AM_KEY_E,    AM_KEY_4,    AM_KEY_3,    AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_SPACE,AM_KEY_V,    AM_KEY_F,
    AM_KEY_T,    AM_KEY_R,    AM_KEY_5,    AM_KEY_NONE,
    
    // 0x30 - 0x3F
    AM_KEY_NONE, AM_KEY_N,    AM_KEY_B,    AM_KEY_H,
    AM_KEY_G,    AM_KEY_Y,    AM_KEY_6,    AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_M,    AM_KEY_J,
    AM_KEY_U,    AM_KEY_7,    AM_KEY_8,    AM_KEY_NONE,
    
    // 0x40 - 0x4F
    AM_KEY_NONE, AM_KEY_COMMA,AM_KEY_K,    AM_KEY_I,
    AM_KEY_O,    AM_KEY_0,    AM_KEY_9,    AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_PERIOD,AM_KEY_SLASH,AM_KEY_L,
    AM_KEY_SEMICOLON, AM_KEY_P, AM_KEY_MINUS, AM_KEY_NONE,
    
    // 0x50 - 0x5F
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_APOSTROPHE, AM_KEY_NONE,
    AM_KEY_LEFTBRACKET, AM_KEY_EQUALS, AM_KEY_NONE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_RETURN, AM_KEY_RIGHTBRACKET,
    AM_KEY_NONE, AM_KEY_BACKSLASH, AM_KEY_NONE, AM_KEY_NONE,
    
    // 0x60 - 0x6F
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_BACKSPACE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE,
    
    // 0x70 - 0x7F
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE,
    AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE, AM_KEY_NONE };

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keycode = inb(PS2_ADDR);
  if(kbd->keycode == 0xf0) {
    kbd->keycode = inb(PS2_ADDR);
    kbd->keydown = false;
  } else {
    kbd->keydown = true;
  }
  kbd->keyname = ps2_scancode_to_amkey[kbd->keycode];
}