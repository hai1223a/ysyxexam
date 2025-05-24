#include "../include/common.h"
//=====================================================
// 用于解析命令行参数
//=====================================================
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"elf"      , required_argument, NULL, 'e'},
    {"elf-log"  , required_argument, NULL, 'g'},
    {"image"    , required_argument, NULL, 'i'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:g:i:", table, NULL)) != -1) {
    switch (o) {
      case 'b': batch_mode = true; break;
      case 'p': break;
      case 'l': break;
      case 'd': break;
      case 'e': break;
      case 'g': break;
      case 'i': img_file = optarg; break;
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
// 调试相关函数
//=====================================================

void printf_statu(Vysyx_25050136_NPC *ysyx_25050136_NPC)
{
  uint32_t gpr_a0 =  ysyx_25050136_NPC->rootp->ysyx_25050136_NPC__DOT__u_ysyx_25050136_RegisterFile__DOT__gpr[10];
  printf("NPC 的结束状态是%s, PC = 0x%x\n", (gpr_a0 == 0) ? 
          ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED),
          ysyx_25050136_NPC->pc_o);
}
//=====================================================
// 主函数
//=====================================================
int main(int argc, char **argv)
{
  expr("1+1", NULL);
  // 解析命令行参数
  parse_args(argc, argv);
  // 传递参数给verilator,建议在创建任何模型之前使用
  Verilated::commandArgs(argc, argv);
  // 创建一个fst波形文件指针
  VerilatedFstC *tfp = new VerilatedFstC;
  // 构建一个名为ysyx_25050136_NPC的仿真模型
  Vysyx_25050136_NPC *ysyx_25050136_NPC = new Vysyx_25050136_NPC;
  // 启用跟踪
  Verilated::traceEverOn(true);
  // 采样深度为5
  ysyx_25050136_NPC->trace(tfp, 5);
  // 打开波形文件
  tfp->open("waveform.fst");
  if(batch_mode)
    batch_mainloop(ysyx_25050136_NPC,tfp);
  else  
    sdb_mainloop(ysyx_25050136_NPC,tfp);
  printf_statu(ysyx_25050136_NPC);
  // 关闭波形文件
  tfp->close();
  // 删除指针
  delete ysyx_25050136_NPC;
  // 结束
  return 0;
}
