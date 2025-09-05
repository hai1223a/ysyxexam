// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC.h"
#include "Vysyx_25050136_NPC___024root.h"
#include "Vysyx_25050136_NPC___024unit.h"

// FUNCTIONS
Vysyx_25050136_NPC__Syms::~Vysyx_25050136_NPC__Syms()
{
}

Vysyx_25050136_NPC__Syms::Vysyx_25050136_NPC__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25050136_NPC* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_executionProfilerp{static_cast<VlExecutionProfiler*>(contextp->enableExecutionProfiler(&VlExecutionProfiler::construct))}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(202);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
