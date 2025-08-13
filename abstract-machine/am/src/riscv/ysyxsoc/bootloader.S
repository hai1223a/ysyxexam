.global copy_data
copy_data:
    # 加载 data_start 和 data_load_start 的地址
    la      t0, data_start       # t0 = 目标地址 (data_start)
    la      t1, data_load_start  # t1 = 源地址 (data_load_start)
    
    # 比较地址是否相同，如果相同则直接返回
    beq     t0, t1, copy_done
    
    # 加载 data_size (字节数) 到 t2
    la      t2, data_size
    lw      t2, 0(t2)            # t2 = 复制的字节数
    
    # 如果 data_size == 0，直接返回
    beqz    t2, copy_done
    
copy_loop:
    # 逐字节复制 (RV32E 没有字节加载/存储指令，用 lb/sb)
    lb      a2, 0(t1)      # 从源地址加载一个字节
    sb      a2, 0(t0)      # 存储到目标地址
    
    # 更新指针和计数器
    addi    t0, t0, 1      # 目标地址++
    addi    t1, t1, 1      # 源地址++
    addi    t2, t2, -1     # 计数器--
    
    # 如果计数器 != 0，继续循环
    bnez    t2, copy_loop
    
copy_done:
    ret