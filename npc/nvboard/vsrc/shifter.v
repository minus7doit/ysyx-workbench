module shifter(
input clk,
input rst,
input in,
input [2:0]sel,
input [7:0]data_in,
output reg [7:0]data_out	);
parameter CLK_NUM=5000000;
reg [31:0]clk_cnt;
always@(posedge clk)begin
if(rst) 
		clk_cnt<=0;
else begin
	if(clk_cnt==CLK_NUM)begin
		case(sel)
		3'b000:data_out<=0;
		3'b001:data_out<=data_in;
		3'b010:data_out<={1'b0,data_out[7:1]};
		3'b011:data_out<={data_out[6:0],1'b0};
		3'b100:data_out<={data_out[7],data_out[7:1]};
		3'b101:data_out<={in,data_out[7:1]};
		3'b110:data_out<={data_out[0],data_out[7:1]};
		3'b111:data_out<={data_out[6:0],data_out[7]};
		default:data_out<=0;
		endcase		
		clk_cnt<=0;
		end

	else 
		clk_cnt<=(clk_cnt<CLK_NUM)?clk_cnt+1'b1:0;
end
end

endmodule
