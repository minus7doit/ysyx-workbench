/* verilator lint_off UNUSEDSIGNAL */
module ysyx_24110005_Alu #(
    parameter DATA_WIDTH=32,
    parameter OP_WIDTH=7,
    parameter REG_ADDR_WIDTH=5,
    parameter FUN_WIDTH=3
) (
input  clk,
input  rst,
input  dec_exc_valid,
output dec_exc_ready,
input [REG_ADDR_WIDTH-1:0]w_addr,
input [DATA_WIDTH-1:0] pc,
input [DATA_WIDTH-1:0] src1,
input [DATA_WIDTH-1:0] src2,
input [DATA_WIDTH-1:0] imm ,
input [OP_WIDTH-1:0]   opcode,
input [FUN_WIDTH-1:0]  fun,
output[DATA_WIDTH-1:0] dnpc,
output[DATA_WIDTH-1:0] w_data,
output wen,
input [DATA_WIDTH-1:0]mem_rdata ,
output mem_w_valid,
input  mem_w_ready,
input  mem_bresp,
output exc_wb_valid,
input  exc_wb_ready,
output w_finish_sim
);


wire [DATA_WIDTH-1:0]snpc;
//wire wen;

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

parameter STATE_EX=2'b01;
parameter STATE_OUTPUT_WB=2'b10;
parameter STATE_STORE=2'b11;

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

reg [1:0] ex_state;

always @(posedge clk or posedge rst) begin
    if(rst)begin
        ex_state<=STATE_EX;
    end
    else begin
        case (ex_state)
            STATE_EX:begin
            if(dec_exc_ready&&dec_exc_valid)begin
                if (opcode==TYPE_S) begin
                    ex_state<=STATE_STORE;
                end else begin
                    ex_state<=STATE_OUTPUT_WB;
                end
            end
            end
            STATE_OUTPUT_WB:begin
            if(exc_wb_ready&&exc_wb_valid)
                ex_state<=STATE_EX;
            end
            STATE_STORE:begin
            //if(mem_w_valid&&mem_w_ready)
            if(mem_bresp)
                ex_state<=STATE_EX;
            end
            default: ex_state<=STATE_EX;
        endcase
    end
end

assign exc_wb_valid=(ex_state==STATE_OUTPUT_WB);
assign dec_exc_ready=(ex_state==STATE_EX);

