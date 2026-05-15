module ysyx_24110005_Decoder #(
    parameter DATA_WIDTH     = 32,
    parameter REG_ADDR_WIDTH = 5,
    parameter OP_WIDTH       = 7,
    parameter FUN_WIDTH      = 3
)(
    input  wire [DATA_WIDTH-1:0] inst,

    output wire [REG_ADDR_WIDTH-1:0] rs1,
    output wire [REG_ADDR_WIDTH-1:0] rs2,
    output wire [REG_ADDR_WIDTH-1:0] rd,

    output reg  [DATA_WIDTH-1:0] imm,

    output wire [OP_WIDTH-1:0]   opcode,
    output wire [FUN_WIDTH-1:0]  funct3,
    output wire [6:0]            funct7,

    output wire                  use_rs1,
    output wire                  use_rs2,

    output wire                  reg_wen,
    output wire                  mem_read,
    output wire                  mem_write,

    output wire                  branch,
    output wire                  jump,
    output wire                  csr,

    output wire                  ecall,
    output wire                  ebreak,
    output wire                  mret,
    output wire                  fencei,

    output wire                  csr_imm_sel,
    output wire [DATA_WIDTH-1:0] csr_zimm,

    output reg  [1:0]            wb_sel,

    output wire                  illegal_inst
);

    // ============================================================
    // opcode
    // ============================================================
    localparam TYPE_I0  = 7'b0000011;  // load
    localparam TYPE_I1  = 7'b0010011;  // op-imm
    localparam TYPE_I2  = 7'b1100111;  // jalr
    localparam TYPE_CSR = 7'b1110011;  // system / csr
    localparam TYPE_B   = 7'b1100011;  // branch
    localparam TYPE_J   = 7'b1101111;  // jal
    localparam TYPE_S   = 7'b0100011;  // store
    localparam TYPE_U0  = 7'b0110111;  // lui
    localparam TYPE_U1  = 7'b0010111;  // auipc
    localparam TYPE_R   = 7'b0110011;  // op

    // ============================================================
    // csr/system imm
    // ============================================================
    localparam CSR_ECALL = 12'h000;
    localparam CSR_EBREAK= 12'h001;
    localparam CSR_MRET  = 12'h302;

    // ============================================================
    // write back select
    // ============================================================
    localparam WB_ALU = 2'b00;
    localparam WB_MEM = 2'b01;
    localparam WB_PC4 = 2'b10;
    localparam WB_CSR = 2'b11;

    // ============================================================
    // basic fields
    // ============================================================
    assign opcode = inst[6:0];
    assign rd     = inst[11:7];
    assign funct3 = inst[14:12];
    assign rs1    = inst[19:15];
    assign rs2    = inst[24:20];
    assign funct7 = inst[31:25];

    wire [11:0] csr_addr;
    assign csr_addr = inst[31:20];

    // ============================================================
    // instruction type decode
    // ============================================================
    wire is_load;
    wire is_store;
    wire is_opimm;
    wire is_op;
    wire is_branch;
    wire is_jal;
    wire is_jalr;
    wire is_lui;
    wire is_auipc;
    wire is_system;

    assign is_load   = (opcode == TYPE_I0);
    assign is_store  = (opcode == TYPE_S);
    assign is_opimm  = (opcode == TYPE_I1);
    assign is_op     = (opcode == TYPE_R);
    assign is_branch = (opcode == TYPE_B);
    assign is_jal    = (opcode == TYPE_J);
    assign is_jalr   = (opcode == TYPE_I2);
    assign is_lui    = (opcode == TYPE_U0);
    assign is_auipc  = (opcode == TYPE_U1);
    assign is_system = (opcode == TYPE_CSR);

    // ============================================================
    // system instruction decode
    // ============================================================
    assign ecall  = is_system && (funct3 == 3'b000) && (csr_addr == CSR_ECALL);
    assign ebreak = is_system && (funct3 == 3'b000) && (csr_addr == CSR_EBREAK);
    assign mret   = is_system && (funct3 == 3'b000) && (csr_addr == CSR_MRET);

    // fence.i:
    // opcode = 0001111, funct3 = 001
    assign fencei = (opcode == 7'b0001111) && (funct3 == 3'b001);

    // CSR read/write instruction:
    // funct3 != 000 means CSRRW/CSRRS/CSRRC/CSRRWI/CSRRSI/CSRRCI
    wire is_csr_inst;
    assign is_csr_inst = is_system && (funct3 != 3'b000);

    assign csr = is_csr_inst;

    // CSR immediate instruction:
    // CSRRWI/CSRRSI/CSRRCI: funct3[2] = 1
    assign csr_imm_sel = is_csr_inst && funct3[2];

    // zimm = inst[19:15], zero extend
    assign csr_zimm = {27'b0, inst[19:15]};

    // ============================================================
    // immediate generation
    // ============================================================
    always @(*) begin
        case (opcode)
            TYPE_U0: begin
                // lui
                imm = {inst[31:12], 12'b0};
            end

            TYPE_U1: begin
                // auipc
                imm = {inst[31:12], 12'b0};
            end

            TYPE_I0: begin
                // load
                imm = {{20{inst[31]}}, inst[31:20]};
            end

            TYPE_I1: begin
                // op-imm
                imm = {{20{inst[31]}}, inst[31:20]};
            end

            TYPE_I2: begin
                // jalr
                imm = {{20{inst[31]}}, inst[31:20]};
            end

            TYPE_CSR: begin
                // csr addr / ecall / ebreak / mret
                // 注意：这里给 zero-extend 更干净，真正地址只看 imm[11:0]
                imm = {20'b0, inst[31:20]};
            end

            TYPE_B: begin
                // branch immediate
                imm = {{19{inst[31]}}, inst[31], inst[7],
                       inst[30:25], inst[11:8], 1'b0};
            end

            TYPE_J: begin
                // jal immediate
                imm = {{11{inst[31]}}, inst[31], inst[19:12],
                       inst[20], inst[30:21], 1'b0};
            end

            TYPE_S: begin
                // store immediate
                imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            end

            TYPE_R: begin
                // R-type has no imm, but keep funct7 in low bits for old ALU style
                imm = {25'b0, inst[31:25]};
            end

            default: begin
                imm = 32'b0;
            end
        endcase
    end

    // ============================================================
    // memory control
    // ============================================================
    assign mem_read  = is_load;
    assign mem_write = is_store;

    // ============================================================
    // branch / jump
    // ============================================================
    assign branch = is_branch;
    assign jump   = is_jal | is_jalr;

    // ============================================================
    // register usage
    //
    // 用于 RAW hazard 检测：
    //   ID 阶段判断当前指令是否真的读取 rs1 / rs2
    // ============================================================
    assign use_rs1 =
        is_load   ||
        is_store  ||
        is_opimm  ||
        is_op     ||
        is_branch ||
        is_jalr   ||
        (is_csr_inst && !csr_imm_sel);

    assign use_rs2 =
        is_store ||
        is_op    ||
        is_branch;

    // ============================================================
    // register write enable
    //
    // 注意：
    //   ecall / ebreak / mret 不写 rd
    //   branch / store / fence.i 不写 rd
    // ============================================================
    assign reg_wen =
        is_load     ||
        is_opimm    ||
        is_op       ||
        is_lui      ||
        is_auipc    ||
        is_jal      ||
        is_jalr     ||
        is_csr_inst;

    // ============================================================
    // writeback select
    // ============================================================
    always @(*) begin
        wb_sel = WB_ALU;

        if (is_load) begin
            wb_sel = WB_MEM;
        end else if (is_jal || is_jalr) begin
            wb_sel = WB_PC4;
        end else if (is_csr_inst) begin
            wb_sel = WB_CSR;
        end else begin
            wb_sel = WB_ALU;
        end
    end

    // ============================================================
    // illegal instruction simple check
    //
    // 第一版可以先简单判断 opcode 是否支持。
    // 更严格的 funct3/funct7 合法性可以后面再补。
    // ============================================================
    assign illegal_inst =
        !(is_load   ||
          is_store  ||
          is_opimm  ||
          is_op     ||
          is_branch ||
          is_jal    ||
          is_jalr   ||
          is_lui    ||
          is_auipc  ||
          is_system ||
          fencei);

endmodule