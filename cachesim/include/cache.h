#ifndef CACHE_H
#define CACHE_E
#include <cstdint>
#include <vector>

using namespace std;
enum {REAL_RANDOM, RANDOM, LRU};
class CACHE {
private:
    int offset_width;
    int index_width;
    int num_way;
    int replace_mode;
    int tag_width;
    int num_set;
    int num_byte;
    uint32_t sdram_addr;
    uint32_t sdram_len;
    struct cache_line {
        bool valid;
        uint32_t tag;
        cache_line(bool v = false, uint32_t t = 0);
    };
    void lru_update(uint32_t set_index, int accessed_way);
    int find_lru(uint32_t set_index);
    int findEmptyWay(uint32_t set_index);
    vector <vector <uint8_t>> lru_count;
    vector <vector <cache_line>> tag_sram;
public:
    int miss_penalty;
    uint64_t c_pc;
    uint64_t c_reach;
    CACHE(int offset = 2, int index = 4, int way = 2, int mode = REAL_RANDOM);
    void printTagSram();
    void readCheck(uint32_t pc);
};
#endif