reg [DATA_WIDTH-1:0] dnpc_reg;
always@(posedge clk)begin
    case(opcode)
    TYPE_J: begin
        dnpc_reg=pc+imm;   //j or jal 无条件跳转
    end
    TYPE_B:begin
        case(fun)
            3'b000:begin //beq or beqz
                 dnpc_reg=(src1 == src2)?(pc+imm):snpc;
            end
            3'b001:begin//bne or bnez
                 dnpc_reg=(src1 != src2)?(pc+imm):snpc;
            end
            3'b100:begin//blt
                 dnpc_reg=($signed(src1) < $signed(src2))?(pc+imm):snpc;
            end
            3'b101:begin//bge 
                 dnpc_reg=($signed(src1) >= $signed(src2))?(pc+imm):snpc;
            end
            3'b110:begin//bltu
                 dnpc_reg=(src1 < src2)?(pc+imm):snpc;
            end
            3'b111:begin
                 dnpc_reg=(src1>=src2)?(pc+imm):snpc;//bgeu
            end
            default:dnpc_reg=snpc;
        endcase 
    end
    TYPE_I2 :begin
        if(w_addr == 5'b0) begin
            dnpc_reg=src1;
        end
        else begin
            dnpc_reg=(src1+imm)&(~32'b1);//jalr指令的下一条指令地址
        end
    end
    TYPE_CSR :begin
        if((fun==3'b0) && (imm[11:0] == CSR_ECALL))begin
            dnpc_reg=m_tvec;
        end
        else if((fun==3'b0) && (imm[11:0] == CSR_MRET))begin
            dnpc_reg=m_epc;
        end
        else dnpc_reg=snpc;
    end
    default: begin
        dnpc_reg=snpc; //默认情况下，下一条指令地址为当前指令地址+4
    end
    endcase
end

assign dnpc=dnpc_reg;

wire [DATA_WIDTH-1:0]mulh;
wire [DATA_WIDTH-1:0]mul_unsigned;
reg  [DATA_WIDTH-1:0] w_data_reg;
//下面这段要专门为寄存器读写使用
always@(posedge clk)begin
    case(opcode) 
    TYPE_I0:begin
        case(fun)
            3'b000:begin//lb
               w_data_reg={{24{mem_rdata[7]}},mem_rdata[7:0]};
            end
            3'b001:begin//lh
                w_data_reg={{16{mem_rdata[15]}},mem_rdata[15:0]};
            end
            3'b010:begin//lw
                w_data_reg=mem_rdata;
            end
            3'b100:begin//lbu
                w_data_reg={24'b0,mem_rdata[7:0]};
            end
            3'b101:begin//lhu
                w_data_reg={16'b0,mem_rdata[15:0]};
            end
            default:w_data_reg=32'hffffffff;  
        endcase
    end
    TYPE_I1:begin
        case(fun)
            3'b000:begin 
                w_data_reg=src1+imm;////addi,地址不能看成负数处理
            end
            3'b001:begin
                w_data_reg=src1<<imm;//slli
            end
            3'b011:begin
                w_data_reg=(src1 == 0)?32'b1:32'b0;//seqz
            end
            3'b100:begin
                w_data_reg=src1^imm;//xori
            end
            3'b101:begin
            if(imm[11:5]== 7'b0100000)begin
                w_data_reg=$signed(src1)>>>imm[5:0];//srai
                end
            else begin
                w_data_reg=src1>>imm[5:0];//srli
                end
            end
            3'b010:begin
                w_data_reg=($signed(src1)<$signed(imm))?32'b1:32'b0;//slti
            end
            3'b110:begin//ori
                w_data_reg=src1|imm;
            end
            3'b111:begin
                w_data_reg=src1&imm;////andi,地址不能看成负数处理
            end
            default:w_data_reg=32'hffffffff;  
        endcase 
    end     
    TYPE_I2:begin  
            w_data_reg=pc+4;//jalr
    end 
    TYPE_CSR:begin
            w_data_reg=csr_data;//csrr,csrrw,csrrwi
    end                 
    TYPE_J:begin
            w_data_reg=pc+4;//jal
    end
    TYPE_U1:begin
            w_data_reg=pc+imm;//auipc  
    end
    TYPE_U0:begin
            w_data_reg=imm;  //lui
    end
    TYPE_R:begin
        case(fun)
            3'b000:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data_reg=src1+src2;//add
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data_reg=$signed(src1)*$signed(src2);//CBD
                end
                else if(imm[6:0]==7'b0100000)begin
                    w_data_reg=src1-src2;//sub or neg
                end
                else begin
                    w_data_reg=32'hffffffff;  
                end
            end
            3'b001:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data_reg=src1 << src2[4:0];//sll
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data_reg=mulh;//mulh
                end
                else begin
                    w_data_reg=32'hffffffff;  
                end
            end
            3'b010:begin
                w_data_reg=($signed(src1)<$signed(src2))?32'b1:32'b0;//slt
            end
            3'b011:begin
                if(imm[6:0]==7'b0000000)begin
                w_data_reg=(src1<src2)?32'b1:32'b0;//sltu
                end
                else if(imm[6:0]==7'b0000001)begin
                w_data_reg=mul_unsigned;           //mulhu
                end
                else begin
                  w_data_reg=32'hffffffff;  
                end
            end
            3'b100:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data_reg=src1^src2;//xor
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data_reg=$signed(src1)/$signed(src2);//div
                end
                else begin
                    w_data_reg=32'hffffffff;  
                end
            end
            3'b101:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data_reg=src1 >> src2[4:0];//srl
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data_reg=src1/src2;//divu
                end
                else if(imm[6:0]==7'b0100000) begin
                   w_data_reg=($signed(src1)>>>(src2[4:0]));//sra
                end
                else begin
                    w_data_reg=32'hffffffff;  
                end
            end
            3'b110:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data_reg=src1|src2;//or
                end
                else if(imm[6:0]==7'b0000001)begin
                    w_data_reg=$signed(src1)%$signed(src2);//rem
                end
                else begin
                    w_data_reg=32'hffffffff;  
                end
            end
            3'b111:begin
                if(imm[6:0]==7'b0000000) begin
                    w_data_reg=src1&src2;//and
                end
                else if(imm[6:0]==7'b0000001) begin
                    w_data_reg=src1%src2;//remu
                end
                else begin
                    w_data_reg=32'hffffffff;  
                end
            end
            default:w_data_reg=32'hffffffff;  
        endcase
    end
    default:w_data_reg=32'hffffffff;  
    endcase
end
assign w_data=w_data_reg;

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


    assign csr_wen=(ex_state==STATE_OUTPUT_WB)&&(opcode==TYPE_CSR)&&((fun==3'b001)|(fun==3'b101)|((fun==3'b000)&&(imm[11:0]==CSR_ECALL))) ;

    assign mulh=signed_mulh(src1,src2);
    assign mul_unsigned=unsigned_mulh(src1,src2);

    assign mem_w_valid=(ex_state==STATE_STORE);

    assign w_finish_sim = (opcode == 7'b1110011)&&(imm==1)&&(fun==3'b000);
    assign snpc=pc+4; //默认情况下，下一条指令地址为当前指令地址+4
    assign wen=((opcode==TYPE_R) || (opcode==TYPE_U0) || (opcode==TYPE_U1) || (opcode==TYPE_I0) || (opcode==TYPE_I1) || ((opcode==TYPE_I2)) || ((opcode==TYPE_J)&& (w_addr != 0))|| ((opcode==TYPE_CSR)&& (w_addr != 0))); //只有R型、U型、I型指令才会写寄存器，且除jalr外的指令才会写寄存器

endmodule







