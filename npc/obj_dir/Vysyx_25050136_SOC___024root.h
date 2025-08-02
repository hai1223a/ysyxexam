// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25050136_SOC.h for the primary calling header

#ifndef VERILATED_VYSYX_25050136_SOC___024ROOT_H_
#define VERILATED_VYSYX_25050136_SOC___024ROOT_H_  // guard

#include "verilated.h"
class Vysyx_25050136_SOC___024unit;


class Vysyx_25050136_SOC__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25050136_SOC___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_25050136_SOC___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*1:0*/ ysyx_25050136_SOC__DOT__s_arvalid_i;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__inst_arready_i;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__inst_rvalid_i;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__inst_rresp_i;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__mem_awvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__mem_awready_i;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__mem_wvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__mem_wready_i;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__mem_bvalid_i;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__mem_bresp_i;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__mem_arready_i;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__mem_rvalid_i;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__mem_rresp_i;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__sram_bvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__sram_rvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__uart_bvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__uart_rvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__clint_bvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__clint_rvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o;
        CData/*5:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o;
        CData/*3:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__ex2if_pc_updata_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_awvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wvalid_o;
        CData/*3:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wstrb_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_bready_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_arvalid_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_rready_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__gpr_wen_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__jump_en_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__fready_o;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__ar_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__state_read;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_5;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_read;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__ar_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire;
    };
    struct {
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_en;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_en;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__state_write;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__aw_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__w_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid;
        CData/*3:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_id;
        CData/*2:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver;
        CData/*2:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id;
        CData/*2:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand;
        CData/*2:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__request;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT____VdfgExtracted_h31d61774__0;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT____VdfgExtracted_hc2e645a5__0;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT____VdfgExtracted_h5ad72db1__0;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_arready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rvalid_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__ar_fire;
        CData/*4:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__count_delay;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_bvalid_r;
        CData/*3:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__wstatu;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__aw_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__w_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_arready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_rvalid_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__ar_fire;
        CData/*4:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__count_delay;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_bvalid_r;
        CData/*3:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__wstatu;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__aw_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__w_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_rvalid_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__ar_fire;
        CData/*4:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__count_delay;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_bvalid_r;
    };
    struct {
        CData/*3:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r;
        CData/*1:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__wstatu;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__aw_fire;
        CData/*0:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__w_fire;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*14:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o;
        SData/*11:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1;
        SData/*11:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2;
        SData/*11:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__inst_rdata_i;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__mem_rdata_i;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_awaddr_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wdata_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_araddr_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__gpr_data_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__jump_addr_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_araddr_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awaddr_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wdata_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_araddr_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awaddr_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wdata_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awaddr_r;
        IData/*31:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wdata_r;
        IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25050136_SOC__DOT__s_araddr_i;
        QData/*32:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add;
        QData/*63:0*/ ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25050136_SOC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25050136_SOC___024root(Vysyx_25050136_SOC__Syms* symsp, const char* v__name);
    ~Vysyx_25050136_SOC___024root();
    VL_UNCOPYABLE(Vysyx_25050136_SOC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
