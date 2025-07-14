module crc5_t #(
    parameter ADDR_WIDTH=7,
    parameter ENDP_WIDTH=4,
    parameter CRC_WIDTH=5,
    parameter DATA_WIDTH=11
) (
   input    [ADDR_WIDTH-1:0]tx_addr,
   input    [ENDP_WIDTH-1:0]tx_endp,
   output   [DATA_WIDTH+CRC_WIDTH-1:0]packet_out//组装好的包
);
localparam                      CRC = 6'b100101 ;

wire [ADDR_WIDTH+ENDP_WIDTH-1:0]addr_endp;
wire [DATA_WIDTH+CRC_WIDTH-1:0] data_to_mod2;
wire [CRC_WIDTH-1 :0]           crc5_out;

assign  addr_endp={tx_endp,tx_addr};//是否可以取消这句赋值，直接使用input，减少逻辑门延迟？
//和1异或，等于直接取反
assign  data_to_mod2={~addr_endp[0],~addr_endp[1],~addr_endp[2],~addr_endp[3],~addr_endp[4],
                        addr_endp[5],addr_endp[6],addr_endp[7],addr_endp[8],addr_endp[9],addr_endp[10],5'b0};


//模二除法
wire [CRC_WIDTH-1:0]mod2_result;
mode2 #(
.DATA_WIDTH     (DATA_WIDTH+CRC_WIDTH),
.DIVISOR_WIDTH  (CRC_WIDTH+1         )//CRC5实际有6位
) inst_mod2(
.I_en     (1            ),
.I_data   (data_to_mod2 ),
.I_divisor(CRC          ),
.O_data   (mod2_result  )
);

//输出数据翻转，且取反
assign crc5_out    =~{mod2_result[0],mod2_result[1],mod2_result[2],mod2_result[3],mod2_result[4]};
//组装
assign packet_out  = {crc5_out,addr_endp};







endmodule