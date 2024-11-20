module ysyx_24110005_addi (
    input [11:0]imm
    input [31:0]rs1, 
    output reg [31:0]rd
);
    wire [31:0] w_imm={20{1'b1},imm[31:20]};
    // Your code here
     assign rd=rs1+w_imm;

endmodule


// Author: minus7
// Date: 2024-11-20
// Version: 1.0
// Filename: addi.v
