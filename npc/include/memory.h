#ifndef __MEMORY_H__
#define __MEMORY_H__

#define RESET_VECTOR CONFIG_IMEM_BASE              // 程序复位地址
extern uint8_t imem[CONFIG_IMEM_BASE] __attribute((aligned(4096))); // 程序存储变量
extern uint8_t dmem[CONFIG_DMEM_BASE] __attribute((aligned(4096))); // 程序存储变量

enum {
    wen, ren
};

uint8_t* imem_guest_to_host(uint32_t paddr);
long init_imem(char *img_file);
uint32_t vaddr_read(uint32_t paddr);


#endif