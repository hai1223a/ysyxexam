#include <am.h>
#include "ysyxsoc.h"

void spi_config(uint8_t SS, uint8_t CHAR_LEN) {
  uint32_t ctrl_statu = 0x2000 | CHAR_LEN;
  outw(SPI_DIV, 3);
  outb(SPI_SS, SS);
  outw(SPI_CTRL, ctrl_statu);
}

uint32_t bitrev_read(uint32_t data) {
  outl(SPI_TX0, data);
  uint32_t ctrl_statu = inw(SPI_CTRL) | 0x100;  
  outw(SPI_CTRL, ctrl_statu);
  while (1)
  {
    if(!(inw(SPI_CTRL) & 0x100)) {
      return inl(SPI_RX0);
    }
  }
}

uint32_t flash_read(uint32_t data) {
  // uint32_t TX_data = 0x3000000 | (data & 0xffffff);
  uint32_t TX_data = 0x032211c0;
  outl(SPI_TX1, TX_data);
  uint32_t ctrl_statu = inw(SPI_CTRL) | 0x100;  
  outw(SPI_CTRL, ctrl_statu);
  while (1)
  {
    if(!(inw(SPI_CTRL) & 0x100)) {
      return inl(SPI_RX0);
    }
  }
}