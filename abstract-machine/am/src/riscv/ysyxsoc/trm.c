#include <am.h>
#include "ysyxsoc.h"

extern char _heap_start;
extern char _heap_end;
int main(const char *args);

Area heap = RANGE(&_heap_start, &_heap_end);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : :"r"(code));
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
