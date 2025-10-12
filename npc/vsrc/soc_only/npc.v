module NPCCORE_TEST (
    input                                     clk,
    input                                   reset,
    // 指令相关
    input                         inst_req_ready_i,
    output  [31:0]                inst_req_addr_o ,
    output                        inst_req_valid_o,
    input                         inst_ret_valid_i,
    input   [31:0]                inst_ret_addr_i ,
    input   [31:0]                inst_ret_rdata_i,
    output                        inst_ret_ready_o,
    output                            inst_flush_o,
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

    wire branch_valid;
    wire id_ex_valid;
    wire id_ex_ready;
    wire [31:0] id_ex_pc;
    wire [31:0] id_ex_inst;
    wire [31:0] branch_npc;
    IF u_IF(
        .clk         	(clk               ),
        .reset       	(reset             ),
        .flush          (branch_valid      ),
        .branch_npc     (branch_npc        ),
        .out_ready_i 	(inst_req_ready_i  ),
        .out_pc_o    	(inst_req_addr_o   ),
        .out_valid_o 	(inst_req_valid_o  )
    );

    ID u_ID(
        .clk         	(clk               ),
        .reset       	(reset             ),
        .flush       	(branch_valid      ),
        .in_valid_i  	(inst_ret_valid_i  ),
        .in_pc_i     	(inst_ret_addr_i   ),
        .in_inst_i   	(inst_ret_rdata_i  ),
        .in_ready_o  	(inst_ret_ready_o  ),
        .out_ready_i 	(id_ex_ready       ),
        .out_pc_o    	(id_ex_pc          ),
        .out_inst_o  	(id_ex_inst        ),
        .out_valid_o 	(id_ex_valid       )
    );

    EX u_EX(
        .clk          	(clk               ),
        .reset        	(reset             ),
        .in_valid_i   	(id_ex_valid       ),
        .in_pc_i      	(id_ex_pc          ),
        .in_inst_i    	(id_ex_inst        ),
        .in_ready_o   	(id_ex_ready       ),
        .branch_valid 	(branch_valid      ),
        .branch_npc   	(branch_npc        )
    );
    assign inst_flush_o = branch_valid;
endmodule

module IF(
    input clk,
    input reset,
    input flush,
    input [31:0] branch_npc,
    input out_ready_i,
    output [31:0] out_pc_o,    
    output out_valid_o
);
    reg [31:0] pc;
    reg idle;
    wire out_fire = out_ready_i & out_valid_o;
    wire [31:0] next_pc = pc + 32'h4;
    always @(posedge clk) begin
        if(reset) begin
            idle <= 1;
            pc <= 32'h3000_0000;
        end else begin
            idle <= 0;
            if(flush) begin
                pc <= branch_npc;
            end else if(out_fire) begin
                pc <= next_pc;
            end
        end
    end
    assign out_pc_o = pc;
    assign out_valid_o = !(idle || flush);
endmodule //IF

module ID(
    input clk,
    input reset,
    input flush,
    input in_valid_i,
    input [31:0] in_pc_i,
    input [31:0] in_inst_i,
    output in_ready_o,
    input out_ready_i,
    output [31:0] out_pc_o,
    output [31:0] out_inst_o,
    output out_valid_o
);
    reg idle;
    reg [31:0] id_pc;
    reg [31:0] id_inst;
    wire in_fire = in_valid_i & in_ready_o;
    wire out_fire = out_valid_o & out_ready_i;
    wire ready_go = 1;
    always @(posedge clk) begin
        if(reset) begin
            idle <= 1;
            id_pc <= 0;
            id_inst <= 0;
        end else begin
            if(flush) begin
                idle <= 1;
            end else if(in_fire) begin
                idle <= 0;
                id_pc <= in_pc_i;
                id_inst <= in_inst_i;
            end else if(out_fire) begin
                idle <= 1;
            end
        end
    end
    assign in_ready_o = idle || out_fire;
    assign out_pc_o = id_pc;
    assign out_inst_o = id_inst;
    assign out_valid_o = !(idle || flush) && ready_go;
endmodule //ID

module EX(
    input clk,
    input reset,
    input in_valid_i,
    input [31:0] in_pc_i,
    input [31:0] in_inst_i,
    output in_ready_o,
    output branch_valid, 
    output [31:0] branch_npc
); 
    reg idle;
    reg [31:0] ex_pc;
    reg [31:0] ex_inst;
    wire in_fire = in_valid_i & in_ready_o;
    always @(posedge clk) begin
        if(reset) begin
            idle <= 1;
            ex_pc <= 0;
            ex_inst <= 0;
        end else begin
            if(in_fire) begin
                ex_pc <= in_pc_i;
                ex_inst <= in_inst_i;
            end
        end
    end

    assign in_ready_o = idle;
    assign branch_valid = ex_pc == 32'h3000_0020;
    assign branch_npc = 32'ha000_0000;
endmodule //IF
