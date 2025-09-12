#include "cache.h"
#include <iostream>
#include <cassert>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cerr << "用法: " << argv[0] << " <压缩文件路径>" << endl;
        return 1;
    }
    string file_path = argv[1];
    string command = "bzcat " + file_path;
    CACHE top(2, 5, 4);
    top.printTagSram();
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
    top.printTagSram();
    
    cout << top.c_pc << " " << top.c_reach << endl;
    return 0;
}