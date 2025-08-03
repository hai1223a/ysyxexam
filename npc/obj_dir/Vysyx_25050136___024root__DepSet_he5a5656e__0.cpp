// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136.h for the primary calling header

#include "Vysyx_25050136__pch.h"
#include "Vysyx_25050136___024root.h"

void Vysyx_25050136___024root___eval_triggers__ico(Vysyx_25050136___024root* vlSelf);
void Vysyx_25050136___024root___eval_ico(Vysyx_25050136___024root* vlSelf);

bool Vysyx_25050136___024root___eval_phase__ico(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_phase__ico\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25050136___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25050136___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_25050136__ConstPool__TABLE_hd6b5aac4_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_25050136__ConstPool__TABLE_heecf2871_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vysyx_25050136__ConstPool__TABLE_he3e71d34_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_25050136__ConstPool__TABLE_hedecc58e_0;

VL_INLINE_OPT void Vysyx_25050136___024root___nba_sequent__TOP__0(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0;
    __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlyVal__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0;
    // Body
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver;
    __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 0U;
    __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 0U;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read;
    if (vlSelfRef.reset) {
        __VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 
            = (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 7U));
        __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 1U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r = 0U;
    } else {
        if ((((~ ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                  | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
              & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o)) 
             & (0U != (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                >> 7U))))) {
            __VdlyVal__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 
                = ((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r
                    : ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                        ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                        : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o));
            __VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 
                = (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                            >> 7U));
            __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1 = 1U;
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                        ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                        ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                        ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((0U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                    : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                        ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                        : 0U));
        }
        if ((((0U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)) 
              | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                 & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready))) 
             | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid) 
                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready)))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand;
        }
        if ((((0U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)) 
              | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                 & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready))) 
             | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid) 
                & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready)))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand;
        }
        if ((0U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r = 1U;
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o) {
                __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read = 1U;
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc 
                    = (((0x73U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                        | ((0x30200073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                           | ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                              | ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                 | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                    & ((~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                       & (0U != vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))
                        ? ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                            ? ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                ? ((0x67U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                    ? ((IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                >> 1U)) 
                                       << 1U) : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                : 0U) : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)
                        : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o);
            }
        } else if ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r = 1U;
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__ar_fire) {
                __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read))) {
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) {
                if (vlSelfRef.ysyx_25050136__DOT__inst_rlast_i) {
                    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read = 0U;
                }
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r 
                    = vlSelfRef.ysyx_25050136__DOT__inst_rdata_i;
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r = 0U;
            } else {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r = 1U;
            }
        }
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r 
        = ((IData)(vlSelfRef.reset) || (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o));
    __Vtableidx1 = (((((IData)(vlSelfRef.ysyx_25050136__DOT__mem_rlast_i) 
                       << 7U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                                 << 6U)) | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__ar_fire) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                                & (3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                               << 4U))) 
                    | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o) 
                        << 3U) | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__resetn))));
    if ((1U & Vysyx_25050136__ConstPool__TABLE_hd6b5aac4_0
         [__Vtableidx1])) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r 
            = Vysyx_25050136__ConstPool__TABLE_heecf2871_0
            [__Vtableidx1];
    }
    if ((2U & Vysyx_25050136__ConstPool__TABLE_hd6b5aac4_0
         [__Vtableidx1])) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read 
            = Vysyx_25050136__ConstPool__TABLE_he3e71d34_0
            [__Vtableidx1];
    }
    if ((4U & Vysyx_25050136__ConstPool__TABLE_hd6b5aac4_0
         [__Vtableidx1])) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r 
            = Vysyx_25050136__ConstPool__TABLE_hedecc58e_0
            [__Vtableidx1];
    }
    if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__resetn) {
        if ((0U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r = 1U;
            if (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o) 
                 & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                    & (0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))) {
                __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r = 1U;
            if (((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire) 
                   | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en)) 
                  & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire)) 
                 | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en) 
                    & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire)))) {
                __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write = 2U;
            }
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en = 1U;
            }
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write))) {
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r = 0U;
                __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write = 0U;
            }
        }
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write = 0U;
    }
    if (__VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0] = 0U;
    }
    if (__VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1] 
            = __VdlyVal__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read;
    vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o = ((~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en)) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write)));
    vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o = (
                                                   (~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en)) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                  & ((IData)(vlSelfRef.io_master_bvalid) 
                     << 1U)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast 
        = (1U & ((((IData)(vlSelfRef.io_master_rlast) 
                   << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__clint_rlast_o)) 
                 >> (1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp 
        = (3U & (((IData)(vlSelfRef.io_master_rresp) 
                  << 2U) >> (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))));
    vlSelfRef.io_master_awid = 0U;
    vlSelfRef.io_master_awlen = 0U;
    vlSelfRef.io_master_awburst = 0U;
    vlSelfRef.io_master_arid = 0U;
    vlSelfRef.io_master_arlen = 0U;
    vlSelfRef.io_master_arburst = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_awsize 
        = ((5U >= (7U & ((IData)(3U) * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))))
            ? (7U & (0x10U >> (7U & ((IData)(3U) * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))))
            : 0U);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                     << 1U)));
    vlSelfRef.ysyx_25050136__DOT__mem_awready_i = (
                                                   (0U 
                                                    != 
                                                    ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                     & ((IData)(vlSelfRef.io_master_awready) 
                                                        << 1U))) 
                                                   & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                      >> 1U));
    vlSelfRef.ysyx_25050136__DOT__mem_wready_i = ((0U 
                                                   != 
                                                   ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                    & ((IData)(vlSelfRef.io_master_wready) 
                                                       << 1U))) 
                                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                     >> 1U));
    if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))) {
        vlSelfRef.ysyx_25050136__DOT__mem_bresp_i = 
            (3U & (((IData)(vlSelfRef.io_master_bresp) 
                    << 2U) >> (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))));
        vlSelfRef.ysyx_25050136__DOT__mem_rresp_i = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp;
    } else {
        vlSelfRef.ysyx_25050136__DOT__mem_bresp_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__mem_rresp_i = 0U;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                  & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                      << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((0U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)
            ? 0x80000000U : ((IData)(4U) + vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc));
    vlSelfRef.ysyx_25050136__DOT__s_arvalid_i = (((1U 
                                                   == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read)) 
                                                  << 1U) 
                                                 | (1U 
                                                    == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read)));
    vlSelfRef.io_master_wvalid = ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                          & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                             << 1U))) 
                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_wlast 
        = (1U & (((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                  << 1U) >> (1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))));
    vlSelfRef.io_master_awvalid = ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                           & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                              << 1U))) 
                                   & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 1U));
    vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__mem_rlast_i = (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast));
    vlSelfRef.ysyx_25050136__DOT__inst_rlast_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                  & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast));
    vlSelfRef.ysyx_25050136__DOT__inst_rresp_i = ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                                   ? (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp)
                                                   : 0U);
    vlSelfRef.io_master_awsize = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_awsize)
                                   : 0U);
    vlSelfRef.io_master_bready = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_awready_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_wready_i));
    vlSelfRef.io_master_rready = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                  & (IData)(vlSelfRef.ysyx_25050136__DOT__s_arvalid_i)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__request 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__s_arvalid_i) 
           | ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
              << 1U));
    vlSelfRef.io_master_wlast = (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                  >> 1U) & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_wlast));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i));
    vlSelfRef.io_master_arvalid = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                   & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id = 0U;
    if ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__request))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand 
            = (1U | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id = 0U;
    } else if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__request))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand 
            = (2U | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id = 1U;
    }
}

