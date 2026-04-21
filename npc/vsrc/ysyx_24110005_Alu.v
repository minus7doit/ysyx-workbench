/* verilator lint_off UNUSEDSIGNAL */
module ysyx_24110005_Alu #(
    parameter DATA_WIDTH=32,
    parameter OP_WIDTH=7,
    parameter REG_ADDR_WIDTH=5,
    parameter FUN_WIDTH=3
) (
input  clock,
input  reset,
input  dec_exc_valid,
output dec_exc_ready,
input [REG_ADDR_WIDTH-1:0]w_addr,
input [DATA_WIDTH-1:0] pc,
input [DATA_WIDTH-1:0] src1,
input [DATA_WIDTH-1:0] src2,
input [DATA_WIDTH-1:0] imm ,
input [OP_WIDTH-1:0]   opcode,
input [FUN_WIDTH-1:0]  fun,
input                  i_fencei,
input                  i_dec_has_exc,

output[DATA_WIDTH-1:0] dnpc,
output[DATA_WIDTH-1:0] w_data,
output wen,
input  lsu_ex_r_valid,
input [DATA_WIDTH-1:0]mem_rdata ,
output lsu_ex_w_valid,
input  lsu_ex_w_ready,
input  bresp,
output exc_wb_valid,
input  exc_wb_ready,
output w_finish_sim,
output o_fencei_flush,
input  i_trap_commit,
input  [DATA_WIDTH-1:0] i_trap_mepc,
input  [4:0]            i_trap_mcause,
input  [DATA_WIDTH-1:0] i_trap_mtval,
output [DATA_WIDTH-1:0] o_mtvec,
output [DATA_WIDTH-1:0] o_mepc
);

reg [REG_ADDR_WIDTH-1:0] w_addr_ex;
reg [DATA_WIDTH-1:0] pc_ex;

reg [DATA_WIDTH-1:0] src1_ex;
reg [DATA_WIDTH-1:0] src2_ex;
reg [OP_WIDTH-1:0]   opcode_ex;
reg [FUN_WIDTH-1:0]  fun_ex;
reg [DATA_WIDTH-1:0] imm_ex;
reg fencei_ex;
reg exc_pending_ex;

wire [DATA_WIDTH-1:0]snpc;
//wire wen;
parameter  MVENDORID=32'h79737978 ;
parameter  MARCHID=32'h016FE3B5 ;

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

 
parameter CSR_MSTATUS = 12'h300;
parameter CSR_MTVEC   = 12'h305;
parameter CSR_MEPC    = 12'h341;
parameter CSR_MCAUSE  = 12'h342;
parameter CSR_MTVAL   = 12'h343;
parameter CSR_ECALL   = 12'h0;
parameter CSR_MRET    = 12'h302;
parameter CSR_MVENDORID =12'hf11;
parameter CSR_MARCHID   =12'hf12;
parameter YIELD       = 11;

parameter STATE_REC=3'b000;
parameter STATE_EX=3'b001;
parameter STATE_MDU=3'b010;
parameter STATE_OUTPUT_WB=3'b011;
parameter STATE_STORE=3'b100;
parameter STATE_LOAD=3'b101;

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


reg [2:0] ex_state;

wire mdu_ready;
wire mdu_valid;

always @(posedge clock or posedge reset) begin
    if(reset)begin
        ex_state<=STATE_REC;
    end
    else begin
        case (ex_state)
            STATE_REC:begin
            if(dec_exc_ready&&dec_exc_valid)begin
                if(lsu_ex_r_valid)
                    ex_state<=STATE_LOAD;
                else
                    ex_state<=STATE_EX;
            end
            end
            STATE_EX: begin
            if (exc_pending_ex)
                ex_state <= STATE_OUTPUT_WB;
            else if (opcode_ex == TYPE_S)
                ex_state <= STATE_STORE;
            else if (is_div_op)
                ex_state <= STATE_MDU;
            else if (opcode_ex == TYPE_I0)
                if (lsu_ex_r_valid) begin
                    ex_state <= STATE_LOAD;
                end
                else begin
                    ex_state <= STATE_EX;
                end
            else
                ex_state <= STATE_OUTPUT_WB;
            end

            STATE_LOAD: begin
                    ex_state <= STATE_OUTPUT_WB;
            end
            STATE_MDU:begin
                if(mdu_valid&&mdu_ready)begin
                    ex_state<=STATE_OUTPUT_WB;
                end
            end
            STATE_OUTPUT_WB:begin
            if(exc_wb_ready&&exc_wb_valid)
                ex_state<=STATE_REC;
            end
            STATE_STORE:begin
            if(bresp)
                ex_state<=STATE_REC;
            end
            default: ex_state<=STATE_REC;
        endcase
    end
