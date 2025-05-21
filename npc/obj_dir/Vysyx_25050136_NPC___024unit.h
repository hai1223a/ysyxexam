// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_NPC___024UNIT_H_
#define VERILATED_VYSYX_25050136_NPC___024UNIT_H_  // guard

#include "verilated.h"


class Vysyx_25050136_NPC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_NPC___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vysyx_25050136_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_NPC___024unit(Vysyx_25050136_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_NPC___024unit();
    VL_UNCOPYABLE(Vysyx_25050136_NPC___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
