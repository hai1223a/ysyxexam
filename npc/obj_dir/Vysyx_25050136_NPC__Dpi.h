// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25050136_NPC__DPI_H_
#define VERILATED_VYSYX_25050136_NPC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/top.v:2:30
    extern void itrace_get_pc_inst(int* pc, int inst);

#ifdef __cplusplus
}
#endif

#endif  // guard
