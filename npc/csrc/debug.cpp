#include "../include/common.h"
#include <getopt.h> // 包含解析命令行参数的库函数

VerilatedFstC *tfp = NULL;
Vysyx_25050136_NPC *ysyx_25050136_NPC = NULL;
//=====================================================
// 用于解析命令行参数
//=====================================================
static int parse_args(int argc, char *argv[])
{
  const struct option table[] = {
      {"batch", no_argument, NULL, 'b'},
      {"log", required_argument, NULL, 'l'},
      {"diff", required_argument, NULL, 'd'},
      {"port", required_argument, NULL, 'p'},
      {"elf", required_argument, NULL, 'e'},
      {"elf-log", required_argument, NULL, 'g'},
      {"image", required_argument, NULL, 'i'},
      {"help", no_argument, NULL, 'h'},
      {0, 0, NULL, 0},
  };
  int o;
  while ((o = getopt_long(argc, argv, "-bhl:d:p:e:g:i:", table, NULL)) != -1)
  {
    switch (o)
    {
    case 'b':
      batch_mode = true;
      break;
    case 'p':
      break;
    case 'l':
      break;
    case 'd':
      ref_so_file = optarg;
      break;
    case 'e':
      break;
    case 'g':
      break;
    case 'i':
      img_file = optarg;
      break;
    default:
      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
      printf("\t-b,--batch                run with batch mode\n");
      printf("\t-l,--log=FILE             output log to FILE\n");
      printf("\t-d,--diff=REF_SO          run DiffTest with reference REF_SO\n");
      printf("\t-p,--port=PORT            run DiffTest with port PORT\n");
      printf("\t-e,--elf=ELF_FILE         load elf file for ftrace\n");
      printf("\t-g,--elf-log=FTRACER_FILE ftracer output log to FTRACER_FILE\n");
      printf("\n");
      exit(0);
    }
  }
  return 0;
}
//=====================================================
// 用于初始化verilator仿真
//=====================================================
static void init_verilator(int argc, char *argv[])
{
  // 传递参数给verilator,建议在创建任何模型之前使用
  Verilated::commandArgs(argc, argv);
  // 创建一个fst波形文件指针
  tfp = new VerilatedFstC;
  // 构建一个名为ysyx_25050136_NPC的仿真模型
  ysyx_25050136_NPC = new Vysyx_25050136_NPC;
  // 启用跟踪
  Verilated::traceEverOn(true);
  // 采样深度为5
  ysyx_25050136_NPC->trace(tfp, 5);
  // 打开波形文件
  tfp->open("waveform.fst");
}
//=====================================================
// 用于初始化cpu
//=====================================================
void cpu_init()
{
  npcstate.state = NPC_RUNNING;
  stop_time = sim_time;
  pc_pre = RESET_VECTOR;
  cpu_run = true;
  ysyx_25050136_NPC->clk = 0;
  ysyx_25050136_NPC->inst_i = 0;
  ysyx_25050136_NPC->mem_rdata_i = 0;
}
//=====================================================
// 一些输出日志函数
//=====================================================
void printf_statu()
{
  Log("NPC 的结束状态是%s, PC = 0x%08x, halt = %d",
    (npcstate.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
     (npcstate.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
      ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
      npcstate.halt_pc, npcstate.halt_ret);
  Log("仿真时间为 %lu 次, 仿真周期为 %lu 个", sim_time - 1, (sim_time - 1)/2);
}

void npc_end()
{
  printf_statu();
  // 关闭波形文件
  tfp->close();
  // 删除指针
  delete ysyx_25050136_NPC;
}

static void welcome() {
  Log("ITrace: %s", MUXDEF(CONFIG_ITRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("MTrace: %s", MUXDEF(CONFIG_MTRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("FTrace: %s", MUXDEF(CONFIG_FTRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Difftest: %s", MUXDEF(CONFIG_DIFFTEST, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT("RISCV32e", ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}
//=====================================================
// 调试相关函数
//=====================================================
void init_main(int argc, char **argv)
{
  // 解析命令行参数
  parse_args(argc, argv);
  // ITRACE
  MUXDEF(CONFIG_ITRACE, , init_disasm());
  // Verilator 仿真初始化
  init_verilator(argc, argv);
  // 加载内存
  long size = init_pmem();
  // CPU初始化
  cpu_init();
  // 
  welcome();
}

