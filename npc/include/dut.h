#ifndef __DUT_H__
#define __DUT_H__

void init_difftest(char *ref_so_file, long img_size, int port, Vysyx_25050136_NPC *ysyx_25050136_NPC);
void difftest_step(uint32_t pc, Vysyx_25050136_NPC *ysyx_25050136_NPC);

#endif