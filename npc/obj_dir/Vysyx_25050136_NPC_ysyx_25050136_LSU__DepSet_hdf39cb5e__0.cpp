// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25050136_NPC.h for the primary calling header

#include "Vysyx_25050136_NPC__pch.h"
#include "Vysyx_25050136_NPC_ysyx_25050136_LSU.h"

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_LSU___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0(Vysyx_25050136_NPC_ysyx_25050136_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_25050136_NPC_ysyx_25050136_LSU___ico_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U == (IData)(vlSelfRef.__PVT__mem_len_i))) {
        vlSelfRef.__PVT__mem_wdata_o = vlSelfRef.__PVT__store_data_i;
        vlSelfRef.__PVT__load_data_o = vlSelfRef.__PVT__mem_rdata_i;
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_len_i))) {
        vlSelfRef.__PVT__mem_wdata_o = VL_EXTEND_II(32,16, 
                                                    (0xffffU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__store_data_i, 0U, 0x10U)));
        vlSelfRef.__PVT__load_data_o = ((IData)(vlSelfRef.__PVT__mem_signed_i)
                                         ? VL_CONCAT_III(32,16,16, 
                                                         (0xffffU 
                                                          & VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0xfU)), 0x10U)), 
                                                         (0xffffU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0U, 0x10U)))
                                         : VL_EXTEND_II(32,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0U, 0x10U))));
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_len_i))) {
        vlSelfRef.__PVT__mem_wdata_o = VL_EXTEND_II(32,8, 
                                                    (0xffU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__store_data_i, 0U, 8U)));
        vlSelfRef.__PVT__load_data_o = ((IData)(vlSelfRef.__PVT__mem_signed_i)
                                         ? VL_CONCAT_III(32,24,8, 
                                                         (0xffffffU 
                                                          & VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 7U)), 0x18U)), 
                                                         (0xffU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0U, 8U)))
                                         : VL_EXTEND_II(32,8, 
                                                        (0xffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0U, 8U))));
    } else {
        vlSelfRef.__PVT__mem_wdata_o = 0U;
        vlSelfRef.__PVT__load_data_o = 0U;
    }
}

VL_INLINE_OPT void Vysyx_25050136_NPC_ysyx_25050136_LSU___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0(Vysyx_25050136_NPC_ysyx_25050136_LSU* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vysyx_25050136_NPC_ysyx_25050136_LSU___nba_sequent__TOP__ysyx_25050136_NPC__u_ysyx_25050136_EX__u_ysyx_25050136_LSU__0\n"); );
    Vysyx_25050136_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U == (IData)(vlSelfRef.__PVT__mem_len_i))) {
        vlSelfRef.__PVT__mem_wdata_o = vlSelfRef.__PVT__store_data_i;
        vlSelfRef.__PVT__load_data_o = vlSelfRef.__PVT__mem_rdata_i;
    } else if ((2U == (IData)(vlSelfRef.__PVT__mem_len_i))) {
        vlSelfRef.__PVT__mem_wdata_o = VL_EXTEND_II(32,16, 
                                                    (0xffffU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__store_data_i, 0U, 0x10U)));
        vlSelfRef.__PVT__load_data_o = ((IData)(vlSelfRef.__PVT__mem_signed_i)
                                         ? VL_CONCAT_III(32,16,16, 
                                                         (0xffffU 
                                                          & VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0xfU)), 0x10U)), 
                                                         (0xffffU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0U, 0x10U)))
                                         : VL_EXTEND_II(32,16, 
                                                        (0xffffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0U, 0x10U))));
    } else if ((1U == (IData)(vlSelfRef.__PVT__mem_len_i))) {
        vlSelfRef.__PVT__mem_wdata_o = VL_EXTEND_II(32,8, 
                                                    (0xffU 
                                                     & VL_SEL_IIII(32, vlSelfRef.__PVT__store_data_i, 0U, 8U)));
        vlSelfRef.__PVT__load_data_o = ((IData)(vlSelfRef.__PVT__mem_signed_i)
                                         ? VL_CONCAT_III(32,24,8, 
                                                         (0xffffffU 
                                                          & VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 7U)), 0x18U)), 
                                                         (0xffU 
                                                          & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0U, 8U)))
                                         : VL_EXTEND_II(32,8, 
                                                        (0xffU 
                                                         & VL_SEL_IIII(32, vlSelfRef.__PVT__mem_rdata_i, 0U, 8U))));
    } else {
        vlSelfRef.__PVT__mem_wdata_o = 0U;
        vlSelfRef.__PVT__load_data_o = 0U;
    }
}
