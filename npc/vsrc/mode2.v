module  mode2#(
    parameter DATA_WIDTH=16,
    parameter DIVISOR_WIDTH=6
) (
    input                           I_en,
    input  [DATA_WIDTH-1:0]         I_data,
    input  [DIVISOR_WIDTH-1:0]      I_divisor,
    output [DIVISOR_WIDTH-2:0]      O_data
);
reg [DATA_WIDTH-1:0]    result_mid;//中间值//[DATA_WIDTH-DIVISOR_WIDTH+2]
reg [DATA_WIDTH-1:0]    result_next;
reg [DIVISOR_WIDTH-1:0] remain;

integer i;
always @(*) begin
    if(~I_en)begin
        remain      ={DIVISOR_WIDTH{1'b0}};
        result_next ={DATA_WIDTH{1'b0}};
        result_mid  ={DATA_WIDTH{1'b0}};
    end
    else begin
        result_mid=I_data;
        for(i=1;i<=DATA_WIDTH-DIVISOR_WIDTH+1;i=i+1)begin//向左循环位移，低位补零的操作，至少补充十次
            if(result_mid[DATA_WIDTH-1])begin
                remain=result_mid[DATA_WIDTH-1:DATA_WIDTH-DIVISOR_WIDTH]^I_divisor;//由于最高位为1才计算该conditon，而crc是100101,故ramin的最高位一定是0；
                result_next={remain[DIVISOR_WIDTH-2:0],result_mid[DATA_WIDTH-DIVISOR_WIDTH-1:0],1'b0};
                result_mid=result_next;
            end
            else begin
                remain=result_mid[DATA_WIDTH-1:DATA_WIDTH-DIVISOR_WIDTH];
                result_next={result_mid[DATA_WIDTH-2:0],1'b0};
                result_mid=result_next;
                
            end
        end
    end
end
assign O_data=remain[DIVISOR_WIDTH-2:0];
endmodule