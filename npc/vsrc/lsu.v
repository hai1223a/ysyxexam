module ysyx_25050136_LSU
    #(
        parameter DATA_WIDTH = 32
     )
     (
        input                         clk          ,
        input                         reset        ,
        // 与dcache握手信号
        input    [31:0]               req_rdata_i  ,
        input                         req_ready_i  ,
        output   [31:0]               req_addr_o   ,
        output                        req_valid_o  ,
        output                        req_ren_o    ,
        output                        req_wen_o    ,
        output   [3:0]                req_mask_o   ,
        output   [2:0]                req_size_o   ,
        output                        req_use_o    ,
        output   [31:0]               req_wdata_o  ,
        // // 与clint握手信号
        // input    [31:0]               clint_rdata_i,
        // output   [31:0]               clint_addr_o , 
        // 内部
        input                         fvalid_i     ,
        input                         mem_ren_i    ,
        input                         mem_wen_i    ,             
        input    [3:0]                mem_mask_i   ,
        input                         mem_signed_i ,
        input    [DATA_WIDTH-1:0]     mem_addr_i   ,
        input    [DATA_WIDTH-1:0]     store_data_i ,
        output   [DATA_WIDTH-1:0]     load_data_o  ,
        output                        mem_valid_o
     );
    // 地址对齐检查
    wire [3:0] byte_sel = 4'b1 << mem_addr_i[1:0];
    wire misaligned = (mem_mask_i == 4'h3) ? mem_addr_i[0] :       // halfword检查bit[0]
                      (mem_mask_i == 4'hF) ? |mem_addr_i[1:0] :    // word检查bit[1:0]
                      1'b0;                                        // byte总是对齐
    // 从设备选择
    wire is_clint = (mem_addr_i >= 32'h0200_0000) && (mem_addr_i < 32'h0201_0000);
    // DEBUG
`ifdef ysyx_25050136_VERILATOR_DPIC
    wire is_mmio = ((mem_addr_i >= 32'h0200_0000) && (mem_addr_i < 32'h0201_0000)) ||
                   ((mem_addr_i >= 32'h1000_0000) && (mem_addr_i < 32'h1000_1000));
    wire is_memop = mem_wen_i | mem_ren_i;
    always @(*) begin
        if (is_mmio && is_memop) begin
            find_diff_skip();
        end
    end
`endif
    // dcache握手信号
    reg        req_valid_r ;
    reg        req_ren_r   ;
    reg        req_wen_r   ;
    reg [3:0]  req_mask_r  ;
    reg [2:0]  req_size_r  ;
    reg [31:0] req_wdata_r ;
    reg [31:0] req_addr_r  ;
    reg [3:0]  mem_strb_r  ;
    reg [31:0] mem_wdata_r ;
    reg [2:0]  mem_size_r  ;
    reg [31:0] mem_rdata_r ;

    always @(posedge clk) begin
        if (reset) begin
            req_valid_r <= 0;
            req_ren_r   <= 0;
            req_wen_r   <= 0;
            req_mask_r  <= 0;
            req_size_r  <= 0;
            req_wdata_r <= 0;
            req_addr_r  <= 0;
        end else begin
            if (fvalid_i & (mem_ren_i | mem_wen_i)) begin
                req_valid_r <= 1'b1;
                req_ren_r   <= mem_ren_i;
                req_wen_r   <= mem_wen_i;
                req_mask_r  <= mem_strb_r;
                req_size_r  <= mem_size_r;
                req_wdata_r <= mem_wdata_r;
                req_addr_r  <= mem_addr_i;
            end else if(req_ready_i) begin
                req_valid_r <= 1'b0;
                req_ren_r   <= 0;
                req_wen_r   <= 0;
                req_mask_r  <= 0;
                req_size_r  <= 0;
                req_wdata_r <= 0;
                req_addr_r  <= 0;
            end
        end
    end

    always @(*) begin
        // 默认值
        mem_strb_r = 0;
        mem_wdata_r = 0;
        mem_size_r = 0; 
        mem_rdata_r = 0;
        
        // 统一处理读写
        case (mem_mask_i)
            4'h1: begin // Byte操作
                mem_strb_r = byte_sel;
                mem_wdata_r = {24'd0, {store_data_i[7:0]}} << (8 * mem_addr_i[1:0]);
                mem_size_r = 3'b000;
                mem_rdata_r = mem_signed_i ?
                    {{24{req_rdata_i[8*mem_addr_i[1:0] + 7]}}, req_rdata_i[8*mem_addr_i[1:0] +: 8]} :
                    {24'd0, req_rdata_i[8*mem_addr_i[1:0] +: 8]};
            end
            4'h3: begin // Halfword操作
                mem_strb_r = byte_sel | (byte_sel << 1);
                mem_wdata_r = {16'd0, store_data_i[15:0]} << (8 * mem_addr_i[1:0]);
                mem_size_r = 3'b001;
                mem_rdata_r = mem_signed_i ?
                    {{16{req_rdata_i[16*mem_addr_i[1] + 15]}}, req_rdata_i[16*mem_addr_i[1] +: 16]} :
                    {16'd0, req_rdata_i[16*mem_addr_i[1] +: 16]};
            end
            4'hF: begin // Word操作
                mem_strb_r = 4'b1111;
                mem_wdata_r = store_data_i;
                mem_size_r = 3'b010;
                mem_rdata_r = req_rdata_i;
            end
            default;
        endcase
    end

    assign req_addr_o = mem_addr_i | req_addr_r;
    assign req_valid_o = fvalid_i | req_valid_r;
    assign req_ren_o = mem_ren_i | req_ren_r;
    assign req_wen_o = mem_wen_i | req_wen_r;
    assign req_mask_o = mem_strb_r | req_mask_r;
    assign req_size_o = mem_size_r | req_size_r;
    assign req_use_o = 1'b1;
    assign req_wdata_o = mem_wdata_r | req_wdata_r;
    // assign clint_addr_o = mem_addr_i;
    assign mem_valid_o = req_ready_i;
    assign load_data_o = mem_rdata_r;
 endmodule
