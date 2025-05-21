// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC___024ROOT_H_
#define VERILATED_VYSYX_25050136_NPC___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__dynamic_valid_i;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst_i,31,0);
    VL_IN(mem_rdata_i,31,0);
    VL_OUT(mem_wdata_o,31,0);
    VL_OUT(mem_addr_o,31,0);
    VL_OUT(pc_o,31,0);
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__dynamic_npc_i;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__static_npc_o;
    IData/*31:0*/ ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC___024root(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC___024root();
    VL_UNCOPYABLE(Vysyx_25050136_NPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
