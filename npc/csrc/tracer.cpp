#include "../include/common.h"

#define IRINGBUF_DEEPTH 10
struct
{
    uint8_t now_p;
    uint8_t p;
    char iringbuf[IRINGBUF_DEEPTH][128];
} IRINGBUF = {0};

char logbuf[128] = {};

static void print_iringbuf()
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
