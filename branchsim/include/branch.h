// branch.h - 分支预测器类定义
#ifndef BRANCH_H
#define BRANCH_H

#include <cstdint>
#include <vector>
#include <stack>
#include <iostream>
#include <iomanip>

using namespace std;

struct BranchRecord {
    uint32_t pc;
    uint32_t target;
    bool taken;
    uint8_t type; // 分支类型
};


class BRANCH {
private:
    // 配置参数
    // 方向
    int pht_index_width;  // PHT 索引宽度
    int pht_size;         // PHT 大小
    vector<uint8_t> pht;  // PHT: 2-bit 计数器
    int ghr_width;        // GHR 宽度
    int ghr;              // GHR 寄存器
    // 地址
    bool btb_enabled;     // 是否查看BTB完整统计
    bool btb_full_assoc;  // 是否为全相联 BTB
    int btb_index_width;  // BTB 索引宽度
    int btb_tag_width;    // BTB 标签宽度
    int btb_num_way;      // BTB 组相联度
    int btb_size;         // BTB 大小
    int btb_tag_size;     // BTB 标签大小
    struct BTBline {
        bool valid;
        uint32_t tag;
        uint32_t target;
        uint8_t type; // 分支类型
        uint8_t lru; // LRU 计数器
        BTBline() : valid(false), tag(0), target(0), type(0) , lru(0){}
    };
    vector<vector <BTBline>> btb; // BTB 结构(组相联)
    vector<BTBline> btb_full;     // BTB 结构(全相联)
    int ras_size;                 // RAS 大小
    stack<uint32_t> ras_target;   // RAS 返回地址栈
    
    // 统计信息
    // 总体
    uint64_t total_instructions;  // 总指令数
    uint64_t total_predictions;   // 总预测数
    uint64_t correct_predictions; // 正确预测数
    uint64_t call_count;          // 调用指令数
    uint64_t return_count;        // 返回指令数
    uint64_t error_predictions;   // 将非跳转预测为跳转的次数
    // 方向
    vector<uint64_t> pht_access_count;  // PHT 访问频率
    uint64_t pht_right_count;           // PHT 预测正确数
    // 地址
    vector<uint64_t> btb_access_count;  // BTB 访问频率
    uint64_t btb_right_count;           // BTB 预测正确数
    uint64_t btb_hits;                  // BTB 命中次数 (预测跳转且Tag匹配)
    uint64_t btb_misses;                // BTB 未命中次数 (预测跳转但Tag不匹配)
    uint64_t btb_access_skipped;        // 因方向预测为不跳转而跳过BTB查询的次数 (但实际跳转了)
    uint64_t btb_compulsory_writes;     // 强制性写入次数 (写入到空闲Way)
    uint64_t btb_conflict_writes;       // 冲突/容量写入次数 (替换了一个有效的Way)
    uint64_t ras_access_count;          // RAS 访问频率
    uint64_t ras_right_count;           // RAS 预测正确数

    // 私有方法
    int findEmptyWay(uint32_t set_index);
    void update_lru(int set_index, int accessed_way);
    int find_lru_way(int set_index);
public:
    BRANCH(int pht_index = 12, int btb_index = 4, int btb_tag_width = 5, int ras_size = 3, int ghr_width = 8, int btb_way = 4);
    void printStats();  // 打印统计信息
    bool predict_taken(uint32_t ac_pc, bool ac_taken, uint8_t ac_type);
    void predict_target(BranchRecord ac_record, bool pr_taken);
    void predict(BranchRecord ac_record);
};

#endif
