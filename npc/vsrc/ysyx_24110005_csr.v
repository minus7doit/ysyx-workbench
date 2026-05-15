module ysyx_24110005_csr #(
    parameter DATA_WIDTH = 32
)(
    input  wire                    clock,
    input  wire                    reset,

    // ============================================================
    // CSR instruction commit interface
    //
    // 五级流水中，建议顶层在 WB/commit 阶段给 i_csr_valid。
    // 例如：
    //   i_csr_valid = wb_valid && wb_is_csr;
    // ============================================================
    input  wire                    i_csr_valid,
    input  wire [DATA_WIDTH-1:0]   i_src1,
    input  wire [DATA_WIDTH-1:0]   i_imm,
    input  wire [6:0]              i_opcode,
    input  wire [2:0]              i_funct3,

    // ============================================================
    // trap commit interface
    // ============================================================
    input  wire                    i_trap_commit,
    input  wire [DATA_WIDTH-1:0]   i_trap_mepc,
    input  wire [4:0]              i_trap_mcause,
    input  wire [DATA_WIDTH-1:0]   i_trap_mtval,

    // ============================================================
    // CSR read data
    // ============================================================
    output reg  [DATA_WIDTH-1:0]   o_csr_data,

    // ============================================================
    // CSR direct outputs for redirect
    // ============================================================
    output wire [DATA_WIDTH-1:0]   o_mtvec,
    output wire [DATA_WIDTH-1:0]   o_mepc,
    output wire [DATA_WIDTH-1:0]   o_mstatus,
    output wire [DATA_WIDTH-1:0]   o_mcause,
    output wire [DATA_WIDTH-1:0]   o_mtval
);

    // ============================================================
    // CSR address definition
    // ============================================================
    localparam CSR_MSTATUS   = 12'h300;
    localparam CSR_MTVEC     = 12'h305;
    localparam CSR_MEPC      = 12'h341;
    localparam CSR_MCAUSE    = 12'h342;
    localparam CSR_MTVAL     = 12'h343;
    localparam CSR_MVENDORID = 12'hf11;
    localparam CSR_MARCHID   = 12'hf12;

    localparam TYPE_CSR      = 7'b1110011;

    localparam MVENDORID     = 32'h79737978;
    localparam MARCHID       = 32'h016FE3B5;

    wire [11:0] csr_addr;
    assign csr_addr = i_imm[11:0];

    // ============================================================
    // CSR registers
    // ============================================================
    reg [DATA_WIDTH-1:0] m_status;
    reg [DATA_WIDTH-1:0] m_tvec;
    reg [DATA_WIDTH-1:0] m_epc;
    reg [DATA_WIDTH-1:0] m_cause;
    reg [DATA_WIDTH-1:0] m_tval;

    // ============================================================
    // CSR read
    //
    // CSR 指令一般要求“先读旧值，再写新值”。
    // 所以 o_csr_data 组合读当前 CSR 寄存器值。
    // ============================================================
    always @(*) begin
        case (csr_addr)
            CSR_MSTATUS: begin
                o_csr_data = m_status;
            end

            CSR_MTVEC: begin
                o_csr_data = m_tvec;
            end

            CSR_MEPC: begin
                o_csr_data = m_epc;
            end

            CSR_MCAUSE: begin
                o_csr_data = m_cause;
            end

            CSR_MTVAL: begin
                o_csr_data = m_tval;
            end

            CSR_MVENDORID: begin
                o_csr_data = MVENDORID;
            end

            CSR_MARCHID: begin
                o_csr_data = MARCHID;
            end

            default: begin
                o_csr_data = 32'hffff_ffff;
            end
        endcase
    end

    // ============================================================
    // CSR write decode
    //
    // funct3:
    //   001: CSRRW
    //   010: CSRRS
    //   011: CSRRC
    //   101: CSRRWI
    //   110: CSRRSI
    //   111: CSRRCI
    //
    // 这里默认 i_src1 已经由 Decoder 处理好：
    //   普通 CSR 指令：i_src1 = rs1_data
    //   立即数 CSR 指令：i_src1 = {27'b0, zimm}
    // ============================================================
    wire csr_inst;
    wire csr_wen;

    assign csr_inst = (i_opcode == TYPE_CSR);

    assign csr_wen =
        i_csr_valid &&
        csr_inst &&
        (
            (i_funct3 == 3'b001) ||   // CSRRW
            (i_funct3 == 3'b010) ||   // CSRRS
            (i_funct3 == 3'b011) ||   // CSRRC
            (i_funct3 == 3'b101) ||   // CSRRWI
            (i_funct3 == 3'b110) ||   // CSRRSI
            (i_funct3 == 3'b111)      // CSRRCI
        );

    reg [DATA_WIDTH-1:0] csr_wdata;

    always @(*) begin
        csr_wdata = o_csr_data;

        case (i_funct3)
            3'b001,
            3'b101: begin
                // CSRRW / CSRRWI
                csr_wdata = i_src1;
            end

            3'b010,
            3'b110: begin
                // CSRRS / CSRRSI
                csr_wdata = o_csr_data | i_src1;
            end

            3'b011,
            3'b111: begin
                // CSRRC / CSRRCI
                csr_wdata = o_csr_data & (~i_src1);
            end

            default: begin
                csr_wdata = o_csr_data;
            end
        endcase
    end

    // ============================================================
    // CSR registers update
    //
    // trap 优先级高于普通 CSR 写。
    // ============================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            m_status <= 32'h0000_1800;
            m_tvec   <= 32'b0;
            m_epc    <= 32'b0;
            m_cause  <= 32'b0;
            m_tval   <= 32'b0;
        end else begin
            if (i_trap_commit) begin
                m_epc   <= i_trap_mepc;
                m_cause <= {27'b0, i_trap_mcause};
                m_tval  <= i_trap_mtval;
            end else if (csr_wen) begin
                case (csr_addr)
                    CSR_MSTATUS: begin
                        m_status <= csr_wdata;
                    end

                    CSR_MTVEC: begin
                        m_tvec <= csr_wdata;
                    end

                    CSR_MEPC: begin
                        m_epc <= csr_wdata;
                    end

                    CSR_MCAUSE: begin
                        m_cause <= csr_wdata;
                    end

                    CSR_MTVAL: begin
                        m_tval <= csr_wdata;
                    end

                    default: begin
                        // read-only or unsupported CSR, do nothing
                    end
                endcase
            end
        end
    end

    // ============================================================
    // direct outputs
    // ============================================================
    assign o_mtvec   = m_tvec;
    assign o_mepc    = m_epc;
    assign o_mstatus = m_status;
    assign o_mcause  = m_cause;
    assign o_mtval   = m_tval;

endmodule