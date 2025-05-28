#ifndef __COMMON_H__
#define __COMMON_H__
//=====================================================
// 头文件
//=====================================================
#include "Vysyx_25050136_NPC.h"  // 包含Verilog工程的C++模型
#include "Vysyx_25050136_NPC___024root.h"
#include <verilated.h>           // Verilator的库
#include "verilated_fst_c.h"     // fst波形文件所需要的库
#include "reg.h"
#include "sdb.h"
#include "cpu.h"
#include "expr.h"
#include "memory.h"
#include "debug.h"
#include "disasm.h"
#include "watchpoint.h"
#include "trace.h"
#include "dut.h"
#include "macro.h"
//=====================================================
// 配置选项
//=====================================================
// #define CONFIG_ITRACE
// #define CONFIG_MTRACE
// #define CONFIG_FTRACE
// #define CONFIG_DIFFTEST
//=====================================================
// 状态
//=====================================================
enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT };

typedef struct {
  int state;
  uint32_t halt_pc;
  int halt_ret;
} NPCState;
void set_nemu_state(int state, uint32_t pc, int halt_ret);

extern NPCState npcstate;                                       
extern VerilatedFstC *tfp;
extern Vysyx_25050136_NPC *ysyx_25050136_NPC;
extern bool cpu_run;                                           // CPU仿真运行状态
extern vluint64_t sim_time;                                    // 记录仿真时间
extern vluint64_t reset_time;                                  // 复位时间
extern vluint64_t stop_time;                                   // 暂停时间点
extern uint32_t pc_pre;                                        // 用于单步执行程序
extern char *ref_so_file;   
extern char *img_file;                                         // 程序源文件指针
extern bool batch_mode;                                        // batch模式
extern uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096)));// 内存变量
extern const char *regs[];
#endif
