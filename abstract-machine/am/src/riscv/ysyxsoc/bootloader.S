.global bootloader
bootloader:
    # 加载 data_start 的地址（实际上是获取 data_start 的值）
    la      t0, data_start       # t0 = 目标地址 (data_start 的值)
    
    # 加载 data_load_start 的地址（实际上是获取 data_load_start 的值）
    la      t1, data_load_start  # t1 = 源地址 (data_load_start 的值)
    
    # 比较地址是否相同，如果相同则直接返回
    beq     t0, t1, copy_done
    
    # 加载 data_size 的值到 t2
    la      t2, data_size        # t2 = data_size 的地址
    
    # 如果 data_size == 0，直接返回
    beqz    t2, copy_done
    
copy_loop:
    # 逐字节复制
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