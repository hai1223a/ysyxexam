#include "cache.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

CACHE::cache_line::cache_line(bool v, uint32_t t) 
    : valid(v), tag(t) {}

CACHE::CACHE(int offset, int index, int way)
    :   offset_width(offset), 
        index_width(index), 
        num_way(way),
        tag_width(32 - offset - index),
        num_set(1 << index),
        num_byte(1 << offset),
        c_pc(0),
        c_reach(0) 
{
    tag_sram.resize(num_set, vector <cache_line>(num_way));
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

void CACHE::readCheck(uint32_t pc) {
    uint32_t pc_index = (pc >> offset_width) & ((1U << index_width) - 1);
    uint32_t pc_tag = pc >> (index_width + offset_width);
    bool miss = true;
    c_pc++;
    for(int i = 0; i < num_way; i++) {
        if(tag_sram[pc_index][i].valid && tag_sram[pc_index][i].tag == pc_tag) {
            miss = false;
            c_reach++; 
            break;
        }
    }
    if(miss) {
        int x = rand() % num_way;
        tag_sram[pc_index][x].valid = true;
        tag_sram[pc_index][x].tag = pc_tag;
    }
} 