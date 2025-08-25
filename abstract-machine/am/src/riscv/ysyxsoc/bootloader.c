#include <am.h>
#include "ysyxsoc.h"
// 这些符号由链接脚本定义
extern uint8_t data_start[];
extern uint8_t data_load_start[];
extern size_t data_size;

extern uint8_t bss_start[];
extern size_t bss_size;

// 优化的内存复制函数（针对RV32E）
static void memory_copy(uint8_t *dest, const uint8_t *src, size_t n) {
    // 使用寄存器变量帮助优化
    register uint8_t *d asm("a0") = dest;
    register const uint8_t *s asm("a1") = src;
    register size_t count asm("a2") = n;
    
    // 小数据直接使用字节拷贝
    if (count < 16) {
        while (count-- > 0) {
            *d++ = *s++;
        }
        return;
    }
    
    // 8字节块拷贝
    size_t blocks = count / 8;
    size_t remainder = count % 8;
    
    // 使用内联汇编确保最佳性能
    __asm__ volatile (
        "1:\n"
        "   lw t0, 0(%1)\n"      // 加载第一个字
        "   lw t1, 4(%1)\n"      // 加载第二个字
        "   sw t0, 0(%0)\n"      // 存储第一个字
        "   sw t1, 4(%0)\n"      // 存储第二个字
        "   addi %0, %0, 8\n"    // 目标指针+8
        "   addi %1, %1, 8\n"    // 源指针+8
        "   addi %2, %2, -1\n"   // 块计数器-1
        "   bnez %2, 1b\n"       // 继续循环
        : "+r"(d), "+r"(s), "+r"(blocks)
        :
        : "t0", "t1", "memory"
    );
    
    // 拷贝剩余字节
    for (size_t i = 0; i < remainder; i++) {
        d[i] = s[i];
    }
}

// 优化的内存清零函数（针对RV32E）
static void memory_zero(uint8_t *dest, size_t n) {
    register uint8_t *d asm("a0") = dest;
    register size_t count asm("a2") = n;
    
    // 小数据直接使用字节清零
    if (count < 16) {
        while (count-- > 0) {
            *d++ = 0;
        }
        return;
    }
    
    // 8字节块清零
    size_t blocks = count / 8;
    size_t remainder = count % 8;
    
    // 使用内联汇编确保最佳性能
    __asm__ volatile (
        "1:\n"
        "   sw zero, 0(%0)\n"    // 清零第一个字
        "   sw zero, 4(%0)\n"    // 清零第二个字
        "   addi %0, %0, 8\n"    // 指针+8
        "   addi %1, %1, -1\n"   // 块计数器-1
        "   bnez %1, 1b\n"       // 继续循环
        : "+r"(d), "+r"(blocks)
        :
        : "memory"
    );
    
    // 清零剩余字节
    for (size_t i = 0; i < remainder; i++) {
        d[i] = 0;
    }
}

// 主bootloader函数
void __attribute__((naked, section(".bootloader"))) bootloader() {
    // 复制.data段（如果需要）
    if (data_start != data_load_start && data_size > 0) {
        memory_copy(data_start, data_load_start, data_size);
    }
    
    // 清零.bss段
    if (bss_size > 0) {
        memory_zero(bss_start, bss_size);
    }
    
    // 直接返回（naked函数需要自己处理返回）
    __asm__ volatile ("ret");
}