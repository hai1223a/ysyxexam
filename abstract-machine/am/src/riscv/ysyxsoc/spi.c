#include <am.h>
#include "ysyxsoc.h"

void spi_config(uint32_t SS) {
  outw(SPI_DIV, 3);
  outw(SPI_SS, SS);
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

uint32_t flash_read(uint32_t data) {
  return 0;
}