// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136.h for the primary calling header

#include "Vysyx_25050136__pch.h"
#include "Vysyx_25050136__Syms.h"
#include "Vysyx_25050136___024unit.h"

void Vysyx_25050136___024unit___ctor_var_reset(Vysyx_25050136___024unit* vlSelf);

Vysyx_25050136___024unit::Vysyx_25050136___024unit(Vysyx_25050136__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_25050136___024unit___ctor_var_reset(this);
}

void Vysyx_25050136___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vysyx_25050136___024unit::~Vysyx_25050136___024unit() {
}
