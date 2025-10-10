module ROM_TEST (
    input               clk,
    input               reset,
    input [31:0]        req_addr_i,
    input               req_valid_i,
    input               req_use_i,
    output reg          req_ready_o,
    output reg   [31:0] req_rdata_o  
);

    reg [31:0] rom_mem [0:15];
    initial begin
        rom_mem[0 ] = 32'h0f000537; // lui   a0,0xf000
        rom_mem[1 ] = 32'h00200593; // li    a1,2
        rom_mem[2 ] = 32'h00b52023; // sw    a1,0(a0)
        rom_mem[3 ] = 32'h00052283; // lw    t0,0(a0)
        rom_mem[4 ] = 32'h00b28333; // add   t1,t0,a1
        rom_mem[5 ] = 32'h00138393; // addi  t2,t2,1
        rom_mem[6 ] = 32'h40730333; // sub   t1,t1,t2
        rom_mem[7 ] = 32'hfe031ee3; // bnez  t1,skip
        rom_mem[8 ] = 32'h00140413; // addi  s0,s0,1
        rom_mem[9 ] = 32'h00108093; // addi  ra,ra,1
        rom_mem[10] = 32'h00100073; // ebreak
        rom_mem[11] = 32'h00000013;
        rom_mem[12] = 32'h00000013;
        rom_mem[13] = 32'h00000013;
        rom_mem[14] = 32'h00000013;
        rom_mem[15] = 32'h00000013;
    end 

    wire [3:0] addr = req_addr_i[5:2];
    reg reading;
    always @(posedge clk) begin
        if (reset) begin
            req_rdata_o <= 0;
            req_ready_o <= 0;
            reading     <= 0;
        end else begin
            if (!reading && req_valid_i && !req_ready_o) begin
                // 检测到请求，准备读取
                req_rdata_o <= rom_mem[addr];
                req_ready_o <= 1;
                reading     <= 1;
            end else if (reading) begin
                // 等待握手完成
                if (req_valid_i && req_ready_o) begin
                    req_ready_o <= 0;
                    reading     <= 0;
                end
            end else begin
                req_ready_o <= 0;
            end
        end
    end

endmodule
