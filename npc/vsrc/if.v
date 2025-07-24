module ysyx_25050136_IF
    #(
         DATA_WIDTH = 32
     )
     (
         input                                    clk,
         input                                  reset,
         input      [31:0]                     inst_i,
         input                        dynamic_valid_i,
         input                            pc_update_i,
         input      [DATA_WIDTH-1:0]    dynamic_npc_i,
         output     [DATA_WIDTH-1:0]     static_npc_o,
         output     [DATA_WIDTH-1:0]             pc_o,
         output     [31:0]                     inst_o,
         input                               fvalid_i,
         output                              fready_o,
         input                               bready_i,
         output                              bvalid_o
     );
    reg [DATA_WIDTH-1:0] pc;
    always @(posedge clk) begin
        if(reset) begin
            pc <= 32'h80000000;
        end
        else begin
            if(pc_update_i)
                pc <= dynamic_valid_i ? dynamic_npc_i : static_npc_o;
        end
    end
    assign bvalid_o = fvalid_i;
    assign fready_o = bready_i;
    assign static_npc_o = pc + 32'h4;
    assign pc_o = pc;
    assign inst_o = inst_i;
endmodule
