module ysyx_24110005_Arbiter#(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input  clk,
    input  rst,
    input  [ADDR_WIDTH-1:0] inst_ar_addr,
    output  Arb_ar_ready, 
    input   Arb_ar_valid,
    output [DATA_WIDTH-1:0] current_inst,
    input   Arb_r_ready,
    output  Arb_r_valid,  
    input  [ADDR_WIDTH-1:0] inst_aw_addr,
    output  Arb_aw_ready, 
    input   Arb_aw_valid,
    input   [DATA_WIDTH-1:0]Arb_wdata,
    input   Arb_w_valid,
    output  Arb_w_ready,

    
    input   bready,
    output  bvalid,
    output  bresp
);


endmodule