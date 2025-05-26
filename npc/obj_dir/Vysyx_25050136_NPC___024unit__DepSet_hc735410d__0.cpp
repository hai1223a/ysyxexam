// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC___024unit.h"

extern "C" void itrace_get_pc_inst(int pc_DPIC, int inst_DPIC);

VL_INLINE_OPT void Vysyx_25050136_NPC___024unit____Vdpiimwrap_itrace_get_pc_inst_TOP____024unit(IData/*31:0*/ pc_DPIC, IData/*31:0*/ inst_DPIC) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC___024unit____Vdpiimwrap_itrace_get_pc_inst_TOP____024unit\n"); );
    // Body
    int pc_DPIC__Vcvt;
    for (size_t pc_DPIC__Vidx = 0; pc_DPIC__Vidx < 1; ++pc_DPIC__Vidx) pc_DPIC__Vcvt = pc_DPIC;
    int inst_DPIC__Vcvt;
    for (size_t inst_DPIC__Vidx = 0; inst_DPIC__Vidx < 1; ++inst_DPIC__Vidx) inst_DPIC__Vcvt = inst_DPIC;
    itrace_get_pc_inst(pc_DPIC__Vcvt, inst_DPIC__Vcvt);
}
