/* verilator lint_off UNUSEDSIGNAL */
module ysyx_24110005_Alu #(
    parameter DATA_WIDTH=32,
    parameter OP_WIDTH=7,
    parameter REG_ADDR_WIDTH=5,
    parameter FUN_WIDTH=3
) (
input clk,
input [DATA_WIDTH-1:0] pc,
input [DATA_WIDTH-1:0] src1,
input [DATA_WIDTH-1:0] src2,
input [DATA_WIDTH-1:0] imm ,
input [OP_WIDTH-1:0]   opcode,
input [FUN_WIDTH-1:0]  fun,
output reg [DATA_WIDTH-1:0] dnpc,
output reg [DATA_WIDTH-1:0] w_data,
output wen,
output w_finish_sim
);

wire [DATA_WIDTH-1:0]src1_comp;
wire [DATA_WIDTH-1:0]src2_comp;
wire mem_visit_valid;
wire [DATA_WIDTH-1:0]imm_comp;
wire [DATA_WIDTH-1:0]snpc;

wire [OP_WIDTH+FUN_WIDTH-1:0]sel;

wire [DATA_WIDTH-1:0]mem_addr ;
wire [DATA_WIDTH-1:0]mem_wdata ;
wire mem_wen;
reg  [7:0]wmask;
reg [DATA_WIDTH-1:0] mem_rdata;


import "DPI-C" function int pmem_read(input int unsigned raddr);
import "DPI-C" function void pmem_write(input int unsigned waddr, input int wdata, input byte wmask);

parameter TYPE_I0=7'b0000011;
parameter TYPE_I1=7'b0010011;
parameter TYPE_I2=7'b1100111;
//parameter TYPE_I3=7'b1110011;
parameter TYPE_B=7'b1100011;
parameter TYPE_J=7'b1101111;
parameter TYPE_S=7'b0100011;
parameter TYPE_U0=7'b0110111;
parameter TYPE_U1=7'b0010111;
parameter TYPE_R=7'b0110011;

parameter BASE_ADDR=32'h80000000;

//ysyx_24110005_signed_to_comp #(DATA_WIDTH)comp1(src1,src1_comp);
//ysyx_24110005_signed_to_comp #(DATA_WIDTH)comp2(src2,src2_comp);

//ysyx_24110005_signed_to_comp #(DATA_WIDTH)comp3(imm,  imm_comp);//riscv的立即数是以补码形式存储的，所以不需要转换
//reg [DATA_WIDTH-1:0]w_data_comp;



assign sel = {fun,opcode};


always@(*)begin
    if(sel[OP_WIDTH-1:0] == TYPE_B || sel[OP_WIDTH-1:0] == TYPE_J) begin
        dnpc=pc+imm;   //分支指令和存储指令的下一条指令地址
    end
    else if (sel[OP_WIDTH-1:0] == TYPE_I2 && sel[OP_WIDTH+FUN_WIDTH-1:OP_WIDTH] == 3'b000) begin
        dnpc=(src1+imm)&(~32'b1);//jalr指令的下一条指令地址
    end
    else begin
        dnpc=snpc; //默认情况下，下一条指令地址为当前指令地址+4
    end
end


//下面这段为内存读写使用
always @(*) begin
    case(sel)
    {3'b000,TYPE_S}:begin
        wmask=8'b1;
    end
    {3'b001,TYPE_S}:begin
        wmask=8'b11;
    end
    {3'b010,TYPE_S}:begin
        wmask=8'b1111;
    end
    default:wmask = 8'b0;
    endcase
end


always @(mem_visit_valid) begin
    if(mem_visit_valid) begin // 有读写请求时
            mem_rdata = pmem_read(mem_addr);
            if (mem_wen) begin // 有写请求时
                pmem_write(mem_addr, mem_wdata, wmask);
            end
    end
    else begin
            mem_rdata = 0; // 无读写请求时，返回0
    end
end   


//下面这段要专门为寄存器读写使用
always@(*)begin
    casez(sel) 
    10'b000_0010011:begin //addi
        w_data=src1+imm;//地址不能看成负数处理
        //w_data=(w_data_comp[DATA_WIDTH-1])?{w_data_comp[DATA_WIDTH-1],~(w_data_comp[DATA_WIDTH-2:0]-1'b1)}:w_data_comp;    
        end                        
    10'bzzz_1101111:begin //jal
        w_data=pc+4;
        end
    10'b000_1100111:begin //jalr
        w_data=pc+4;
    end
    10'bzzz_0010111:begin //auipc
        w_data=pc+imm; 
    end
    10'bzzz_0110111:begin //lui
        w_data=imm;   
    end
    {3'b001,TYPE_I0}:begin
        w_data={{16{mem_rdata[16]}},mem_rdata[15:0]};
    end
    {3'b010,TYPE_I0}:begin
        w_data=mem_rdata;
    end
    {3'b100,TYPE_I0}:begin
        w_data={24'b0,mem_rdata[7:0]};
    end
    {3'b101,TYPE_I0}:begin
        w_data={16'b0,mem_rdata[15:0]};
    end
    default:w_data=0; 
    endcase
end



    assign mem_addr  = src1+imm;
    assign mem_wdata = src2;
    assign mem_visit_valid=(opcode == TYPE_I0)||(opcode == TYPE_S);
    assign mem_wen = (opcode == TYPE_S);

    assign w_finish_sim = (sel == 10'b000_1110011)&&(imm==1);
    assign snpc=pc+4; //默认情况下，下一条指令地址为当前指令地址+4
    assign wen=((opcode==TYPE_R) || (opcode==TYPE_U0) || (opcode==TYPE_U1) || (opcode==TYPE_I0) || (opcode==TYPE_I1) || ((opcode==TYPE_I2)) || (opcode==TYPE_J)); //只有R型、U型、I型指令才会写寄存器，且除jalr外的指令才会写寄存器


endmodule







