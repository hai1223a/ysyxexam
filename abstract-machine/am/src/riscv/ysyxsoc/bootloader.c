#include <am.h>

// 这些符号需要在链接脚本中定义
extern uint8_t data_start[];
extern uint8_t data_load_start[];
extern uint32_t data_size;

extern uint8_t bss_start[];
extern uint32_t bss_size;

void bootloader(void) {
    // 复制 .data 段
    uint8_t *dst = data_start;
    uint8_t *src = data_load_start;
    uint32_t size = data_size;
    
    // 检查是否需要复制 .data 段
    if (dst != src && size != 0) {
        uint32_t blocks_8 = size / 8;
        uint32_t remainder = size % 8;
        
        // 复制 8 字节块
        if (blocks_8 > 0) {
            __asm__ volatile (
                "1:\n\t"
                "lw t0, 0(%1)\n\t"
                "lw t1, 4(%1)\n\t"
                "sw t0, 0(%0)\n\t"
                "sw t1, 4(%0)\n\t"
                "addi %0, %0, 8\n\t"
                "addi %1, %1, 8\n\t"
                "addi %2, %2, -1\n\t"
                "bnez %2, 1b\n\t"
                : "+r" (dst), "+r" (src), "+r" (blocks_8)
                :
                : "t0", "t1", "memory"
            );
        }
        
        // 处理剩余字节
        if (remainder > 0) {
            uint32_t words_4 = remainder / 4;
            uint32_t bytes_1 = remainder % 4;
            
            // 复制 4 字节字
            if (words_4 > 0) {
                __asm__ volatile (
                    "1:\n\t"
                    "lw a5, 0(%1)\n\t"
                    "sw a5, 0(%0)\n\t"
                    "addi %0, %0, 4\n\t"
                    "addi %1, %1, 4\n\t"
                    "addi %2, %2, -1\n\t"
                    "bnez %2, 1b\n\t"
                    : "+r" (dst), "+r" (src), "+r" (words_4)
                    :
                    : "a5", "memory"
                );
            }
            
            // 复制单个字节
            if (bytes_1 > 0) {
                __asm__ volatile (
                    "1:\n\t"
                    "lb a5, 0(%1)\n\t"
                    "sb a5, 0(%0)\n\t"
                    "addi %0, %0, 1\n\t"
                    "addi %1, %1, 1\n\t"
                    "addi %2, %2, -1\n\t"
                    "bnez %2, 1b\n\t"
                    : "+r" (dst), "+r" (src), "+r" (bytes_1)
                    :
                    : "a5", "memory"
                );
            }
        }
    }
    
    // 清零 .bss 段
    dst = bss_start;
    size = bss_size;
    
    if (size != 0) {
        uint32_t blocks_8 = size / 8;
        uint32_t remainder = size % 8;
        
        // 清零 8 字节块
        if (blocks_8 > 0) {
            __asm__ volatile (
                "1:\n\t"
                "sw zero, 0(%0)\n\t"
                "sw zero, 4(%0)\n\t"
                "addi %0, %0, 8\n\t"
                "addi %1, %1, -1\n\t"
                "bnez %1, 1b\n\t"
                : "+r" (dst), "+r" (blocks_8)
                :
                : "memory"
            );
        }
        
        // 处理剩余字节
        if (remainder > 0) {
            uint32_t words_4 = remainder / 4;
            uint32_t bytes_1 = remainder % 4;
            
            // 清零 4 字节字
            if (words_4 > 0) {
                __asm__ volatile (
                    "1:\n\t"
                    "sw zero, 0(%0)\n\t"
                    "addi %0, %0, 4\n\t"
                    "addi %1, %1, -1\n\t"
                    "bnez %1, 1b\n\t"
                    : "+r" (dst), "+r" (words_4)
                    :
                    : "memory"
                );
            }
            
            // 清零单个字节
            if (bytes_1 > 0) {
                __asm__ volatile (
                    "1:\n\t"
                    "sb zero, 0(%0)\n\t"
                    "addi %0, %0, 1\n\t"
                    "addi %1, %1, -1\n\t"
                    "bnez %1, 1b\n\t"
                    : "+r" (dst), "+r" (bytes_1)
                    :
                    : "memory"
                );
            }
        }
    }
}