#ifndef __REG_H__
#define __REG_H__

#define REG_NUM 16
typedef struct cpu_state {
    uint32_t gpr[16];
    uint32_t pc;
} CPU_state;

void printf_regs();
uint32_t reg_str2val(const char *s, bool *success);
bool isa_difftest_checkregs(CPU_state *ref, uint32_t pc);

#endif