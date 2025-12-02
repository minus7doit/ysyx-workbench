module ysyx_24110005_Clint #(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input  clk,
    input  rst,
    input  [ADDR_WIDTH-1:0] inst_ar_addr,
    output  cl_ar_ready, 
    input   cl_ar_valid,
    output [DATA_WIDTH-1:0] current_inst,
    input   cl_r_ready,
    output  cl_r_valid,  
    input  [ADDR_WIDTH-1:0] inst_aw_addr,
    output  cl_aw_ready, 
    input   cl_aw_valid,
    input   [DATA_WIDTH-1:0]cl_wdata,
    input   cl_w_valid,
    output  cl_w_ready,
    input   bready,
    output  bvalid,
    output  bresp
);
    
endmodule