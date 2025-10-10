module NPCCORE_TEST (
    input                                     clk,
    input                                   reset,
    // 指令相关
    input   [31:0]               inst_req_rdata_i,
    input                        inst_req_ready_i,
    output  [31:0]               inst_req_addr_o ,
    output                       inst_req_valid_o,
    output                       inst_req_use_o  ,
    output                       inst_req_flush_o,
    // 数据相关
    input    [31:0]               mem_req_rdata_i,
    input                         mem_req_ready_i,
    output   [31:0]               mem_req_addr_o ,
    output                        mem_req_valid_o,
    output                        mem_req_ren_o  ,
    output                        mem_req_wen_o  ,
    output   [3:0]                mem_req_mask_o ,
    output   [2:0]                mem_req_size_o ,
    output                        mem_req_use_o  ,
    output   [31:0]               mem_req_wdata_o
);

    assign mem_req_addr_o = 0;
    assign mem_req_valid_o = 0;
    assign mem_req_ren_o = 0;
    assign mem_req_wen_o = 0;
    assign mem_req_mask_o = 0;
    assign mem_req_size_o = 0;
    assign mem_req_use_o = 0;
    assign mem_req_wdata_o = 0;
    reg [31:0] pc;
    reg req_use_r;
    reg req_valid_r;
    reg [3:0] cnt;
    wire [31:0] next_pc = (pc < 32'h3000_0040) ? (pc < 32'ha000_0020 ? pc + 32'h4 : 32'ha000_0000) : pc + 32'h4;
    wire stall = cnt < 4'd5;
    always @(posedge clk) begin
        if(reset) begin
            cnt <= 0;
        end else begin
            cnt <= cnt + 4'd1;
        end
    end
    always @(posedge clk) begin
        if(reset) begin
            pc          <= 32'h3000_0000;
            req_use_r   <= 0;
            req_valid_r <= 0;
        end else begin
            if(stall) begin
                req_valid_r <= 0;
            end else begin
                req_valid_r <= 1;
                if(inst_req_ready_i & inst_req_valid_o) begin
                    pc <= next_pc;
                    req_use_r <= (next_pc >= 32'ha000_0000) && (next_pc < 32'ha400_0000);        
                end
            end
        end
    end
    
endmodule
