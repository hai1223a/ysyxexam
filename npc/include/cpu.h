#ifndef __CPU_H__
#define __CPU_H__



void reset(Vysyx_25050136_NPC *ysyx_25050136_NPC, vluint64_t &sim_time);
void cpu_init(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp);
void cpu_exec(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp, uint32_t inst_num);
int batch_mainloop(Vysyx_25050136_NPC *ysyx_25050136_NPC, VerilatedFstC *tfp);

#endif