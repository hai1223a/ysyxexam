module ysyx_25050136_CTRL
    #(
        parameter ADDR_WIDTH = 4 
    )
    (
        input clk,
        input reset,
        input busy_if_i,
        input busy_mem_i,
        input ren1_id_i,
        input ren2_id_i,
        input [ADDR_WIDTH-1:0] raddr1_id_i,
        input [ADDR_WIDTH-1:0] raddr2_id_i,    
        input wen_ex_i,
        input [ADDR_WIDTH-1:0] waddr_ex_i,
        input wen_mem_i,
        input [ADDR_WIDTH-1:0] waddr_mem_i,
        input wen_wb_i,
        input [ADDR_WIDTH-1:0] waddr_wb_i,
        input branch_ex_i,
        input [31:0] branch_npc_ex_i,
        output stall_pc_o,
        output stall_if_o,
        output stall_id_o,
        output stall_ex_o,
        output stall_mem_o,
        output bubble_if_o,
        output bubble_id_o,
        output bubble_mem_o,
        output flush_if_o,
        output flush_id_o,
        output [31:0] branch_npc_if_o
    );
    reg stall_pc   ;
    reg stall_if   ;
    reg stall_id   ;
    reg stall_ex   ;
    reg stall_mem  ;
    reg bubble_if  ;
    reg bubble_id  ;
    reg bubble_mem ;
    reg flush_if   ;
    reg flush_id   ;
    reg [31:0] branch_npc_if;
    wire raw1_hazard,raw2_hazard;
    wire raw_hazard;

    assign raw1_hazard = (raddr1_id_i == 0) ? 0 :
                         (((ren1_id_i & wen_ex_i) && (raddr1_id_i == waddr_ex_i)) || 
                         ((ren1_id_i & wen_mem_i) && (raddr1_id_i == waddr_mem_i)) ||
                         ((ren1_id_i & wen_wb_i) && (raddr1_id_i == waddr_wb_i)));
    assign raw2_hazard = (raddr2_id_i == 0) ? 0 :
                         (((ren2_id_i & wen_ex_i) && (raddr2_id_i == waddr_ex_i)) || 
                         ((ren2_id_i & wen_mem_i) && (raddr2_id_i == waddr_mem_i)) ||
                         ((ren2_id_i & wen_wb_i) && (raddr2_id_i == waddr_wb_i)));
    assign raw_hazard = raw1_hazard | raw2_hazard;

    always @(*) begin
        stall_pc   = 0;
        stall_if   = 0;
        stall_id   = 0;
        stall_ex   = 0;
        stall_mem  = 0;
        bubble_id  = 0;
        bubble_mem = 0;
        if(busy_mem_i) begin
            stall_pc   = 1;
            stall_if   = 1;
            stall_id   = 1;
            stall_ex   = 1;
            bubble_mem = 1;
        end else if(raw_hazard) begin
            stall_pc   = 1;
            stall_if   = 1;
            bubble_id  = 1;
        end else if(busy_if_i) begin
            bubble_if  = 1;
        end
    end
    always @(posedge clk) begin
        if (reset) begin
            flush_if <= 0;
            flush_id <= 0;
            branch_npc_if <= 0;
        end else begin
            if(branch_ex_i) begin
                if(stall_if) begin
                    flush_if <= 1;
                    flush_id <= 1;
                    branch_npc_if <= branch_npc_ex_i;
                end
            end else if(!stall_if) begin
                    flush_if <= 0;
                    flush_id <= 0;
                    branch_npc_if <= 0;
            end
        end
    end
    assign stall_pc_o   = stall_pc   ;
    assign stall_if_o   = stall_if   ;
    assign stall_id_o   = stall_id   ;
    assign stall_ex_o   = stall_ex   ;
    assign stall_mem_o  = stall_mem  ;
    assign bubble_if_o  = bubble_if  ;
    assign bubble_id_o  = bubble_id  ;
    assign bubble_mem_o = bubble_mem ;   
    assign flush_if_o   = branch_ex_i | flush_if;
    assign flush_id_o   = branch_ex_i | flush_id;
    assign branch_npc_if_o = branch_npc_ex_i | branch_npc_if;
endmodule //moduleName
