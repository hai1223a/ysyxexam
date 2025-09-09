#include "cache.h"
#include <iostream>

int main( int argc, char* argv[] )
{
    CACHE top(2, 4, 2);
    top.printTagSram();
    top.readCheck(0x1234ffff);
    top.readCheck(0x1234f32f);
    top.readCheck(0x1234f00f);
    top.readCheck(0x1234f12f);
    top.readCheck(0x1234feef);
    top.readCheck(0x1234feef);
    top.printTagSram();
    cout << top.c_pc << " " << top.c_reach << endl;
    return 0;
}

