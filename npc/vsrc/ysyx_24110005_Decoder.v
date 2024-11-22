module ysyx_24110005_Decoder #(
   parameter DATA_WIDTH=32, 
   parameter REG_ADDR_WIDTH=5,
   parameter OP_WIDTH=7,
   parameter FUN_WIDTH=3
) (    
    input  [DATA_WIDTH-1:0]inst, 
    output [REG_ADDR_WIDTH-1:0]ra1,
    output [REG_ADDR_WIDTH-1:0]ra2,
    output [DATA_WIDTH-1:0]imm,
    output [FUN_WIDTH-1:0]fun,
    output [OP_WIDTH-1:0]opcode,
    output [REG_ADDR_WIDTH-1:0] w_addr
);
    parameter TYPE_NUM=7;
    parameter TYPE_WIDTH=7;
    parameter TYPE_I0=7'b0000011;
    parameter TYPE_I1=7'b0010011;
   // parameter TYPE_I2=7'b0001111;
//    parameter TYPE_I3=7'b1110011;
    parameter TYPE_B=7'b1100011;
    parameter TYPE_J=7'b1101111;
    parameter TYPE_S=7'b0100011;
    parameter TYPE_U0=7'b0110111;
    parameter TYPE_U1=7'b0010111;
    //parameter TYPE_R=7'b0110011;
    
    assign opcode=inst[OP_WIDTH-1:0];
    assign fun=inst[14:12];
    assign ra1=inst[19:15];
    assign ra2=inst[24:20];
    assign w_addr=inst[11:7];

MuxKeyWithDefault #(
    .NR_KEY(TYPE_NUM),
    .KEY_LEN(TYPE_WIDTH),
    .DATA_LEN(DATA_WIDTH)) 
imm_mux (
    .out        (imm   ),
    .key        (opcode),
    .default_out(32'b0 ),
    .lut({TYPE_U0,{inst[31:12],12'b0},TYPE_U1,{inst[31:12],12'b0},TYPE_I0,{{20{inst[31]}},inst[31:20]},TYPE_I1,{{20{inst[31]}},inst[31:20]},TYPE_B,{{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0},TYPE_J,{{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0},TYPE_S,{{20{inst[31]}},inst[31:25],inst[11:7]}})
);
//在这里对寄存器进行读？

/*RegisterFile #(
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .DATA_WIDTH    (DATA_WIDTH    ))
reg_rd (
    .clk    (clk ),
    .wdata  (0   ),
    .waddr  (0   ),
    .wen    (1'b0),
    .r_data1(src1),
    .r_addr1(ra1 ),
    .r_data2(src2), 
    .r_addr2(ra2 )
);
*/
endmodule


// Author: minus7
// Date: 2024-11-20
// Version: 1.0
// Filename: Inst_Decoder.v
