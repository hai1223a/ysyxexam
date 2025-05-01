`timescale 1ns/1ns
module scan2ascii(
    input  [7:0] index_i,  // 输入：扫描码
    input  caps_i,
    input  shift_i,
    output reg [7:0] data_o    // 输出：ASCII 码
);
    reg [7:0] rom_data [0:35];
    reg [7:0] rom_index [0:35]; // 定义 ROM 存储器
    

    // 初始化 ROM_DATA 数据
    initial begin
        // 数字 0-9 的ascii映射
        rom_data[0] = 8'h30; // 0
        rom_data[1] = 8'h31; // 1
        rom_data[2] = 8'h32; // 2
        rom_data[3] = 8'h33; // 3
        rom_data[4] = 8'h34; // 4
        rom_data[5] = 8'h35; // 5
        rom_data[6] = 8'h36; // 6
        rom_data[7] = 8'h37; // 7
        rom_data[8] = 8'h38; // 8
        rom_data[9] = 8'h39; // 9

        // 小写字母 a-z 的ascii映射
        rom_data[10] = 8'h61;  // a
        rom_data[11] = 8'h62;  // b
        rom_data[12] = 8'h63;  // c
        rom_data[13] = 8'h64; // d
        rom_data[14] = 8'h65; // e
        rom_data[15] = 8'h66; // f
        rom_data[16] = 8'h67; // g
        rom_data[17] = 8'h68; // h
        rom_data[18] = 8'h69; // i
        rom_data[19] = 8'h6A; // j
        rom_data[20] = 8'h6B; // k
        rom_data[21] = 8'h6C; // l
        rom_data[22] = 8'h6D; // m
        rom_data[23] = 8'h6E; // n
        rom_data[24] = 8'h6F; // o
        rom_data[25] = 8'h70; // p
        rom_data[26] = 8'h71; // q
        rom_data[27] = 8'h72; // r
        rom_data[28] = 8'h73; // s
        rom_data[29] = 8'h74; // t
        rom_data[30] = 8'h75; // u
        rom_data[31] = 8'h76; // v
        rom_data[32] = 8'h77; // w
        rom_data[33] = 8'h78; // x
        rom_data[34] = 8'h79; // y
        rom_data[35] = 8'h7A; // z
    end

    initial begin
        // 数字 0-9 的扫描码
        rom_index[0] = 8'h45; // 0
        rom_index[1] = 8'h16; // 1
        rom_index[2] = 8'h1E; // 2
        rom_index[3] = 8'h26; // 3
        rom_index[4] = 8'h25; // 4
        rom_index[5] = 8'h2E; // 5
        rom_index[6] = 8'h36; // 6
        rom_index[7] = 8'h3D; // 7
        rom_index[8] = 8'h3E; // 8
        rom_index[9] = 8'h46; // 9

        // 小写字母 a-z 的扫描码
        rom_index[10] = 8'h1C; // a
        rom_index[11] = 8'h32; // b
        rom_index[12] = 8'h21; // c
        rom_index[13] = 8'h23; // d
        rom_index[14] = 8'h24; // e
        rom_index[15] = 8'h2B; // f
        rom_index[16] = 8'h34; // g
        rom_index[17] = 8'h33; // h
        rom_index[18] = 8'h43; // i
        rom_index[19] = 8'h3B; // j
        rom_index[20] = 8'h42; // k
        rom_index[21] = 8'h4B; // l
        rom_index[22] = 8'h3A; // m
        rom_index[23] = 8'h31; // n
        rom_index[24] = 8'h44; // o
        rom_index[25] = 8'h4D; // p
        rom_index[26] = 8'h15; // q
        rom_index[27] = 8'h2D; // r
        rom_index[28] = 8'h1B; // s
        rom_index[29] = 8'h2C; // t
        rom_index[30] = 8'h3C; // u
        rom_index[31] = 8'h2A; // v
        rom_index[32] = 8'h1D; // w
        rom_index[33] = 8'h22; // x
        rom_index[34] = 8'h35; // y
        rom_index[35] = 8'h1A; // z
    end
    integer i;
    always @(*) begin
        data_o = 8'h00; // 默认值，表示未找到匹配项
        for (i = 0; i < 36; i = i + 1) begin
            if (rom_index[i] == index_i) begin
                if((caps_i^shift_i) && rom_data[i] <= 8'h7A && rom_data[i] >=8'h61)
                    data_o = rom_data[i] - 8'h20; // 找到匹配项，输出对应的 ASCII 码
                else
                    data_o = rom_data[i];
            end
        end
    end
endmodule
