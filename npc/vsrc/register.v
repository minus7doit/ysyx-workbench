module yxyx_24110005_RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  output [DATA_WIDTH-1:0] r_data1,
  input reg [DATA_WIDTH-1:0] r_addr1,
  input reg [DATA_WIDTH-1:0] r_data2,
  output [DATA_WIDTH-1:0] r_addr2
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  
   always @(posedge clk) begin
    if (wen&&waddr) rf[waddr] <= wdata;
       else rf[wadder]<=0;
   end

assign r_data1 = ren?rf[r_addr1] : 0;
assign r_data2 = ren?rf[r_addr2] : 0;

endmodule


// Author: minus7
// Date: 2024-11-20
// Version: 开辟一段寄存器内存对寄存器数组进行读写;
// Filename: addi.v
