// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC__Syms.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_RegisterFile.h"

void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___ctor_var_reset(Vysyx_25050136_NPC_ysyx_25050136_RegisterFile* vlSelf);

Vysyx_25050136_NPC_ysyx_25050136_RegisterFile::Vysyx_25050136_NPC_ysyx_25050136_RegisterFile(Vysyx_25050136_NPC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_25050136_NPC_ysyx_25050136_RegisterFile___ctor_var_reset(this);
}

void Vysyx_25050136_NPC_ysyx_25050136_RegisterFile::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vysyx_25050136_NPC_ysyx_25050136_RegisterFile::~Vysyx_25050136_NPC_ysyx_25050136_RegisterFile() {
}
