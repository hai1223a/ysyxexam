// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_25050136_NPC__pch.h"

//============================================================
// Constructors

Vysyx_25050136_NPC::Vysyx_25050136_NPC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_25050136_NPC__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , mem_ren_o{vlSymsp->TOP.mem_ren_o}
    , mem_wen_o{vlSymsp->TOP.mem_wen_o}
    , mem_len_o{vlSymsp->TOP.mem_len_o}
    , inst_i{vlSymsp->TOP.inst_i}
    , mem_rdata_i{vlSymsp->TOP.mem_rdata_i}
    , mem_wdata_o{vlSymsp->TOP.mem_wdata_o}
    , mem_addr_o{vlSymsp->TOP.mem_addr_o}
    , pc_o{vlSymsp->TOP.pc_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_25050136_NPC::Vysyx_25050136_NPC(const char* _vcname__)
    : Vysyx_25050136_NPC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_25050136_NPC::~Vysyx_25050136_NPC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_25050136_NPC___024root___eval_debug_assertions(Vysyx_25050136_NPC___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25050136_NPC___024root___eval_static(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC___024root___eval_initial(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC___024root___eval_settle(Vysyx_25050136_NPC___024root* vlSelf);
void Vysyx_25050136_NPC___024root___eval(Vysyx_25050136_NPC___024root* vlSelf);

void Vysyx_25050136_NPC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_25050136_NPC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_25050136_NPC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_25050136_NPC___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_25050136_NPC___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_25050136_NPC___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_25050136_NPC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_25050136_NPC::eventsPending() { return false; }

uint64_t Vysyx_25050136_NPC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_25050136_NPC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_25050136_NPC___024root___eval_final(Vysyx_25050136_NPC___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25050136_NPC::final() {
    Vysyx_25050136_NPC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_25050136_NPC::hierName() const { return vlSymsp->name(); }
const char* Vysyx_25050136_NPC::modelName() const { return "Vysyx_25050136_NPC"; }
unsigned Vysyx_25050136_NPC::threads() const { return 1; }
void Vysyx_25050136_NPC::prepareClone() const { contextp()->prepareClone(); }
void Vysyx_25050136_NPC::atClone() const {
    contextp()->threadPoolpOnClone();
}
