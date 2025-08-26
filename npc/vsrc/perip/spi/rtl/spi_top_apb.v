// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
  `define FAST_FLASH

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

`ifdef FAST_FLASH

wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = 8'b0;
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

`else
localparam IDLE   = 3'b000;
localparam W_DIV  = 3'b001;
localparam W_SS   = 3'b010;
localparam W_CTRL = 3'b011;
localparam W_CMD  = 3'b100;
localparam W_GO   = 3'b101;
localparam R_GO   = 3'b110;
localparam R_DATA = 3'b111;
localparam SPI_IDLE  = 2'b00;
localparam SPI_SETUP = 2'b01;
localparam SPI_WAIT  = 2'b10;

wire [31:0] wb_dat_i, wb_dat_o;
wire [4:0] wb_adr_i;
wire [3:0] wb_sel_i;
wire wb_we_i, wb_stb_i, wb_cyc_i, wb_ack_o, wb_err_o;
wire in_flash = (in_paddr >= flash_addr_start) && (in_paddr <= flash_addr_end);
wire xip_ready, xip_slverr;
wire [31:0] xip_rdata;
reg [31:0] xip_wdata;
reg [4:0] xip_addr;
reg [3:0] xip_strb;
reg xip_write, xip_sel, xip_enable;
reg [2:0] state;
reg [2:0] pre_state;
reg [1:0] spi_state;
reg flash_config_good;
always @(posedge clock) begin
  if (reset) begin
    flash_config_good <= 0;  
  end else begin
    if(in_flash & in_psel) begin
      flash_config_good <= 1;
    end else begin
      if(in_psel && !in_penable) begin
        flash_config_good <= 0;  
      end
    end
  end
end
always @(posedge clock) begin
  if (reset) begin
    state <= IDLE;
  end else begin
    case (state)
        IDLE: begin
          if(in_flash & in_psel) begin
            if(flash_config_good) begin
              state <= W_CMD;
            end else begin
              state <= W_DIV;
            end
          end
        end
        W_DIV: begin
          if(spi_state == SPI_IDLE) begin
            state <= W_SS;
          end
        end
        W_SS: begin
          if(spi_state == SPI_IDLE) begin
            state <= W_CTRL;
          end
        end
        W_CTRL: begin
          if(spi_state == SPI_IDLE) begin
            state <= W_CMD;
          end
        end
        W_CMD: begin
          if(spi_state == SPI_IDLE) begin
            state <= W_GO;
          end
        end
        W_GO: begin
          if(spi_state == SPI_IDLE) begin
            state <= R_GO;
          end
        end
        R_GO: begin
          if((spi_state == SPI_IDLE) && (~wb_dat_o[8])) begin
            state <= R_DATA;
          end
        end 
        R_DATA: begin
          if(spi_state == SPI_IDLE) begin
            state <= IDLE;
          end
        end
      default: ;
    endcase    
  end
end

always @(*) begin
  xip_addr = 0;
  xip_wdata = 0;
  xip_strb = 0;
  xip_write = 0;
  case (state)
      W_DIV: begin
        xip_addr = 5'h14;
        xip_wdata = 32'h0;
        xip_strb = 4'b0011;
        xip_write = 1;
      end
      W_SS: begin
        xip_addr = 5'h18;
        xip_wdata = 32'h1;
        xip_strb = 4'b0001;
        xip_write = 1;
      end
      W_CTRL: begin
        xip_addr = 5'h10;
        xip_wdata = 32'h2040;
        xip_strb = 4'b0011;
        xip_write = 1;
      end
      W_CMD: begin
        xip_addr = 5'h4;
        xip_wdata = {8'h3, in_paddr[23:0]};
        xip_strb = 4'b1111;
        xip_write = 1;
      end
      W_GO: begin
        xip_addr = 5'h10;
        xip_wdata = 32'h3140;
        xip_strb = 4'b0011;
        xip_write = 1;
      end 
      R_GO: begin
        xip_addr = 5'h10;
        xip_write = 0;
      end 
      R_DATA: begin
        xip_addr = 5'h0;
        xip_write = 0;
      end
    default: ;
  endcase    
end

always @(posedge clock) begin
  if (reset) begin
    spi_state <= SPI_IDLE;
  end else begin
    case (spi_state)
        SPI_IDLE: begin
          if(in_flash & in_psel) begin
            spi_state <= SPI_SETUP;
          end 
        end
        SPI_SETUP: begin
          spi_state <= SPI_WAIT; 
        end  
        SPI_WAIT: begin
          if(wb_ack_o) begin
            spi_state <= SPI_IDLE;
          end
        end
      default:; 
    endcase
  end
end

always @(*) begin
  xip_sel = 0;
  xip_enable = 0;
  case (spi_state)
    SPI_SETUP: begin
      xip_sel = 1; 
    end  
    SPI_WAIT: begin
      xip_sel = 1;
      xip_enable = 1;
    end
  default:; 
  endcase
end

assign xip_ready = ((state == R_DATA) && (wb_ack_o)) ? 1 : 0;
assign xip_slverr = ((state == R_DATA) && (wb_ack_o)) ? wb_err_o : 0;
assign xip_rdata = ((state == R_DATA) && (wb_ack_o)) ? {wb_dat_o[7:0], wb_dat_o[15:8], wb_dat_o[23:16], wb_dat_o[31:24]} : 0;
assign wb_adr_i = in_flash ? xip_addr[4:0] : in_paddr[4:0];
assign wb_dat_i = in_flash ? xip_wdata : in_pwdata;
assign in_prdata = in_flash ? xip_rdata : wb_dat_o;
assign wb_sel_i = in_flash ? xip_strb : in_pstrb;
assign wb_we_i = in_flash ? xip_write : in_pwrite;
assign wb_stb_i = in_flash ? xip_sel : in_psel;
assign wb_cyc_i = in_flash ? xip_enable : in_penable;
assign in_pready = in_flash ? xip_ready : wb_ack_o;
assign in_pslverr = in_flash ? xip_slverr : wb_err_o;

spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(wb_adr_i),
  .wb_dat_i(wb_dat_i),
  .wb_dat_o(wb_dat_o),
  .wb_sel_i(wb_sel_i),
  .wb_we_i (wb_we_i ),
  .wb_stb_i(wb_stb_i),
  .wb_cyc_i(wb_cyc_i),
  .wb_ack_o(wb_ack_o),
  .wb_err_o(wb_err_o),
  .wb_int_o(spi_irq_out),
  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);

`endif // FAST_FLASH

endmodule
