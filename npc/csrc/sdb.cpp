/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <readline/readline.h>
#include <readline/history.h>
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_25050136_NPC.h"  // 包含Verilog工程的C++模型
#include "Vysyx_25050136_NPC___024root.h"

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(NPC) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  return 0;
}


static int cmd_q(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  return -1;
}

static int cmd_help(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC);

static int cmd_si(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  return 0;
}

static int cmd_info(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  return 0;
}

static int cmd_x(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC){
  return 0;
}

static int cmd_p(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC){
  return 0;
}

static int cmd_w(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  return 0;
}

static int cmd_d(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  return 0;
}

static int cmd_r(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  return 0;
}

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

#define NR_CMD (int)(sizeof(cmd_table) / sizeof(cmd_table[0]))

static int cmd_help(char *args, Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_mainloop(Vysyx_25050136_NPC *ysyx_25050136_NPC) {
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args, ysyx_25050136_NPC) < 0) return; 
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}