end



assign exc_wb_valid=(ex_state==STATE_OUTPUT_WB);
assign dec_exc_ready=(ex_state==STATE_REC);

always @(posedge clock or posedge reset) begin
    if (reset) begin
        src1_ex   <= {DATA_WIDTH{1'b0}};
        src2_ex   <= {DATA_WIDTH{1'b0}};
        imm_ex    <= {DATA_WIDTH{1'b0}};
        opcode_ex <= {OP_WIDTH{1'b0}};
        fun_ex    <= {FUN_WIDTH{1'b0}};
        w_addr_ex <= {REG_ADDR_WIDTH{1'b0}};
        pc_ex     <= {DATA_WIDTH{1'b0}};
        fencei_ex <= 1'b0;
        exc_pending_ex <= 1'b0;
    end
    else if(dec_exc_ready&&dec_exc_valid) begin
        src1_ex   <= src1;
        src2_ex   <= src2;
        imm_ex    <= imm;
        opcode_ex <= opcode;
        fun_ex    <= fun;
        w_addr_ex <= w_addr;
        pc_ex     <= pc;
        fencei_ex <= i_fencei;
        exc_pending_ex <= i_dec_has_exc;
    end
end
reg [DATA_WIDTH-1:0] dnpc_reg;
always @(posedge clock) begin
    case (opcode_ex)
        TYPE_J: begin
            dnpc_reg <= pc_ex + imm_ex;   // jal
        end

        TYPE_B: begin
            case (fun_ex)
                3'b000: dnpc_reg <= (src1_ex == src2_ex) ? (pc_ex + imm_ex) : snpc; // beq
                3'b001: dnpc_reg <= (src1_ex != src2_ex) ? (pc_ex + imm_ex) : snpc; // bne
                3'b100: dnpc_reg <= ($signed(src1_ex) <  $signed(src2_ex)) ? (pc_ex + imm_ex) : snpc; // blt
                3'b101: dnpc_reg <= ($signed(src1_ex) >= $signed(src2_ex)) ? (pc_ex + imm_ex) : snpc; // bge
                3'b110: dnpc_reg <= (src1_ex < src2_ex)  ? (pc_ex + imm_ex) : snpc; // bltu
                3'b111: dnpc_reg <= (src1_ex >= src2_ex) ? (pc_ex + imm_ex) : snpc; // bgeu
                default: dnpc_reg <= snpc;
            endcase
        end

        TYPE_I2: begin
            // jalr: 无论 rd 是否为 0，都必须 (rs1 + imm) & ~1
            dnpc_reg <= (src1_ex + imm_ex) & (~32'b1);
        end

        TYPE_CSR: begin
            dnpc_reg <= snpc;
        end

        default: begin
            dnpc_reg <= snpc;
        end
    endcase
end

assign dnpc=dnpc_reg;

wire [DATA_WIDTH-1:0]mulh;
wire [DATA_WIDTH-1:0]mul_unsigned;

wire is_div;
wire is_divu;  
wire is_rem;
wire is_remu;
wire [1:0]mdu_op;
wire is_div_op ;
wire [DATA_WIDTH-1:0] o_result;


assign mdu_ready=(ex_state==STATE_MDU);
assign is_div   = (opcode_ex==TYPE_R) && (fun_ex==3'b100) && (imm_ex[6:0]==7'b0000001);
assign is_divu  = (opcode_ex==TYPE_R) && (fun_ex==3'b101) && (imm_ex[6:0]==7'b0000001);
assign is_rem   = (opcode_ex==TYPE_R) && (fun_ex==3'b110) && (imm_ex[6:0]==7'b0000001);
assign is_remu  = (opcode_ex==TYPE_R) && (fun_ex==3'b111) && (imm_ex[6:0]==7'b0000001);

assign is_div_op = is_div | is_divu | is_rem | is_remu;
assign mdu_op =  is_div   ? 2'b00 :
                 is_divu  ? 2'b01 :
                 is_rem   ? 2'b10 :
                 is_remu  ? 2'b11 : 2'b00 ;

ysyx_24110005_MDU #(
    .DATA_WIDTH (DATA_WIDTH)
) MDU_inst (
    .clock          (clock),
    .reset          (reset),
    .i_devidend   (src1_ex),
    .i_devisor    (src2_ex),
    .i_mdu_op     (mdu_op),
    .o_result     (o_result),
    .i_mdu_ready  (mdu_ready),
    .o_mdu_valid  (mdu_valid)
);
reg  [DATA_WIDTH-1:0] w_data_reg;
always@(posedge clock)begin
    if(is_div_op)begin
        if(mdu_valid&&mdu_ready)begin
            w_data_reg<=o_result; //div的结果写回   
        end
    end
    else begin
    case(opcode_ex) 
    TYPE_I0:begin
        case(fun_ex)
            3'b000:begin//lb
               w_data_reg<={{24{mem_rdata[7]}},mem_rdata[7:0]};
            end
            3'b001:begin//lh
                w_data_reg<={{16{mem_rdata[15]}},mem_rdata[15:0]};
            end
            3'b010:begin//lw
                w_data_reg<=mem_rdata;
            end
            3'b100:begin//lbu
                w_data_reg<={24'b0,mem_rdata[7:0]};
            end
            3'b101:begin//lhu
                w_data_reg<={16'b0,mem_rdata[15:0]};
            end
            default:w_data_reg<=32'hffffffff;  
        endcase
    end
    TYPE_I1:begin
        case(fun_ex)
            3'b000:begin 
                w_data_reg<=src1_ex+imm_ex;////addi,地址不能看成负数处理
            end
            3'b001:begin
                w_data_reg<=src1_ex<<imm_ex;//slli
            end
            3'b011:begin
                w_data_reg<=(src1_ex == 0)?32'b1:32'b0;//seqz
            end
            3'b100:begin
                w_data_reg<=src1_ex^imm_ex;//xori
            end
            3'b101:begin
            if(imm_ex[11:5]== 7'b0100000)begin
                w_data_reg<=$signed(src1_ex)>>>imm_ex[5:0];//srai
                end
            else begin
                w_data_reg<=src1_ex>>imm_ex[5:0];//srli
                end
            end
            3'b010:begin
                w_data_reg<=($signed(src1_ex)<$signed(imm_ex))?32'b1:32'b0;//slti
            end
            3'b110:begin//ori
                w_data_reg<=src1_ex|imm_ex;
            end
            3'b111:begin
                w_data_reg<=src1_ex&imm_ex;////andi,地址不能看成负数处理
            end
            default:w_data_reg<=32'hffffffff;  
        endcase 
    end     
    TYPE_I2:begin  
            w_data_reg<=pc_ex+4;//jalr
    end 
    TYPE_CSR:begin
            w_data_reg<=csr_data;//csrr,csrrw,csrrwi
    end                 
    TYPE_J:begin
            w_data_reg<=pc_ex+4;//jal
    end
    TYPE_U1:begin
            w_data_reg<=pc_ex+imm_ex;//auipc  
    end
    TYPE_U0:begin
            w_data_reg<=imm_ex;  //lui
    end
    TYPE_R:begin
        case(fun_ex)
            3'b000:begin
                if(imm_ex[6:0]==7'b0000000) begin
                    w_data_reg<=src1_ex+src2_ex;//add
                end
                else if(imm_ex[6:0]==7'b0000001) begin
                    w_data_reg<=$signed(src1_ex)*$signed(src2_ex);//CBD
                end
                else if(imm_ex[6:0]==7'b0100000)begin
                    w_data_reg<=src1_ex-src2_ex;//sub or neg
                end
                else begin
                    w_data_reg<=32'hffffffff;  
                end
            end
            3'b001:begin
                if(imm_ex[6:0]==7'b0000000) begin
                    w_data_reg<=src1_ex << src2_ex[4:0];//sll
                end
                else if(imm_ex[6:0]==7'b0000001) begin
                    w_data_reg<=mulh;//mulh
                end
                else begin
                    w_data_reg<=32'hffffffff;  
                end
            end
            3'b010:begin
                w_data_reg<=($signed(src1_ex)<$signed(src2_ex))?32'b1:32'b0;//slt
            end
            3'b011:begin
                if(imm_ex[6:0]==7'b0000000)begin
                w_data_reg<=(src1_ex<src2_ex)?32'b1:32'b0;//sltu
                end
                else if(imm_ex[6:0]==7'b0000001)begin
                w_data_reg<=mul_unsigned;           //mulhu
                end
                else begin
                  w_data_reg<=32'hffffffff;  
                end
            end
            3'b100:begin
                if(imm_ex[6:0]==7'b0000000) begin
                    w_data_reg<=src1_ex^src2_ex;//xor
                end
                else if(imm_ex[6:0]==7'b0000001) begin
                    w_data_reg<=$signed(src1_ex)/$signed(src2_ex);//div
                end
                else begin
                    w_data_reg<=32'hffffffff;  
                end
            end
            3'b101:begin
                if(imm_ex[6:0]==7'b0000000) begin
                    w_data_reg<=src1_ex >> src2_ex[4:0];//srl
                end
                else if(imm_ex[6:0]==7'b0100000) begin
                   w_data_reg<=($signed(src1_ex)>>>(src2_ex[4:0]));//sra
                end
                else if(imm_ex[6:0]==7'b0000001) begin
                    w_data_reg<=src1_ex/src2_ex;//divu
                end
                else begin
                    w_data_reg<=32'hffffffff;  
                end
            end
            3'b110:begin
                if(imm_ex[6:0]==7'b0000000) begin
                    w_data_reg<=src1_ex|src2_ex;//or
                end
                else if(imm_ex[6:0]==7'b0000001) begin
                    w_data_reg<=$signed(src1_ex)%$signed(src2_ex);//remu
                end
                else begin
                    w_data_reg<=32'hffffffff;  
                end
            end
            3'b111:begin
                if(imm_ex[6:0]==7'b0000000) begin
                    w_data_reg<=src1_ex&src2_ex;//and
                end
                else if(imm_ex[6:0]==7'b0000001) begin
                    w_data_reg<=src1_ex%src2_ex;//remu
                end
                else begin
                    w_data_reg<=32'hffffffff;  
                end
            end
            default:w_data_reg<=32'hffffffff;  
        endcase
    end
    default:w_data_reg<=32'hffffffff;  
    endcase
    end
end
assign w_data=w_data_reg;

reg [DATA_WIDTH-1:0] csr_data;
wire csr_wen;
//YSYX 的ASCII码 ，和我的学号
//reg [DATA_WIDTH-1:0] mvendorid;
//reg [DATA_WIDTH-1:0] marchid;

reg [DATA_WIDTH-1:0] m_status;
reg [DATA_WIDTH-1:0] m_cause;
reg [DATA_WIDTH-1:0] m_tvec;
reg [DATA_WIDTH-1:0] m_epc;
reg [DATA_WIDTH-1:0] m_tval;

//对同一个寄存器先读后写
//只需要实例化用到的少数寄存器即可，而不是地址位宽个


always@(*)begin
     case (imm_ex[11:0])
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
        CSR_MTVAL:begin
            csr_data=m_tval;
        end
        CSR_MVENDORID:begin
            csr_data=MVENDORID;
        end
        CSR_MARCHID:begin
            csr_data=MARCHID;
        end
        default:csr_data=32'hffffffff;
        endcase 
end

always @(posedge clock or posedge reset) begin
    if (reset) begin
        m_status <= 32'h00001800;
        m_cause  <= 32'b0;
        m_tvec   <= 32'b0;
        m_epc    <= 32'b0;
        m_tval   <= 32'b0;
    end else begin
        if (i_trap_commit) begin
            m_epc   <= i_trap_mepc;
            m_cause <= {27'b0, i_trap_mcause};
            m_tval  <= i_trap_mtval;
        end else if (csr_wen) begin
            case (imm_ex[11:0])
                CSR_MSTATUS: m_status <= src1_ex;
                CSR_MTVEC:   m_tvec   <= src1_ex;
                CSR_MEPC:    m_epc    <= src1_ex;
                CSR_MCAUSE:  m_cause  <= src1_ex;
                CSR_MTVAL:   m_tval   <= src1_ex;
                default: begin end
            endcase
        end
    end
end


    assign csr_wen=(ex_state==STATE_OUTPUT_WB)&&(opcode_ex==TYPE_CSR)&&((fun_ex==3'b001)||(fun_ex==3'b101)) ;

    assign mulh=signed_mulh(src1_ex,src2_ex);
    assign mul_unsigned=unsigned_mulh(src1_ex,src2_ex);

    assign lsu_ex_w_valid=(ex_state==STATE_STORE);
    assign o_fencei_flush = exc_wb_valid && exc_wb_ready && fencei_ex;
    assign o_mtvec = m_tvec;
    assign o_mepc  = m_epc;
    assign w_finish_sim = (opcode_ex == 7'b1110011)&&(imm_ex==1)&&(fun_ex==3'b000);
    assign snpc=pc_ex+4; //默认情况下，下一条指令地址为当前指令地址+4
    assign wen=((opcode_ex==TYPE_R) || (opcode_ex==TYPE_U0) || (opcode_ex==TYPE_U1) || (opcode_ex==TYPE_I0) || (opcode_ex==TYPE_I1) || ((opcode_ex==TYPE_I2)) || ((opcode_ex==TYPE_J)&& (w_addr_ex != 0))|| ((opcode_ex==TYPE_CSR)&& (w_addr_ex != 0))); //只有R型、U型、I型指令才会写寄存器，且除jalr外的指令才会写寄存器

endmodule







