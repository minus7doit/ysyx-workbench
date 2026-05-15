/* verilator lint_off DECLFILENAME */
module ysyx_24110005_RegisterFile 
#(  REG_ADDR_WIDTH = 5, 
    DATA_WIDTH = 32) (
  input  clock,
  input  wen,
  input [DATA_WIDTH-1:0]      w_data,
  input [REG_ADDR_WIDTH-1:0]  w_addr,
  input [REG_ADDR_WIDTH-1:0]  r_addr1,
  input [REG_ADDR_WIDTH-1:0]  r_addr2,
  output reg [DATA_WIDTH-1:0] r_data1,
  output reg [DATA_WIDTH-1:0] r_data2
);


reg [DATA_WIDTH-1:0] rf [2**REG_ADDR_WIDTH-1:0];   

always @(posedge clock) begin
    if(wen && (w_addr != 5'd0))begin
        rf[w_addr]<=w_data;
    end
end


assign r_data1 =(|r_addr1)?rf[r_addr1] : 0;
assign r_data2 =(|r_addr2)?rf[r_addr2] : 0;

endmodule 


// Author: minus7
// Date: 2024-11-20
// Version: 1.0
// Filename: RegisterFile.v
// Filename: addi.v
