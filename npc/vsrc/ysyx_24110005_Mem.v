module  ysyx_24110005_Mem #(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input                   clk,
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
    output  bresp,
    output  bvalid,
    input   bready
);
import "DPI-C" function int pmem_read(input int unsigned raddr);
import "DPI-C" function void pmem_write(input int unsigned waddr, input int wdata, input byte wmask);


reg [DATA_WIDTH-1:0]r_data;
always @(*) begin
    if(mem_ar_ready&&mem_ar_valid&&mem_r_ready)begin
         r_data = pmem_read(mem_addr);
        end
    else begin
         r_data = 0; // 无读写请求时，返回0
    end
end   

assign mem_rdata=r_data;
assign mem_r_valid=mem_ar_ready&&mem_ar_valid;

always @(posedge clk) begin
    if (mem_w_valid&&mem_w_ready) begin // 有写请求时
            pmem_write(mem_addr, mem_wdata, wmask);
        end
end   
reg r_bresp;
always @(posedge clk ) begin
      if (mem_w_valid&&mem_w_ready) begin // 有写请求时
        r_bresp<=1'b1;
      end
      else begin
        r_bresp<=1'b0;
      end
end

assign bresp=r_bresp;
assign bvalid=r_bresp;

assign mem_w_ready=1'b1;
assign mem_ar_ready=1'b1;
endmodule   