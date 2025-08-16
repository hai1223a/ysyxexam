#ifndef __MEMORY_H__
#define __MEMORY_H__

#define RESET_VECTOR 0x30000000               // 程序复位地址
extern uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096)));// 内存变量

enum {
    wen, ren
};

uint8_t* guest_to_host(uint32_t paddr);
long init_pmem(char *img_file);
uint32_t vaddr_read(uint32_t paddr, int len);


#endif