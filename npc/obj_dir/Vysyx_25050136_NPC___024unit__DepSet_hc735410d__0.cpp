// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC___024unit.h"

extern "C" void find_ebreak(svBit find);

VL_INLINE_OPT void Vysyx_25050136_NPC___024unit____Vdpiimwrap_find_ebreak_TOP____024unit(CData/*0:0*/ find) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25050136_NPC___024unit____Vdpiimwrap_find_ebreak_TOP____024unit\n"); );
    // Body
    svBit find__Vcvt;
    for (size_t find__Vidx = 0; find__Vidx < 1; ++find__Vidx) find__Vcvt = find;
    find_ebreak(find__Vcvt);
}
