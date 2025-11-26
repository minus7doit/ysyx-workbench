module inst_rom#(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input  clk,
    input  rst,
    input  [ADDR_WIDTH-1:0] inst_ar_addr,
    output  if_ar_ready, 
    input   if_ar_valid,
    output [DATA_WIDTH-1:0] current_inst,
    input   if_r_ready,
    output  if_r_valid
);

parameter STATE_IF=2'b01;
parameter STATE_WAIT_RESP=2'b10;
parameter STATE_OUTPUT=2'b11;
import "DPI-C" function int pmem_read(input int unsigned raddr);
reg [DATA_WIDTH-1:0] fetch_dec_inst;
wire inst;
always @(posedge clk or posedge rst) begin
    if(rst)begin
        fetch_dec_inst<=32'b0;
    end
    else begin
        if(if_ar_valid&&if_ar_ready&&if_r_ready)begin
            fetch_dec_inst<=pmem_read(inst_ar_addr);
        end
        else begin
            fetch_dec_inst<=fetch_dec_inst;
        end
    end
end
assign if_r_valid=if_ar_valid&if_ar_ready;
assign if_ar_ready=if_ar_valid;
assign current_inst =fetch_dec_inst;
endmodule