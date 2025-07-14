module crc5 #(  
    parameter ADDR_WIDTH = 7 ,
    parameter EDP_WIDTH=4,
    parameter CRC_WIDTH=5,
    parameter DATA_WIDTH=11

)(
    //input                   rst_n,
    input                   crc5_en,
    input  [DATA_WIDTH-1:0] din,
    input  [CRC_WIDTH-1:0]  crc5_check,  
    output [CRC_WIDTH-1:0]  crc5_out,
    output                  check_pass,
    output                  addr_ok
);
localparam this_addr    = 7'b0001000;
localparam CRC          = 6'b100101 ;


wire [ADDR_WIDTH-1:0]           i_addr;
wire [EDP_WIDTH-1:0 ]           i_edp;
wire [CRC_WIDTH+DATA_WIDTH-1:0] data;



/////////////////////////////
//取消rst_n,直接改为localparam；
/////////////////////////////
//reg  [CRC_WIDTH:0 ]      CRC;
//reg  [ADDR_WIDTH-1:0]           this_addr;
/*always@(rst_n)begin
    if(!rst_n)begin
    this_addr   <=7'b0001000;
    CRC         <=6'b100101;
    end
end*/
assign  i_edp   =   din[DATA_WIDTH-1:ADDR_WIDTH];
assign  i_addr  =   din[ADDR_WIDTH-1:0];

/****************************************************/
//输入数据翻转补0
/****************************************************/


/*
integer i;
//reg  [DATA_WIDTH-1:0]    d_reverse;
always @(din) begin
    for(i=0;i<DATA_WIDTH;i=i+1)
    begin
        d_reverse[i]=din[DATA_WIDTH-1-i];
    end
end*/

assign  data={~din[0],~din[1],~din[2],~din[3],~din[4],din[5],din[6],din[7],din[8],din[9],din[10],5'b0};

/////////////////////////////
//模二除法
/////////////////////////////
wire [CRC_WIDTH-1:0]mod2_result;
mode2 #(
.DATA_WIDTH     (DATA_WIDTH+CRC_WIDTH),
.DIVISOR_WIDTH  (CRC_WIDTH+1         )
) inst_mod2(
.I_en     (crc5_en),
.I_data   (data   ),
.I_divisor(CRC    ),
.O_data   (mod2_result)
);

//输出数据翻转，且取反
assign crc5_out=~{mod2_result[0],mod2_result[1],mod2_result[2],mod2_result[3],mod2_result[4]};
//判断校验是否通过
assign addr_ok=(i_addr==this_addr);
assign check_pass=(crc5_check==crc5_out);

endmodule