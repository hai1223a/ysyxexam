// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/soc.v:1:30
    extern void find_addr_0();
    // DPI import at vsrc/cpu.v:2:30
    extern void find_ebreak();
    // DPI import at vsrc/cpu.v:3:30
    extern void find_resp();
    // DPI import at vsrc/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at vsrc/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/sram.v:1:29
    extern int pmem_read(int raddr);
    // DPI import at vsrc/sram.v:2:30
    extern void pmem_write(int waddr, int wdata, int wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
