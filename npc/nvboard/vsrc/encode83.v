module encode83(
input [7:0]data_in,
input en,
output  is_datain,
output reg [3:0]data_out,
output [6:0]hex
);
integer i;
parameter DATA_WIDTH=8;
assign  is_datain=|data_in;
always@(data_in or en)begin
if(en) begin
		for(i=0;i<DATA_WIDTH;i=i+1)begin
		if(!is_datain)  data_out=4'b0;
		else if(data_in[i]==1) data_out=i[3:0];
		end
	 end
end
bcd7seg seg0(1,data_out,hex);
endmodule
