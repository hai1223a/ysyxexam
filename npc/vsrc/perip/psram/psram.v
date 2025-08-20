
import "DPI-C" function void psram_read(input int addr, output int data);
import "DPI-C" function void psram_write(input int addr, output int data);
module psram(
  input sck,
  input ce_n,
  inout [3:0] dio
);
  localparam cmd_t  = 3'b000;
  localparam addr_t = 3'b001;
  localparam wait_t = 3'b010;
  localparam data_t = 3'b011;
  localparam err_t  = 3'b100;

  reg [7:0] cmd;
  reg [23:0] addr;
  reg [31:0] rdata, data;
  reg [2:0] state;
  reg [3:0] counter;
  wire [31:0] wdata;
  wire [3:0] control;
  wire [3:0] sin;
  wire [3:0] sout;
  always @(posedge sck or posedge ce_n) begin
    if (ce_n) begin
      state <= cmd_t;
    end else begin
      case (state)
          cmd_t: begin
            state <= (counter == 4'd7) ? addr_t : state;
          end
          addr_t: begin
            case (cmd)
                8'heb: state <= (counter == 4'd5) ? wait_t : state;
                8'h38: state <= (counter == 4'd5) ? data_t : state;
              default: state <= err_t;
            endcase
          end
          wait_t: begin
            state <= (counter == 4'd5) ? data_t : state;
          end
          data_t: begin
            state <= state;
          end
          default: begin
            $fwrite(32'h80000002, "Assertion failed: Unsupported command `%xh`, only support `03h` read command\n", cmd);
            $fatal;
          end
      endcase
    end
  end

  always@(posedge sck or posedge ce_n) begin
    if (ce_n) counter <= 0;
    else begin
      case (state)
        cmd_t:   counter <= (counter < 4'd7 ) ? counter + 4'd1 : 0;
        addr_t:  counter <= (counter < 4'd5) ? counter + 4'd1 : 0;
        wait_t:  counter <= (counter < 4'd5) ? counter + 4'd1 : 0;
        default: counter <= counter + 4'd1;
      endcase
    end
  end

  always @(posedge sck or posedge ce_n) begin
    if (ce_n) begin
      cmd  <= 0;
      addr <= 0;
      data <= 0;
    end else begin
      case (state)
          cmd_t: begin
            cmd <= { cmd[6:0], sin[0] };
          end
          addr_t: begin
            addr <= { addr[19:0], sin };
          end
          wait_t: begin
            if(counter == 0)
              psram_read({8'd0, addr}, rdata);
            else if(counter == 4'd1)
              data <= rdata;
          end
          data_t: begin
            case (cmd)
                8'heb: data <= {data[27:0], 4'd0};
                8'h38: data <= {sin, data[31:4]};
              default: ;
            endcase
            if(counter == 4'd8)
              psram_write({8'd0, addr}, wdata);
          end 
          default:;
      endcase
    end
  end

  assign wdata = data;
  assign control = (state == data_t && cmd == 8'h38) ? 4'b1111 : 0;
  assign sout = (state == data_t) ? data[31:28] : 0;
  assign dio[0] = control[0] ? sout[0] : 1'bz;
  assign dio[1] = control[1] ? sout[1] : 1'bz;
  assign dio[2] = control[2] ? sout[2] : 1'bz;
  assign dio[3] = control[3] ? sout[3] : 1'bz;
  assign sin = dio;
endmodule

