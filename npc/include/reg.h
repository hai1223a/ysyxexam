#ifndef __REG_H__
#define __REG_H__

#define REG_NUM 16
typedef struct cpu_state {
    uint32_t gpr[16];
    uint32_t pc;
} CPU_state;

#define SOC_GPR top->rootp->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr 
#define SOC_PC top->rootp->ysyx_25050136_SOC__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_IF__DOT__pc
extern const char *regs[];

uint32_t get_reg(int i);
void printf_regs();
uint32_t reg_str2val(const char *s, bool *success);
bool isa_difftest_checkregs(CPU_state *ref);

#endif