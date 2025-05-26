// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC___024unit.h"

extern "C" void itrace_get_pc_inst(int* pc, int inst);

VL_INLINE_OPT void Vysyx_25050136_NPC___024unit____Vdpiimwrap_itrace_get_pc_inst_TOP____024unit(IData/*31:0*/ &pc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC___024unit____Vdpiimwrap_itrace_get_pc_inst_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    itrace_get_pc_inst(&pc__Vcvt, inst__Vcvt);
    pc = pc__Vcvt;
}
