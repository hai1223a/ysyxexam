#ifndef __CACHE_SET_H__
#define __CACHE_SET_H__

/*
    组相连，（近期最少使用策略）LRU
*/
#include <stdbool.h>
#include <stdint.h>

// 单位都是字节
#define CACHE_SIZE 64                       // 对应总的CACHE大小,指的只有数据部分
#define WAY_SIEZ   2                        // n路组相连,就是一组有n个cache line,内存的数据任意放在一个cache line中                       
#define BLOCK_SIZE 8                       // 对应Block Offset
#define BLOCK_NUM (CACHE_SIZE / (BLOCK_SIZE * WAY_SIEZ)) // 对应Index

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
    bool Age;
    uint32_t Tag;
    uint8_t data[BLOCK_SIZE];
}CacheLine;

extern CacheLine cache[BLOCK_NUM][WAY_SIEZ];

void test();
int cache_read_through(int addr, long *num_ask);
int cache_write_through(int addr, uint8_t data, long *num_ask);
int cache_read_back(int addr, long *num_ask);
int cache_write_back(int addr, uint8_t data, long *num_ask); 

#endif