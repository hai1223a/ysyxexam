#include <am.h>
#include "ysyxsoc.h"

int flash_config() {
  outw(SPI_TX0, 0xf2);  //11110010
  outw(SPI_DIV, 1);
  outw(SPI_SS, 0x80);
  outw(SPI_CTRL, 0x910);
  while (1)
  {
    if(!(inw(SPI_CTRL) & 0x100)) {
      return inw(SPI_RX0);
    }
  }
}