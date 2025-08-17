#include <am.h>
#include "ysyxsoc.h"

void spi_config(uint32_t SS, uint32_t CHAR_LEN) {
  uint32_t ctrl_statu = 0x2800 | CHAR_LEN;
  outw(SPI_DIV, 3);
  outw(SPI_SS, SS);
  outw(SPI_CTRL, ctrl_statu);
}

uint32_t bitrev_read(uint32_t data) {
  outw(SPI_TX0, data);
  uint32_t ctrl_statu = inw(SPI_CTRL) | 0x100;  
  outw(SPI_CTRL, ctrl_statu);
  while (1)
  {
    if(!(inw(SPI_CTRL) & 0x100)) {
      return inw(SPI_RX0);
    }
  }
}

uint32_t flash_read(uint32_t data) {
  uint32_t TX_data = 0x3000000 | (data & 0xffffff);
  outw(SPI_TX0, TX_data);
  uint32_t ctrl_statu = inw(SPI_CTRL) | 0x100;  
  outw(SPI_CTRL, ctrl_statu);
  while (1)
  {
    if(!(inw(SPI_CTRL) & 0x100)) {
      return inw(SPI_RX0);
    }
  }
}