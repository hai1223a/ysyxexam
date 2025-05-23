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
#define CONFIG_MSIZE 0x8000000                // 内存大小
#define CONFIG_MBASE 0x80000000               // 内存基地址
#define ANSI_FG_RED     "\33[1;31m"           // 终端红色输出
#define ANSI_FG_GREEN   "\33[1;32m"           // 终端绿色输出
#define ANSI_NONE       "\33[0m"              
#define ANSI_FMT(str, fmt) fmt str ANSI_NONE  // 用于输出有颜色的终端信息
#define NR_CMD (int)(sizeof(cmd_table) / sizeof(cmd_table[0]))

bool cpu_run = true;                          // CPU仿真运行状态
vluint64_t sim_time = 0;                      // 记录仿真时间
vluint64_t reset_time = 10;
static char *img_file = NULL;                 // 程序源文件指针
static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};// 内存变量
static struct {
    const char *name;
    const char *description;
    int (*handler) (char *, Vysyx_25050136_NPC *);
  } cmd_table [] = {
    { "help", "Display information about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NEMU", cmd_q },
    { "si", "格式为si [N],让程序单步执行N条指令后暂停执行,当N没有给出时,缺省为1", cmd_si},
    { "info", "格式为info SUBCMD, info r表示打印寄存器状态, info w表示打印监视点信息", cmd_info},
    { "x", "格式为x N EXPR, 表示以表达式EXPR为基地址, 以16进制的格式打印连续的N个4字节数据", cmd_x},
    { "p", "查看表达式的值, 格式为p EXPR, 将会打印表达式EXPR的十进制和十六进制表达", cmd_p},
    { "w", "设置监视点, 格式为w EXPR, 当EXPR的值发生改变时将会中断程序", cmd_w},
    { "d", "删除监视点, 格式为d N, 表示删除序号为N的监视点", cmd_d},
    { "r", "重新开始程序,还没实现", cmd_r},
    /* TODO: Add more commands */
  };
  
#endif
