import subprocess
import os
import csv
import re
import itertools

# --- 配置 ---
BIN_PATH = os.path.join(os.getcwd(), "build/branchsim")
DEFAULT_INPUT = "source/test.bin.bz2"
OUTPUT_CSV = "branchsim_full_results.csv"

# --- 参数组合 ---
# 目标：评估几组有潜力的高性能配置
param_grid = {
    'pht_index': [10, 12],
    'ghr_width': [10, 12],
    'btb_index': [8, 10],  # 对应 256 和 1024 个 set
    'btb_tag':   [10, 12],
    'btb_way':   [4, 8],
    'ras_size':  [8, 16]
}

# --- 主程序 ---
def extract_metric(text, pattern, default_value='0.0'):
    """从文本中提取单个指标"""
    match = re.search(pattern, text)
    return match.group(1) if match else default_value

def main():
    # 检查二进制文件是否存在
    if not os.path.exists(BIN_PATH):
        print(f"未找到 {BIN_PATH}，正在尝试 make...")
        try:
            subprocess.run(["make"], check=True)
            if not os.path.exists(BIN_PATH):
                print(f"错误：make 后仍未生成 {BIN_PATH}，退出。")
                return
        except (subprocess.CalledProcessError, FileNotFoundError):
            print("错误：make 失败，请检查编译环境。")
            return

    # 生成所有参数组合
    keys = param_grid.keys()
    values = param_grid.values()
    param_combinations = [dict(zip(keys, v)) for v in itertools.product(*values)]

    # 定义 CSV 表头
    headers = [
        "input", "pht_index", "ghr_width", "btb_index", "btb_way", 
        "btb_tag", "ras_size", "overall_accuracy", "pipeline_cost", 
        "pht_accuracy", "btb_hit_rate", "btb_accuracy", "ras_accuracy"
    ]

    # 正则表达式模式
    patterns = {
        'overall_accuracy': r"准确率:\s*([0-9]+\.[0-9]+)",
        'pipeline_cost':    r"流水线代价评估\s*([0-9]+\.[0-9]+)",
        'pht_accuracy':     r"PHT 准确率:\s*([0-9]+\.[0-9]+)",
        'btb_hit_rate':     r"BTB 查询命中率:\s*([0-9]+\.[0-9]+)",
        'btb_accuracy':     r"BTB 命中预测正确率:\s*([0-9]+\.[0-9]+)",
        'ras_accuracy':     r"RAS 访问正确率:\s*([0-9]+\.[0-9]+)"
    }

    with open(OUTPUT_CSV, 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow(headers)

        for params in param_combinations:
            # 构造命令，注意参数顺序与 main.cpp 一致
            cmd = [
                BIN_PATH,
                DEFAULT_INPUT,
                str(params['pht_index']),
                str(params['btb_index']),
                str(params['btb_tag']),
                str(params['ras_size']),
                str(params['ghr_width']),
                str(params['btb_way'])
            ]
            
            print(f"+ Running: {' '.join(cmd)}")
            
            # 执行命令并捕获输出
            result = subprocess.run(cmd, capture_output=True, text=True)
            output_text = result.stdout

            # 提取所有指标
            metrics = {key: extract_metric(output_text, pat) for key, pat in patterns.items()}

            # 准备写入 CSV 的行数据
            row = [
                DEFAULT_INPUT,
                params['pht_index'],
                params['ghr_width'],
                params['btb_index'],
                params['btb_way'],
                params['btb_tag'],
                params['ras_size'],
                metrics['overall_accuracy'],
                metrics['pipeline_cost'],
                metrics['pht_accuracy'],
                metrics['btb_hit_rate'],
                metrics['btb_accuracy'],
                metrics['ras_accuracy']
            ]
            writer.writerow(row)

    print(f"\nDone, full evaluation results -> {OUTPUT_CSV}")

if __name__ == "__main__":
    main()