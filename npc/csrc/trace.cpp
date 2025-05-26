#include "../include/common.h"

char logbuf[128] = {0};
uint32_t pc__ = 0x80000000;
uint32_t inst__ = *(uint32_t *)(pmem + pc__ - CONFIG_MBASE);

struct
{
    uint8_t now_p;
    uint8_t p;
    char iringbuf[IRINGBUF_DEEPTH][128];
} IRINGBUF = {0};

void print_iringbuf()
{
    printf("iringbuf打印\n");
    printf("如果是发生了 HIT BAD TRAP 或者 ABORT, 则--->指向发生问题的指令\n");
    printf("如果是发生了 assert 0 报错的话, 则--->指向发生问题的指令的上一条指令\n");
    for (int i = 0; i < IRINGBUF_DEEPTH; i++)
    {
        if (i == IRINGBUF.now_p)
            printf("--->");
        else
            printf(">>>>");
        puts(IRINGBUF.iringbuf[i]);
    }
    printf("\n");
}

void Itrace(uint32_t inst_in, uint32_t pc_in)
{
    char *p = logbuf;
    p += snprintf(p, sizeof(logbuf), "0x%08x:", pc_in);
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
    disassemble(p, logbuf + sizeof(logbuf) - p, pc_in, inst_s, 4);
    // 这里也是IRINGBUF部分的代码
    // ===============================================
    IRINGBUF.now_p = IRINGBUF.p;
    strcpy(IRINGBUF.iringbuf[IRINGBUF.p], logbuf);
    if(IRINGBUF.p < IRINGBUF_DEEPTH - 1)
      IRINGBUF.p++;
    else
      IRINGBUF.p = 0;
    // ===============================================

}