VL_INLINE_OPT void Vysyx_25050136___024root___nba_sequent__TOP__1(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___nba_sequent__TOP__1\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align = 0;
    CData/*7:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r = 0;
    CData/*2:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r = 0;
    CData/*7:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count = 0;
    CData/*0:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read = 0;
    // Body
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read;
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime = 0ULL;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read = 0U;
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime 
            = (1ULL + vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime);
        if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) {
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r = 1U;
                if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__r_fire) {
                    if (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count) 
                         == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r))) {
                        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count = 0U;
                        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read = 0U;
                    } else {
                        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count 
                            = (0xffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count)));
                        if ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r))) {
                            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r 
                                = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align 
                                   + ((IData)(1U) << (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r)));
                            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align 
                                = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align 
                                   + ((IData)(1U) << (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r)));
                        } else {
                            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r 
                                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align;
                        }
                        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read = 1U;
                    }
                }
            }
        } else if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__ar_fire) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r = 0U;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align 
                = (vlSelfRef.ysyx_25050136__DOT__clint_araddr_i 
                   & (~ (((IData)(1U) << (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_i)) 
                         - (IData)(1U))));
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r 
                = vlSelfRef.ysyx_25050136__DOT__clint_araddr_i;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_i;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_i;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_i;
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arid_i;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read = 1U;
        } else {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r = 1U;
        }
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r = 0U;
    if (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
         & (2U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r)))) {
        if ((0x20000000U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r 
                = (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime);
        } else if ((0x20000004U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r 
                = (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime 
                           >> 0x20U));
        }
    }
}

void Vysyx_25050136___024root___eval_triggers__act(Vysyx_25050136___024root* vlSelf);
void Vysyx_25050136___024root___eval_act(Vysyx_25050136___024root* vlSelf);

bool Vysyx_25050136___024root___eval_phase__act(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_phase__act\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25050136___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25050136___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vysyx_25050136___024root___eval_nba(Vysyx_25050136___024root* vlSelf);

bool Vysyx_25050136___024root___eval_phase__nba(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_phase__nba\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25050136___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
void Vysyx_25050136___024root___eval_debug_assertions(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_debug_assertions\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_interrupt & 0xfeU)))) {
        Verilated::overWidthError("io_interrupt");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_awready & 0xfeU)))) {
        Verilated::overWidthError("io_master_awready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_wready & 0xfeU)))) {
        Verilated::overWidthError("io_master_wready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bvalid & 0xfeU)))) {
        Verilated::overWidthError("io_master_bvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bresp & 0xfcU)))) {
        Verilated::overWidthError("io_master_bresp");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bid & 0xf0U)))) {
        Verilated::overWidthError("io_master_bid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_arready & 0xfeU)))) {
        Verilated::overWidthError("io_master_arready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rvalid & 0xfeU)))) {
        Verilated::overWidthError("io_master_rvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rresp & 0xfcU)))) {
        Verilated::overWidthError("io_master_rresp");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rlast & 0xfeU)))) {
        Verilated::overWidthError("io_master_rlast");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rid & 0xf0U)))) {
        Verilated::overWidthError("io_master_rid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_awvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awid & 0xf0U)))) {
        Verilated::overWidthError("io_slave_awid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awsize & 0xf8U)))) {
        Verilated::overWidthError("io_slave_awsize");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awburst & 0xfcU)))) {
        Verilated::overWidthError("io_slave_awburst");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_wvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wstrb & 0xf0U)))) {
        Verilated::overWidthError("io_slave_wstrb");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wlast & 0xfeU)))) {
        Verilated::overWidthError("io_slave_wlast");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_bready & 0xfeU)))) {
        Verilated::overWidthError("io_slave_bready");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_arvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arid & 0xf0U)))) {
        Verilated::overWidthError("io_slave_arid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arsize & 0xf8U)))) {
        Verilated::overWidthError("io_slave_arsize");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arburst & 0xfcU)))) {
        Verilated::overWidthError("io_slave_arburst");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_rready & 0xfeU)))) {
        Verilated::overWidthError("io_slave_rready");}
}
#endif  // VL_DEBUG
