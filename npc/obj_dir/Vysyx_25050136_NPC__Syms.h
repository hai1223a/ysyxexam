// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_25050136_NPC__SYMS_H_
#define VERILATED_VYSYX_25050136_NPC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_25050136_NPC.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_25050136_NPC___024root.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_NPC.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_EX.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_ID.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_IF.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_RegisterFile.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_ALU.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_BQU.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_LSU.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vysyx_25050136_NPC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_25050136_NPC* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_25050136_NPC___024root   TOP;
    Vysyx_25050136_NPC_ysyx_25050136_NPC TOP__ysyx_25050136_NPC;
    Vysyx_25050136_NPC_ysyx_25050136_EX TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX;
    Vysyx_25050136_NPC_ysyx_25050136_ALU TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU;
    Vysyx_25050136_NPC_ysyx_25050136_BQU TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU;
    Vysyx_25050136_NPC_ysyx_25050136_LSU TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU;
    Vysyx_25050136_NPC_ysyx_25050136_ID TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID;
    Vysyx_25050136_NPC_ysyx_25050136_IF TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF;
    Vysyx_25050136_NPC_ysyx_25050136_RegisterFile TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile;

    // CONSTRUCTORS
    Vysyx_25050136_NPC__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25050136_NPC* modelp);
    ~Vysyx_25050136_NPC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
