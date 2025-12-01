#!/usr/bin/env zsh

BIN="$(pwd)/build/branchsim"
DEFAULT_INPUT="source/test.bin.bz2"
OUT="branchsim_full_results.csv"

# 检查 BIN 是否存在
if [ ! -x "$BIN" ]; then
  echo "未找到 $BIN，正在尝试 make..."
  make
  if [ ! -x "$BIN" ]; then
    echo "错误：$BIN 仍未生成，退出。"
    exit 1
  fi
fi

# --- 精心挑选的参数组合 ---
# 目标：评估几组有潜力的高性能配置
pht_indexes=(10 12)
ghr_widths=(10 12)
btb_indexes=(8 10) # 对应 256 和 1024 个 set
btb_tags=(10 12)
btb_ways=(4 8)
ras_sizes=(8 16)

# 输出新的、更全面的 CSV 表头
echo "input,pht_index,ghr_width,btb_index,btb_ways,btb_tag,ras_size,overall_accuracy,pipeline_cost,pht_accuracy,btb_hit_rate,btb_accuracy,ras_accuracy" > "$OUT"

# 遍历参数组合
for pht in "${pht_indexes[@]}"; do
  for ghr in "${ghr_widths[@]}"; do
    for btb_idx in "${btb_indexes[@]}"; do
      for ways in "${btb_ways[@]}"; do
        for tag in "${btb_tags[@]}"; do
          for ras in "${ras_sizes[@]}"; do
            # 构造命令，注意参数顺序
            cmd=( "$BIN" "$DEFAULT_INPUT" "$pht" "$btb_idx" "$tag" "$ras" "$ghr" "$ways" )
            echo "+ Running: ${cmd[*]}"
            out="$("${cmd[@]}" 2>&1)"

            # 提取所有关键数据
            overall_accuracy=$(printf "%s" "$out" | grep -oP '准确率:\s*\K[0-9]+\.[0-9]+')
            pipeline_cost=$(printf "%s" "$out" | grep -oP '流水线代价评估\s*\K[0-9]+\.[0-9]+')
            pht_accuracy=$(printf "%s" "$out" | grep -oP 'PHT 准确率:\s*\K[0-9]+\.[0-9]+')
            btb_hit_rate=$(printf "%s" "$out" | grep -oP 'BTB 查询命中率:\s*\K[0-9]+\.[0-9]+')
            btb_accuracy=$(printf "%s" "$out" | grep -oP 'BTB 命中预测正确率:\s*\K[0-9]+\.[0-9]+')
            ras_accuracy=$(printf "%s" "$out" | grep -oP 'RAS 访问正确率:\s*\K[0-9]+\.[0-9]+')

            # 写入 CSV，注意与新表头顺序一致
            echo "$DEFAULT_INPUT,$pht,$ghr,$btb_idx,$ways,$tag,$ras,$overall_accuracy,$pipeline_cost,$pht_accuracy,$btb_hit_rate,$btb_accuracy,$ras_accuracy" >> "$OUT"
            sleep 0.1
          done
        done
      done
    done
  done
done

echo "Done, full evaluation results -> $OUT"