#include <am.h>
#include "ysyxsoc.h"

int flash_config() {
  outw(SPI_TX0, 0x0f);  //0001 0010 --> 01001000
  outw(SPI_DIV, 3);
  outw(SPI_SS, 0x80);
  outw(SPI_CTRL, 0x910);
  while (1)
  {
    if(!(inw(SPI_CTRL) & 0x100)) {
      return inw(SPI_RX0);
    }
  }
}