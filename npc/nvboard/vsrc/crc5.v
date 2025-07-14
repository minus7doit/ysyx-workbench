module usb_crc5 
#(  parameter ADDR_WIDTH = 7 ,
    parameter EDP_WIDTH=4,
    parameter CRC_WIDTH=5,
    parameter DATA_WIDTH=11

)(
    input clk,
    input rst_n,
    input [DATA_WIDTH-1:0] din,
    output [CRC_WIDTH-1:0] reg crc_out
);
localparam this_addr = 4'b1000;

wire [ADDR_WIDTH-1:0] i_addr;
wire [EDP_WIDTH-1:0] i_edp;
wire addr_ok;
wire [DATA_WIDTH-1:0]d_reverse;



//assign  i_edp=din[DATA_WIDTH-1:ADDR_WIDTH];
assign  i_addr=din[ADDR_WIDTH-1:0];
assign  data={din[0:10],5'b0};

/*always @(posedge clk or negedge rst_n) begin
    if(!rst_n)begin
        i_addr<=0;
        i_edp<=0；
    end
    else begin
        
    end
end
*/


assign  addr_ok=(i_addr==this_addr);

endmodule