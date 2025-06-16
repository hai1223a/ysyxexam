// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC_YSYX_25050136_IF_H_
#define VERILATED_VYSYX_25050136_NPC_YSYX_25050136_IF_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC_ysyx_25050136_IF final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__dynamic_valid_i,0,0);
    VL_IN(__PVT__dynamic_npc_i,31,0);
    VL_OUT(__PVT__static_npc_o,31,0);
    VL_OUT(__PVT__pc_o,31,0);
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __Vdly__pc;

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC_ysyx_25050136_IF(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC_ysyx_25050136_IF();
    VL_UNCOPYABLE(Vysyx_25050136_NPC_ysyx_25050136_IF);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
