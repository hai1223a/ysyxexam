// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC.h"
#include "Vysyx_25050136_NPC___024root.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_NPC.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_EX.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_ID.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_IF.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_RegisterFile.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_ALU.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_BQU.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_LSU.h"

// FUNCTIONS
Vysyx_25050136_NPC__Syms::~Vysyx_25050136_NPC__Syms()
{
}

Vysyx_25050136_NPC__Syms::Vysyx_25050136_NPC__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25050136_NPC* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ysyx_25050136_NPC{this, Verilated::catName(namep, "ysyx_25050136_NPC")}
    , TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX{this, Verilated::catName(namep, "ysyx_25050136_NPC.u_ysyx_25050136_EX")}
    , TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU{this, Verilated::catName(namep, "ysyx_25050136_NPC.u_ysyx_25050136_EX.u_ysyx_25050136_ALU")}
    , TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU{this, Verilated::catName(namep, "ysyx_25050136_NPC.u_ysyx_25050136_EX.u_ysyx_25050136_BQU")}
    , TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU{this, Verilated::catName(namep, "ysyx_25050136_NPC.u_ysyx_25050136_EX.u_ysyx_25050136_LSU")}
    , TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID{this, Verilated::catName(namep, "ysyx_25050136_NPC.u_ysyx_25050136_ID")}
    , TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF{this, Verilated::catName(namep, "ysyx_25050136_NPC.u_ysyx_25050136_IF")}
    , TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile{this, Verilated::catName(namep, "ysyx_25050136_NPC.u_ysyx_25050136_RegisterFile")}
{
        // Check resources
        Verilated::stackCheck(16);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ysyx_25050136_NPC = &TOP__ysyx_25050136_NPC;
    TOP__ysyx_25050136_NPC.__PVT__u_ysyx_25050136_EX = &TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX;
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__u_ysyx_25050136_ALU = &TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU;
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__u_ysyx_25050136_BQU = &TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU;
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__PVT__u_ysyx_25050136_LSU = &TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU;
    TOP__ysyx_25050136_NPC.__PVT__u_ysyx_25050136_ID = &TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID;
    TOP__ysyx_25050136_NPC.__PVT__u_ysyx_25050136_IF = &TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF;
    TOP__ysyx_25050136_NPC.__PVT__u_ysyx_25050136_RegisterFile = &TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ysyx_25050136_NPC.__Vconfigure(true);
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX.__Vconfigure(true);
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_ALU.__Vconfigure(true);
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_BQU.__Vconfigure(true);
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU.__Vconfigure(true);
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_ID.__Vconfigure(true);
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_IF.__Vconfigure(true);
    TOP__ysyx_25050136_NPC__u_ysyx_25050136_RegisterFile.__Vconfigure(true);
}
