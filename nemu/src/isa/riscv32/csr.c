#include <isa.h>
#include "local-include/csr.h"

riscv_csr csrs[6] = {
    {.addr = 0x341, .name = "mepc"},
    {.addr = 0x342, .name = "mcause"},
    {.addr = 0x305, .name = "mtvec"},
    {.addr = 0x300, .name = "mstatus"},
    {.addr = 0xf11, .name = "mvendorid"},
    {.addr = 0xf12, .name = "marchid"},
};
