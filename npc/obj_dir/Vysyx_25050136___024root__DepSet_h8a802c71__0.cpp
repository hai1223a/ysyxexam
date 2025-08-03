// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136.h for the primary calling header

#include "Vysyx_25050136__pch.h"
#include "Vysyx_25050136__Syms.h"
#include "Vysyx_25050136___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136___024root___dump_triggers__ico(Vysyx_25050136___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136___024root___eval_triggers__ico(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_triggers__ico\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("trig ico");
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136___024root___dump_triggers__ico(vlSelf);
    }
#endif
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136___024root___ico_sequent__TOP__0(Vysyx_25050136___024root* vlSelf);

void Vysyx_25050136___024root___eval_ico(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_ico\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func ico");
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_25050136___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136___024unit____Vdpiimwrap_find_ebreak_TOP____024unit();

VL_INLINE_OPT void Vysyx_25050136___024root___ico_sequent__TOP__0(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                  & ((IData)(vlSelfRef.io_master_bvalid) 
                     << 1U)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                  & (((IData)(vlSelfRef.io_master_arready) 
                      << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast 
        = (1U & ((((IData)(vlSelfRef.io_master_rlast) 
                   << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
                             & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count) 
                                == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r)))) 
                 >> (1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp 
        = (3U & (((IData)(vlSelfRef.io_master_rresp) 
                  << 2U) >> (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                  & (((IData)(vlSelfRef.io_master_rvalid) 
                      << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata 
        = (IData)(((((QData)((IData)(vlSelfRef.io_master_rdata)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r))) 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 5U))));
    if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))) {
        vlSelfRef.ysyx_25050136__DOT__mem_bresp_i = 
            (3U & (((IData)(vlSelfRef.io_master_bresp) 
                    << 2U) >> (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))));
        vlSelfRef.ysyx_25050136__DOT__mem_rresp_i = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp;
        vlSelfRef.ysyx_25050136__DOT__mem_rdata_i = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata;
    } else {
        vlSelfRef.ysyx_25050136__DOT__mem_bresp_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__mem_rresp_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__mem_rdata_i = 0U;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_awready_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_wready_i));
    vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__inst_arready_i = 
        ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready) 
         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master));
    vlSelfRef.ysyx_25050136__DOT__mem_arready_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready) 
                                                   & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                      >> 1U));
    vlSelfRef.ysyx_25050136__DOT__mem_rlast_i = (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast));
    vlSelfRef.ysyx_25050136__DOT__inst_rlast_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                  & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast));
    if ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))) {
        vlSelfRef.ysyx_25050136__DOT__inst_rresp_i 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp;
        vlSelfRef.ysyx_25050136__DOT__inst_rdata_i 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata;
    } else {
        vlSelfRef.ysyx_25050136__DOT__inst_rresp_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__inst_rdata_i = 0U;
    }
    vlSelfRef.ysyx_25050136__DOT__inst_rvalid_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid) 
                                                   & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master));
    vlSelfRef.ysyx_25050136__DOT__mem_rvalid_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid) 
                                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__ar_fire 
        = ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read)) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__inst_arready_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__ar_fire 
        = ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read)) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_arready_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rvalid_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_rvalid_i));
    if ((2U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
            = vlSelfRef.ysyx_25050136__DOT__inst_rdata_i;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o 
            = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) 
               & ((IData)(vlSelfRef.ysyx_25050136__DOT__inst_rlast_i) 
                  & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rresp_i))));
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o = 0U;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en 
        = ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
              | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 
        = ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | (0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 
        = (IData)((0x33U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en 
        = ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | (3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                    | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o 
        = (((IData)((0x2003U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
            | (IData)((0x2023U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
            ? 0xfU : (((IData)((0x1023U == (0x707fU 
                                            & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                       | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                          | (IData)((0x1003U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))
                       ? 3U : (((IData)((0x23U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu) 
                                   | (IData)((3U == 
                                              (0x707fU 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))
                                ? 1U : 0U)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
           & (0x20U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0x19U)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw) 
           | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en)
            ? (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__mem_rresp_i))) 
               | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire) 
                  & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__mem_bresp_i))))
            : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs) 
           | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi) 
                                                | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi) 
                                                   | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
           & (0x20U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0x19U)));
    if ((0xfU == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r 
            = vlSelfRef.ysyx_25050136__DOT__mem_rdata_i;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r = 2U;
    } else if ((3U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r 
            = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                ? (((- (IData)((1U & (vlSelfRef.ysyx_25050136__DOT__mem_rdata_i 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.ysyx_25050136__DOT__mem_rdata_i))
                : (0xffffU & vlSelfRef.ysyx_25050136__DOT__mem_rdata_i));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r = 1U;
    } else if ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r 
            = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                ? (((- (IData)((1U & (vlSelfRef.ysyx_25050136__DOT__mem_rdata_i 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.ysyx_25050136__DOT__mem_rdata_i))
                : (0xffU & vlSelfRef.ysyx_25050136__DOT__mem_rdata_i));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r = 0U;
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r = 2U;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o 
        = ((((0x100073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
             << 5U) | (((0x73U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                        << 4U) | ((0x30200073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                  << 3U))) | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)
            ? (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0xfU)) : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                      >> 0xfU))]);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw) 
           | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs) 
              | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o 
        = ((((((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                 & (0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                           >> 0x19U))) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl)) 
               << 0xeU) | (((IData)((0x1013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                            | (IData)((0x1033U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                           << 0xdU)) | ((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai) 
                                          | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                             & (0x20U 
                                                == 
                                                (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 0x19U)))) 
                                         << 0xcU) | 
                                        ((IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                         << 0xbU))) 
            | (((((IData)((0x4063U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                  | ((IData)((0x2013U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                     | (IData)((0x2033U == (0x707fU 
                                            & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))) 
                 << 0xaU) | ((IData)((0x7063U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                             << 9U)) | ((((IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                          | ((IData)(
                                                     (0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                             | (IData)(
                                                       (0x3033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))) 
                                         << 8U) | ((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                                   << 7U)))) 
           | (((((IData)((0x63U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                 << 6U) | (((IData)((0x7033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                            | (IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                           << 5U)) | ((((IData)((0x6033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                        | (IData)((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                       << 4U) | (((IData)(
                                                          (0x4033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                                  | (IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                                 << 3U))) 
              | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub) 
                  << 2U) | ((((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                              | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                 | ((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                    | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                       & (0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 0x19U)))))) 
                             << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5) 
                                       | (0x37U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o 
        = (((0x13U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
            | ((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
               | (0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
            ? ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                ? (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                            >> 0x14U)) : (((- (IData)(
                                                      (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0x14U)))
            : ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                ? (((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                  >> 7U))))
                : (((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                    | (0x37U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))
                    ? (0xfffff000U & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)
                    : ((0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                        ? (((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0x800U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 7U)))))
                        : ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                            ? (((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                              | (0x800U 
                                                 & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U))))
                            : 0U)))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize 
        = ((5U >= (7U & ((IData)(3U) * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))))
            ? (7U & ((2U | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r) 
                            << 3U)) >> (7U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))))
            : 0U);
    if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) {
        vlSelfRef.io_master_wdata = (IData)((((QData)((IData)(
                                                              vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                              [
                                                              (0x1fU 
                                                               & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                                  >> 0x14U))])) 
                                              << 0x20U) 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))));
        vlSelfRef.io_master_wstrb = (0xfU & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                              << 4U) 
                                             >> (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 2U))));
    } else {
        vlSelfRef.io_master_wdata = 0U;
        vlSelfRef.io_master_wstrb = 0U;
    }
    if ((0x20U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        Vysyx_25050136___024unit____Vdpiimwrap_find_ebreak_TOP____024unit();
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr 
        = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
           >> 0x14U);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                    & (0U == (0xf80U & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 
        = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
           >> 0x14U);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 
        = (1U & (~ (IData)(((0U == (0xf8000U & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                            & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                               | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))));
    if ((1U & (~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o) 
                      >> 1U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o) 
                          >> 2U)))) {
                if ((0x10U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0xbU;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0x305U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 1U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0x342U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 1U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 = 0x341U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 1U;
                } else if ((8U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0x341U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 1U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 0U;
                }
            }
        }
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
        = (0x1ffffffffULL & ((QData)((IData)(((0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                               ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                              [(0x1fU 
                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0xfU))]
                                               : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc))) 
                             + (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
        = ((0x37U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
            ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o
            : ((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc
                : ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5)
                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o
                    : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                   [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                              >> 0xfU))])));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o 
        = (((0x33U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
            | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))
            ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                      >> 0x14U))] : (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                      | ((0x13U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
                                      ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o
                                      : 0U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o = 0U;
    if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren) {
        if ((0x341U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc;
        } else if ((0x342U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause;
        } else if ((0x305U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec;
        } else if ((0x300U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus;
        }
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit = 0U;
    if ((0x341U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit 
            = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit)) 
               | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
    }
    if ((0x341U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit 
            = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit)) 
               | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                  << 1U));
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit = 0U;
    if ((0x341U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
        if ((0x342U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit 
                = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit)) 
                   | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        }
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0U;
        if ((0x342U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
            if ((0x305U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit 
                    = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit)) 
                       | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
            }
            if ((0x305U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                if ((0x300U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit 
                        = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit)) 
                           | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
                }
            }
        }
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0U;
    }
    if ((0x341U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
        if ((0x342U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit)) 
                   | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                      << 1U));
        }
        if ((0x342U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
            if ((0x305U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit 
                    = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit)) 
                       | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                          << 1U));
            }
            if ((0x305U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                if ((0x300U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit 
                        = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit)) 
                           | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                              << 1U));
                }
            }
        }
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 
        = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
           ^ vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub)
            ? ((IData)(1U) + (~ vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
            : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 = 0U;
    if ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o;
    } else if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
               | vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o);
    } else if ((4U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
               & (~ vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o));
    } else if ((0x10U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
        = ((IData)((0U != (0xffU & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))))
            ? ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o
                : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o))) 
                       + (IData)((0x1ffffffffULL & 
                                  VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))))
                    : ((4U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? ((IData)((0x1ffffffffULL 
                                    & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o))) 
                           + (IData)((0x1ffffffffULL 
                                      & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))))
                        : ((8U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2
                            : ((0x10U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                   | vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                : ((0x20U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                       & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                    : ((0x40U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (1U & (~ (IData)(
                                                           (0U 
                                                            != vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))
                                        : (0U != vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))))))
            : ((0x100U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                   < vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                : ((0x200U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                       >= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                    : ((0x400U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? VL_LTS_III(32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                        : ((0x800U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? VL_GTES_III(32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                            : ((0x1000U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                                 (0x1fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                : ((0x2000U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                       << (0x1fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                    : ((0x4000U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                           >> (0x1fU 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                        : 0U))))))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
            ? 0U : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr 
        = (IData)((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                    << 0x20U) >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id), 5U))));
    vlSelfRef.ysyx_25050136__DOT__s_araddr_i = (((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr 
        = (IData)((vlSelfRef.ysyx_25050136__DOT__s_araddr_i 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))));
    if ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) {
        vlSelfRef.ysyx_25050136__DOT__clint_arsize_i 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize;
        vlSelfRef.ysyx_25050136__DOT__clint_araddr_i 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr;
    } else {
        vlSelfRef.ysyx_25050136__DOT__clint_arsize_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__clint_araddr_i = 0U;
    }
    if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) {
        vlSelfRef.io_master_arsize = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize;
        vlSelfRef.io_master_awaddr = (IData)((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                               << 0x20U) 
                                              >> (0x3fU 
                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))));
        vlSelfRef.io_master_araddr = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr;
    } else {
        vlSelfRef.io_master_arsize = 0U;
        vlSelfRef.io_master_awaddr = 0U;
        vlSelfRef.io_master_araddr = 0U;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr 
        = (IData)((vlSelfRef.ysyx_25050136__DOT__s_araddr_i 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id), 5U))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT____VdfgExtracted_hef0ff64a__0 
        = (((0x2000000U <= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr) 
            & (0x200ffffU >= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr)) 
           | ((0x2000000U <= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr) 
              & (0x200ffffU >= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand = 0U;
    if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT____VdfgExtracted_hef0ff64a__0) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand 
            = (1U | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id = 0U;
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand 
            = (2U | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136___024root___dump_triggers__act(Vysyx_25050136___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25050136___024root___eval_triggers__act(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_triggers__act\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("trig act");
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25050136___024root___dump_triggers__act(vlSelf);
    }
#endif
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136___024root___eval_act(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_act\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func act");
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}

void Vysyx_25050136___024root___nba_sequent__TOP__0(Vysyx_25050136___024root* vlSelf);

void Vysyx_25050136___024root___eval_nba(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval_nba\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("func nba");
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25050136___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
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
    CData/*0:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en = 0;
    CData/*0:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master = 0;
    CData/*1:0*/ __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver = 0;
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
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en;
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
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r;
    __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read 
        = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read;
    if (vlSelfRef.reset) {
        __VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 
            = (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 7U));
        __VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0 = 1U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime = 0ULL;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read = 0U;
        __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id = 0U;
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
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime 
            = (1ULL + vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__mtime);
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
                __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en = 1U;
            }
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire) {
                __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write))) {
            if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r = 0U;
                __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write = 0U;
            }
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
                   & (~ (((IData)(1U) << (IData)(vlSelfRef.ysyx_25050136__DOT__clint_arsize_i)) 
                         - (IData)(1U))));
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r 
                = vlSelfRef.ysyx_25050136__DOT__clint_araddr_i;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r = 0U;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r 
                = vlSelfRef.ysyx_25050136__DOT__clint_arsize_i;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r = 0U;
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rid_r = 0U;
            __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read = 1U;
        } else {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r = 1U;
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
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.reset))))));
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
    if (__VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v0] = 0U;
    }
    if (__VdlySet__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[__VdlyDim0__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1] 
            = __VdlyVal__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr__v1;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_align;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arburst_r;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arsize_r;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read;
    vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o = ((~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en)) 
                                                  & (1U 
                                                     == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write)));
    vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o = (
                                                   (~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en)) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp 
        = (3U & (((IData)(vlSelfRef.io_master_rresp) 
                  << 2U) >> (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o 
        = ((0U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)
            ? 0x80000000U : ((IData)(4U) + vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc));
    vlSelfRef.ysyx_25050136__DOT__s_arvalid_i = (((1U 
                                                   == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read)) 
                                                  << 1U) 
                                                 | (1U 
                                                    == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                  & (((IData)(vlSelfRef.io_master_arready) 
                      << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast 
        = (1U & ((((IData)(vlSelfRef.io_master_rlast) 
                   << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
                             & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__rdata_count) 
                                == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arlen_r)))) 
                 >> (1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id))));
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
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__request 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__s_arvalid_i) 
           | ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
              << 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata 
        = (IData)(((((QData)((IData)(vlSelfRef.io_master_rdata)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_rdata_r))) 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 5U))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                  & ((IData)(vlSelfRef.io_master_bvalid) 
                     << 1U)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                  & (((IData)(vlSelfRef.io_master_rvalid) 
                      << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master 
        = __Vdly__ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master;
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
    vlSelfRef.io_master_awid = 0U;
    vlSelfRef.io_master_awlen = 0U;
    vlSelfRef.io_master_awburst = 0U;
    vlSelfRef.io_master_arid = 0U;
    vlSelfRef.io_master_arlen = 0U;
    vlSelfRef.io_master_arburst = 0U;
    vlSelfRef.io_master_wlast = (IData)((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                          >> 1U) & 
                                         (((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                           << 1U) >> 
                                          (1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))));
    vlSelfRef.ysyx_25050136__DOT__mem_rlast_i = (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                  >> 1U) 
                                                 & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast));
    vlSelfRef.io_master_awvalid = ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                           & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
                                              << 1U))) 
                                   & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 1U));
    vlSelfRef.io_master_wvalid = ((0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                          & ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
                                             << 1U))) 
                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__inst_arready_i = 
        ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready) 
         & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master));
    vlSelfRef.ysyx_25050136__DOT__mem_arready_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready) 
                                                   & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                      >> 1U));
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
        vlSelfRef.ysyx_25050136__DOT__mem_rdata_i = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata;
        vlSelfRef.ysyx_25050136__DOT__mem_rresp_i = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp;
        vlSelfRef.ysyx_25050136__DOT__mem_bresp_i = 
            (3U & (((IData)(vlSelfRef.io_master_bresp) 
                    << 2U) >> (3U & VL_SHIFTL_III(2,2,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))));
    } else {
        vlSelfRef.ysyx_25050136__DOT__mem_rdata_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__mem_rresp_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__mem_bresp_i = 0U;
    }
    if ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))) {
        vlSelfRef.ysyx_25050136__DOT__inst_rresp_i 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp;
        vlSelfRef.ysyx_25050136__DOT__inst_rdata_i 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata;
    } else {
        vlSelfRef.ysyx_25050136__DOT__inst_rresp_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__inst_rdata_i = 0U;
    }
    vlSelfRef.ysyx_25050136__DOT__inst_rlast_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                  & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rlast));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                  & (IData)(vlSelfRef.ysyx_25050136__DOT__s_arvalid_i)));
    vlSelfRef.ysyx_25050136__DOT__inst_rvalid_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid) 
                                                   & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready 
        = (0U != ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                  & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                      << 1U) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))));
    vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__mem_rvalid_i = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid) 
                                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master) 
                                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__ar_fire 
        = ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read)) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__inst_arready_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__ar_fire 
        = ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read)) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_arready_i));
    vlSelfRef.io_master_bready = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_awvalid_o) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_awready_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__mem_wvalid_o) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_wready_i));
    vlSelfRef.io_master_arvalid = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                   & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                      >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__ar_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r) 
           & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
              & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rvalid_i));
    vlSelfRef.io_master_rready = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                  & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                     >> 1U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__r_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_CLINT__DOT__state_read) 
           & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
              & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_bvalid_i));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
           & (IData)(vlSelfRef.ysyx_25050136__DOT__mem_rvalid_i));
    if ((2U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
            = vlSelfRef.ysyx_25050136__DOT__inst_rdata_i;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o 
            = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire) 
               & ((IData)(vlSelfRef.ysyx_25050136__DOT__inst_rlast_i) 
                  & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__inst_rresp_i))));
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o = 0U;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en 
        = ((0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
              | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5 
        = ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | (0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1 
        = (IData)((0x33U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en 
        = ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
           | (3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                    | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o 
        = (((IData)((0x2003U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
            | (IData)((0x2023U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
            ? 0xfU : (((IData)((0x1023U == (0x707fU 
                                            & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                       | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu) 
                          | (IData)((0x1003U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))
                       ? 3U : (((IData)((0x23U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu) 
                                   | (IData)((3U == 
                                              (0x707fU 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))
                                ? 1U : 0U)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
           & (0x20U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0x19U)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw) 
           | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en)
            ? (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__mem_rresp_i))) 
               | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire) 
                  & (0U == (IData)(vlSelfRef.ysyx_25050136__DOT__mem_bresp_i))))
            : (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs) 
           | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi) 
                                                | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi) 
                                                   | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
           & (0x20U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0x19U)));
    if ((0xfU == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r 
            = vlSelfRef.ysyx_25050136__DOT__mem_rdata_i;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r = 2U;
    } else if ((3U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r 
            = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                ? (((- (IData)((1U & (vlSelfRef.ysyx_25050136__DOT__mem_rdata_i 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.ysyx_25050136__DOT__mem_rdata_i))
                : (0xffffU & vlSelfRef.ysyx_25050136__DOT__mem_rdata_i));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r = 1U;
    } else if ((1U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r 
            = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                ? (((- (IData)((1U & (vlSelfRef.ysyx_25050136__DOT__mem_rdata_i 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.ysyx_25050136__DOT__mem_rdata_i))
                : (0xffU & vlSelfRef.ysyx_25050136__DOT__mem_rdata_i));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r = 0U;
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__load_data_r = 0U;
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r = 2U;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o 
        = ((((0x100073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
             << 5U) | (((0x73U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                        << 4U) | ((0x30200073U == vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                  << 3U))) | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)
            ? (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                        >> 0xfU)) : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                      >> 0xfU))]);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw) 
           | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs) 
              | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc) 
                 | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o 
        = ((((((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                 & (0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                           >> 0x19U))) | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl)) 
               << 0xeU) | (((IData)((0x1013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                            | (IData)((0x1033U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                           << 0xdU)) | ((((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai) 
                                          | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                                             & (0x20U 
                                                == 
                                                (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 0x19U)))) 
                                         << 0xcU) | 
                                        ((IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                         << 0xbU))) 
            | (((((IData)((0x4063U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                  | ((IData)((0x2013U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                     | (IData)((0x2033U == (0x707fU 
                                            & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))) 
                 << 0xaU) | ((IData)((0x7063U == (0x707fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                             << 9U)) | ((((IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                          | ((IData)(
                                                     (0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                             | (IData)(
                                                       (0x3033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))) 
                                         << 8U) | ((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                                   << 7U)))) 
           | (((((IData)((0x63U == (0x707fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                 << 6U) | (((IData)((0x7033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                            | (IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                           << 5U)) | ((((IData)((0x6033U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                        | (IData)((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                       << 4U) | (((IData)(
                                                          (0x4033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                                  | (IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                                                 << 3U))) 
              | (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub) 
                  << 2U) | ((((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                              | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                 | ((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))) 
                                    | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                                       & (0U == (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 0x19U)))))) 
                             << 1U) | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5) 
                                       | (0x37U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o 
        = (((0x13U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
            | ((3U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
               | (0x67U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
            ? ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                ? (0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                            >> 0x14U)) : (((- (IData)(
                                                      (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                             >> 0x14U)))
            : ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                ? (((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                  >> 7U))))
                : (((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                    | (0x37U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))
                    ? (0xfffff000U & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)
                    : ((0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                        ? (((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0x800U & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                 >> 7U)))))
                        : ((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                            ? (((- (IData)((vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                              | (0x800U 
                                                 & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U))))
                            : 0U)))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize 
        = ((5U >= (7U & ((IData)(3U) * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))))
            ? (7U & ((2U | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arsize_r) 
                            << 3U)) >> (7U & ((IData)(3U) 
                                              * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))))
            : 0U);
    if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) {
        vlSelfRef.io_master_awsize = ((5U >= (7U & 
                                              ((IData)(3U) 
                                               * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id))))
                                       ? (7U & (0x10U 
                                                >> 
                                                (7U 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id)))))
                                       : 0U);
        vlSelfRef.io_master_wdata = (IData)((((QData)((IData)(
                                                              vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                                              [
                                                              (0x1fU 
                                                               & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                                  >> 0x14U))])) 
                                              << 0x20U) 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))));
        vlSelfRef.io_master_wstrb = (0xfU & (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o) 
                                              << 4U) 
                                             >> (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 2U))));
    } else {
        vlSelfRef.io_master_awsize = 0U;
        vlSelfRef.io_master_wdata = 0U;
        vlSelfRef.io_master_wstrb = 0U;
    }
    if ((0x20U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        Vysyx_25050136___024unit____Vdpiimwrap_find_ebreak_TOP____024unit();
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr 
        = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
           >> 0x14U);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                    & (0U == (0xf80U & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 
        = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
           >> 0x14U);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 
        = (1U & (~ (IData)(((0U == (0xf8000U & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                            & ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                               | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))));
    if ((1U & (~ (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o) 
                      >> 1U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o) 
                          >> 2U)))) {
                if ((0x10U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2 = 0xbU;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0x305U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 1U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2 = 0x342U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2 = 1U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1 = 0x341U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 1U;
                } else if ((8U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr = 0x341U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren = 1U;
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1 = 0U;
                }
            }
        }
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
        = (0x1ffffffffULL & ((QData)((IData)(((0x67U 
                                               == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                               ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                              [(0x1fU 
                                                & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0xfU))]
                                               : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc))) 
                             + (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
        = ((0x37U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
            ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o
            : ((0x17U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc
                : ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5)
                    ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o
                    : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                   [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                              >> 0xfU))])));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o 
        = (((0x33U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
            | (0x63U == (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))
            ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
           [(0x1fU & (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                      >> 0x14U))] : (((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                      | ((0x13U == 
                                          (0x7fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                         | (0x17U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))
                                      ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o
                                      : 0U));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o = 0U;
    if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren) {
        if ((0x341U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc;
        } else if ((0x342U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause;
        } else if ((0x305U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec;
        } else if ((0x300U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
                = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus;
        }
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit = 0U;
    if ((0x341U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit 
            = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit)) 
               | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
    }
    if ((0x341U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit 
            = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit)) 
               | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                  << 1U));
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit = 0U;
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit = 0U;
    if ((0x341U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
        if ((0x342U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit 
                = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit)) 
                   | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
        }
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0U;
        if ((0x342U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
            if ((0x305U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit 
                    = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit)) 
                       | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
            }
            if ((0x305U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                if ((0x300U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1))) {
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit 
                        = ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit)) 
                           | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
                }
            }
        }
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit = 0U;
    }
    if ((0x341U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
        if ((0x342U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
            vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit 
                = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit)) 
                   | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                      << 1U));
        }
        if ((0x342U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
            if ((0x305U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit 
                    = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit)) 
                       | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                          << 1U));
            }
            if ((0x305U != (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                if ((0x300U == (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2))) {
                    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit 
                        = ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit)) 
                           | ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2) 
                              << 1U));
                }
            }
        }
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2 
        = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
           ^ vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub)
            ? ((IData)(1U) + (~ vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
            : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 = 0U;
    if ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o;
    } else if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
               | vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o);
    } else if ((4U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o 
               & (~ vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o));
    } else if ((0x10U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o))) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out 
        = ((IData)((0U != (0xffU & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))))
            ? ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o
                : ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? ((IData)((0x1ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o))) 
                       + (IData)((0x1ffffffffULL & 
                                  VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))))
                    : ((4U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? ((IData)((0x1ffffffffULL 
                                    & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o))) 
                           + (IData)((0x1ffffffffULL 
                                      & VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2))))
                        : ((8U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2
                            : ((0x10U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                   | vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                : ((0x20U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                       & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)
                                    : ((0x40U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (1U & (~ (IData)(
                                                           (0U 
                                                            != vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))
                                        : (0U != vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2))))))))
            : ((0x100U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                   < vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                : ((0x200U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                    ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                       >= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                    : ((0x400U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                        ? VL_LTS_III(32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                        : ((0x800U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                            ? VL_GTES_III(32, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o)
                            : ((0x1000U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                ? VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                                 (0x1fU 
                                                  & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                : ((0x2000U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                    ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                       << (0x1fU & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                    : ((0x4000U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o))
                                        ? (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                                           >> (0x1fU 
                                               & vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))
                                        : 0U))))))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o 
        = ((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
            ? 0U : vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out);
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr 
        = (IData)((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                    << 0x20U) >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id), 5U))));
    vlSelfRef.ysyx_25050136__DOT__s_araddr_i = (((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr 
        = (IData)((vlSelfRef.ysyx_25050136__DOT__s_araddr_i 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))));
    if ((1U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) {
        vlSelfRef.ysyx_25050136__DOT__clint_arsize_i 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize;
        vlSelfRef.ysyx_25050136__DOT__clint_araddr_i 
            = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr;
    } else {
        vlSelfRef.ysyx_25050136__DOT__clint_arsize_i = 0U;
        vlSelfRef.ysyx_25050136__DOT__clint_araddr_i = 0U;
    }
    if ((2U & (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) {
        vlSelfRef.io_master_arsize = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_arsize;
        vlSelfRef.io_master_awaddr = (IData)((((QData)((IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o)) 
                                               << 0x20U) 
                                              >> (0x3fU 
                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id), 5U))));
        vlSelfRef.io_master_araddr = vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr;
    } else {
        vlSelfRef.io_master_arsize = 0U;
        vlSelfRef.io_master_awaddr = 0U;
        vlSelfRef.io_master_araddr = 0U;
    }
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr 
        = (IData)((vlSelfRef.ysyx_25050136__DOT__s_araddr_i 
                   >> (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__master_id), 5U))));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT____VdfgExtracted_hef0ff64a__0 
        = (((0x2000000U <= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr) 
            & (0x200ffffU >= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr)) 
           | ((0x2000000U <= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr) 
              & (0x200ffffU >= vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr)));
    vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand = 0U;
    if (vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT____VdfgExtracted_hef0ff64a__0) {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand 
            = (1U | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id = 0U;
    } else {
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand 
            = (2U | (IData)(vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand));
        vlSelfRef.ysyx_25050136__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id = 1U;
    }
}

bool Vysyx_25050136___024root___eval_phase__ico(Vysyx_25050136___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25050136___024root___dump_triggers__nba(Vysyx_25050136___024root* vlSelf);
#endif  // VL_DEBUG
bool Vysyx_25050136___024root___eval_phase__act(Vysyx_25050136___024root* vlSelf);
bool Vysyx_25050136___024root___eval_phase__nba(Vysyx_25050136___024root* vlSelf);

void Vysyx_25050136___024root___eval(Vysyx_25050136___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136___024root___eval\n"); );
    Vysyx_25050136__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("eval");
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop ico");
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25050136___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/soc.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_25050136___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop nba");
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25050136___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/soc.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPush("loop act");
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25050136___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/soc.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25050136___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
        if (Vysyx_25050136___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
    VL_EXEC_TRACE_ADD_RECORD(vlSymsp).sectionPop();
}
