#ifndef __CPU_H__
#define __CPU_H__



void reset();
void cpu_exec(uint32_t inst_num);
int batch_mainloop();

#endif