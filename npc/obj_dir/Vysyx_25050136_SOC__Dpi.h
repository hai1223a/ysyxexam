// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25050136_SOC__DPI_H_
#define VERILATED_VYSYX_25050136_SOC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/cpu.v:2:30
    extern void find_ebreak();
    // DPI import at vsrc/sram.v:1:29
    extern int pmem_read(int raddr, int rmask);
    // DPI import at vsrc/sram.v:2:30
    extern void pmem_write(int waddr, int wdata, int wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
