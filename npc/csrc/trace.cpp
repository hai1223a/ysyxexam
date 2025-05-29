#include "../include/common.h"
#include <elf.h>
// itrace
char itrace_buf[128] = {0};

struct
{
    uint8_t now_p;
    uint8_t p;
    char iringbuf[IRINGBUF_DEEPTH][128];
} IRINGBUF = {0};

void print_iringbuf()
{
    printf(ANSI_FMT("iringbuf打印, --->执行过的最后一条指令\n", ANSI_FG_MAGENTA));
    for (int i = 0; i < IRINGBUF_DEEPTH; i++)
    {
        if (i == IRINGBUF.now_p) 
            printf(ANSI_FMT("---> %s\n", ANSI_FG_MAGENTA), IRINGBUF.iringbuf[i]);
        else
            printf(">>>> %s\n", IRINGBUF.iringbuf[i]);
    }
}

void Itrace(uint32_t inst_in, uint32_t pc_in)
{
    char *p = itrace_buf;
    p += snprintf(p, sizeof(itrace_buf), "0x%08x:", pc_in);
    int ilen = 4;
    int i;
    uint8_t *inst_s = (uint8_t *)&inst_in;
    for (i = ilen - 1; i >= 0; i --) {
      p += snprintf(p, 4, " %02x", inst_s[i]);
    }
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;
    disassemble(p, itrace_buf + sizeof(itrace_buf) - p, pc_in, inst_s, 4);
    // 这里也是IRINGBUF部分的代码
    // ===============================================
    IRINGBUF.now_p = IRINGBUF.p;
    strcpy(IRINGBUF.iringbuf[IRINGBUF.p], itrace_buf);
    if(IRINGBUF.p < IRINGBUF_DEEPTH - 1)
      IRINGBUF.p++;
    else
      IRINGBUF.p = 0;
    // ===============================================
}

// mtrace
char mtrace_buf[128] = {0};

void add_mtrace()
{
  char *p = mtrace_buf;
  p += snprintf(p, sizeof(mtrace_buf), "0x%08x:  ", ysyx_25050136_NPC->pc_o);
  p += snprintf(p, mtrace_buf + sizeof(mtrace_buf) - p, "%8x  ", ysyx_25050136_NPC->mem_addr_o);
  if (ysyx_25050136_NPC->mem_wen_o)
    p += snprintf(p, mtrace_buf + sizeof(mtrace_buf) - p, "write  %d     %x", ysyx_25050136_NPC->mem_len_o, ysyx_25050136_NPC->mem_wdata_o);
  else if (ysyx_25050136_NPC->mem_ren_o)
    p += snprintf(p, mtrace_buf + sizeof(mtrace_buf) - p, "read  %d", ysyx_25050136_NPC->mem_len_o);
  *p = '\0';
}

void printf_mtrace()
{
  printf(ANSI_FMT("mtrace 访存出错报告\n", ANSI_FG_MAGENTA));
  printf(ANSI_FMT("PC值         访存地址  操作   字节  写入数据\n", ANSI_FG_MAGENTA));
  puts(mtrace_buf);
}

// ftrace

