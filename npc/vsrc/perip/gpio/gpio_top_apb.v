module gpio_top_apb(
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

  output [15:0] gpio_out,
  input  [15:0] gpio_in,
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);
  reg [15:0] gpio_x0_16, gpio_x4_16;
  reg [31:0] gpio_x8_32;
  reg [31:0] wdata, rdata;
  reg ready;
  wire [63:0] gpio_seg;
  wire valid = in_psel & !in_penable;

  always @(*) begin
    wdata = 0;
    case (in_pstrb)
        4'b0011: wdata = {16'd0, in_pwdata[15:0]}; 
        4'b1100: wdata = {16'd0, in_pwdata[31:16]}; 
        4'b1111: wdata = in_pwdata; 
      default:;
    endcase
  end

  always @(posedge clock) begin
      if (reset) begin
        gpio_x0_16 <= 0;
        gpio_x4_16 <= 0;
        gpio_x8_32 <= 0;
        ready <= 0;
      end else begin
        if(valid) begin
          case (in_paddr[3:0])
              4'h0: begin
                rdata <= {16'd0, gpio_x0_16};
                gpio_x0_16 <= wdata[15:0]; 
                ready <= 1;
              end
              4'h4: begin
                rdata <= {16'd0, gpio_x4_16};
                gpio_x4_16 <= gpio_in;
                ready <= 1;
              end
              4'h8: begin
                rdata <= gpio_x8_32;
                gpio_x8_32 <= wdata;
                ready <= 1;
              end
            default: ;
          endcase
        end else begin
          ready <= 0;
        end
      end
  end

  genvar i;
  generate
    for (i = 0;i < 8;i = i + 1) begin: decoder_gen
        decoder u_decoder(
          .data_i(gpio_x8_32[(i*4)+:4]),
          .out_o(gpio_seg[(i*8)+:8])
        );
    end
  endgenerate

  assign {
    gpio_seg_7, gpio_seg_6, gpio_seg_5, gpio_seg_4, gpio_seg_3, gpio_seg_2, gpio_seg_1, gpio_seg_0
  } = gpio_seg;
  assign gpio_out = gpio_x0_16;
  assign in_pready = ready;
  assign in_prdata = rdata;
  assign in_pslverr = 0;
endmodule

module decoder(
  input [3:0] data_i,
  output reg [7:0] out_o
);
  always @(*) begin
    case(data_i)
      4'h0: out_o = 8'b0000_0011;
      4'h1: out_o = 8'b1001_1111;
      4'h2: out_o = 8'b0010_0101;
      4'h3: out_o = 8'b0000_1101;
      4'h4: out_o = 8'b1001_1001;
      4'h5: out_o = 8'b0100_1001;
      4'h6: out_o = 8'b0100_0001;
      4'h7: out_o = 8'b0001_1111;
      4'h8: out_o = 8'b0000_0001;
      4'h9: out_o = 8'b0000_1001;
      4'ha: out_o = 8'b0001_0001; // A
      4'hb: out_o = 8'b1100_0001; // b
      4'hc: out_o = 8'b0110_0011; // C
      4'hd: out_o = 8'b1000_0101; // d
      4'he: out_o = 8'b0110_0001; // E
      4'hf: out_o = 8'b0111_0001; // F
    endcase
  end
endmodule
