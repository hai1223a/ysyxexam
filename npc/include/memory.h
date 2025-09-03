#ifndef __MEMORY_H__
#define __MEMORY_H__

#define RESET_VECTOR CONFIG_IMEM_BASE              // 程序复位地址
extern uint8_t imem[CONFIG_IMEM_SIZE] __attribute((aligned(4096))); // 程序存储变量

enum {
    wen, ren
};

typedef struct {
  uint64_t ifu_count;
  uint64_t lsu_count;
  uint64_t bqu_count;
  uint64_t csr_count;
  uint64_t alu_count;
} NPC_perforcount;

extern NPC_perforcount npc_perC;
long init_imem(char *img_file);
uint32_t vaddr_read(uint32_t paddr);


#endif