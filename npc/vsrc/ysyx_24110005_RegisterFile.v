/* verilator lint_off DECLFILENAME */
module ysyx_24110005_RegisterFile #(REG_ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] w_data,
  input [REG_ADDR_WIDTH-1:0] w_addr,
  input wen,
  output [DATA_WIDTH-1:0] r_data1,
  input  [REG_ADDR_WIDTH-1:0] r_addr1,
  output [DATA_WIDTH-1:0] r_data2,
  input [REG_ADDR_WIDTH-1:0] r_addr2
);
  reg [DATA_WIDTH-1:0] rf [2**REG_ADDR_WIDTH-1:0];
    
   always @(posedge clk) begin
    if (wen) rf[w_addr] <= w_data;
   end

assign r_data1 =(|r_addr1)?rf[r_addr1] : 0;
assign r_data2 =(|r_addr2)?rf[r_addr2] : 0;

endmodule


// Author: minus7
// Date: 2024-11-20
// Ver_dataion: 开辟一段寄存器内存对寄存器数组进行读写;
// Filename: addi.v
