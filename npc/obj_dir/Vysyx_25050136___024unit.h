// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136___024UNIT_H_
#define VERILATED_VYSYX_25050136___024UNIT_H_  // guard

#include "verilated.h"


class Vysyx_25050136__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vysyx_25050136__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136___024unit(Vysyx_25050136__Syms* symsp, const char* v__name);
    ~Vysyx_25050136___024unit();
    VL_UNCOPYABLE(Vysyx_25050136___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
