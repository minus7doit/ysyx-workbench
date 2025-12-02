module ysyx_24110005_Uart#(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input  clk,
    input  rst,
    input  [ADDR_WIDTH-1:0] inst_ar_addr,
    output  l_ar_ready, 
    input   l_ar_valid,
    output [DATA_WIDTH-1:0] current_inst,
    input   l_r_ready,
    output  l_r_valid,  
    input  [ADDR_WIDTH-1:0] inst_aw_addr,
    output  l_aw_ready, 
    input   l_aw_valid,
    input   [DATA_WIDTH-1:0]l_wdata,
    input   l_w_valid,
    output  l_w_ready,
    input   bready,
    output  bvalid,
    output  bresp
);


endmodule