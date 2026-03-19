module ysyx_24110005_Decoder #(
   parameter DATA_WIDTH=32, 
   parameter REG_ADDR_WIDTH=5,
   parameter OP_WIDTH=7,
   parameter FUN_WIDTH=3
) (    
    input   clock,
    input   reset,
    input  [DATA_WIDTH-1:0]inst,
    input   fetch_dec_valid,
    output  fetch_dec_ready, 
    output [REG_ADDR_WIDTH-1:0]r_addr1,
    output [REG_ADDR_WIDTH-1:0]r_addr2,
    output [REG_ADDR_WIDTH-1:0]dec_exc_waddr,
    output [DATA_WIDTH-1:0]dec_exc_imm,
    output [FUN_WIDTH-1:0]dec_exc_fun,
    output [OP_WIDTH-1:0]dec_exc_opcode,
    output mem_ar_valid,
    input  mem_ar_ready,

    output dec_exc_valid,
    input  dec_exc_ready
);
parameter TYPE_NUM=9;
parameter TYPE_WIDTH=7;
parameter TYPE_I0=7'b0000011;
parameter TYPE_I1=7'b0010011;
//parameter TYPE_I2=7'b1100111;
parameter TYPE_CSR=7'b1110011;
parameter TYPE_B=7'b1100011;
parameter TYPE_J=7'b1101111;
parameter TYPE_S=7'b0100011;
parameter TYPE_U0=7'b0110111;
parameter TYPE_U1=7'b0010111;
parameter TYPE_R=7'b0110011;

parameter STATE_ID=2'b01;
parameter STATE_OUTPUT=2'b10;
parameter STATE_LOAD_DATA=2'b11;

//专门用来写寄存器的；和S型指令直接写进地址还不太一样
//根据指令类型取出立即数
reg [FUN_WIDTH-1: 0]r_fun;
reg [OP_WIDTH-1:0]r_opcode;
reg [REG_ADDR_WIDTH-1:0] r_waddr;
reg [DATA_WIDTH-1:0]r_imm;

wire [FUN_WIDTH-1: 0]fun;
wire [OP_WIDTH-1:0]opcode;
wire [REG_ADDR_WIDTH-1:0] w_addr;
wire [DATA_WIDTH-1:0]imm;
wire mem_load_en;
reg [1:0] id_state;

always @(posedge clock or posedge reset) begin
    if(reset)begin
        id_state<=STATE_ID;
    end
    else begin
        case (id_state)
            STATE_ID:begin
            if(fetch_dec_valid&&fetch_dec_ready)begin
                if (mem_load_en) begin
                    id_state<=STATE_LOAD_DATA;
                end
                else begin
                    id_state<=STATE_OUTPUT;
                end
            end
            end
            STATE_LOAD_DATA:begin
            if(mem_ar_ready&&mem_ar_valid)
                id_state<=STATE_OUTPUT;
            end
            STATE_OUTPUT:begin
            if(dec_exc_ready&&dec_exc_valid)
                id_state<=STATE_ID;
            end
            default: id_state<=STATE_ID;
        endcase
    end
end



assign fetch_dec_ready =(id_state==STATE_ID);
assign dec_exc_valid  = (id_state==STATE_OUTPUT);

assign opcode=inst[OP_WIDTH-1:0];
assign fun=inst[14:12];//选择同一类型指令的其中一条指令
assign r_addr1=inst[19:15];//寄存器地址1
assign r_addr2=inst[24:20];//寄存器地址2
assign w_addr= inst[11:7];//目标寄存器地址

ysyx_24110005_MuxKeyWithDefault #(
    .NR_KEY(TYPE_NUM),
    .KEY_LEN(TYPE_WIDTH),
    .DATA_LEN(DATA_WIDTH)) 
imm_mux (
    .out        (imm   ),
    .key        (opcode),
    .default_out(32'b0 ),
    .lut({TYPE_U0,{inst[31:12],12'b0},
    TYPE_U1,{inst[31:12],12'b0},
    TYPE_I0,{{20{inst[31]}},inst[31:20]},
    TYPE_I1,{{20{inst[31]}},inst[31:20]},
    TYPE_CSR,{{20{inst[31]}},inst[31:20]},
    TYPE_B,{{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0},
    TYPE_J,{{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0},
    TYPE_S,{{20{inst[31]}},inst[31:25],inst[11:7]},
    TYPE_R,{25'b0,inst[31:25]}
    })
);

always @(posedge clock or posedge reset) begin
    if(reset)begin
        r_waddr<={REG_ADDR_WIDTH{1'b0}};
    end
    else begin
        if(fetch_dec_valid&&fetch_dec_ready)begin
            r_waddr<=w_addr;
        end
        else begin
            r_waddr<=r_waddr;
        end
    end
end

always @(posedge clock or posedge reset) begin
    if(reset)begin
        r_imm<={DATA_WIDTH{1'b0}};
    end
    else begin
        if(fetch_dec_valid&&fetch_dec_ready)begin
            r_imm<=imm;
        end
        else begin
            r_imm<=r_imm;
        end
    end
end

always @(posedge clock or posedge reset) begin
    if(reset)begin     
        r_opcode<={OP_WIDTH{1'b0}};
    end
    else begin
        if(fetch_dec_valid&&fetch_dec_ready)begin
            r_opcode<=opcode;
        end
        else begin
            r_opcode<=r_opcode;
        end
    end
end

always @(posedge clock or posedge reset) begin
    if(reset)begin     
        r_fun<={FUN_WIDTH{1'b0}};
    end
    else begin
        if(fetch_dec_valid&&fetch_dec_ready)begin
            r_fun<=fun;
        end
        else begin
            r_fun<=r_fun;
        end
    end
end

assign dec_exc_waddr=r_waddr;
assign dec_exc_imm=r_imm;
assign dec_exc_opcode=r_opcode;
assign dec_exc_fun=r_fun;

assign mem_load_en=(opcode==TYPE_I0);
assign mem_ar_valid= (id_state==STATE_LOAD_DATA);

endmodule


// Author: minus7
// Date: 2024-11-20
// Version: 1.0
// Filename: Inst_Decoder.v
