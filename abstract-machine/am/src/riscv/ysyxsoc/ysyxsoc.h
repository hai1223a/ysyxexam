#ifndef YSYXSOC_H__
#define YSYXSOC_H__

#include <klib-macros.h>
#include <riscv/riscv.h>

#define UART_PORT       0x10000000
#define UART_LCR        0x10000003
#define UART_LSR        0x10000005
#define UART_DLL        0x10000000
#define UART_DLH        0x10000001

#define RTC_ADDR        (MMIO_BASE + 0x0000048)

#endif