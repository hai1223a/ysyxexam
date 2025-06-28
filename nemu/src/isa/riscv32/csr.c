#include <isa.h>
#include "local-include/csr.h"

riscv_csr csrs[4] = {
    {.addr = 0x341, .name = "mepc"},
    {.addr = 0x342, .name = "mcause"},
    {.addr = 0x305, .name = "mtvec"},
    {.addr = 0x300, .name = "mstatus"},
    
};
