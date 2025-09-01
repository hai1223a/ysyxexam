#include <am.h>
#include <riscv/ysyxsoc/ysyxsoc.h>

const static uint8_t ps2_scancode_to_ascii[128] = {
    // 0x00 - 0x0F
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   '`', 0,
    // 0x10 - 0x1F
    0,   0,   0,   0,   0,   'q', '1', 0,   0,   0,   'z', 's', 'a', 'w', '2', 0,
    // 0x20 - 0x2F
    0,   'c', 'x', 'd', 'e', '4', '3', 0,   0,   ' ', 'v', 'f', 't', 'r', '5', 0,
    // 0x30 - 0x3F
    0,   'n', 'b', 'h', 'g', 'y', '6', 0,   0,   0,   'm', 'j', 'u', '7', '8', 0,
    // 0x40 - 0x4F
    0,   ',', 'k', 'i', 'o', '0', '9', 0,   0,   '.', '/', 'l', ';', 'p', '-', 0,
    // 0x50 - 0x5F
    0,   0,   '\'',0,   '[', '=', 0,   0,   0,   0,   '\n',']', 0,   '\\',0,   0,
    // 0x60 - 0x6F
    0,   0,   0,   0,   0,   0,   '\b',0,   0,   '1', 0,   '4', '7', 0,   0,   0,
    // 0x70 - 0x7F
    '0', '.', '2', '5', '6', '8', 0,   0,   0,   '+', '3', '-', '*', '9', 0,   0
};
// 带Shift键的映射表
const static uint8_t ps2_scancode_to_ascii_shift[128] = {
    // 0x00 - 0x0F
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   '~', 0,
    // 0x10 - 0x1F
    0,   0,   0,   0,   0,   'Q', '!', 0,   0,   0,   'Z', 'S', 'A', 'W', '@', 0,
    // 0x20 - 0x2F
    0,   'C', 'X', 'D', 'E', '$', '#', 0,   0,   ' ', 'V', 'F', 'T', 'R', '%', 0,
    // 0x30 - 0x3F
    0,   'N', 'B', 'H', 'G', 'Y', '^', 0,   0,   0,   'M', 'J', 'U', '&', '*', 0,
    // 0x40 - 0x4F
    0,   '<', 'K', 'I', 'O', ')', '(', 0,   0,   '>', '?', 'L', ':', 'P', '_', 0,
    // 0x50 - 0x5F
    0,   0,   '\"',0,   '{', '+', 0,   0,   0,   0,   '\n','}', 0,   '|', 0,   0,
    // 0x60 - 0x6F
    0,   0,   0,   0,   0,   0,   '\b',0,   0,   '1', 0,   '4', '7', 0,   0,   0,
    // 0x70 - 0x7F
    '0', '.', '2', '5', '6', '8', 0,   0,   0,   '+', '3', '-', '*', '9', 0,   0
};

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  static bool caps = false;
  static bool caps_count = false;
  static bool shift = false;

  kbd->keycode = inb(PS2_ADDR);
  if(kbd->keycode == 0x58) {
    if(!caps_count) {caps = !caps;}
    caps_count = !caps_count;
  }
  if(kbd->keycode == 0x12) {
    shift = !shift;
  }
  if(kbd->keycode == 0xf0) {
    kbd->keycode = inb(PS2_ADDR);
    kbd->keydown = false;
  } else {
    kbd->keydown = true;
  }
  if(1) {
    kbd->keyname = ps2_scancode_to_ascii_shift[kbd->keycode];
  } else {
    kbd->keyname = ps2_scancode_to_ascii[kbd->keycode];
  }
  if(caps) {
    if(kbd->keyname > 'a' && kbd->keyname < 'z')
      kbd->keyname -= 32;
    if(kbd->keyname > 'A' && kbd->keyname < 'Z')
      kbd->keyname += 32;  
  }
}