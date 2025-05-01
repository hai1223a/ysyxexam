#ifndef __CACHE_DIRECT_H__
#define __CACHE_DIRECT_H__
/*
    直接映射，写通和写回
*/
#include <stdbool.h>
#include <stdint.h>

// Tag为21位，Index为7位，BlockOffset为4位
// 直接映射的cache设计需要考虑内存
// 128KB内存,以2KB为单位，分为了64个区
#define CACHE_SIZE 64                       
#define BLOCK_SIZE 16                       // 对应Block Offset
#define BLOCK_NUM (CACHE_SIZE / BLOCK_SIZE) // 对应Index

#define WriteBack 1                         // 为1表示使用Write Back，为0表示使用Write through
#if WriteBack
    #define read(addr, num_ask) cache_read_back(addr, num_ask)
    #define write(addr,data, num_ask) cache_write_back(addr,data, num_ask)
#else
    #define read(addr,num_ask) cache_read_through(addr,num_ask)
    #define write(addr,data,num_ask) cache_write_through(addr,data,num_ask)
#endif

typedef struct
{
    bool Valid;
    bool Dirty;         //  在Write through中没用
    uint32_t Tag;
    uint8_t data[BLOCK_SIZE];
}CacheLine;

extern CacheLine cache[BLOCK_NUM];

void test();
int cache_read_through(int addr, long *num_ask);
int cache_write_through(int addr, uint8_t data, long *num_ask);
int cache_read_back(int addr, long *num_ask);
int cache_write_back(int addr, uint8_t data, long *num_ask);
#endif