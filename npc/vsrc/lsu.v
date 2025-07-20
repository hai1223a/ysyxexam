module ysyx_25050136_LSU
    #(
         DATA_WIDTH = 32
     )
     (
         input      [2:0]                             mem_len_i,
         input                                     mem_signed_i,
         input      [DATA_WIDTH-1:0]               store_data_i,
         input      [DATA_WIDTH-1:0]                mem_rdata_i,
         output reg [DATA_WIDTH-1:0]                mem_wdata_o,
         output reg [DATA_WIDTH-1:0]                load_data_o
     );

    always @(*) begin
        case (mem_len_i)
            3'd4:begin
                mem_wdata_o = store_data_i;
                load_data_o = mem_rdata_i;
            end
            3'd2:begin
                mem_wdata_o = {16'h0,store_data_i[15:0]};
                if (mem_signed_i)
                    load_data_o = {{16{mem_rdata_i[15]}},mem_rdata_i[15:0]};
                else
                    load_data_o = {16'h0,mem_rdata_i[15:0]};
            end
            3'd1:begin
                mem_wdata_o = {24'h0,store_data_i[7:0]};
                if (mem_signed_i)
                    load_data_o = {{24{mem_rdata_i[7]}},mem_rdata_i[7:0]};
                else
                    load_data_o = {24'h0,mem_rdata_i[7:0]};
            end
            default:begin
                mem_wdata_o = 0;
                load_data_o = 0;
            end
        endcase
    end
endmodule
