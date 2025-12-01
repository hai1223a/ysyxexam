#include "cache.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

CACHE::cache_line::cache_line(bool v, uint32_t t) 
    : valid(v), tag(t) {}

CACHE::CACHE(int offset, int index, int way, int mode)
    :   offset_width(offset), 
        index_width(index), 
        num_way(way),
        replace_mode(mode),
        tag_width(32 - offset - index),
        num_set(1 << index),
        num_byte(1 << offset),
        sdram_addr(0xa0000000),
        sdram_len(0x4000000),
        miss_penalty(6 + (1 << (offset - 1))), 
        c_pc(0),
        c_reach(0) 
{
    tag_sram.resize(num_set, vector <cache_line>(num_way));
    lru_count.resize(num_set, vector<uint8_t>(num_way));
}

void CACHE::printTagSram() {
    cout << "\n=== Matrix View ===" << endl;
    int set_index = 0;
    for (auto set_iter = tag_sram.begin(); set_iter != tag_sram.end(); set_iter++, set_index++) {
        cout << "Set " << set_index << ": ";
        
        for (auto way_iter = set_iter->begin(); way_iter != set_iter->end(); way_iter++) {
            cout << (way_iter->valid ? "V" : "I") << ":0x" 
                 << hex << setw(8) << setfill('0') << way_iter->tag 
                 << dec << " ";
        }
        cout << endl;
    }
}

void CACHE::lru_update(uint32_t set_index, int accessed_way) {
    for (int i = 0; i < num_way; i++) {
        if (i == accessed_way) {
            lru_count[set_index][i] = num_way - 1; // 设为最高优先级
        } else if (lru_count[set_index][i] > 0) {
            lru_count[set_index][i]--; // 其他way优先级递减
        }
    }
}

int CACHE::find_lru(uint32_t set_index) {
    // 找到计数器最小的way（最近最少使用）
    int lru_way = 0;
    uint32_t min_counter = lru_count[set_index][0];
    
    for (int i = 1; i < num_way; i++) {
        if (lru_count[set_index][i] < min_counter) {
            min_counter = lru_count[set_index][i];
            lru_way = i;
        }
    }
    return lru_way;
}

int CACHE::findEmptyWay(uint32_t set_index) {
    // 查找空闲的way
    for (int i = 0; i < num_way; i++) {
        if (!tag_sram[set_index][i].valid) {
            return i;
        }
    }
    return -1; // 没有空闲way
}

void CACHE::readCheck(uint32_t pc) {
    if(pc < sdram_addr || pc >= (sdram_addr + sdram_len)) return;
    uint32_t pc_index = (pc >> offset_width) & ((1U << index_width) - 1);
    uint32_t pc_tag = pc >> (index_width + offset_width);
    int hit_way = -1;
    c_pc++;
    for(int i = 0; i < num_way; i++) {
        if(tag_sram[pc_index][i].valid && tag_sram[pc_index][i].tag == pc_tag) {
            hit_way = i;
            c_reach++; 
            break;
        }
    }
    if(hit_way == -1) {
        int replace_way = 0;
        if(replace_mode == REAL_RANDOM) {
            replace_way = rand() % num_way;
        } else {
            int empty_way = findEmptyWay(pc_index);
            if(empty_way != -1) { replace_way = empty_way; }
            else if(replace_mode == RANDOM) { replace_way = rand() % num_way; }
            else if(replace_mode == LRU) { replace_way = find_lru(pc_index); }
        }
        tag_sram[pc_index][replace_way].valid = true;
        tag_sram[pc_index][replace_way].tag = pc_tag;
        if(replace_mode == LRU) { lru_update(pc_index, replace_way); }
    } else {
        if(replace_mode == LRU) { lru_update(pc_index, hit_way); }
    }
} 