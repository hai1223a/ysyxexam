// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void find_addr_0();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_find_addr_0_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_find_addr_0_TOP____024unit\n"); );
    // Body
    find_addr_0();
}

extern "C" void find_ebreak();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_find_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_find_ebreak_TOP____024unit\n"); );
    // Body
    find_ebreak();
}

extern "C" void find_resp();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_find_resp_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_find_resp_TOP____024unit\n"); );
    // Body
    find_resp();
}

extern "C" void find_diff_skip();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_find_diff_skip_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_find_diff_skip_TOP____024unit\n"); );
    // Body
    find_diff_skip();
}

extern "C" void fetch_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_fetch_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_fetch_get_TOP____024unit\n"); );
    // Body
    fetch_get();
}

extern "C" void commit_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_commit_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_commit_get_TOP____024unit\n"); );
    // Body
    commit_get();
}

extern "C" void load_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_load_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_load_get_TOP____024unit\n"); );
    // Body
    load_get();
}

extern "C" void store_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_store_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_store_get_TOP____024unit\n"); );
    // Body
    store_get();
}

extern "C" void jump_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_jump_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_jump_get_TOP____024unit\n"); );
    // Body
    jump_get();
}

extern "C" void branch_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_branch_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_branch_get_TOP____024unit\n"); );
    // Body
    branch_get();
}

extern "C" void alu_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_alu_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_alu_get_TOP____024unit\n"); );
    // Body
    alu_get();
}

extern "C" void system_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_system_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_system_get_TOP____024unit\n"); );
    // Body
    system_get();
}

extern "C" void predict_miss_count();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_predict_miss_count_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_predict_miss_count_TOP____024unit\n"); );
    // Body
    predict_miss_count();
}

extern "C" void predict_not_jump_count();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_predict_not_jump_count_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_predict_not_jump_count_TOP____024unit\n"); );
    // Body
    predict_not_jump_count();
}

extern "C" void related_delay_get();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_related_delay_get_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_related_delay_get_TOP____024unit\n"); );
    // Body
    related_delay_get();
}

extern "C" void icache_get(int cache_type);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_icache_get_TOP____024unit(IData/*31:0*/ cache_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_icache_get_TOP____024unit\n"); );
    // Body
    int cache_type__Vcvt;
    for (size_t cache_type__Vidx = 0; cache_type__Vidx < 1; ++cache_type__Vidx) cache_type__Vcvt = cache_type;
    icache_get(cache_type__Vcvt);
}

extern "C" void icache_miss(int cache_type);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_icache_miss_TOP____024unit(IData/*31:0*/ cache_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_icache_miss_TOP____024unit\n"); );
    // Body
    int cache_type__Vcvt;
    for (size_t cache_type__Vidx = 0; cache_type__Vidx < 1; ++cache_type__Vidx) cache_type__Vcvt = cache_type;
    icache_miss(cache_type__Vcvt);
}

extern "C" void icache_misscycle(int cache_type);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_icache_misscycle_TOP____024unit(IData/*31:0*/ cache_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_icache_misscycle_TOP____024unit\n"); );
    // Body
    int cache_type__Vcvt;
    for (size_t cache_type__Vidx = 0; cache_type__Vidx < 1; ++cache_type__Vidx) cache_type__Vcvt = cache_type;
    icache_misscycle(cache_type__Vcvt);
}

extern "C" void dcache_get(int cache_type);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_dcache_get_TOP____024unit(IData/*31:0*/ cache_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_dcache_get_TOP____024unit\n"); );
    // Body
    int cache_type__Vcvt;
    for (size_t cache_type__Vidx = 0; cache_type__Vidx < 1; ++cache_type__Vidx) cache_type__Vcvt = cache_type;
    dcache_get(cache_type__Vcvt);
}

extern "C" void dcache_misscycle(int cache_type);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_dcache_misscycle_TOP____024unit(IData/*31:0*/ cache_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_dcache_misscycle_TOP____024unit\n"); );
    // Body
    int cache_type__Vcvt;
    for (size_t cache_type__Vidx = 0; cache_type__Vidx < 1; ++cache_type__Vidx) cache_type__Vcvt = cache_type;
    dcache_misscycle(cache_type__Vcvt);
}

extern "C" void psram_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    psram_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void psram_write(int addr, int data, int len);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    psram_write(addr__Vcvt, data__Vcvt, len__Vcvt);
}

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}
