#include <isa.h>
#include "local-include/csr.h"

riscv_csr csrs[3] = {
    {.addr = 0x341, .name = "mepc"},
    {.addr = 0x300, .name = "mstatus"},
    {.addr = 0x342, .name = "mcause"}
};
