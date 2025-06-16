#ifndef NEMU_H__
#define NEMU_H__

#include <klib-macros.h>
#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (MMIO_BASE + 0x00003f8)
#define RTC_ADDR        (MMIO_BASE + 0x0000048)

#endif