// branch.cpp - 分支预测器实现
#include "branch.h"
#include <cstdlib>
#include <cmath>  // for pow
#include <algorithm>  // for sort

BRANCH::BRANCH(int pht_index, int btb_index, int btb_tag_width, int ras_size, int ghr_width, int btb_way)
    : // 配置参数
      pht_index_width(pht_index),
      pht_size(1 << pht_index),
      ghr_width(ghr_width),
      ghr(0),
      btb_enabled(false),
      btb_full_assoc(false),
      btb_index_width(btb_index),
      btb_tag_width(btb_tag_width),
      btb_num_way(btb_way),
      btb_size(1 << btb_index),
      btb_tag_size(1 << btb_tag_width),
      ras_size(ras_size),
      // 统计信息
      total_instructions(0),
      total_predictions(0),
      correct_predictions(0),
      call_count(0),
      return_count(0),
      error_predictions(0),
      pht_right_count(0),
      btb_right_count(0),
      btb_hits(0),
      btb_misses(0),
      btb_access_skipped(0),
      btb_compulsory_writes(0),
      btb_conflict_writes(0),
      ras_access_count(0),
      ras_right_count(0)
{
    pht.resize(pht_size, 1);  // 初始化为弱不跳转
    btb.resize(btb_size, vector<BTBline>(btb_num_way));
    btb_full.resize(btb_size, BTBline());
    pht_access_count.resize(pht_size, 0);  // 初始化访问计数
    btb_access_count.resize(btb_size, 0);
}

void BRANCH::printStats() {
    double accuracy = (total_predictions == 0) ? 0.0 : (double)correct_predictions / total_predictions * 100.0;
    double pht_accuracy = (total_predictions == 0) ? 0.0 : (double)pht_right_count / total_predictions * 100.0;
    double penalty = (total_predictions == 0) ? 0.0 : (4.0 * (total_predictions - correct_predictions) + 3.0 * error_predictions) / (double)total_predictions;
    
    cout << "\n=== 分支预测器统计 ===" << endl;
    cout << "总指令数: " << total_instructions << endl;
    cout << "分支指令数: " << total_predictions << endl;
    cout << "正确预测数: " << correct_predictions << endl;
    cout << "准确率: " << fixed << setprecision(2) << accuracy << "%" << endl;
    cout << "将非跳转预测为跳转的次数: " << error_predictions << endl;
    cout << "流水线代价评估 " << fixed << setprecision(2) << penalty << " cycle" << endl;

    cout << "\n--- PHT 详细行为 ---" << endl;
    cout << "PHT 配置: " << pht_size << " entries (2-bit saturating counters)" << endl;
    cout << "PHT 准确率: " << fixed << setprecision(2) << pht_accuracy << "%" << endl;
    
    if(btb_enabled) {
        uint64_t btb_total_access_attempt = btb_hits + btb_misses;
        double btb_hit_rate = (btb_total_access_attempt == 0) ? 0.0 : (double)btb_hits / btb_total_access_attempt * 100.0;
        double btb_hit_right_rate = (btb_hits == 0) ? 0.0 : (double)btb_right_count / btb_hits * 100.0;
        cout << "\n--- BTB 详细行为 ---" << endl;
        cout << "当查看BTB详细数据时假定方向预测绝对正确, 此时总体统计无效" << endl;
        if(btb_full_assoc) {
            cout << "BTB 类型: 全相联" << endl;
        } else {
            cout << "BTB 类型: " << btb_num_way << " 组相联" << endl;
        }
        cout << "BTB 配置: " << btb_size << " sets (" << btb_tag_width << "tag)" << endl;
        cout << "BTB 查询命中率: " << fixed << setprecision(2) << btb_hit_rate << "%" << " (" << btb_hits << " hits / " << btb_total_access_attempt << " lookups)" << endl;
        cout << "BTB 命中预测正确率: " << fixed << setprecision(2) << btb_hit_right_rate << "%" << endl;
    }


    cout << "\n--- RAS 详细行为 ---" << endl;
    cout << "RAS 访问数: " << ras_access_count << endl;
    cout << "RAS 访问正确率: " << ((ras_access_count == 0) ? 0.0 : (double)ras_right_count / ras_access_count * 100.0) << "%" << endl;
    cout << "函数调用数: " << call_count << endl;
    cout << "函数返回数: " << return_count << endl;
}

