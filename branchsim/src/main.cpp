#include "branch.h"
#include <cassert>

int main(int argc, char *argv[]) {
    if (argc < 8) {
        cerr << "用法: "<< endl
        << "argv[1]" << " <压缩文件路径> " << endl
        << "argv[2]" << " <PHT INDEX BITS> " << endl
        << "argv[3]" << " <BTB INDEX BITS> " << endl
        << "argv[4]" << " <BTB TAG BITS> " << endl
        << "argv[5]" << " <RAS SIZE> " << endl
        << "argv[6]" << " <GHR BITS> " << endl
        << "argv[7]" << " <BTB WAYS> " << endl;
        return 1;
    }
    string file_path = argv[1];
    string command = "bzcat " + file_path;
    int pht_index = atoi(argv[2]);
    int btb_index = atoi(argv[3]);
    int btb_tag = atoi(argv[4]);
    int ras_size = atoi(argv[5]);
    int ghr_width = atoi(argv[6]);
    int btb_way = atoi(argv[7]);
    BRANCH top(pht_index, btb_index, btb_tag, ras_size, ghr_width, btb_way);
    BranchRecord buffer[1024];

    size_t count;
    // cout << "sizeof(BranchRecord): " << sizeof(BranchRecord) << endl;
    FILE *fp = popen(command.c_str(), "r");
    assert(fp);
    while((count = fread(buffer, sizeof(BranchRecord), 1024, fp)) > 0) {
        for(size_t i = 0; i < count; i++) {
            // cout << "pc: " << hex << buffer[i].pc 
                //  << " target: " << hex << buffer[i].target 
                //  << " taken: " << buffer[i].taken 
                //  << " type: " << static_cast<int>(buffer[i].type) << endl;
            top.predict(buffer[i]);
        }
    }
    top.printStats();
    pclose(fp);
    return 0;
}
