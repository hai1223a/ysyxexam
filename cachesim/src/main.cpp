#include "cache.h"
#include <iostream>
#include <cassert>

int main(int argc, char *argv[]) {
    if (argc < 6) {
        cerr << "用法: "<< endl
        << "argv[1]" << " <压缩文件路径> " << endl
        << "argv[2]" << " <OFFSET BITS> " << endl
        << "argv[3]" << " <INDEX BITS> " << endl
        << "argv[4]" << " <NUM OF WAYS> " << endl
        << "argv[5]" << " <MODE OF REPLACE: 0(RANDOM), 1(LRU)> " << endl;
        return 1;
    }
    string file_path = argv[1];
    string command = "bzcat " + file_path;
    int offset = atoi(argv[2]);
    int index = atoi(argv[3]);
    int way = atoi(argv[4]);
    int mode = atoi(argv[5]);
    CACHE top(offset, index, way, mode);
    uint32_t buffer[1024];
    size_t count;
    FILE *fp = popen(command.c_str(), "r");
    assert(fp);
    while((count = fread(buffer, sizeof(uint32_t), 1024, fp)) > 0) {
        for(size_t i = 0; i < count; i++) {
            top.readCheck(buffer[i]);
        }
    }
    pclose(fp);
    cout << "总数量 " << top.c_pc << " " << "命中数量 " << top.c_reach << " " << "命中率" << (double)top.c_reach / (double)top.c_pc << " " << "TMT "<< (top.c_pc - top.c_reach) * top.miss_penalty << endl; 
    return 0;
}