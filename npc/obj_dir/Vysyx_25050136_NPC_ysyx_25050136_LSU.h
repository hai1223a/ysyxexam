// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC_YSYX_25050136_LSU_H_
#define VERILATED_VYSYX_25050136_NPC_YSYX_25050136_LSU_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC_ysyx_25050136_LSU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__mem_len_i,2,0);
    VL_IN8(__PVT__mem_signed_i,0,0);
    VL_IN(__PVT__store_data_i,31,0);
    VL_IN(__PVT__mem_rdata_i,31,0);
    VL_OUT(__PVT__mem_wdata_o,31,0);
    VL_OUT(__PVT__load_data_o,31,0);

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC_ysyx_25050136_LSU(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC_ysyx_25050136_LSU();
    VL_UNCOPYABLE(Vysyx_25050136_NPC_ysyx_25050136_LSU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
