module top(
input clk,
input rst,
input ps2_clk,
input ps2_data,
output ready,
output overflow,
output reg [2:0]state,
output [7:0]data,
output [6:0]hex0,
output [6:0]hex1,
output [6:0]hex2,
output [6:0]hex3,
output [6:0]hex4,
output [6:0]hex5
);
//reg [2:0]state;
reg nextdata_n;
reg [7:0]key_cnt;
parameter S_IDLE=3'b000;
parameter S_REC=3'b001;
parameter S_W_RLS=3'b010;
parameter S_W_DATA=3'b011;
always@(posedge clk)
if(rst)begin
		state<=S_IDLE;
	nextdata_n<=1;

end
else begin
case(state)
		S_IDLE:begin 
			    if(ready) state<=S_REC;else state<=state;
				end
		S_REC:begin
				if(ready) begin nextdata_n<=0; state<=S_W_RLS;end
				else nextdata_n <= 1;
			   end
		
		S_W_RLS:begin
 				if(ready) begin state<=S_W_DATA;nextdata_n<=0;end 
	     		else  nextdata_n <= 1;
				end
		S_W_DATA:begin
					if(ready) begin state<=S_REC;/*key_cnt<=key_cnt+1'b1;*/end
					nextdata_n <= 1;
				  end
default:state<=S_IDLE;
endcase
end
reg f0_counted;
reg en_seg;
always@(posedge clk)begin
if(rst) key_cnt<=0;
else begin
  if (ready) begin
                if (data == 8'hF0) begin
                    if (!f0_counted) begin
                        key_cnt <= key_cnt + 1;  // 每次新检测到 F0 时计数
                       f0_counted <= 1;           // 标记已计数
                   end
                end else begin
                    f0_counted <= 0;               // 重置，准备下次计数
                end
            end
        end
end

always@(posedge clk)begin
	if(data==8'hf0) en_seg<=0;
	else en_seg<=1;
end
ps2_keyboard inst(
    .clk(clk),
    .clrn(~rst),
    .ps2_clk(ps2_clk),
   .ps2_data(ps2_data),
    .data(data),
    .ready(ready),
    .nextdata_n(nextdata_n),
    .overflow(overflow)
);
reg [7:0]ascii;
scan_to_ascii S_TO_A(clk,rst,data,ascii);

 bcd7seg seg0(en_seg,data[3:0],hex0);
 bcd7seg seg1(en_seg,data[7:4],hex1);
 bcd7seg seg2(en_seg,ascii[3:0],hex2);
 bcd7seg seg3(en_seg,ascii[7:4],hex3);
 bcd7seg seg4(1'b1,key_cnt[3:0],hex4);
 bcd7seg seg5(1'b1,key_cnt[7:4],hex5);

endmodule
