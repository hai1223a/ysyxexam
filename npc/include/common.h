#ifndef __COMMON_H__
#define __COMMON_H__
//=====================================================
// 头文件
//=====================================================
#include "Vysyx_25050136_NPC.h"  // 包含Verilog工程的C++模型
#include "Vysyx_25050136_NPC___024root.h"
#include <verilated.h>           // Verilator的库
#include "verilated_fst_c.h"     // fst波形文件所需要的库
#include <readline/readline.h>   // 
#include <readline/history.h>
#include <getopt.h>              // 包含解析命令行参数的库函数
//=====================================================
// 全局变量和宏定义
//=====================================================
bool cpu_run = true;                          // CPU仿真运行状态
vluint64_t sim_time = 0;                      // 记录仿真时间
vluint64_t reset_time = 10;                   // 复位时间
vluint64_t stop_time = 0;                     // 暂停时间点
uint32_t pc_pre = 0x80000000;                 // 用于单步执行程序
static char *img_file = NULL;                 // 程序源文件指针
bool batch_mode = false;                        // sdb模式
#define CONFIG_MSIZE 0x8000000                // 内存大小
#define CONFIG_MBASE 0x80000000               // 内存基地址
#define ANSI_FG_RED     "\33[1;31m"           // 终端红色输出
#define ANSI_FG_GREEN   "\33[1;32m"           // 终端绿色输出
#define ANSI_NONE       "\33[0m"              
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE  // 用于输出有颜色的终端信息
static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};// 内存变量
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5"
  };

#endif