// Gshare 预测
// 调试, 假设方向预测注定成功
bool BRANCH::predict_taken(uint32_t ac_pc, bool ac_taken, uint8_t ac_type) {
    uint32_t index = ((ac_pc >> 2) ^ ghr) & (pht_size - 1); // 去掉指令对齐低两位并与GHR异或
    pht_access_count[index]++;  // 统计访问
    uint8_t state = pht[index];
    bool predicted_taken = (state >= 2); // 2和3表示预测为跳转
    if(ac_type != 0) {
        if(predicted_taken == ac_taken) {
            pht_right_count++;
        }
        // 更新PHT状态
        if (ac_taken) {
            if (state < 3) pht[index]++; // 增加饱和计数器
        } else {
            if (state > 0) pht[index]--; // 减少饱和计数器
        }
    }
    if(btb_enabled) {
        return ac_taken;
    } else {
        return predicted_taken;
    }
}

void BRANCH::predict_target(BranchRecord ac_record, bool pr_taken) {
    uint32_t ac_pc = ac_record.pc;
    bool ac_taken = ac_record.taken;
    uint32_t ac_target = ac_record.target; 
    uint8_t ac_type = ac_record.type;
    uint32_t raw = ac_pc >> 2;
    uint32_t tag = ((ac_pc >> (btb_index_width + 2)) ^ (ac_pc >> (btb_index_width + 7))) & (btb_tag_size - 1);
    int index = -1;
    uint32_t predicted_target = 0;
    bool btb_hit = false;
    bool used_ras = false;
    if(btb_full_assoc) {
        // --- 1. BTB 查找 (遍历所有 Way) ---
        if (pr_taken) {
            for (int i = 0; i < btb_size; ++i) {
                if (btb_full[i].valid && btb_full[i].tag == tag)
                {
                    index = i;
                    btb_hit = true;
                    btb_hits++;

                    if (btb_full[i].type == 1 && !ras_target.empty()) {
                        ras_access_count++;
                        predicted_target = ras_target.top();
                        used_ras = true;
                    } else {
                        predicted_target = btb_full[i].target;
                    }
                   if(predicted_target == ac_target) {
                        btb_right_count++;
                    }
                    break;
                }
            }
            if (!btb_hit) {
                btb_misses++;
            }
        }
        // --- 2. 确定最终预测目标 ---
        // 如果方向预测为不跳转，或方向预测为跳转但BTB Miss，则预测目标为 pc+4
        if (!pr_taken || (pr_taken && !btb_hit)) {
            predicted_target = ac_pc + 4;
        }
        
        // --- 3. 统计预测正确性 ---
        if (ac_type != 0) {
            if (pr_taken == ac_taken && predicted_target == ac_target) {
                correct_predictions++;
                if (used_ras && ac_type == 1) { // 仅当使用了RAS且确实是返回指令时，才算RAS正确
                    ras_right_count++;
                }
            }
        }

        // --- 4. 更新 全相联BTB 和 RAS ---
        int replace_index = -1;
        if (ac_type != 0 && ac_taken && (!btb_hit || (btb_hit && predicted_target != ac_target))) {
            // 更新BTB：只在实际发生跳转时更新
            for(int i = 0; i < btb_size; ++i) {
                if (!btb_full[i].valid) {
                    replace_index = i;
                    break;
                }
            }
            if (replace_index == -1) {
                // 随机替换
                replace_index = rand() % btb_size;
            }
            btb_full[replace_index].valid = true;
            btb_full[replace_index].tag = tag;
            btb_full[replace_index].target = ac_target;
            btb_full[replace_index].type = ac_type;
        }

        if (ac_type == 2 && ac_taken) { // 如果是实际发生的call指令
            if ((uint8_t)ras_target.size() < ras_size) {
                ras_target.push(ac_pc + 4);
            }
        } else if (ac_type == 1 && ac_taken) { // 如果是实际发生的return指令
            if (used_ras) { // 并且这次预测确实用到了RAS
                if(!ras_target.empty()) ras_target.pop();
            }
        }

    } else {
        index = (raw ^ (raw >> btb_index_width)) & (btb_size - 1);
        //  BTB 查找 (组相联)
        // --- 1. BTB 查找  ---
        if (pr_taken) {
            for (int way = 0; way < btb_num_way; ++way) {
                if (btb[index][way].valid && btb[index][way].tag == tag) {
                    btb_hit = true;
                    btb_hits++;
                    update_lru(index, way); // <--- 命中时更新LRU
                    if (btb[index][way].type == 1 && !ras_target.empty()) {
                        ras_access_count++;
                        predicted_target = ras_target.top();
                        used_ras = true;
                    } else {
                        predicted_target = btb[index][way].target;
                    }
                    if(predicted_target == ac_target) {
                        btb_right_count++;
                    }
                    break;
                }
            }
            if (!btb_hit) {
                btb_misses++;
            }
        }
        // --- 2. 确定最终预测目标 ---
        if (!pr_taken || (pr_taken && !btb_hit)) {
            predicted_target = ac_pc + 4;
        }

        // --- 3. 统计预测正确性 ---
        if (ac_type != 0) {
            if (pr_taken == ac_taken && predicted_target == ac_target) {
                correct_predictions++;
                if (used_ras && ac_type == 1) { // 仅当使用了RAS且确实是返回指令时，才算RAS正确
                    ras_right_count++;
                }
            }
        }

        // --- 4. 更新 组相联BTB 和 RAS ---
        int replace_way = -1;
        if (ac_type != 0 && ac_taken && (!btb_hit || (btb_hit && predicted_target != ac_target))) {
            // 更新BTB：只在实际发生跳转时更新
            for(int way = 0; way < btb_num_way; ++way) {
                if (!btb[index][way].valid) {
                    replace_way = way;
                    break;
                }
            }
            if (replace_way == -1) {
                // 替换策略：从随机替换改为 LRU
                // replace_way = find_lru_way(index);
                replace_way = rand() % btb_num_way;
            }
            btb[index][replace_way].valid = true;
            btb[index][replace_way].tag = tag;
            btb[index][replace_way].target = ac_target;
            btb[index][replace_way].type = ac_type;
            update_lru(index, replace_way); // <--- 插入新条目时也要更新LRU
        }

        if (ac_type == 2 && ac_taken) { // 如果是实际发生的call指令
            if ((uint8_t)ras_target.size() < ras_size) {
                ras_target.push(ac_pc + 4);
            }
        } else if (ac_type == 1 && ac_taken) { // 如果是实际发生的return指令
            if (used_ras) { // 并且这次预测确实用到了RAS
                if(!ras_target.empty()) ras_target.pop();
            }
        }
    }
    
}


