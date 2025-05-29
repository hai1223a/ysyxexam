#ifndef __CPU_H__
#define __CPU_H__

extern vluint64_t sim_time;      // 记录仿真时间
extern vluint64_t stop_time;     // 暂停时间点

void reset();
void cpu_exec(uint32_t inst_num);
int batch_mainloop();

#endif