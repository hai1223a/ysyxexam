.global bootloader
bootloader:
    # 首先复制.data段
    la      a0, data_start       # 目标地址
    la      a1, data_load_start  # 源地址
    la      a2, data_size        # 总字节数
    
    # 检查是否需要复制.data段
    beq     a0, a1, clear_bss    # 地址相同则跳过
    beqz    a2, clear_bss        # 大小为0则跳过
    
    # 计算8字节块的数量和剩余字节
    srli    a3, a2, 3           # a3 = data_size / 8
    andi    a4, a2, 0x7         # a4 = data_size % 8
    
    # 如果8字节块数为0，跳转到小数据拷贝
    beqz    a3, copy_small_data
    
copy_8bytes:
    # 一次拷贝8字节
    lw      t0, 0(a1)
    lw      t1, 4(a1)
    
    sw      t0, 0(a0)
    sw      t1, 4(a0)
    
    # 更新指针和计数器
    addi    a0, a0, 8
    addi    a1, a1, 8
    addi    a3, a3, -1
    
    # 继续循环
    bnez    a3, copy_8bytes
    
    # 处理剩余字节
    beqz    a4, clear_bss

copy_small_data:
    # 计算剩余4字节字数和单个字节数
    srli    a3, a4, 2           # 剩余4字节字数
    andi    a4, a4, 0x3         # 剩余单个字节数
    
    beqz    a3, copy_remaining_bytes
    
copy_4bytes:
    # 拷贝剩余4字节字
    lw      a5, 0(a1)
    sw      a5, 0(a0)
    addi    a0, a0, 4
    addi    a1, a1, 4
    addi    a3, a3, -1
    bnez    a3, copy_4bytes
    
copy_remaining_bytes:
    beqz    a4, clear_bss
    
copy_1byte:
    # 拷贝剩余单个字节
    lb      a5, 0(a1)
    sb      a5, 0(a0)
    addi    a0, a0, 1
    addi    a1, a1, 1
    addi    a4, a4, -1
    bnez    a4, copy_1byte

clear_bss:
    # 现在清零.bss段
    la      a0, bss_start       # .bss段起始地址
    la      a2, bss_size        # .bss段大小
    
    # 如果.bss大小为0，直接返回
    beqz    a2, copy_done
    
    # 计算8字节块的数量和剩余字节
    srli    a3, a2, 3           # a3 = bss_size / 8
    andi    a4, a2, 0x7         # a4 = bss_size % 8
    
    # 如果8字节块数为0，跳转到小数据清零
    beqz    a3, clear_small_bss
    
clear_8bytes:
    # 一次清零8字节
    sw      zero, 0(a0)
    sw      zero, 4(a0)
    
    # 更新指针和计数器
    addi    a0, a0, 8
    addi    a3, a3, -1
    
    # 继续循环
    bnez    a3, clear_8bytes
    
    # 处理剩余字节
    beqz    a4, copy_done

clear_small_bss:
    # 计算剩余4字节字数和单个字节数
    srli    a3, a4, 2           # 剩余4字节字数
    andi    a4, a4, 0x3         # 剩余单个字节数
    
    beqz    a3, clear_remaining_bytes
    
clear_4bytes:
    # 清零剩余4字节字
    sw      zero, 0(a0)
    addi    a0, a0, 4
    addi    a3, a3, -1
    bnez    a3, clear_4bytes
    
clear_remaining_bytes:
    beqz    a4, copy_done
    
clear_1byte:
    # 清零剩余单个字节
    sb      zero, 0(a0)
    addi    a0, a0, 1
    addi    a4, a4, -1
    bnez    a4, clear_1byte
    
copy_done:
    ret