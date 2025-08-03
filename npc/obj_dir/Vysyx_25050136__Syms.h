// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_25050136__SYMS_H_
#define VERILATED_VYSYX_25050136__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_profiler.h"

// INCLUDE MODEL CLASS

#include "Vysyx_25050136.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_25050136___024root.h"
#include "Vysyx_25050136___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vysyx_25050136__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_25050136* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // EXECUTION PROFILING
    VlExecutionProfiler* const __Vm_executionProfilerp;

    // MODULE INSTANCE STATE
    Vysyx_25050136___024root       TOP;
    Vysyx_25050136___024unit       TOP____024unit;

    // CONSTRUCTORS
    Vysyx_25050136__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25050136* modelp);
    ~Vysyx_25050136__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
