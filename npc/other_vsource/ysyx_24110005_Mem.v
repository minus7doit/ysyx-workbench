module  ysyx_24110005_Mem #(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input                   clock,
    input                   reset,
    input  [7:0]            wmask,
    input  [ADDR_WIDTH-1:0] mem_addr,
    input   mem_ar_valid,
    output  mem_ar_ready,
    output [DATA_WIDTH-1:0] mem_rdata,
    input   mem_r_ready,
    output  mem_r_valid,
    input  [DATA_WIDTH-1:0] mem_wdata,
    input   mem_w_valid,
    output  mem_w_ready,
    output  mem_bresp,
    output  bvalid,
    input   bready
);


import "DPI-C" function int pmem_read(input int unsigned raddr);
import "DPI-C" function void pmem_write(input int unsigned waddr, input int wdata, input byte wmask);

parameter STATE_MEM_ACCESS=2'b01;
parameter STATE_R_OUTPUT=2'b10;
parameter STATE_STORE=2'b11;


reg [1:0] mem_state;
always @(posedge clock or posedge reset) begin
    if(reset)begin
        mem_state<=STATE_MEM_ACCESS;
    end
    else begin
        case (mem_state)
            STATE_MEM_ACCESS:begin
            if(mem_ar_valid&&mem_ar_ready)begin
                mem_state<=STATE_R_OUTPUT;
            end
            else if(mem_w_valid&&mem_w_ready)begin
                mem_state<=STATE_STORE;
            end
            end
            STATE_R_OUTPUT:begin
            if(mem_r_ready&&mem_r_valid)
                mem_state<=STATE_MEM_ACCESS;
            end
            STATE_STORE:begin
                mem_state<=STATE_MEM_ACCESS;
            end

            default: mem_state<=STATE_MEM_ACCESS;
        endcase
    end
end

assign  mem_r_valid=(mem_state==STATE_R_OUTPUT);
assign  mem_ar_ready=(mem_state==STATE_MEM_ACCESS);
assign  mem_w_ready=(mem_state==STATE_MEM_ACCESS);

reg [DATA_WIDTH-1:0]r_data;
always @(posedge clock) begin
    if(mem_ar_ready&&mem_ar_valid)begin
         r_data <= pmem_read(mem_addr);
        end
    else begin
         r_data <= r_data; // 无读写请求时，返回0
    end
end   

assign mem_rdata=r_data;

always @(posedge clock) begin
    if (mem_w_valid&&mem_w_ready) begin // 有写请求时
            pmem_write(mem_addr, mem_wdata, wmask);
        end
end   

reg r_bresp;
always @(posedge clock ) begin
      if (mem_w_valid&&mem_w_ready) begin // 有写请求时
        r_bresp<=1'b1;
      end
      else begin
        r_bresp<=1'b0;
      end
end

assign mem_bresp=(mem_state==STATE_STORE);
assign bvalid=r_bresp;

endmodule   