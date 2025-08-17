#ifndef YSYXSOC_H__
#define YSYXSOC_H__

#include <klib-macros.h>
#include <riscv/riscv.h>

#define UART_PORT       0x10000000
#define UART_IER        0x10000001
#define UART_IIR        0x10000002
#define UART_LCR        0x10000003
#define UART_LSR        0x10000005
#define UART_DLL        0x10000000
#define UART_DLH        0x10000001
#define SPI_TX0         0x10001000
#define SPI_TX1         0x10001004
#define SPI_RX0         0x10001000
#define SPI_RX1         0x10001004
#define SPI_CTRL        0x10001010
#define SPI_DIV         0x10001014
#define SPI_SS          0x10001018

#define RTC_ADDR        (MMIO_BASE + 0x0000048)

#endif