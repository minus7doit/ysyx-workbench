/* verilator lint_off UNUSEDSIGNAL */

module ysyx_24110005_Alu #(
    parameter DATA_WIDTH     = 32,
    parameter OP_WIDTH       = 7,
    parameter REG_ADDR_WIDTH = 5,
    parameter FUN_WIDTH      = 3
) (
    input  wire                         clock,
    input  wire                         reset,

    // 这个端口五级流水 ALU 内部不再使用，
    // rd/wen 应该由 Decoder 产生并通过流水线寄存器传递。
    input  wire [REG_ADDR_WIDTH-1:0]    w_addr,

    input  wire [DATA_WIDTH-1:0]        pc,
    input  wire [DATA_WIDTH-1:0]        src1,
    input  wire [DATA_WIDTH-1:0]        src2,
    input  wire [DATA_WIDTH-1:0]        imm,
    input  wire [OP_WIDTH-1:0]          opcode,
    input  wire [FUN_WIDTH-1:0]         fun,

    // fence.i 建议由 Decoder 译码产生，并随 ID/EX 寄存器传入 EX 级
    input  wire                         i_fencei,

    // 如果当前指令在 ID 阶段已经发现异常，
    // ALU 不应该再触发普通跳转/fence/finish。
    input  wire                         i_dec_has_exc,

    // EX 阶段计算出的下一 PC 候选值
    output reg  [DATA_WIDTH-1:0]        dnpc,

    // EX 阶段计算结果：
    // ALU 指令：运算结果
    // load/store：访存地址
    // jal/jalr：pc + 4
    // lui/auipc：对应结果
    output reg  [DATA_WIDTH-1:0]        w_data,

    // 分支/jal/jalr 是否真的需要重定向 PC
    output reg                          o_redirect_valid,

    // 仿真结束信号，建议顶层再用 ex_valid 或 wb_valid 进行门控
    output wire                         w_finish_sim,

    // fence.i flush 请求，建议顶层再用 ex_valid 进行门控
    output wire                         o_fencei_flush
);

    // ============================================================
    // opcode definition
    // ============================================================
    localparam TYPE_I0  = 7'b0000011;  // load
    localparam TYPE_I1  = 7'b0010011;  // op-imm
    localparam TYPE_I2  = 7'b1100111;  // jalr
    localparam TYPE_CSR = 7'b1110011;  // system/csr
    localparam TYPE_B   = 7'b1100011;  // branch
    localparam TYPE_J   = 7'b1101111;  // jal
    localparam TYPE_S   = 7'b0100011;  // store
    localparam TYPE_U0  = 7'b0110111;  // lui
    localparam TYPE_U1  = 7'b0010111;  // auipc
    localparam TYPE_R   = 7'b0110011;  // register-register

    localparam FUNCT7_NORMAL = 7'b0000000;
    localparam FUNCT7_SUBSRA = 7'b0100000;
    localparam FUNCT7_MULDIV = 7'b0000001;

    wire [DATA_WIDTH-1:0] snpc;
    assign snpc = pc + 32'd4;

    // ============================================================
    // multiply helper
    // ============================================================
    function [31:0] mul_low;
        input [31:0] a;
        input [31:0] b;
        reg   [63:0] p;
        begin
            p = a * b;
            mul_low = p[31:0];
        end
    endfunction

    function [31:0] mulh_ss;
        input [31:0] a;
        input [31:0] b;
        reg signed [63:0] p;
        begin
            p = $signed(a) * $signed(b);
            mulh_ss = p[63:32];
        end
    endfunction

    function [31:0] mulh_uu;
        input [31:0] a;
        input [31:0] b;
        reg [63:0] p;
        begin
            p = a * b;
            mulh_uu = p[63:32];
        end
    endfunction

    function [31:0] mulh_su;
        input [31:0] a;
        input [31:0] b;
        reg signed [63:0]  a_ext;
        reg signed [63:0]  b_ext;
        reg signed [127:0] p;
        begin
            a_ext = {{32{a[31]}}, a};  // signed 32 -> signed 64
            b_ext = {32'b0, b};        // unsigned 32 -> positive signed 64
            p     = a_ext * b_ext;
            mulh_su = p[63:32];
        end
    endfunction

    // ============================================================
    // RISC-V div/rem helper
    //
    // 注意：
    //   这里先保留组合除法，方便功能先跑通。
    //   后续如果时序不好，建议把 div/rem 单独拆成 MDU 多周期模块。
    // ============================================================
    function [31:0] rv_div;
        input [31:0] a;
        input [31:0] b;
        begin
            if (b == 32'b0) begin
                rv_div = 32'hffff_ffff;
            end else if ((a == 32'h8000_0000) && (b == 32'hffff_ffff)) begin
                rv_div = 32'h8000_0000;
            end else begin
                rv_div = $signed(a) / $signed(b);
            end
        end
    endfunction

    function [31:0] rv_divu;
        input [31:0] a;
        input [31:0] b;
        begin
            if (b == 32'b0) begin
                rv_divu = 32'hffff_ffff;
            end else begin
                rv_divu = a / b;
            end
        end
    endfunction

    function [31:0] rv_rem;
        input [31:0] a;
        input [31:0] b;
        begin
            if (b == 32'b0) begin
                rv_rem = a;
            end else if ((a == 32'h8000_0000) && (b == 32'hffff_ffff)) begin
                rv_rem = 32'b0;
            end else begin
                rv_rem = $signed(a) % $signed(b);
            end
        end
    endfunction

    function [31:0] rv_remu;
        input [31:0] a;
        input [31:0] b;
        begin
            if (b == 32'b0) begin
                rv_remu = a;
            end else begin
                rv_remu = a % b;
            end
        end
    endfunction

    // ============================================================
    // branch condition
    // ============================================================
    reg branch_taken;

    always @(*) begin
        branch_taken = 1'b0;

        case (fun)
            3'b000: branch_taken = (src1 == src2);                         // beq
            3'b001: branch_taken = (src1 != src2);                         // bne
            3'b100: branch_taken = ($signed(src1) <  $signed(src2));        // blt
            3'b101: branch_taken = ($signed(src1) >= $signed(src2));        // bge
            3'b110: branch_taken = (src1 < src2);                          // bltu
            3'b111: branch_taken = (src1 >= src2);                         // bgeu
            default: branch_taken = 1'b0;
        endcase
    end

    // ============================================================
    // dnpc + redirect_valid
    //
    // dnpc:
    //   EX 阶段计算出的跳转目标或顺序 PC。
    //
    // o_redirect_valid:
    //   1 表示当前 EX 指令需要让顶层 flush 并把 fetch_pc 改成 dnpc。
    //
    // 顶层建议：
    //   ctrl_flush = ex_valid && alu_redirect_valid;
    //   redirect_pc = alu_dnpc;
    // ============================================================
    always @(*) begin
        dnpc             = snpc;
        o_redirect_valid = 1'b0;

        if (!i_dec_has_exc) begin
            case (opcode)
                TYPE_J: begin
                    // jal 一定跳转
                    dnpc             = pc + imm;
                    o_redirect_valid = 1'b1;
                end

                TYPE_I2: begin
                    // jalr 一定跳转
                    dnpc             = (src1 + imm) & 32'hffff_fffe;
                    o_redirect_valid = 1'b1;
                end

                TYPE_B: begin
                    dnpc             = branch_taken ? (pc + imm) : snpc;
                    o_redirect_valid = branch_taken;
                end

                default: begin
                    dnpc             = snpc;
                    o_redirect_valid = 1'b0;
                end
            endcase
        end
    end

    // ============================================================
    // ALU result combinational logic
    //
    // 注意：
    //   TYPE_I0(load)  : w_data = load 地址，不是 load 返回数据
    //   TYPE_S (store) : w_data = store 地址
    //
    // 真正 load 写回数据应由 LSU/MEM 阶段产生：
    //   lsu_load_data -> MEM/WB -> RF
    // ============================================================
    always @(*) begin
        w_data = 32'h0000_0000;

        case (opcode)

            // ====================================================
            // LOAD: EX 阶段只计算地址
            // ====================================================
            TYPE_I0: begin
                w_data = src1 + imm;
            end

            // ====================================================
            // OP-IMM
            // ====================================================
            TYPE_I1: begin
                case (fun)
                    3'b000: begin
                        // addi
                        w_data = src1 + imm;
                    end

                    3'b001: begin
                        // slli
                        w_data = src1 << imm[4:0];
                    end

                    3'b010: begin
                        // slti
                        w_data = ($signed(src1) < $signed(imm)) ? 32'd1 : 32'd0;
                    end

                    3'b011: begin
                        // sltiu
                        w_data = (src1 < imm) ? 32'd1 : 32'd0;
                    end

                    3'b100: begin
                        // xori
                        w_data = src1 ^ imm;
                    end

                    3'b101: begin
                        if (imm[11:5] == FUNCT7_SUBSRA) begin
                            // srai
                            w_data = $signed(src1) >>> imm[4:0];
                        end else begin
                            // srli
                            w_data = src1 >> imm[4:0];
                        end
                    end

                    3'b110: begin
                        // ori
                        w_data = src1 | imm;
                    end

                    3'b111: begin
                        // andi
                        w_data = src1 & imm;
                    end

                    default: begin
                        w_data = 32'hffff_ffff;
                    end
                endcase
            end

            // ====================================================
            // JALR: 写回 pc + 4
            // ====================================================
            TYPE_I2: begin
                w_data = snpc;
            end

            // ====================================================
            // CSR:
            // CSR 不建议继续在 ALU 内部处理。
            // 如果后续支持 CSR，WB 数据应来自 CSR 模块的 csr_rdata。
            // ====================================================
            TYPE_CSR: begin
                w_data = 32'b0;
            end

            // ====================================================
            // JAL: 写回 pc + 4
            // ====================================================
            TYPE_J: begin
                w_data = snpc;
            end

            // ====================================================
            // STORE: EX 阶段只计算地址
            // store data 是 src2，应通过 EX/MEM 的 mem_store_data 传给 LSU。
            // ====================================================
            TYPE_S: begin
                w_data = src1 + imm;
            end

            // ====================================================
            // LUI
            // ====================================================
            TYPE_U0: begin
                w_data = imm;
            end

            // ====================================================
            // AUIPC
            // ====================================================
            TYPE_U1: begin
                w_data = pc + imm;
            end

            // ====================================================
            // OP
            // ====================================================
            TYPE_R: begin
                case (fun)

                    3'b000: begin
                        if (imm[6:0] == FUNCT7_NORMAL) begin
                            // add
                            w_data = src1 + src2;
                        end else if (imm[6:0] == FUNCT7_SUBSRA) begin
                            // sub
                            w_data = src1 - src2;
                        end else if (imm[6:0] == FUNCT7_MULDIV) begin
                            // mul
                            w_data = mul_low(src1, src2);
                        end else begin
                            w_data = 32'hffff_ffff;
                        end
                    end

                    3'b001: begin
                        if (imm[6:0] == FUNCT7_NORMAL) begin
                            // sll
                            w_data = src1 << src2[4:0];
                        end else if (imm[6:0] == FUNCT7_MULDIV) begin
                            // mulh
                            w_data = mulh_ss(src1, src2);
                        end else begin
                            w_data = 32'hffff_ffff;
                        end
                    end

                    3'b010: begin
                        if (imm[6:0] == FUNCT7_NORMAL) begin
                            // slt
                            w_data = ($signed(src1) < $signed(src2)) ? 32'd1 : 32'd0;
                        end else if (imm[6:0] == FUNCT7_MULDIV) begin
                            // mulhsu
                            w_data = mulh_su(src1, src2);
                        end else begin
                            w_data = 32'hffff_ffff;
                        end
                    end

                    3'b011: begin
                        if (imm[6:0] == FUNCT7_NORMAL) begin
                            // sltu
                            w_data = (src1 < src2) ? 32'd1 : 32'd0;
                        end else if (imm[6:0] == FUNCT7_MULDIV) begin
                            // mulhu
                            w_data = mulh_uu(src1, src2);
                        end else begin
                            w_data = 32'hffff_ffff;
                        end
                    end

                    3'b100: begin
                        if (imm[6:0] == FUNCT7_NORMAL) begin
                            // xor
                            w_data = src1 ^ src2;
                        end else if (imm[6:0] == FUNCT7_MULDIV) begin
                            // div
                            w_data = rv_div(src1, src2);
                        end else begin
                            w_data = 32'hffff_ffff;
                        end
                    end

                    3'b101: begin
                        if (imm[6:0] == FUNCT7_NORMAL) begin
                            // srl
                            w_data = src1 >> src2[4:0];
                        end else if (imm[6:0] == FUNCT7_SUBSRA) begin
                            // sra
                            w_data = $signed(src1) >>> src2[4:0];
                        end else if (imm[6:0] == FUNCT7_MULDIV) begin
                            // divu
                            w_data = rv_divu(src1, src2);
                        end else begin
                            w_data = 32'hffff_ffff;
                        end
                    end

                    3'b110: begin
                        if (imm[6:0] == FUNCT7_NORMAL) begin
                            // or
                            w_data = src1 | src2;
                        end else if (imm[6:0] == FUNCT7_MULDIV) begin
                            // rem
                            w_data = rv_rem(src1, src2);
                        end else begin
                            w_data = 32'hffff_ffff;
                        end
                    end

                    3'b111: begin
                        if (imm[6:0] == FUNCT7_NORMAL) begin
                            // and
                            w_data = src1 & src2;
                        end else if (imm[6:0] == FUNCT7_MULDIV) begin
                            // remu
                            w_data = rv_remu(src1, src2);
                        end else begin
                            w_data = 32'hffff_ffff;
                        end
                    end

                    default: begin
                        w_data = 32'hffff_ffff;
                    end
                endcase
            end

            default: begin
                w_data = 32'hffff_ffff;
            end
        endcase
    end

    // ============================================================
    // fence.i
    assign o_fencei_flush = (!i_dec_has_exc) && i_fencei;

    // ============================================================
    // ebreak / nemu trap simulation finish
    //
    // 顶层建议：
    //   finish_sim = wb_valid && wb_finish_sim;
    // 或者至少：
    //   finish_sim = ex_valid && alu_finish_sim;
    // ============================================================
    assign w_finish_sim =
        (!i_dec_has_exc) &&
        (opcode == TYPE_CSR) &&
        (imm == 32'd1) &&
        (fun == 3'b000);

endmodule

/* verilator lint_on UNUSEDSIGNAL */