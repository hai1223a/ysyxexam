
import "DPI-C" function void psram_read(input int addr, output int data);
import "DPI-C" function void psram_write(input int addr, input int data, input char len);
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
  reg [3:0] sout;
  wire [3:0] control;
  wire [3:0] sin;
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
                8'heb: begin
                    case (counter)
                        4'd0: sout <= data[7:4]   ; 
                        4'd1: sout <= data[3:0]   ;
                        4'd2: sout <= data[15:12] ;
                        4'd3: sout <= data[11:8]  ;
                        4'd4: sout <= data[23:20] ;
                        4'd5: sout <= data[19:16] ;
                        4'd6: sout <= data[31:28] ;
                        4'd7: sout <= data[27:24] ;
                      default: ;
                    endcase
                  end
                8'h38: begin
                    case (counter)
                        4'd0: data[7:4]   <= sin; 
                        4'd1: data[3:0]   <= sin;
                        4'd2: data[15:12] <= sin;
                        4'd3: data[11:8]  <= sin;
                        4'd4: data[23:20] <= sin;
                        4'd5: data[19:16] <= sin;
                        4'd6: data[31:28] <= sin;
                        4'd7: data[27:24] <= sin;
                      default: ;
                    endcase
                  end
              default: ;
            endcase
          end 
          default:;
      endcase
    end
  end

  always @(*) begin
    if(counter == 4'd2 && state == data_t) psram_write({8'd0, addr}, data, 1);
    if(counter == 4'd4 && state == data_t) psram_write({8'd0, addr}, data, 2);
    if(counter == 4'd8 && state == data_t) psram_write({8'd0, addr}, data, 4);
  end
    
  
  assign control = (state == data_t && cmd == 8'heb) ? 4'b1111 : 0;
  assign dio[0] = control[0] ? sout[0] : 1'bz;
  assign dio[1] = control[1] ? sout[1] : 1'bz;
  assign dio[2] = control[2] ? sout[2] : 1'bz;
  assign dio[3] = control[3] ? sout[3] : 1'bz;
  assign sin = dio;
endmodule

