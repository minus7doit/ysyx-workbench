module CRC16_R #(  
    parameter CRC_WIDTH=16,
    parameter DATA_WIDTH=8

)(
    //系统接口
    input clk,
    input rst_n,

    //数据输入接口
    input  [7:0] din,
    input  I_valid,//令牌包来的时候就拉高
    output reg O_ready,
    input  crc16_en,
    input  I_sop,
    input  I_eop,

    //事务控制模块接口
    input  w_en,
    
    //BUFFER写接口
    output reg [7:0]  dout,
    output reg        O_sop,
    output reg        O_eop,
    output reg        O_valid,//输入有效且wen为高，
    input             I_ready,

    //外围接口
    output reg        crc16_err
);
localparam CRC          =17'b11000000000000101;
localparam Residue      =16'h800D;
localparam IDLE         =3'b001;
localparam DATA_CHECK   =3'b010;
localparam CHECK_END    =3'b100;

reg  [2:0]                      state;
//wire [CRC_WIDTH-1:0]            w_crc16_out;
reg  [CRC_WIDTH-1:0]            r_crc16_out;
wire [CRC_WIDTH+DATA_WIDTH-1:0] data;
wire [CRC_WIDTH-1:0]            mod2_result;



always @(posedge clk or rst_n) begin
    if (!rst_n) begin
        O_valid<=1'b0;
    end
    else begin
        O_valid<=(I_valid&&w_en);//按协议来说，应该和ready有关，交给buffer做了。
    end
end


always @(posedge clk or rst_n) begin
    if (!rst_n) begin
        O_ready<=1'b0;//和上游的握手（不是传输层）,准备好接收数据
        O_sop  <=1'b0;   
        O_eop  <=1'b0;
    end
    else begin
        O_sop  <=I_sop;
        O_eop  <=I_eop;
        O_ready<=1'b1;
    end
end

always @(posedge clk or rst_n) begin
    if (!rst_n) begin
        dout   <=8'b0;
    end
    else begin
        dout   <=din;
    end
end


always @(posedge clk) begin
    if(!rst_n) begin
            r_crc16_out<=16'hFFFF;
    end
    else begin
        if(crc16_en&&(~I_sop)&&I_valid)//需要有效才能更新，否则整个计算会崩
            r_crc16_out<=mod2_result;
        else if(crc16_en&&~I_sop)
            r_crc16_out<=r_crc16_out;
        else
            r_crc16_out<=16'hFFFF;
    end
end


always @(posedge clk) begin
    if(!rst_n) begin
        crc16_err<=1'b0;
    end
    else begin
        crc16_err<=(r_crc16_out!=Residue)&&O_eop;          //eop和最后一个数据一起进，由于一拍后r_crc16_out更新，不能在这一拍间用r_crc16_out判断。
                                                          //所以使用一拍后被赋值的O_eop;
                                                                         
    end
end

//输入数据翻转补0
//补16个0,高八位的0要和1^,直接连接8'b1
assign  data={din[0],din[1],din[2],din[3],din[4],din[5],din[6],din[7],16'b0}^{r_crc16_out,8'b0};
//模二除法
mode2 #(
.DATA_WIDTH     (DATA_WIDTH+CRC_WIDTH),
.DIVISOR_WIDTH  (CRC_WIDTH+1         )
) inst_mod2(
.I_en     (crc16_en&&~I_sop ),
.I_data   (data             ),
.I_divisor(CRC              ),
.O_data   (mod2_result      )
);

//输出数据翻转
/*assign w_crc16_out=~{ mod2_result[0],mod2_result[1],mod2_result[2],mod2_result[3],mod2_result[4],
                      mod2_result[5],mod2_result[6],mod2_result[7],mod2_result[8],mod2_result[9],
                      mod2_result[10],mod2_result[11],mod2_result[12],mod2_result[13],mod2_result[14],mod2_result[15]};
*///处理最后两个8bit的值，决定数据包是否正确传输。

              
endmodule
