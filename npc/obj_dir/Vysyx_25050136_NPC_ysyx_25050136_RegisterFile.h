// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC_YSYX_25050136_REGISTERFILE_H_
#define VERILATED_VYSYX_25050136_NPC_YSYX_25050136_REGISTERFILE_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC_ysyx_25050136_RegisterFile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__waddr_i,4,0);
    VL_IN8(__PVT__wen_i,0,0);
    VL_IN8(__PVT__raddr1_i,4,0);
    VL_IN8(__PVT__raddr2_i,4,0);
    CData/*4:0*/ __VdlyDim0__gpr__v0;
    CData/*0:0*/ __VdlySet__gpr__v0;
    VL_IN(__PVT__wdata_i,31,0);
    VL_OUT(__PVT__rdata1_o,31,0);
    VL_OUT(__PVT__rdata2_o,31,0);
    IData/*31:0*/ __VdlyVal__gpr__v0;
    VlUnpacked<IData/*31:0*/, 32> __PVT__gpr;

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC_ysyx_25050136_RegisterFile(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC_ysyx_25050136_RegisterFile();
    VL_UNCOPYABLE(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
