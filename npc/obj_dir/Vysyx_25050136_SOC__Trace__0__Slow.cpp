// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25050136_SOC__Syms.h"


VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_init_sub__TOP__0(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ysyx_25050136_SOC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"TOP_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"TOP_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"TOP_MASTER_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"TOP_SLAVER_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"s_awvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"s_awready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+3,0,"s_awaddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"s_wvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"s_wready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+7,0,"s_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9,0,"s_wstrb_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"s_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"s_bready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"s_bresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"s_arvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"s_arready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+15,0,"s_araddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+17,0,"s_rvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"s_rready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+19,0,"s_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"s_rresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"m_awready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+24,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+27,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"m_wready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+29,0,"m_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+32,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+33,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"m_bready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+382,0,"m_bresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+35,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"m_arready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+37,0,"m_araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+40,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"m_rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+42,0,"m_rdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+383,0,"m_rresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+45,0,"inst_arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"inst_arready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"inst_araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"inst_rvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"inst_rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"inst_rdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"inst_rresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+384,0,"inst_awvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"inst_awready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"inst_awaddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+384,0,"inst_wvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"inst_wready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"inst_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"inst_wstrb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+54,0,"inst_bvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"inst_bready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"inst_bresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+56,0,"mem_awvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"mem_awready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"mem_awaddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"mem_wvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"mem_wready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"mem_wstrb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,0,"mem_bvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"mem_bready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"mem_bresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"mem_arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"mem_arready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"mem_araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"mem_rvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"mem_rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"mem_rresp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+73,0,"sram_awvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"sram_awready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"sram_awaddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"sram_wvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"sram_wready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"sram_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"sram_wstrb_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"sram_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"sram_bready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"sram_bresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+82,0,"sram_arvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"sram_arready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"sram_araddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"sram_rvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"sram_rready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"sram_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"sram_rresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"uart_awvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"uart_awready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"uart_awaddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"uart_wvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"uart_wready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"uart_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"uart_wstrb_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+95,0,"uart_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"uart_bready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"uart_bresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,0,"uart_arvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"uart_arready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"uart_araddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"uart_rvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"uart_rready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"uart_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"uart_rresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+102,0,"clint_awvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"clint_awready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"clint_awaddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"clint_wvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"clint_wready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"clint_wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"clint_wstrb_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"clint_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"clint_bready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"clint_bresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+111,0,"clint_arvalid_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"clint_arready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"clint_araddr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"clint_rvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"clint_rready_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"clint_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"clint_rresp_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_SRAM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"s_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"s_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"s_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+76,0,"s_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"s_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"s_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"s_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+80,0,"s_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"s_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"s_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+82,0,"s_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"s_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"s_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"s_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"s_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"s_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"s_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+389,0,"RAM_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"s_araddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"s_arready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"s_rvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"s_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"count_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+387,0,"IEDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+390,0,"WAIT_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+388,0,"WAIT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+391,0,"GOOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+74,0,"s_awready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"s_wready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"s_bvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"s_awaddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"s_wdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"s_wstrb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+126,0,"wstatu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+127,0,"wstrb_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"aw_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"b_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_ARBITER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"MASTER_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"SLAVER_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"s_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"s_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+3,0,"s_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"s_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+6,0,"s_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+7,0,"s_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+9,0,"s_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"s_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,0,"s_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"s_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"s_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"s_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+15,0,"s_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+17,0,"s_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"s_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+19,0,"s_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+21,0,"s_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+23,0,"m_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+24,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+27,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+28,0,"m_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+29,0,"m_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+32,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+33,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"m_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+382,0,"m_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+35,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+37,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+40,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+41,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+42,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBus(c+383,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+392,0,"s0_Laddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+393,0,"s0_Raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+394,0,"s1_Laddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+395,0,"s1_Raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+396,0,"s2_Laddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"s2_Raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"t_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"t_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"t_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"t_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"t_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"t_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"t_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,0,"t_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"t_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"t_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+141,0,"t_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"t_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"t_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"t_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"t_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"t_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"t_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"for_s_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"for_s_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"current_master",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+151,0,"current_master_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+152,0,"master_grand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+153,0,"master_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+154,0,"current_slaver",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+155,0,"current_slaver_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"slaver_grand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"slaver_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+158,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_CLINT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"s_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"s_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"s_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+105,0,"s_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"s_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"s_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"s_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+109,0,"s_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"s_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+388,0,"s_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+111,0,"s_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"s_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"s_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"s_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"s_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"s_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"s_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+159,0,"mtime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+389,0,"RAM_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"s_araddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"s_arready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"s_rvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"s_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+163,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"count_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+387,0,"IEDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+390,0,"WAIT_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+388,0,"WAIT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+391,0,"GOOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+103,0,"s_awready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"s_wready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"s_bvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"s_awaddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"s_wdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"s_wstrb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+170,0,"wstatu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+171,0,"wstrb_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,0,"aw_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"b_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_NPC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+378,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"inst_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"inst_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"inst_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"inst_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"inst_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"inst_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"inst_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+56,0,"mem_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"mem_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"mem_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"mem_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"mem_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"mem_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"mem_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,0,"mem_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"mem_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"mem_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"mem_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"mem_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"mem_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"mem_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"mem_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"mem_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"mem_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+175,0,"if2id_static_npc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"if2id_inst_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+177,0,"if2id_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"id2reg_raddr1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+179,0,"id2reg_raddr2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+180,0,"id2reg_rd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+181,0,"id2reg_rd_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"id2ex_fu_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"id2ex_alu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+184,0,"id2ex_lsu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+185,0,"id2ex_bqu_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+186,0,"id2ex_csru_op_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+187,0,"id2ex_alu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"id2ex_alu_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"id2ex_lsu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"id2ex_bqu_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"id2ex_bqu_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"id2ex_csru_opd1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"id2ex_csru_opd2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+47,0,"id2ex_pc_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"id2ex_mem_signed_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"id2ex_csru_wen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"id2ex_csru_ren_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"id2if_fready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"id2ex_bvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"id2ex_mem_mask_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,0,"reg2id_rdata1_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"reg2id_rdata2_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"ex2reg_gpr_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"ex2if_jump_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"ex2if_jump_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"ex2id_fready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"ex2reg_gpr_wen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"ex2if_pc_updata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+401,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+402,0,"m_wdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+404,0,"m_bready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+406,0,"m_araddr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+407,0,"m_rready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"gpr_wen_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"gpr_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+410,0,"jump_en_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+411,0,"jump_addr_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+412,0,"fready_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_EX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+181,0,"rd_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"fu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+184,0,"lsu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+185,0,"bqu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+186,0,"csru_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+187,0,"alu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"alu_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"bqu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"bqu_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"lsu_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"csru_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"csru_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+195,0,"csru_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"csru_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"m_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"m_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"m_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"m_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"m_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+198,0,"mem_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+194,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"gpr_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"gpr_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"jump_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"jump_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+177,0,"fvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"fready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"alu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"alu_out_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+206,0,"lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"mem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"load_data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"mem_valid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"bqu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"bqu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"csru_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"csru_rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+215,0,"fready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+204,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+216,0,"add_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+187,0,"add_sub_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"add_sub_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"op1_xor_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"sra_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"sll_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"srl_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_BQU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+211,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+224,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+226,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_CSRU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+213,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"operation_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+192,0,"csru_opd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"csru_opd2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+196,0,"csru_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"csru_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"csru_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"csr_wdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"csr_wdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"csr_waddr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+230,0,"csr_waddr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+231,0,"csr_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+232,0,"csr_wen1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"csr_wen2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"csr_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ysyx_25050136_CSR_File", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"csr_waddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+232,0,"csr_wen1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+227,0,"csr_wdata1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"csr_waddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+233,0,"csr_wen2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"csr_wdata2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"csr_raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+234,0,"csr_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"MEPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+414,0,"MCAUSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+415,0,"MTVEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+416,0,"MSTATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+235,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"mepc_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"mcause_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+241,0,"mtvec_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+242,0,"mstatus_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+243,0,"mepc_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"mcause_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"mtvec_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"mstatus_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"m_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"m_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"m_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"m_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"m_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"m_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"m_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,0,"m_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"m_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"m_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+177,0,"fvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"mem_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"mem_wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"mem_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+194,0,"mem_signed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+205,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"store_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"load_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"mem_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"m_arvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"m_rready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"load_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"m_awvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"m_wvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"m_bready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"aw_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"b_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_ID", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+378,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"static_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"rdata1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"raddr1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+189,0,"rdata2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"raddr2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"fu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+183,0,"alu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+184,0,"lsu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+185,0,"bqu_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+186,0,"csru_op_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+187,0,"alu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"alu_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"bqu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"bqu_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"lsu_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"csru_opd1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"csru_opd2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+196,0,"csru_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"csru_wen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"mem_mask_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+194,0,"mem_signed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+181,0,"rd_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+177,0,"fvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"fready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+180,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+178,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+179,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+256,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+257,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+258,0,"type_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"type_op_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"type_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"type_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"type_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"type_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"type_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"type_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"type_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"type_system",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"funct3_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"funct3_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"funct3_010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"funct3_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"funct3_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"funct3_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"funct3_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"funct3_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"funct7_0000000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"funct7_0100000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"inst_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"inst_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"inst_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"inst_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"inst_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"inst_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"inst_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"inst_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"inst_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"inst_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"inst_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"inst_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"inst_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"inst_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"inst_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"inst_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"inst_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"inst_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"inst_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"inst_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"inst_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"inst_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"inst_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"inst_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"inst_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"inst_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"inst_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"inst_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"inst_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"inst_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"inst_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"inst_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"inst_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"inst_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"inst_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"inst_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"inst_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"inst_csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"inst_csrrwi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"inst_csrrsi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"inst_csrrci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"inst_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"inst_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"inst_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"inst_Rtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"inst_Itype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"inst_Stype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"inst_Utype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"inst_Btype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"inst_Jtype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_IF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"resetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"m_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"m_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"m_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"m_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"m_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"m_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"m_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+202,0,"dynamic_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"dynamic_npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"static_npc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+197,0,"bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"m_arvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"m_rready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+326,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+327,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_RegisterFile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+378,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+203,0,"wen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"raddr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"rdata1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"raddr2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+189,0,"rdata2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gpr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+329+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25050136_UART", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"s_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"s_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+90,0,"s_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,0,"s_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"s_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"s_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"s_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+95,0,"s_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"s_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+387,0,"s_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,0,"s_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"s_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"s_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"s_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"s_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"s_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,0,"s_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+389,0,"RAM_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+361,0,"s_araddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"s_arready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"s_rvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"s_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+363,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+365,0,"count_delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+387,0,"IEDL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+390,0,"WAIT_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+388,0,"WAIT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+391,0,"GOOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+89,0,"s_awready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"s_wready_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"s_bvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+367,0,"s_awaddr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"s_wdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"s_wstrb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+370,0,"wstatu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+371,0,"wstrb_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+372,0,"aw_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"b_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_init_top(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_init_top\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25050136_SOC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25050136_SOC___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25050136_SOC___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_register(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_register\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25050136_SOC___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25050136_SOC___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25050136_SOC___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25050136_SOC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_const_0_sub_0(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_const_0\n"); );
    // Init
    Vysyx_25050136_SOC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_SOC___024root*>(voidSelf);
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25050136_SOC___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_const_0_sub_0(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_const_0_sub_0\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+378,(5U),32);
    bufp->fullIData(oldp+379,(0x20U),32);
    bufp->fullIData(oldp+380,(2U),32);
    bufp->fullIData(oldp+381,(3U),32);
    bufp->fullCData(oldp+382,(0x20U),6);
    bufp->fullCData(oldp+383,(8U),6);
    bufp->fullBit(oldp+384,(0U));
    bufp->fullIData(oldp+385,(0U),32);
    bufp->fullCData(oldp+386,(0U),4);
    bufp->fullCData(oldp+387,(0U),2);
    bufp->fullCData(oldp+388,(2U),2);
    bufp->fullIData(oldp+389,(1U),32);
    bufp->fullCData(oldp+390,(1U),2);
    bufp->fullCData(oldp+391,(3U),2);
    bufp->fullIData(oldp+392,(0x80000000U),32);
    bufp->fullIData(oldp+393,(0x88000000U),32);
    bufp->fullIData(oldp+394,(0xa0000300U),32);
    bufp->fullIData(oldp+395,(0xa0000400U),32);
    bufp->fullIData(oldp+396,(0xa0000040U),32);
    bufp->fullIData(oldp+397,(0xa0000050U),32);
    bufp->fullBit(oldp+398,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__ex2if_pc_updata_o));
    bufp->fullBit(oldp+399,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_awvalid_o));
    bufp->fullIData(oldp+400,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_awaddr_o),32);
    bufp->fullBit(oldp+401,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wvalid_o));
    bufp->fullIData(oldp+402,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wdata_o),32);
    bufp->fullCData(oldp+403,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_wstrb_o),4);
    bufp->fullBit(oldp+404,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_bready_o));
    bufp->fullBit(oldp+405,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_arvalid_o));
    bufp->fullIData(oldp+406,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_araddr_o),32);
    bufp->fullBit(oldp+407,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__m_rready_o));
    bufp->fullBit(oldp+408,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__gpr_wen_o));
    bufp->fullIData(oldp+409,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__gpr_data_o),32);
    bufp->fullBit(oldp+410,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__jump_en_o));
    bufp->fullIData(oldp+411,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__jump_addr_o),32);
    bufp->fullBit(oldp+412,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__fready_o));
    bufp->fullSData(oldp+413,(0x341U),12);
    bufp->fullSData(oldp+414,(0x342U),12);
    bufp->fullSData(oldp+415,(0x305U),12);
    bufp->fullSData(oldp+416,(0x300U),12);
    bufp->fullIData(oldp+417,(0U),32);
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_full_0_sub_0(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_full_0\n"); );
    // Init
    Vysyx_25050136_SOC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25050136_SOC___024root*>(voidSelf);
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25050136_SOC___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25050136_SOC___024root__trace_full_0_sub_0(Vysyx_25050136_SOC___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25050136_SOC___024root__trace_full_0_sub_0\n"); );
    Vysyx_25050136_SOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    bufp->fullCData(oldp+1,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) 
                             << 1U)),2);
    bufp->fullCData(oldp+2,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i) 
                              << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r))))) 
                                        & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
    bufp->fullQData(oldp+3,(((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awaddr_o)) 
                             << 0x20U)),64);
    bufp->fullCData(oldp+5,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o) 
                             << 1U)),2);
    bufp->fullCData(oldp+6,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i) 
                              << 1U) | ((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                                & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r))))) 
                                        & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
    bufp->fullQData(oldp+7,(((QData)((IData)(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                                              [(0x1fU 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U))]
                                               : 0U))) 
                             << 0x20U)),64);
    bufp->fullCData(oldp+9,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                               ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o)
                               : 0U) << 4U)),8);
    bufp->fullCData(oldp+10,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i) 
                               << 1U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                                         & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master)))),2);
    bufp->fullCData(oldp+11,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r) 
                              << 1U)),2);
    bufp->fullCData(oldp+12,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bresp_i) 
                               << 2U) | ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                                          ? ((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                              ? ((5U 
                                                  >= 
                                                  (7U 
                                                   & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U)))
                                                  ? 
                                                 (3U 
                                                  & (0x20U 
                                                     >> 
                                                     (7U 
                                                      & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                                  : 0U)
                                              : 3U)
                                          : 0U))),4);
    bufp->fullCData(oldp+13,(vlSelfRef.ysyx_25050136_SOC__DOT__s_arvalid_i),2);
    bufp->fullCData(oldp+14,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i) 
                               << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i))),2);
    bufp->fullQData(oldp+15,(vlSelfRef.ysyx_25050136_SOC__DOT__s_araddr_i),64);
    bufp->fullCData(oldp+17,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i) 
                               << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i))),2);
    bufp->fullCData(oldp+18,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r) 
                               << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r))),2);
    bufp->fullQData(oldp+19,((((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rdata_i)))),64);
    bufp->fullCData(oldp+21,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rresp_i) 
                               << 2U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rresp_i))),4);
    bufp->fullCData(oldp+22,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                                               << 2U) 
                                              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                              | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid))) 
                                       & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
    bufp->fullCData(oldp+23,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                               << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                          << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r)))),3);
    __Vtemp_1[0U] = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                      : 0U);
    __Vtemp_1[1U] = (IData)((((QData)((IData)(((4U 
                                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                                : 0U))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((2U 
                                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                                            : 0U)))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)(((4U 
                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                 ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((2U 
                                                             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                             ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                                             : 0U)))) 
                             >> 0x20U));
    bufp->fullWData(oldp+24,(__Vtemp_1),96);
    bufp->fullCData(oldp+27,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                                               << 2U) 
                                              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                              | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid))) 
                                       & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
    bufp->fullCData(oldp+28,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                               << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                          << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r)))),3);
    __Vtemp_2[0U] = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                      : 0U);
    __Vtemp_2[1U] = (IData)((((QData)((IData)(((4U 
                                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                                : 0U))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((2U 
                                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                                            : 0U)))));
    __Vtemp_2[2U] = (IData)(((((QData)((IData)(((4U 
                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                 ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((2U 
                                                             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                             ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                                             : 0U)))) 
                             >> 0x20U));
    bufp->fullWData(oldp+29,(__Vtemp_2),96);
    bufp->fullSData(oldp+32,(((((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                 ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                 : 0U) << 8U) | (((
                                                   (2U 
                                                    & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                    ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                                    : 0U) 
                                                  << 4U) 
                                                 | ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                     ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                                     : 0U)))),12);
    bufp->fullCData(oldp+33,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_bvalid_o) 
                               << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_bvalid_o) 
                                          << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_bvalid_o)))),3);
    bufp->fullCData(oldp+34,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                               << 2U) 
                                              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                              | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready))) 
                                       & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
    bufp->fullCData(oldp+35,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                                               << 2U) 
                                              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                              | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid))) 
                                       & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
    bufp->fullCData(oldp+36,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r) 
                               << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_arready_r) 
                                          << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_arready_r)))),3);
    __Vtemp_3[0U] = ((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                      ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                      : 0U);
    __Vtemp_3[1U] = (IData)((((QData)((IData)(((4U 
                                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                                : 0U))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((2U 
                                                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                            ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                                            : 0U)))));
    __Vtemp_3[2U] = (IData)(((((QData)((IData)(((4U 
                                                 & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                 ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((2U 
                                                             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                                             ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                                             : 0U)))) 
                             >> 0x20U));
    bufp->fullWData(oldp+37,(__Vtemp_3),96);
    bufp->fullCData(oldp+40,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o) 
                               << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_rvalid_o) 
                                          << 1U) | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_rvalid_o)))),3);
    bufp->fullCData(oldp+41,(((0xfffffffcU & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                               << 2U) 
                                              & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))) 
                              | (3U & ((- (IData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready))) 
                                       & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))))),3);
    __Vtemp_4[0U] = (IData)((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r)));
    __Vtemp_4[1U] = (IData)(((QData)((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r)) 
                             >> 0x20U));
    __Vtemp_4[2U] = ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o)
                      ? ((0xa0000048U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                          ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime)
                          : ((0xa000004cU == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                              ? (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime 
                                         >> 0x20U))
                              : 0U)) : 0U);
    bufp->fullWData(oldp+42,(__Vtemp_4),96);
    bufp->fullBit(oldp+45,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r));
    bufp->fullBit(oldp+46,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i));
    bufp->fullIData(oldp+47,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc),32);
    bufp->fullBit(oldp+48,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rvalid_i));
    bufp->fullBit(oldp+49,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_rready_r));
    bufp->fullIData(oldp+50,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rdata_i),32);
    bufp->fullCData(oldp+51,(vlSelfRef.ysyx_25050136_SOC__DOT__inst_rresp_i),2);
    bufp->fullBit(oldp+52,(((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                    & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                        << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r))))) 
                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
    bufp->fullBit(oldp+53,(((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                    & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                        << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r))))) 
                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
    bufp->fullBit(oldp+54,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid) 
                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))));
    bufp->fullCData(oldp+55,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master))
                               ? ((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                   ? ((5U >= (7U & 
                                              VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U)))
                                       ? (3U & (0x20U 
                                                >> 
                                                (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                       : 0U) : 3U) : 0U)),2);
    bufp->fullBit(oldp+56,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o));
    bufp->fullBit(oldp+57,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i));
    bufp->fullIData(oldp+58,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awaddr_o),32);
    bufp->fullBit(oldp+59,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o));
    bufp->fullBit(oldp+60,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i));
    bufp->fullIData(oldp+61,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                              [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                         >> 0x14U))]
                               : 0U)),32);
    bufp->fullCData(oldp+62,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o)
                               ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o)
                               : 0U)),4);
    bufp->fullBit(oldp+63,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bvalid_i));
    bufp->fullBit(oldp+64,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_bready_r));
    bufp->fullCData(oldp+65,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bresp_i),2);
    bufp->fullBit(oldp+66,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o));
    bufp->fullBit(oldp+67,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i));
    bufp->fullIData(oldp+68,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o)
                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o
                               : 0U)),32);
    bufp->fullBit(oldp+69,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rvalid_i));
    bufp->fullBit(oldp+70,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_rready_r));
    bufp->fullIData(oldp+71,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i),32);
    bufp->fullCData(oldp+72,(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rresp_i),2);
    bufp->fullBit(oldp+73,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullBit(oldp+74,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r));
    bufp->fullIData(oldp+75,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                               : 0U)),32);
    bufp->fullBit(oldp+76,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullBit(oldp+77,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r));
    bufp->fullIData(oldp+78,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                               : 0U)),32);
    bufp->fullCData(oldp+79,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                               : 0U)),4);
    bufp->fullBit(oldp+80,(vlSelfRef.ysyx_25050136_SOC__DOT__sram_bvalid_o));
    bufp->fullBit(oldp+81,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullBit(oldp+82,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullBit(oldp+83,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_arready_r));
    bufp->fullIData(oldp+84,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                               : 0U)),32);
    bufp->fullBit(oldp+85,(vlSelfRef.ysyx_25050136_SOC__DOT__sram_rvalid_o));
    bufp->fullBit(oldp+86,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                            & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))));
    bufp->fullIData(oldp+87,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rdata_r),32);
    bufp->fullBit(oldp+88,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                            & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                               >> 1U))));
    bufp->fullBit(oldp+89,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r));
    bufp->fullIData(oldp+90,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                               : 0U)),32);
    bufp->fullBit(oldp+91,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                            & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                               >> 1U))));
    bufp->fullBit(oldp+92,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r));
    bufp->fullIData(oldp+93,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                               : 0U)),32);
    bufp->fullCData(oldp+94,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                               : 0U)),4);
    bufp->fullBit(oldp+95,(vlSelfRef.ysyx_25050136_SOC__DOT__uart_bvalid_o));
    bufp->fullBit(oldp+96,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                            & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                               >> 1U))));
    bufp->fullBit(oldp+97,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                            & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                               >> 1U))));
    bufp->fullBit(oldp+98,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_arready_r));
    bufp->fullIData(oldp+99,(((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                               ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                               : 0U)),32);
    bufp->fullBit(oldp+100,(vlSelfRef.ysyx_25050136_SOC__DOT__uart_rvalid_o));
    bufp->fullBit(oldp+101,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                >> 1U))));
    bufp->fullBit(oldp+102,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                >> 2U))));
    bufp->fullBit(oldp+103,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r));
    bufp->fullIData(oldp+104,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr
                                : 0U)),32);
    bufp->fullBit(oldp+105,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                >> 2U))));
    bufp->fullBit(oldp+106,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r));
    bufp->fullIData(oldp+107,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata
                                : 0U)),32);
    bufp->fullCData(oldp+108,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb)
                                : 0U)),4);
    bufp->fullBit(oldp+109,(vlSelfRef.ysyx_25050136_SOC__DOT__clint_bvalid_o));
    bufp->fullBit(oldp+110,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                >> 2U))));
    bufp->fullBit(oldp+111,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                >> 2U))));
    bufp->fullBit(oldp+112,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_arready_r));
    bufp->fullIData(oldp+113,(((4U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr
                                : 0U)),32);
    bufp->fullBit(oldp+114,(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o));
    bufp->fullBit(oldp+115,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                >> 2U))));
    bufp->fullIData(oldp+116,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o)
                                ? ((0xa0000048U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                                    ? (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime)
                                    : ((0xa000004cU 
                                        == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r)
                                        ? (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime 
                                                   >> 0x20U))
                                        : 0U)) : 0U)),32);
    bufp->fullIData(oldp+117,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_araddr_r),32);
    bufp->fullBit(oldp+118,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_rvalid_r));
    bufp->fullBit(oldp+119,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__ar_fire));
    bufp->fullBit(oldp+120,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_rvalid_o) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
    bufp->fullCData(oldp+121,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__count_delay),5);
    bufp->fullBit(oldp+122,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_bvalid_r));
    bufp->fullIData(oldp+123,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awaddr_r),32);
    bufp->fullIData(oldp+124,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wdata_r),32);
    bufp->fullCData(oldp+125,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r),4);
    bufp->fullCData(oldp+126,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__wstatu),2);
    bufp->fullIData(oldp+127,(((((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r) 
                                                   >> 3U)))) 
                                 << 0x18U) | (0xff0000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r) 
                                                                >> 2U)))) 
                                                 << 0x10U))) 
                               | ((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r) 
                                                             >> 1U)))) 
                                              << 8U)) 
                                  | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wstrb_r)))))))),32);
    bufp->fullBit(oldp+128,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__aw_fire));
    bufp->fullBit(oldp+129,(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__w_fire));
    bufp->fullBit(oldp+130,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__sram_bvalid_o) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver)))));
    bufp->fullBit(oldp+131,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awvalid));
    bufp->fullBit(oldp+132,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                    & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awready_r) 
                                        << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awready_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_awready_r)))))));
    bufp->fullIData(oldp+133,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_awaddr),32);
    bufp->fullBit(oldp+134,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wvalid));
    bufp->fullBit(oldp+135,((0U != ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                    & (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wready_r) 
                                        << 2U) | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wready_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_SRAM__DOT__s_wready_r)))))));
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wdata),32);
    bufp->fullCData(oldp+137,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_wstrb),4);
    bufp->fullBit(oldp+138,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bvalid));
    bufp->fullBit(oldp+139,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready));
    bufp->fullCData(oldp+140,(((0U != (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver))
                                ? ((5U >= (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U)))
                                    ? (3U & (0x20U 
                                             >> (7U 
                                                 & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id), 1U))))
                                    : 0U) : 3U)),2);
    bufp->fullBit(oldp+141,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arvalid));
    bufp->fullBit(oldp+142,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_arready));
    bufp->fullIData(oldp+143,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_araddr),32);
    bufp->fullBit(oldp+144,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rvalid));
    bufp->fullBit(oldp+145,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready));
    bufp->fullIData(oldp+146,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rdata),32);
    bufp->fullCData(oldp+147,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rresp),2);
    bufp->fullIData(oldp+148,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_awaddr),32);
    bufp->fullIData(oldp+149,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__for_s_araddr),32);
    bufp->fullCData(oldp+150,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master),2);
    bufp->fullCData(oldp+151,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_master_id),2);
    bufp->fullCData(oldp+152,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_grand),2);
    bufp->fullCData(oldp+153,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__master_id),2);
    bufp->fullCData(oldp+154,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver),3);
    bufp->fullCData(oldp+155,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver_id),3);
    bufp->fullCData(oldp+156,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_grand),3);
    bufp->fullCData(oldp+157,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__slaver_id),3);
    bufp->fullCData(oldp+158,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__request),2);
    bufp->fullQData(oldp+159,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+161,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_araddr_r),32);
    bufp->fullBit(oldp+162,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_rvalid_r));
    bufp->fullBit(oldp+163,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__ar_fire));
    bufp->fullBit(oldp+164,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_rvalid_o) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U)))));
    bufp->fullCData(oldp+165,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__count_delay),5);
    bufp->fullBit(oldp+166,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_bvalid_r));
    bufp->fullIData(oldp+167,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_awaddr_r),32);
    bufp->fullIData(oldp+168,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wdata_r),32);
    bufp->fullCData(oldp+169,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r),4);
    bufp->fullCData(oldp+170,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__wstatu),2);
    bufp->fullIData(oldp+171,(((((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r) 
                                                   >> 3U)))) 
                                 << 0x18U) | (0xff0000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r) 
                                                                >> 2U)))) 
                                                 << 0x10U))) 
                               | ((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r) 
                                                             >> 1U)))) 
                                              << 8U)) 
                                  | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__s_wstrb_r)))))))),32);
    bufp->fullBit(oldp+172,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__aw_fire));
    bufp->fullBit(oldp+173,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_CLINT__DOT__w_fire));
    bufp->fullBit(oldp+174,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__clint_bvalid_o) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 2U)))));
    bufp->fullIData(oldp+175,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_static_npc_o),32);
    bufp->fullIData(oldp+176,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o),32);
    bufp->fullBit(oldp+177,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_bvalid_o));
    bufp->fullCData(oldp+178,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+179,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+180,((0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                        >> 7U))),5);
    bufp->fullBit(oldp+181,((1U & (~ ((0x23U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                      | (0x63U == (0x7fU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
    bufp->fullCData(oldp+182,(((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en) 
                                 << 3U) | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en) 
                                   << 1U) | (1U & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))))),4);
    bufp->fullSData(oldp+183,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_op_o),15);
    bufp->fullCData(oldp+184,((((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                << 1U) | (3U == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))),2);
    bufp->fullCData(oldp+185,((((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                << 2U) | (((0x6fU == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                           << 1U) | 
                                          (0x67U == 
                                           (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))),3);
    bufp->fullCData(oldp+186,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_op_o),6);
    bufp->fullIData(oldp+187,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o),32);
    bufp->fullIData(oldp+188,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o),32);
    bufp->fullIData(oldp+189,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                              [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+190,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                               [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xfU))]
                                : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc)),32);
    bufp->fullIData(oldp+191,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_bqu_opd2_o),32);
    bufp->fullIData(oldp+192,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_csru_opd1_o),32);
    bufp->fullSData(oldp+193,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+194,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o));
    bufp->fullBit(oldp+195,((1U & (~ (IData)(((0U == 
                                               (0xf8000U 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                              & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_7) 
                                                 | (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc))))))));
    bufp->fullBit(oldp+196,((1U & (~ ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_8) 
                                      & (0U == (0xf80U 
                                                & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))))));
    bufp->fullBit(oldp+197,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o));
    bufp->fullCData(oldp+198,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o),4);
    bufp->fullIData(oldp+199,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
                              [(0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+200,(((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                ? ((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i
                                    : ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                        ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                            : (0xffffU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                        : ((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                            ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                                : (0xffU 
                                                   & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                            : 0U)))
                                : ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)
                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o
                                    : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o))),32);
    bufp->fullIData(oldp+201,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                    ? ((0x67U == (0x7fU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                        ? ((IData)(
                                                   (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                    >> 1U)) 
                                           << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                    : 0U) : vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o)),32);
    bufp->fullBit(oldp+202,(((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                             | ((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                | ((0x67U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                   | ((0x6fU == (0x7fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                      | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en) 
                                         & ((~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)) 
                                            & (0U != vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out)))))))));
    bufp->fullBit(oldp+203,(((~ ((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                 | (0x63U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))) 
                             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2if_fready_o))));
    bufp->fullBit(oldp+204,((1U & (~ (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en)))));
    bufp->fullIData(oldp+205,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__alu_out_o),32);
    bufp->fullBit(oldp+206,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__lsu_en));
    bufp->fullBit(oldp+207,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_ren));
    bufp->fullBit(oldp+208,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__mem_wen));
    bufp->fullIData(oldp+209,(((0xfU == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i
                                : ((3U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                    ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                        : (0xffffU 
                                           & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                    : ((1U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_mask_o))
                                        ? ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_mem_signed_o)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                            : (0xffU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__mem_rdata_i))
                                        : 0U)))),32);
    bufp->fullBit(oldp+210,((((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire) 
                              & (0U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_rresp_i))) 
                             | ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire) 
                                & (0U == (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_bresp_i))))));
    bufp->fullBit(oldp+211,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en));
    bufp->fullIData(oldp+212,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__bqu_en)
                                ? ((0x67U == (0x7fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                    ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                                >> 1U)) 
                                       << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))
                                : 0U)),32);
    bufp->fullBit(oldp+213,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_en));
    bufp->fullIData(oldp+214,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__csru_rdata_o),32);
    bufp->fullBit(oldp+215,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__fready_r));
    bufp->fullQData(oldp+216,((0x1ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o) 
                                                 + 
                                                 VL_EXTENDS_QI(33,32, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2)))),33);
    bufp->fullIData(oldp+218,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__add_sub_op2),32);
    bufp->fullIData(oldp+219,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__op1_xor_op2),32);
    bufp->fullIData(oldp+220,(VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o, 
                                             (0x1fU 
                                              & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+221,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                               << (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+222,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd1_o 
                               >> (0x1fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__id2ex_alu_opd2_o))),32);
    bufp->fullIData(oldp+223,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_ALU__DOT__out),32);
    bufp->fullQData(oldp+224,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add),33);
    bufp->fullIData(oldp+226,(((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))
                                ? ((IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add 
                                            >> 1U)) 
                                   << 1U) : (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_BQU__DOT__result_add))),32);
    bufp->fullIData(oldp+227,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1),32);
    bufp->fullIData(oldp+228,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2),32);
    bufp->fullSData(oldp+229,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr1),12);
    bufp->fullSData(oldp+230,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_waddr2),12);
    bufp->fullSData(oldp+231,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_raddr),12);
    bufp->fullBit(oldp+232,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen1));
    bufp->fullBit(oldp+233,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wen2));
    bufp->fullBit(oldp+234,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_ren));
    bufp->fullIData(oldp+235,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc),32);
    bufp->fullIData(oldp+236,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause),32);
    bufp->fullIData(oldp+237,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec),32);
    bufp->fullIData(oldp+238,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus),32);
    bufp->fullCData(oldp+239,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit),2);
    bufp->fullCData(oldp+240,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit),2);
    bufp->fullCData(oldp+241,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit),2);
    bufp->fullCData(oldp+242,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit),2);
    bufp->fullIData(oldp+243,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mepc_hit))
                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                    : 0U))),32);
    bufp->fullIData(oldp+244,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mcause_hit))
                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                    : 0U))),32);
    bufp->fullIData(oldp+245,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mtvec_hit))
                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                    : 0U))),32);
    bufp->fullIData(oldp+246,(((1U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata1
                                : ((2U & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__u_ysyx_25050136_CSR_File__DOT__mstatus_hit))
                                    ? vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_CSRU__DOT__csr_wdata2
                                    : 0U))),32);
    bufp->fullBit(oldp+247,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_arvalid_r));
    bufp->fullBit(oldp+248,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arvalid_o) 
                             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_arready_i))));
    bufp->fullBit(oldp+249,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__r_fire));
    bufp->fullBit(oldp+250,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_awvalid_r));
    bufp->fullBit(oldp+251,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__m_wvalid_r));
    bufp->fullBit(oldp+252,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awvalid_o) 
                             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_awready_i))));
    bufp->fullBit(oldp+253,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wvalid_o) 
                             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__mem_wready_i))));
    bufp->fullBit(oldp+254,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_EX__DOT__u_ysyx_25050136_LSU__DOT__b_fire));
    bufp->fullCData(oldp+255,((0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),7);
    bufp->fullCData(oldp+256,((7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+257,((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+258,((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+259,((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+260,((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+261,((0x23U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+262,((0x33U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+263,((0x37U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+264,((0x63U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+265,((0x67U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+266,((0x6fU == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+267,((0x73U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))));
    bufp->fullBit(oldp+268,((0U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+269,((1U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+270,((2U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+271,((3U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+272,((4U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+273,((5U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+274,((6U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+275,((7U == (7U & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+276,((0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                    >> 0x19U))));
    bufp->fullBit(oldp+277,((0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U))));
    bufp->fullBit(oldp+278,((IData)((0x63U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+279,((IData)((0x1063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+280,((IData)((0x4063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+281,((IData)((0x5063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+282,((IData)((0x6063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+283,((IData)((0x7063U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+284,((IData)((3U == (0x707fU 
                                            & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+285,((IData)((0x1003U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+286,((IData)((0x2003U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+287,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lbu));
    bufp->fullBit(oldp+288,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_lhu));
    bufp->fullBit(oldp+289,((IData)((0x23U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+290,((IData)((0x1023U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+291,((IData)((0x2023U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+292,((IData)((0x13U == (0x707fU 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+293,((IData)((0x2013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+294,((IData)((0x3013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+295,((IData)((0x4013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+296,((IData)((0x6013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+297,((IData)((0x7013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+298,((IData)((0x1013U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+299,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_0) 
                             & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+300,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai));
    bufp->fullBit(oldp+301,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT____VdfgRegularize_h2f5766ca_0_1) 
                             & (0U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                       >> 0x19U)))));
    bufp->fullBit(oldp+302,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_sub));
    bufp->fullBit(oldp+303,((IData)((0x1033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+304,((IData)((0x2033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+305,((IData)((0x3033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+306,((IData)((0x4033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+307,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl));
    bufp->fullBit(oldp+308,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srl) 
                             & (0x20U == (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                          >> 0x19U)))));
    bufp->fullBit(oldp+309,((IData)((0x6033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+310,((IData)((0x7033U == (0x707fU 
                                                 & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullBit(oldp+311,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrw));
    bufp->fullBit(oldp+312,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrs));
    bufp->fullBit(oldp+313,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrc));
    bufp->fullBit(oldp+314,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrwi));
    bufp->fullBit(oldp+315,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_csrrsi));
    bufp->fullBit(oldp+316,((0x30200073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    bufp->fullBit(oldp+317,((0x73U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    bufp->fullBit(oldp+318,((0x100073U == vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)));
    bufp->fullBit(oldp+319,(((0x13U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                             | ((3U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                                | (0x67U == (0x7fU 
                                             & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o))))));
    bufp->fullBit(oldp+320,(((0x17U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)) 
                             | (0x37U == (0x7fU & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)))));
    bufp->fullIData(oldp+321,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_ID__DOT__inst_srai)
                                ? (0x1fU & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x14U))
                                : (((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                >> 0x14U)))),32);
    bufp->fullIData(oldp+322,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+323,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+324,((0xfffff000U & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o)),32);
    bufp->fullIData(oldp+325,((((- (IData)((vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o) 
                                              | (0x800U 
                                                 & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__if2id_inst_o 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+326,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__inst_r),32);
    bufp->fullBit(oldp+327,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__inst_arready_i) 
                             & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__m_arvalid_r))));
    bufp->fullBit(oldp+328,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__r_fire));
    bufp->fullIData(oldp+329,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[0]),32);
    bufp->fullIData(oldp+330,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[1]),32);
    bufp->fullIData(oldp+331,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[2]),32);
    bufp->fullIData(oldp+332,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[3]),32);
    bufp->fullIData(oldp+333,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[4]),32);
    bufp->fullIData(oldp+334,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[5]),32);
    bufp->fullIData(oldp+335,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[6]),32);
    bufp->fullIData(oldp+336,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[7]),32);
    bufp->fullIData(oldp+337,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[8]),32);
    bufp->fullIData(oldp+338,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[9]),32);
    bufp->fullIData(oldp+339,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10]),32);
    bufp->fullIData(oldp+340,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[11]),32);
    bufp->fullIData(oldp+341,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[12]),32);
    bufp->fullIData(oldp+342,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[13]),32);
    bufp->fullIData(oldp+343,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[14]),32);
    bufp->fullIData(oldp+344,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[15]),32);
    bufp->fullIData(oldp+345,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[16]),32);
    bufp->fullIData(oldp+346,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[17]),32);
    bufp->fullIData(oldp+347,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[18]),32);
    bufp->fullIData(oldp+348,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[19]),32);
    bufp->fullIData(oldp+349,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[20]),32);
    bufp->fullIData(oldp+350,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[21]),32);
    bufp->fullIData(oldp+351,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[22]),32);
    bufp->fullIData(oldp+352,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[23]),32);
    bufp->fullIData(oldp+353,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[24]),32);
    bufp->fullIData(oldp+354,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[25]),32);
    bufp->fullIData(oldp+355,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[26]),32);
    bufp->fullIData(oldp+356,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[27]),32);
    bufp->fullIData(oldp+357,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[28]),32);
    bufp->fullIData(oldp+358,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[29]),32);
    bufp->fullIData(oldp+359,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[30]),32);
    bufp->fullIData(oldp+360,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[31]),32);
    bufp->fullIData(oldp+361,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_araddr_r),32);
    bufp->fullBit(oldp+362,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_rvalid_r));
    bufp->fullBit(oldp+363,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__ar_fire));
    bufp->fullBit(oldp+364,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_rvalid_o) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_rready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 1U)))));
    bufp->fullCData(oldp+365,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__count_delay),5);
    bufp->fullBit(oldp+366,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_bvalid_r));
    bufp->fullIData(oldp+367,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_awaddr_r),32);
    bufp->fullIData(oldp+368,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wdata_r),32);
    bufp->fullCData(oldp+369,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r),4);
    bufp->fullCData(oldp+370,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__wstatu),2);
    bufp->fullIData(oldp+371,(((((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r) 
                                                   >> 3U)))) 
                                 << 0x18U) | (0xff0000U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r) 
                                                                >> 2U)))) 
                                                 << 0x10U))) 
                               | ((0xff00U & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r) 
                                                             >> 1U)))) 
                                              << 8U)) 
                                  | (0xffU & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__s_wstrb_r)))))))),32);
    bufp->fullBit(oldp+372,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__aw_fire));
    bufp->fullBit(oldp+373,(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_UART__DOT__w_fire));
    bufp->fullBit(oldp+374,(((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__uart_bvalid_o) 
                             & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__t_bready) 
                                & ((IData)(vlSelfRef.ysyx_25050136_SOC__DOT__u_ysyx_25050136_ARBITER__DOT__current_slaver) 
                                   >> 1U)))));
    bufp->fullBit(oldp+375,(vlSelfRef.clk));
    bufp->fullBit(oldp+376,(vlSelfRef.reset));
    bufp->fullBit(oldp+377,((1U & (~ (IData)(vlSelfRef.reset)))));
}
