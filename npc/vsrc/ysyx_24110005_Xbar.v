module ysyx_24110005_Xbar#(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input  clk,
    input  rst,
    input  [ADDR_WIDTH-1:0] inst_ar_addr,
    output  xb_ar_ready, 
    input   xb_ar_valid,
    output [DATA_WIDTH-1:0] current_inst,
    input   xb_r_ready,
    output  xb_r_valid,  
    input  [ADDR_WIDTH-1:0] inst_aw_addr,
    output  xb_aw_ready, 
    input   xb_aw_valid,
    input   [DATA_WIDTH-1:0]xb_wdata,
    input   xb_w_valid,
    output  xb_w_ready,
    input   bready,
    output  bvalid,
    output  bresp
);


endmodule