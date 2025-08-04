#include "../include/common.h"
//=====================================================
// 主函数
//=====================================================
int main(int argc, char **argv)
{
  init_main(argc, argv);
  if(batch_mode)
    batch_mainloop();
  else
    sdb_mainloop();
  npc_end();
  // 结束
  return 0;
}
#include <cstdio>
// 替换 Verilator 的默认打印函数
void vl_print_stderr(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vfprintf(stdout, fmt, args); // 改为 stdout
    va_end(args);
}
#define VL_PRINTF vl_print_stderr