void BRANCH::predict(BranchRecord ac_record) {
    if (ac_record.type == 1)
    {
        return_count++;
    } else if (ac_record.type == 2)
    {
        call_count++;
    }
    if (ac_record.type != 0)
    {
        total_predictions++;
    }
    total_instructions++;
    bool pr_taken = predict_taken(ac_record.pc, ac_record.taken, ac_record.type);
    if(pr_taken && ac_record.type == 0) {
        error_predictions++;
        return;
    }
    predict_target(ac_record, pr_taken);
    if (ac_record.type != 0) {
        ghr = ((ghr << 1) | (ac_record.taken ? 1 : 0)) & ((1 << ghr_width) - 1); // 更新GHR
    }
}

/**
 * @brief 更新指定 Set 的 LRU 计数器
 * @param set_index 要更新的 Set 的索引
 * @param accessed_way 刚刚被访问的 Way (它将成为最新的)
 */
void BRANCH::update_lru(int set_index, int accessed_way) {
    uint8_t current_lru = btb[set_index][accessed_way].lru;
    for (int way = 0; way < btb_num_way; ++way) {
        if (btb[set_index][way].valid) {
            // 将所有比 accessed_way 更年轻的条目变老一岁
            if (btb[set_index][way].lru > current_lru) {
                btb[set_index][way].lru--;
            }
        }
    }
    // 将被访问的 way 标记为最年轻
    btb[set_index][accessed_way].lru = btb_num_way - 1;
}

/**
 * @brief 在指定 Set 中查找 LRU Way (最老的 Way)
 * @param set_index 要查找的 Set 的索引
 * @return LRU Way 的索引
 */
int BRANCH::find_lru_way(int set_index) {
    for (int way = 0; way < btb_num_way; ++way) {
        // 找到 lru 计数器为 0 的那个 Way，它就是最老的
        if (btb[set_index][way].lru == 0) {
            return way;
        }
    }
    // 理论上不应该执行到这里，除非LRU逻辑有误或未完全初始化
    // 作为备用策略，返回 0
    return 0;
}