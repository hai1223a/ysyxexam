#ifndef __REG_H__
#define __REG_H__

#define REG_NUM 16
typedef struct cpu_state {
    uint32_t gpr[16];
    uint32_t pc;
} CPU_state;

// SOC_PC 表示的是未提交的第一条指令的PC
// SOC_INST 表示的是未提交的第一条指令的inst
// #define SOC_GPR top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_NPCCORE__DOT__u_ysyx_25050136_WB__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr
// #define SOC_PC   top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_NPCCORE__DOT__mem_dbg_pc
// #define SOC_INST top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_25050136_NPC__DOT__u_ysyx_25050136_NPCCORE__DOT__mem_dbg_inst
extern uint32_t fuck[16];
#define SOC_GPR fuck
#define SOC_PC   0
#define SOC_INST 0


uint32_t get_reg(int i);
void printf_regs();
uint32_t reg_str2val(const char *s, bool *success);
bool isa_difftest_checkregs(CPU_state *ref);

#endif