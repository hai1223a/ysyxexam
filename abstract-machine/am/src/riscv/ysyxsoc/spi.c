#include <am.h>
#include "ysyxsoc.h"

void spi_config() {
  outw(SPI_DIV, 3);
  outw(SPI_SS, 0x80);
  outw(SPI_CTRL, 0x2810);
}

uint32_t bitrev_read(uint32_t data) {
  outw(SPI_TX0, data);
  outw(SPI_CTRL, 0x2910);  
  while (1)
  {
    if(!(inw(SPI_CTRL) & 0x100)) {
      return inw(SPI_RX0);
    }
  }
}