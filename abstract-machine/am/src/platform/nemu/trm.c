#include <am.h>
#include <nemu.h>

extern char _heap_start;
extern char _heap_end;
int main(const char *args);
Area heap = RANGE(&_heap_start, &_heap_end);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS


int count = 0;
void putch(char ch) {
  while(1) {
    if(count < 16) {
      outb(SERIAL_PORT, ch);
      count++;
      break;
    }
    if(1) {
      outb(SERIAL_PORT, ch);
      count = 0;
      break;
    } 
  }
}

void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
