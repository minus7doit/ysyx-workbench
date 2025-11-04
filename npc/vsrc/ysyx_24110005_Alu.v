/* verilator lint_off UNUSEDSIGNAL */
module ysyx_24110005_Alu #(
    parameter DATA_WIDTH=32,
    parameter OP_WIDTH=7,
    parameter REG_ADDR_WIDTH=5,
    parameter FUN_WIDTH=3
) (
input clk,
input [REG_ADDR_WIDTH-1:0]w_addr,
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
wire [DATA_WIDTH-1:0]imm_comp;
wire [DATA_WIDTH-1:0]snpc;

wire [DATA_WIDTH-1:0]mem_addr ;
wire [DATA_WIDTH-1:0]mem_wdata ;
wire mem_visit_valid;
wire mem_wen;
wire mem_ren;
wire  [7:0]wmask;

reg [DATA_WIDTH-1:0] mem_rdata;


import "DPI-C" function int pmem_read(input int unsigned raddr);
import "DPI-C" function void pmem_write(input int unsigned waddr, input int wdata, input byte wmask);


parameter TYPE_I0 =7'b0000011;
parameter TYPE_I1 =7'b0010011;
parameter TYPE_I2 =7'b1100111;
parameter TYPE_CSR=7'b1110011;
parameter TYPE_B  =7'b1100011;
parameter TYPE_J  =7'b1101111;
parameter TYPE_S  =7'b0100011;
parameter TYPE_U0 =7'b0110111;
parameter TYPE_U1 =7'b0010111;
parameter TYPE_R  =7'b0110011;


parameter BASE_ADDR=32'h80000000;
parameter ALL_1 =32'b1;
 
parameter CSR_MSTATUS = 12'h300;
parameter CSR_MTVEC   = 12'h305;
parameter CSR_MEPC    = 12'h341;
parameter CSR_MCAUSE  = 12'h342;
parameter CSR_ECALL   = 12'h0;
parameter CSR_MRET    = 12'h302;
parameter YIELD       = 11;

function [DATA_WIDTH-1:0] signed_mulh ;
    input [DATA_WIDTH-1:0]a;
    input [DATA_WIDTH-1:0]b;
    reg [2*DATA_WIDTH-1:0]mul_result;
    begin 
       mul_result={32'b1,a}*{32'b1,b};
       signed_mulh=mul_result[2*DATA_WIDTH-1:DATA_WIDTH];
    end
endfunction

function [DATA_WIDTH-1:0] unsigned_mulh ;
    input [DATA_WIDTH-1:0]a;
    input [DATA_WIDTH-1:0]b;
    reg [2*DATA_WIDTH-1:0]mul_result;
    begin 
       mul_result={32'b0,a}*{32'b0,b};
       unsigned_mulh=mul_result[2*DATA_WIDTH-1:DATA_WIDTH];
    end
endfunction

always@(*)begin
    case(opcode)
    TYPE_J: begin
        dnpc=pc+imm;   //j or jal 无条件跳转
    end
    TYPE_B:begin
        case(fun)
            3'b000:begin //beq or beqz
                 dnpc=(src1 == src2)?(pc+imm):snpc;
            end
            3'b001:begin//bne or bnez
                 dnpc=(src1 != src2)?(pc+imm):snpc;
            end
            3'b100:begin//blt
                 dnpc=($signed(src1) < $signed(src2))?(pc+imm):snpc;
            end
            3'b101:begin//bge 
                 dnpc=($signed(src1) >= $signed(src2))?(pc+imm):snpc;
            end
            3'b110:begin//bltu
                 dnpc=(src1 < src2)?(pc+imm):snpc;
            end
            3'b111:begin
                 dnpc=(src1>=src2)?(pc+imm):snpc;//bgeu
            end
            default:dnpc=snpc;
        endcase 
    end
    TYPE_I2 :begin
        if(w_addr == 5'b0) begin
            dnpc=src1;
        end
        else begin
            dnpc=(src1+imm)&(~32'b1);//jalr指令的下一条指令地址
        end
    end
    TYPE_CSR :begin
        if((fun==3'b0) && (imm[11:0] == CSR_ECALL))begin
            dnpc=m_tvec;
        end
        else if((fun==3'b0) && (imm[11:0] == CSR_MRET))begin
            dnpc=m_epc;
        end
        else dnpc=snpc;
    end
    default: begin
        dnpc=snpc; //默认情况下，下一条指令地址为当前指令地址+4
    end
    endcase
end



assign wmask=fun[0]?8'b11:(fun[1]?8'b1111:8'b1);

always @(negedge clk) begin
    if(mem_ren)begin
         mem_rdata = pmem_read(mem_addr);
        end
    else if (mem_wen) begin // 有写请求时
            pmem_write(mem_addr, mem_wdata, wmask);
        end
    else begin
            mem_rdata = 0; // 无读写请求时，返回0
    end
end   

wire [DATA_WIDTH-1:0]mulh;
wire [DATA_WIDTH-1:0]mul_unsigned;

//下面这段要专门为寄存器读写使用
always@(*)begin
    case(opcode) 
    TYPE_I0:begin
        case(fun)
            3'b000:begin//lb
               w_data={{24{mem_rdata[7]}},mem_rdata[7:0]};
            end
            3'b001:begin//lh
                w_data={{16{mem_rdata[15]}},mem_rdata[15:0]};
            end
            3'b010:begin//lw
                w_data=mem_rdata;
            end
            3'b100:begin//lbu
                w_data={24'b0,mem_rdata[7:0]};
            end
            3'b101:begin//lhu
                w_data={16'b0,mem_rdata[15:0]};
            end
            default:w_data=32'hffffffff;  
        endcase
    end
    TYPE_I1:begin
        case(fun)
            3'b000:begin 
                w_data=src1+imm;////addi,地址不能看成负数处理
            end
            3'b001:begin
                w_data=src1<<imm;//slli
            end
            3'b011:begin
                w_data=(src1 == 0)?32'b1:32'b0;//seqz
            end
            3'b100:begin
                w_data=src1^imm;//xori
            end
            3'b101:begin
            if(imm[11:5]== 7'b0100000)begin
                w_data=$signed(src1)>>>imm[5:0];//srai
                end
            else begin
                w_data=src1>>imm[5:0];//srli
                end
            end
            3'b010:begin
                w_data=($signed(src1)<$signed(imm))?32'b1:32'b0;//slti
            end
            3'b110:begin//ori
                w_data=src1|imm;
            end
            3'b111:begin
                w_data=src1&imm;////andi,地址不能看成负数处理
            end
            default:w_data=32'hffffffff;  
        endcase 
    end     
    TYPE_I2:begin  
            w_data=pc+4;//jalr
    end 
    TYPE_CSR:begin
            w_data=csr_data;//csrr,csrrw,csrrwi
    end                 
    TYPE_J:begin
            w_data=pc+4;//jal
    end
    TYPE_U1:begin
            w_data=pc+imm;//auipc  
    end
    TYPE_U0:begin
            w_data=imm;  //lui
    end
    TYPE_R:begin
        case(fun)
            3'b000:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data=src1+src2;//add
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data=$signed(src1)*$signed(src2);//CBD
                end
                else if(imm[6:0]==7'b0100000)begin
                    w_data=src1-src2;//sub or neg
                end
                else begin
                    w_data=32'hffffffff;  
                end
            end
            3'b001:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data=src1 << src2[4:0];//sll
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data=mulh;//mulh
                end
                else begin
                    w_data=32'hffffffff;  
                end
            end
            3'b010:begin
                w_data=($signed(src1)<$signed(src2))?32'b1:32'b0;//slt
            end
            3'b011:begin
                if(imm[6:0]==7'b0000000)begin
                w_data=(src1<src2)?32'b1:32'b0;//sltu
                end
                else if(imm[6:0]==7'b0000001)begin
                w_data=mul_unsigned;           //mulhu
                end
                else begin
                  w_data=32'hffffffff;  
                end
            end
            3'b100:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data=src1^src2;//xor
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data=$signed(src1)/$signed(src2);//div
                end
                else begin
                    w_data=32'hffffffff;  
                end
            end
            3'b101:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data=src1 >> src2[4:0];//srl
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data=src1/src2;//divu
                end
                else if(imm[6:0]==7'b0100000) begin
                   w_data=($signed(src1)>>>(src2[4:0]));//sra
                end
                else begin
                    w_data=32'hffffffff;  
                end
            end
            3'b110:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data=src1|src2;//or
                end
                else if(imm[6:0]==7'b0000001)begin
                    w_data=$signed(src1)%$signed(src2);//rem
                end
                else begin
                    w_data=32'hffffffff;  
                end
            end
            3'b111:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data=src1&src2;//and
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data=src1%src2;//remu
                end
                else begin
                    w_data=32'hffffffff;  
                end
            end
            default:w_data=32'hffffffff;  
        endcase
    end
    default:w_data=32'hffffffff;  
    endcase
end


reg [DATA_WIDTH-1:0] csr_data;
wire csr_wen;

reg [DATA_WIDTH-1:0] m_status;
reg [DATA_WIDTH-1:0] m_cause;
reg [DATA_WIDTH-1:0] m_tvec;
reg [DATA_WIDTH-1:0] m_epc;

//对同一个寄存器先读后写
//只需要实例化用到的少数寄存器即可，而不是地址位宽个

initial begin
    m_status=32'h1800;
end

always@(*)begin
     case (imm[11:0])
        CSR_MSTATUS:begin
            csr_data=m_status;        
        end 
        CSR_MTVEC:begin
            csr_data=m_tvec;  
        end
        CSR_MEPC:begin
            csr_data=m_epc;  
        end
        CSR_MCAUSE:begin
            csr_data=m_cause;
        end
        default:csr_data=32'hffffffff;
        endcase 
end

always @(posedge clk) begin
    if(csr_wen)begin
        case (imm[11:0])
            CSR_MSTATUS:begin
                m_status<=src1;        
            end 
            CSR_MTVEC:begin
                m_tvec<=src1;        
            end
            CSR_MEPC:begin
                m_epc<=src1;        
            end
            CSR_MCAUSE:begin
                m_cause<=src1;        
            end
            CSR_ECALL:begin
                m_epc<=pc;
                m_cause<=YIELD;        
            end
            default:m_epc<=32'hffffffff;
        endcase 
    end
end


    assign csr_wen=(opcode==TYPE_CSR)&&((fun==3'b001)|(fun==3'b101)|((fun==3'b000)&&(imm[11:0]==CSR_ECALL))) ;

    assign mulh=signed_mulh(src1,src2);
    assign mul_unsigned=unsigned_mulh(src1,src2);
    assign mem_addr  = src1+imm;
    assign mem_wdata = src2;
    assign mem_wen = (opcode == TYPE_S);
    assign mem_ren = (opcode ==TYPE_I0);
    assign mem_visit_valid= (mem_ren|mem_wen);

    assign w_finish_sim = (opcode == 7'b1110011)&&(imm==1)&&(fun==3'b000);
    assign snpc=pc+4; //默认情况下，下一条指令地址为当前指令地址+4
    assign wen=((opcode==TYPE_R) || (opcode==TYPE_U0) || (opcode==TYPE_U1) || (opcode==TYPE_I0) || (opcode==TYPE_I1) || ((opcode==TYPE_I2)) || ((opcode==TYPE_J)&& (w_addr != 0))|| ((opcode==TYPE_CSR)&& (w_addr != 0))); //只有R型、U型、I型指令才会写寄存器，且除jalr外的指令才会写寄存器

endmodule







