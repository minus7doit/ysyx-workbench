`timescale 1ns/1ps

module ysyx_24110005(
  input             clock,
  input             reset,
  input             io_interrupt,

  input             io_master_awready,
  output            io_master_awvalid,
  output   [31:0]   io_master_awaddr,
  output   [3:0]    io_master_awid,
  output   [7:0]    io_master_awlen,
  output   [2:0]    io_master_awsize,
  output   [1:0]    io_master_awburst,

  input             io_master_wready,
  output            io_master_wvalid,
  output   [31:0]   io_master_wdata,
  output   [3:0]    io_master_wstrb,
  output            io_master_wlast,

  output            io_master_bready,
  input             io_master_bvalid,
  input    [1:0]    io_master_bresp,
  input    [3:0]    io_master_bid,

  input             io_master_arready,
  output            io_master_arvalid,
  output   [31:0]   io_master_araddr,
  output   [3:0]    io_master_arid,
  output   [7:0]    io_master_arlen,
  output   [2:0]    io_master_arsize,
  output   [1:0]    io_master_arburst,

  output            io_master_rready,
  input             io_master_rvalid,
  input    [1:0]    io_master_rresp,
  input    [31:0]   io_master_rdata,
  input             io_master_rlast,
  input    [3:0]    io_master_rid,

  output            io_slave_awready,
  input             io_slave_awvalid,
  input    [31:0]   io_slave_awaddr,
  input    [3:0]    io_slave_awid,
  input    [7:0]    io_slave_awlen,
  input    [2:0]    io_slave_awsize,
  input    [1:0]    io_slave_awburst,

  output            io_slave_wready,
  input             io_slave_wvalid,
  input    [31:0]   io_slave_wdata,
  input    [3:0]    io_slave_wstrb,
  input             io_slave_wlast,

  input             io_slave_bready,
  output            io_slave_bvalid,
  output   [1:0]    io_slave_bresp,
  output   [3:0]    io_slave_bid,

  output            io_slave_arready,
  input             io_slave_arvalid,
  input    [31:0]   io_slave_araddr,
  input    [3:0]    io_slave_arid,
  input    [7:0]    io_slave_arlen,
  input    [2:0]    io_slave_arsize,
  input    [1:0]    io_slave_arburst,

  input             io_slave_rready,
  output            io_slave_rvalid,
  output   [1:0]    io_slave_rresp,
  output   [31:0]   io_slave_rdata,
  output            io_slave_rlast,
  output   [3:0]    io_slave_rid
);

  import "DPI-C" function void finish_sim();
  import "DPI-C" function void inst_trace(input int unsigned pc, input int unsigned inst, input int unsigned npc);
  import "DPI-C" function void difftest_step(input int unsigned pc, input int unsigned npc);
  import "DPI-C" function void mtrace_read(input int unsigned addr, input int unsigned len);
  import "DPI-C" function void mtrace_write(input int unsigned addr, input int unsigned len, input int unsigned data);



  assign io_slave_awready = 1'b0;
  assign io_slave_wready  = 1'b0;
  assign io_slave_bvalid  = 1'b0;
  assign io_slave_bresp   = 2'b0;
  assign io_slave_bid     = 4'b0;
  assign io_slave_arready = 1'b0;
  assign io_slave_rvalid  = 1'b0;
  assign io_slave_rresp   = 2'b0;
  assign io_slave_rdata   = 32'b0;
  assign io_slave_rlast   = 1'b0;
  assign io_slave_rid     = 4'b0;

  localparam DATA_WIDTH     = 32;
  localparam ADDR_WIDTH     = 32;
  localparam OP_WIDTH       = 7;
  localparam REG_ADDR_WIDTH = 5;
  localparam FUN_WIDTH      = 3;
  localparam BASE_ADDR      = 32'h3000_0000;

  localparam TYPE_I0      = 7'b0000011;
  localparam TYPE_I1      = 7'b0010011;
  localparam TYPE_I2      = 7'b1100111;
  localparam TYPE_CSR     = 7'b1110011;
  localparam TYPE_B       = 7'b1100011;
  localparam TYPE_J       = 7'b1101111;
  localparam TYPE_S       = 7'b0100011;
  localparam TYPE_U0      = 7'b0110111;
  localparam TYPE_U1      = 7'b0010111;
  localparam TYPE_R       = 7'b0110011;
  localparam TYPE_FENCE_I = 7'b0001111;

  localparam EXC_INST_MISALIGN  = 5'd0;
  localparam EXC_INST_ACCESS    = 5'd1;
  localparam EXC_ILLEGAL_INST   = 5'd2;
  localparam EXC_BREAKPOINT     = 5'd3;
  localparam EXC_LOAD_MISALIGN  = 5'd4;
  localparam EXC_LOAD_ACCESS    = 5'd5;
  localparam EXC_STORE_MISALIGN = 5'd6;
  localparam EXC_STORE_ACCESS   = 5'd7;
  localparam EXC_ECALL_M        = 5'd11;

  localparam CSR_ECALL          = 12'h000;
  localparam CSR_EBREAK         = 12'h001;
  localparam CSR_MRET           = 12'h302;

  function automatic [31:0] decode_imm(input [31:0] inst);
    begin
      case (inst[6:0])
        TYPE_U0, TYPE_U1: decode_imm = {inst[31:12], 12'b0};
        TYPE_I0, TYPE_I1, TYPE_I2, TYPE_CSR: decode_imm = {{20{inst[31]}}, inst[31:20]};
        TYPE_B: decode_imm = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
        TYPE_J: decode_imm = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
        TYPE_S: decode_imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
        TYPE_R: decode_imm = {25'b0, inst[31:25]};
        default: decode_imm = 32'b0;
      endcase
    end
  endfunction

  function automatic is_fencei_inst(input [31:0] inst);
    begin
      is_fencei_inst = (inst[6:0] == TYPE_FENCE_I) && (inst[14:12] == 3'b001);
    end
  endfunction

  function automatic is_load_inst(input [31:0] inst);
    begin
      is_load_inst = (inst[6:0] == TYPE_I0);
    end
  endfunction

  function automatic is_store_inst(input [31:0] inst);
    begin
      is_store_inst = (inst[6:0] == TYPE_S);
    end
  endfunction

  function automatic is_branch_inst(input [31:0] inst);
    begin
      is_branch_inst = (inst[6:0] == TYPE_B);
    end
  endfunction

  function automatic is_jal_inst(input [31:0] inst);
    begin
      is_jal_inst = (inst[6:0] == TYPE_J);
    end
  endfunction

  function automatic is_jalr_inst(input [31:0] inst);
    begin
      is_jalr_inst = (inst[6:0] == TYPE_I2);
    end
  endfunction

  function automatic is_csr_inst(input [31:0] inst);
    begin
      is_csr_inst = (inst[6:0] == TYPE_CSR);
    end
  endfunction

  function automatic is_mdu_inst(input [31:0] inst);
    begin
      is_mdu_inst = (inst[6:0] == TYPE_R) && (inst[31:25] == 7'b0000001) &&
                    ((inst[14:12] == 3'b100) || (inst[14:12] == 3'b101) ||
                     (inst[14:12] == 3'b110) || (inst[14:12] == 3'b111));
    end
  endfunction

  function automatic uses_rs1_inst(input [31:0] inst);
    begin
      case (inst[6:0])
        TYPE_I0, TYPE_I1, TYPE_I2, TYPE_B, TYPE_S, TYPE_R, TYPE_CSR: uses_rs1_inst = 1'b1;
        default: uses_rs1_inst = 1'b0;
      endcase
    end
  endfunction

  function automatic uses_rs2_inst(input [31:0] inst);
    begin
      case (inst[6:0])
        TYPE_B, TYPE_S, TYPE_R: uses_rs2_inst = 1'b1;
        default: uses_rs2_inst = 1'b0;
      endcase
    end
  endfunction

  function automatic writes_rd_inst(input [31:0] inst);
    begin
      case (inst[6:0])
        TYPE_R, TYPE_U0, TYPE_U1, TYPE_I0, TYPE_I1, TYPE_I2, TYPE_J, TYPE_CSR:
          writes_rd_inst = (inst[11:7] != 5'b0);
        default:
          writes_rd_inst = 1'b0;
      endcase
    end
  endfunction


  function automatic is_legal_inst(input [31:0] inst);
    begin
      case (inst[6:0])
        TYPE_I0: begin
          case (inst[14:12])
            3'b000, 3'b001, 3'b010, 3'b100, 3'b101: is_legal_inst = 1'b1;
            default: is_legal_inst = 1'b0;
          endcase
        end
        TYPE_I1: begin
          case (inst[14:12])
            3'b000, 3'b001, 3'b010, 3'b011, 3'b100, 3'b110, 3'b111: is_legal_inst = 1'b1;
            3'b101: is_legal_inst = (inst[31:25] == 7'b0000000) || (inst[31:25] == 7'b0100000);
            default: is_legal_inst = 1'b0;
          endcase
        end
        TYPE_I2: is_legal_inst = (inst[14:12] == 3'b000);
        TYPE_CSR: begin
          if (inst[14:12] == 3'b000)
            is_legal_inst = (inst[31:20] == CSR_ECALL) || (inst[31:20] == CSR_EBREAK) || (inst[31:20] == CSR_MRET);
          else
            is_legal_inst = 1'b1;
        end
        TYPE_B: begin
          case (inst[14:12])
            3'b000,3'b001,3'b100,3'b101,3'b110,3'b111: is_legal_inst = 1'b1;
            default: is_legal_inst = 1'b0;
          endcase
        end
        TYPE_J, TYPE_U0, TYPE_U1: is_legal_inst = 1'b1;
        TYPE_S: begin
          case (inst[14:12])
            3'b000,3'b001,3'b010: is_legal_inst = 1'b1;
            default: is_legal_inst = 1'b0;
          endcase
        end
        TYPE_R: begin
          case (inst[14:12])
            3'b000: is_legal_inst = (inst[31:25] == 7'b0000000) || (inst[31:25] == 7'b0100000) || (inst[31:25] == 7'b0000001);
            3'b001,3'b010,3'b011,3'b100,3'b110,3'b111: is_legal_inst = (inst[31:25] == 7'b0000000) || (inst[31:25] == 7'b0000001);
            3'b101: is_legal_inst = (inst[31:25] == 7'b0000000) || (inst[31:25] == 7'b0100000) || (inst[31:25] == 7'b0000001);
            default: is_legal_inst = 1'b0;
          endcase
        end
        TYPE_FENCE_I: is_legal_inst = (inst[14:12] == 3'b001);
        default: is_legal_inst = 1'b0;
      endcase
    end
  endfunction

  function automatic is_cacheable_addr(input [31:0] addr);
    begin
      is_cacheable_addr =
          ((addr >= 32'h0f00_0000) && (addr <= 32'h0fff_ffff)) ||
          ((addr >= 32'h8000_0000) && (addr <= 32'h9fff_ffff)) ||
          ((addr >= 32'ha000_0000) && (addr <= 32'hbfff_ffff));
    end
  endfunction

  function automatic [31:0] bytes_from_size(input [2:0] size);
    begin
      case (size)
        3'b000: bytes_from_size = 32'd1;
        3'b001: bytes_from_size = 32'd2;
        3'b010: bytes_from_size = 32'd4;
        default: bytes_from_size = 32'd4;
      endcase
    end
  endfunction

  function automatic [31:0] bytes_from_wstrb(input [3:0] strb);
    begin
      case (strb)
        4'b0001, 4'b0010, 4'b0100, 4'b1000: bytes_from_wstrb = 32'd1;
        4'b0011, 4'b0110, 4'b1100:         bytes_from_wstrb = 32'd2;
        4'b1111:                           bytes_from_wstrb = 32'd4;
        default:                           bytes_from_wstrb = 32'd4;
      endcase
    end
  endfunction

  reg  [31:0] fetch_pc;

  reg         id_valid;
  reg         id_hold_serial;
  reg  [31:0] id_inst;
  reg  [31:0] id_pc;

  reg         ex_valid;
  reg         ex_serial;
  reg         ex_wen_expect;
  reg         ex_is_store;
  reg         ex_is_ctrl;
  reg  [4:0]  ex_rd;
  reg  [31:0] ex_pc;
  reg  [31:0] ex_inst;

  reg         id_exc_valid;
  reg  [4:0]  id_exc_code;
  reg  [31:0] id_exc_tval;

  reg         ex_exc_valid;
  reg  [4:0]  ex_exc_code;
  reg  [31:0] ex_exc_tval;
  reg         ex_is_mret;

  wire [6:0]  id_opcode = id_inst[6:0];
  wire [2:0]  id_fun    = id_inst[14:12];
  wire [4:0]  id_rs1    = id_inst[19:15];
  wire [4:0]  id_rs2    = id_inst[24:20];
  wire [4:0]  id_rd     = id_inst[11:7];
  wire [31:0] id_imm    = decode_imm(id_inst);

  wire id_is_load   = id_valid && is_load_inst(id_inst);
  wire id_is_store  = id_valid && is_store_inst(id_inst);
  wire id_is_branch = id_valid && is_branch_inst(id_inst);
  wire id_is_jal    = id_valid && is_jal_inst(id_inst);
  wire id_is_jalr   = id_valid && is_jalr_inst(id_inst);
  wire id_is_csr    = id_valid && is_csr_inst(id_inst);
  wire id_is_fencei = id_valid && is_fencei_inst(id_inst);
  wire id_is_mdu    = id_valid && is_mdu_inst(id_inst);

  wire id_is_ctrl   = id_is_branch | id_is_jal | id_is_jalr | id_is_csr;
  wire id_is_serial = id_is_load | id_is_store | id_is_ctrl | id_is_fencei | id_is_mdu;
  wire id_wen_expect = id_valid && writes_rd_inst(id_inst);
  wire id_use_rs1    = id_valid && uses_rs1_inst(id_inst);
  wire id_use_rs2    = id_valid && uses_rs2_inst(id_inst);

  wire id_is_ecall  = id_is_csr && (id_fun == 3'b000) && (id_imm[11:0] == CSR_ECALL);
  wire id_is_ebreak = id_is_csr && (id_fun == 3'b000) && (id_imm[11:0] == CSR_EBREAK);
  wire id_is_mret   = id_is_csr && (id_fun == 3'b000) && (id_imm[11:0] == CSR_MRET);
  wire id_is_illegal = id_valid && !is_legal_inst(id_inst);

  wire id_dec_exc_valid = id_is_illegal | id_is_ebreak | id_is_ecall;
  wire [4:0] id_dec_exc_code = id_is_illegal ? EXC_ILLEGAL_INST :
                               id_is_ebreak  ? EXC_BREAKPOINT   :
                               id_is_ecall   ? EXC_ECALL_M      : 5'd0;
  wire [31:0] id_dec_exc_tval = id_is_illegal ? id_inst : 32'b0;

  wire [31:0] src1;
  wire [31:0] src2;

  wire raw_hazard = id_valid && ex_valid && ex_wen_expect && (ex_rd != 5'b0) &&
                   ( (id_use_rs1 && (id_rs1 == ex_rd)) ||
                     (id_use_rs2 && (id_rs2 == ex_rd)) );

  wire        ifu_inst_valid;
  wire [31:0] ifu_inst;
  wire [31:0] ifu_inst_pc;

  wire        ifu_arvalid;
  wire        ifu_arready;
  wire [31:0] ifu_araddr;
  wire [3:0]  ifu_arid;
  wire [7:0]  ifu_arlen;
  wire [2:0]  ifu_arsize;
  wire [1:0]  ifu_arburst;
  wire        ifu_rready;
  wire        ifu_rvalid;
  wire [31:0] ifu_rdata;
  wire [1:0]  ifu_rresp;
  wire        ifu_rlast;
  wire [3:0]  ifu_rid;

  wire dec_exc_ready;
  wire dec_exc_valid;
  wire exc_wb_valid;
  wire exc_wb_ready = 1'b1;

  wire        lsu_dec_ar_valid;
  wire        lsu_dec_ar_ready;
  wire        lsu_ex_w_valid;
  wire        lsu_ex_w_ready;
  wire [31:0] lsu_ex_rdata;
  wire        lsu_ex_r_valid;

  wire        lsu_dec_exc_valid;
  wire [4:0]  lsu_dec_exc_code;
  wire [31:0] lsu_dec_exc_tval;
  wire        lsu_resp_exc_valid;
  wire [4:0]  lsu_resp_exc_code;
  wire [31:0] lsu_resp_exc_tval;

  wire wb_fire      = exc_wb_valid && exc_wb_ready;
  wire fencei_flush;

  wire store_resp_fire = ex_valid && ex_is_store && (lsu_bvalid && lsu_bready);
  wire ex_commit        = wb_fire || store_resp_fire;

  wire [4:0]  trap_code_now = lsu_resp_exc_valid ? lsu_resp_exc_code : ex_exc_code;
  wire [31:0] trap_tval_now = lsu_resp_exc_valid ? lsu_resp_exc_tval : ex_exc_tval;
  wire        trap_has_exc  = ex_exc_valid || lsu_resp_exc_valid;

  wire trap_commit = ex_commit && ex_valid && trap_has_exc;
  wire mret_commit = ex_commit && ex_valid && ex_is_mret && !trap_has_exc;
  wire normal_ctrl_redirect = ex_commit && ex_valid && ex_is_ctrl && !trap_has_exc && !ex_is_mret &&
                              (alu_dnpc != (ex_pc + 32'd4));

  wire ctrl_redirect = normal_ctrl_redirect;
  wire ctrl_flush    = ctrl_redirect;
  wire global_flush  = trap_commit | mret_commit | ctrl_flush | fencei_flush;

  wire ifu_fetch_allow = !reset && !global_flush && !(ex_valid && ex_serial);

  wire id_issue_base        = id_valid && !id_hold_serial && !raw_hazard;
  wire id_issue_base_masked = id_issue_base && !global_flush;

  assign lsu_dec_ar_valid = id_issue_base_masked && id_is_load;
  assign dec_exc_valid    = id_issue_base_masked &&
                            (!id_is_load || lsu_dec_ar_ready);
  wire id_fire            = dec_exc_valid && dec_exc_ready;
  wire lsu_store_capture_valid = id_fire && id_is_store;
  wire id_accept_ready = (!id_valid) || (id_fire && !id_is_serial);
  wire ifu_take        = ifu_inst_valid && id_accept_ready && !global_flush;

  wire [31:0] alu_dnpc;
  wire [31:0] alu_wdata;
  wire        alu_wen;
  wire        w_finish_sim;

  wire [31:0] alu_mtvec;
  wire [31:0] alu_mepc;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      fetch_pc <= BASE_ADDR;
    end else if (trap_commit) begin
      fetch_pc <= alu_mtvec;
    end else if (mret_commit) begin
      fetch_pc <= alu_mepc;
    end else if (ctrl_flush) begin
      fetch_pc <= alu_dnpc;
    end else if (fencei_flush) begin
      fetch_pc <= ex_pc + 32'd4;
    end else if (ifu_take) begin
      fetch_pc <= ifu_inst_pc + 32'd4;
    end
  end

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      id_valid       <= 1'b0;
      id_hold_serial <= 1'b0;
      id_inst        <= 32'h00000013;
      id_pc          <= BASE_ADDR;
      id_exc_valid   <= 1'b0;
      id_exc_code    <= 5'd0;
      id_exc_tval    <= 32'b0;
    end else if (global_flush) begin
      id_valid       <= 1'b0;
      id_hold_serial <= 1'b0;
      id_inst        <= 32'h00000013;
      id_pc          <= fetch_pc;
      id_exc_valid   <= 1'b0;
      id_exc_code    <= 5'd0;
      id_exc_tval    <= 32'b0;
    end else begin
      if (ex_commit && id_hold_serial) begin
        id_valid       <= 1'b0;
        id_hold_serial <= 1'b0;
        id_inst        <= 32'h00000013;
        id_exc_valid   <= 1'b0;
        id_exc_code    <= 5'd0;
        id_exc_tval    <= 32'b0;
      end else if (id_fire) begin
        if (id_is_serial) begin
          id_valid       <= 1'b1;
          id_hold_serial <= 1'b1;
        end else if (ifu_take) begin
          id_valid       <= 1'b1;
          id_hold_serial <= 1'b0;
          id_inst        <= ifu_inst;
          id_pc          <= ifu_inst_pc;
          id_exc_valid   <= 1'b0;
          id_exc_code    <= 5'd0;
          id_exc_tval    <= 32'b0;
        end else begin
          id_valid       <= 1'b0;
          id_hold_serial <= 1'b0;
          id_inst        <= 32'h00000013;
          id_exc_valid   <= 1'b0;
          id_exc_code    <= 5'd0;
          id_exc_tval    <= 32'b0;
        end
      end else if (!id_valid && ifu_take) begin
        id_valid       <= 1'b1;
        id_hold_serial <= 1'b0;
        id_inst        <= ifu_inst;
        id_pc          <= ifu_inst_pc;
        id_exc_valid   <= 1'b0;
        id_exc_code    <= 5'd0;
        id_exc_tval    <= 32'b0;
      end
    end
  end

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      ex_valid      <= 1'b0;
      ex_serial     <= 1'b0;
      ex_wen_expect <= 1'b0;
      ex_is_store   <= 1'b0;
      ex_is_ctrl    <= 1'b0;
      ex_rd         <= 5'b0;
      ex_pc         <= BASE_ADDR;
      ex_inst       <= 32'h00000013;
      ex_exc_valid  <= 1'b0;
      ex_exc_code   <= 5'd0;
      ex_exc_tval   <= 32'b0;
      ex_is_mret    <= 1'b0;
    end else if (global_flush) begin
      ex_valid      <= 1'b0;
      ex_serial     <= 1'b0;
      ex_wen_expect <= 1'b0;
      ex_is_store   <= 1'b0;
      ex_is_ctrl    <= 1'b0;
      ex_rd         <= 5'b0;
      ex_pc         <= BASE_ADDR;
      ex_inst       <= 32'h00000013;
      ex_exc_valid  <= 1'b0;
      ex_exc_code   <= 5'd0;
      ex_exc_tval   <= 32'b0;
      ex_is_mret    <= 1'b0;
    end else begin
      if (ex_commit) begin
        ex_valid      <= 1'b0;
        ex_serial     <= 1'b0;
        ex_wen_expect <= 1'b0;
        ex_is_store   <= 1'b0;
        ex_is_ctrl    <= 1'b0;
        ex_rd         <= 5'b0;
        ex_exc_valid  <= 1'b0;
        ex_exc_code   <= 5'd0;
        ex_exc_tval   <= 32'b0;
        ex_is_mret    <= 1'b0;
      end
      if (id_fire) begin
        ex_valid      <= 1'b1;
        ex_serial     <= id_is_serial;
        ex_wen_expect <= id_wen_expect;
        ex_is_store   <= id_is_store;
        ex_is_ctrl    <= id_is_ctrl;
        ex_rd         <= id_rd;
        ex_pc         <= id_pc;
        ex_inst       <= id_inst;
        ex_exc_valid  <= id_dec_exc_valid | lsu_dec_exc_valid;
        ex_exc_code   <= id_dec_exc_valid ? id_dec_exc_code : lsu_dec_exc_code;
        ex_exc_tval   <= id_dec_exc_valid ? id_dec_exc_tval : lsu_dec_exc_tval;
        ex_is_mret    <= id_is_mret;
      end
    end
  end

  always @(posedge clock or posedge reset) begin
    if (reset || global_flush) begin
      // no-op
    end else if (lsu_resp_exc_valid && ex_valid && !ex_exc_valid) begin
      ex_exc_valid <= 1'b1;
      ex_exc_code  <= lsu_resp_exc_code;
      ex_exc_tval  <= lsu_resp_exc_tval;
    end
  end

  wire rf_wen = wb_fire && !ex_exc_valid && alu_wen && (ex_rd != 5'b0);
  wire [31:0] exit_code;
  ysyx_24110005_RegisterFile #(
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
  ) u_rf (
    .clock    (clock),
    .reset    (reset),
    .wen      (rf_wen),
    .w_data   (alu_wdata),
    .w_addr   (ex_rd),
    .r_addr1  (id_rs1),
    .r_addr2  (id_rs2),
    .r_data1  (src1),
    .r_data2  (src2),
    .exit_code(exit_code)
  );

  ysyx_24110005_ifu #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
  ) u_ifu (
    .clock        (clock),
    .reset        (reset),
    .i_fetch_allow(ifu_fetch_allow),
    .i_id_ready   (id_accept_ready),
    .i_fetch_pc   (fetch_pc),
    .o_inst_valid (ifu_inst_valid),
    .o_inst       (ifu_inst),
    .o_inst_pc    (ifu_inst_pc),
    .o_ifu_arvalid(ifu_arvalid),
    .i_ifu_arready(ifu_arready),
    .o_ifu_araddr (ifu_araddr),
    .o_ifu_arid   (ifu_arid),
    .o_ifu_arlen  (ifu_arlen),
    .o_ifu_arsize (ifu_arsize),
    .o_ifu_arburst(ifu_arburst),
    .o_ifu_rready (ifu_rready),
    .i_ifu_rvalid (ifu_rvalid),
    .i_ifu_rdata  (ifu_rdata),
    .i_ifu_rlast  (ifu_rlast),
    .i_flush      (global_flush)
  );

  wire        ic_mem_arvalid;
  wire        ic_mem_arready;
  wire [31:0] ic_mem_araddr;
  wire [7:0]  ic_mem_arlen;
  wire [2:0]  ic_mem_arsize;
  wire [1:0]  ic_mem_arburst;
  wire        ic_mem_rready;
  wire        ic_mem_rvalid;
  wire [31:0] ic_mem_rdata;
  wire [1:0]  ic_mem_rresp;
  wire        ic_mem_rlast;
  wire [3:0]  ic_mem_rid;

  ysyx_24110005_icache #(
    .ADDR_WIDTH(32),
    .DATA_WIDTH(32),
    .LINE_BYTES(8),
    .SET_NUM(128)
  ) u_icache (
    .clock           (clock),
    .rst_n           (~reset),
    .flush_i         (fencei_flush),
    .cpu_ar_valid    (ifu_arvalid),
    .cpu_ar_addr     (ifu_araddr),
    .cpu_ar_ready    (ifu_arready),
    .cpu_inst_rready (ifu_rready),
    .cpu_inst_rvalid (ifu_rvalid),
    .cpu_inst_rdata  (ifu_rdata),
    .mem_ar_valid    (ic_mem_arvalid),
    .mem_ar_addr     (ic_mem_araddr),
    .mem_ar_len      (ic_mem_arlen),
    .mem_ar_size     (ic_mem_arsize),
    .mem_ar_burst    (ic_mem_arburst),
    .mem_ar_ready    (ic_mem_arready),
    .mem_rvalid      (ic_mem_rvalid),
    .mem_rready      (ic_mem_rready),
    .mem_rdata       (ic_mem_rdata),
    .mem_rlast       (ic_mem_rlast)
  );
  assign ifu_rresp = 2'b00;
  assign ifu_rlast = ifu_rvalid;
  assign ifu_rid   = 4'b0;

  wire  [7:0] lsu_wmask;
  wire        lsu_arvalid;
  wire        lsu_arready;
  wire [31:0] lsu_araddr;
  wire [3:0]  lsu_arid;
  wire [7:0]  lsu_arlen;
  wire [2:0]  lsu_arsize;
  wire [1:0]  lsu_arburst;
  wire        lsu_rready;
  wire        lsu_rvalid;
  wire [31:0] lsu_rdata;
  wire [1:0]  lsu_rresp;
  wire        lsu_rlast;
  wire [3:0]  lsu_rid;
  wire        lsu_awvalid;
  wire        lsu_awready;
  wire [31:0] lsu_awaddr;
  wire [3:0]  lsu_awid;
  wire [7:0]  lsu_awlen;
  wire [2:0]  lsu_awsize;
  wire [1:0]  lsu_awburst;
  wire        lsu_wvalid;
  wire        lsu_wready;
  wire [31:0] lsu_wdata;
  wire [3:0]  lsu_wstrb;
  wire        lsu_wlast;
  wire        lsu_bready;
  wire        lsu_bvalid;
  wire [1:0]  lsu_bresp;
  wire [3:0]  lsu_bid;

ysyx_24110005_lsu #(
  .DATA_WIDTH(DATA_WIDTH),
  .ADDR_WIDTH(ADDR_WIDTH)
) u_lsu (
  .clock              (clock),
  .reset              (reset),
  .i_src1             (src1),
  .i_src2             (src2),
  .i_imm              (id_imm),
  .i_fun              (id_fun),
  .i_opcode           (id_opcode),
  .i_lsu_dec_ar_valid (lsu_dec_ar_valid),
  .i_exc_wb_ready     (1'b1),
  .i_lsu_ex_w_valid   (lsu_ex_w_valid),

  // 新增这一行
  .i_store_capture_valid(lsu_store_capture_valid),

  .o_lsu_arvalid      (lsu_arvalid),
  .i_lsu_arready      (lsu_arready),
  .o_lsu_araddr       (lsu_araddr),
  .o_lsu_arid         (lsu_arid),
  .o_lsu_arlen        (lsu_arlen),
  .o_lsu_arsize       (lsu_arsize),
  .o_lsu_arburst      (lsu_arburst),
  .o_lsu_rready       (lsu_rready),
  .i_lsu_rvalid       (lsu_rvalid),
  .i_lsu_rdata        (lsu_rdata),
  .i_lsu_rresp        (lsu_rresp),
  .i_lsu_rlast        (lsu_rlast),
  .i_lsu_rid          (lsu_rid),
  .o_lsu_awvalid      (lsu_awvalid),
  .i_lsu_awready      (lsu_awready),
  .o_lsu_awaddr       (lsu_awaddr),
  .o_lsu_awid         (lsu_awid),
  .o_lsu_awlen        (lsu_awlen),
  .o_lsu_awsize       (lsu_awsize),
  .o_lsu_awburst      (lsu_awburst),
  .o_lsu_wvalid       (lsu_wvalid),
  .i_lsu_wready       (lsu_wready),
  .o_lsu_wdata        (lsu_wdata),
  .o_lsu_wstrb        (lsu_wstrb),
  .o_lsu_wlast        (lsu_wlast),
  .o_lsu_bready       (lsu_bready),
  .i_lsu_bvalid       (lsu_bvalid),
  .i_lsu_bresp        (lsu_bresp),
  .i_lsu_bid          (lsu_bid),
  .o_r_data           (lsu_ex_rdata),
  .o_lsu_rvalid       (lsu_ex_r_valid),
  .o_lsu_dec_ar_ready (lsu_dec_ar_ready),
  .o_lsu_ex_w_ready   (lsu_ex_w_ready),
  .o_lsu_wmask        (lsu_wmask),
  .o_lsu_dec_exc_valid (lsu_dec_exc_valid),
  .o_lsu_dec_exc_code  (lsu_dec_exc_code),
  .o_lsu_dec_exc_tval  (lsu_dec_exc_tval),
  .o_lsu_resp_exc_valid(lsu_resp_exc_valid),
  .o_lsu_resp_exc_code (lsu_resp_exc_code),
  .o_lsu_resp_exc_tval (lsu_resp_exc_tval)
);

  ysyx_24110005_Alu #(
    .DATA_WIDTH(DATA_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH),
    .OP_WIDTH(OP_WIDTH)
  ) u_alu (
    .clock         (clock),
    .reset         (reset),
    .dec_exc_valid (dec_exc_valid),
    .dec_exc_ready (dec_exc_ready),
    .w_addr        (id_rd),
    .pc            (id_pc),
    .opcode        (id_opcode),
    .fun           (id_fun),
    .src1          (src1),
    .src2          (src2),
    .imm           (id_imm),
    .i_fencei      (id_is_fencei),
    .i_dec_has_exc (id_dec_exc_valid | lsu_dec_exc_valid),
    .dnpc          (alu_dnpc),
    .w_data        (alu_wdata),
    .wen           (alu_wen),
    .lsu_ex_r_valid(lsu_ex_r_valid),
    .mem_rdata     (lsu_ex_rdata),
    .lsu_ex_w_valid(lsu_ex_w_valid),
    .lsu_ex_w_ready(lsu_ex_w_ready),
    .bresp         (lsu_bvalid && lsu_bready),
    .exc_wb_ready  (exc_wb_ready),
    .exc_wb_valid  (exc_wb_valid),
    .w_finish_sim  (w_finish_sim),
    .o_fencei_flush(fencei_flush),
    .i_trap_commit (trap_commit),
    .i_trap_mepc   (ex_pc),
    .i_trap_mcause (trap_code_now),
    .i_trap_mtval  (trap_tval_now),
    .o_mtvec       (alu_mtvec),
    .o_mepc        (alu_mepc)
  );

  wire        xb_arvalid;
  wire        xb_arready;
  wire [31:0] xb_araddr;
  wire [3:0]  xb_arid;
  wire [7:0]  xb_arlen;
  wire [2:0]  xb_arsize;
  wire [1:0]  xb_arburst;
  wire        xb_rready;
  wire        xb_rvalid;
  wire [31:0] xb_rdata;
  wire [1:0]  xb_rresp;
  wire        xb_rlast;
  wire [3:0]  xb_rid;
  wire        xb_awvalid;
  wire        xb_awready;
  wire [31:0] xb_awaddr;
  wire [3:0]  xb_awid;
  wire [7:0]  xb_awlen;
  wire [2:0]  xb_awsize;
  wire [1:0]  xb_awburst;
  wire        xb_wvalid;
  wire        xb_wready;
  wire [31:0] xb_wdata;
  wire [3:0]  xb_wstrb;
  wire        xb_wlast;
  wire        xb_bready;
  wire        xb_bvalid;
  wire [1:0]  xb_bresp;
  wire [3:0]  xb_bid;

  ysyx_24110005_Arbiter #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(ADDR_WIDTH)
  ) u_arbiter (
    .clock      (clock),
    .reset      (reset),
    .ifu_arvalid(ic_mem_arvalid),
    .ifu_arready(ic_mem_arready),
    .ifu_araddr (ic_mem_araddr),
    .ifu_arid   (4'b0000),
    .ifu_arlen  (ic_mem_arlen),
    .ifu_arsize (ic_mem_arsize),
    .ifu_arburst(ic_mem_arburst),
    .ifu_rready (ic_mem_rready),
    .ifu_rvalid (ic_mem_rvalid),
    .ifu_rdata  (ic_mem_rdata),
    .ifu_rresp  (ic_mem_rresp),
    .ifu_rlast  (ic_mem_rlast),
    .ifu_rid    (ic_mem_rid),
    .lsu_arvalid(lsu_arvalid),
    .lsu_arready(lsu_arready),
    .lsu_araddr (lsu_araddr),
    .lsu_arid   (lsu_arid),
    .lsu_arlen  (lsu_arlen),
    .lsu_arsize (lsu_arsize),
    .lsu_arburst(lsu_arburst),
    .lsu_rready (lsu_rready),
    .lsu_rvalid (lsu_rvalid),
    .lsu_rdata  (lsu_rdata),
    .lsu_rresp  (lsu_rresp),
    .lsu_rlast  (lsu_rlast),
    .lsu_rid    (lsu_rid),
    .lsu_awvalid(lsu_awvalid),
    .lsu_awready(lsu_awready),
    .lsu_awaddr (lsu_awaddr),
    .lsu_awid   (lsu_awid),
    .lsu_awlen  (lsu_awlen),
    .lsu_awsize (lsu_awsize),
    .lsu_awburst(lsu_awburst),
    .lsu_wvalid (lsu_wvalid),
    .lsu_wready (lsu_wready),
    .lsu_wdata  (lsu_wdata),
    .lsu_wstrb  (lsu_wstrb),
    .lsu_wlast  (lsu_wlast),
    .lsu_bready (lsu_bready),
    .lsu_bvalid (lsu_bvalid),
    .lsu_bresp  (lsu_bresp),
    .lsu_bid    (lsu_bid),
    .m_arvalid  (xb_arvalid),
    .m_arready  (xb_arready),
    .m_araddr   (xb_araddr),
    .m_arid     (xb_arid),
    .m_arlen    (xb_arlen),
    .m_arsize   (xb_arsize),
    .m_arburst  (xb_arburst),
    .m_rready   (xb_rready),
    .m_rvalid   (xb_rvalid),
    .m_rdata    (xb_rdata),
    .m_rresp    (xb_rresp),
    .m_rlast    (xb_rlast),
    .m_rid      (xb_rid),
    .m_awvalid  (xb_awvalid),
    .m_awready  (xb_awready),
    .m_awaddr   (xb_awaddr),
    .m_awid     (xb_awid),
    .m_awlen    (xb_awlen),
    .m_awsize   (xb_awsize),
    .m_awburst  (xb_awburst),
    .m_wvalid   (xb_wvalid),
    .m_wready   (xb_wready),
    .m_wdata    (xb_wdata),
    .m_wstrb    (xb_wstrb),
    .m_wlast    (xb_wlast),
    .m_bready   (xb_bready),
    .m_bvalid   (xb_bvalid),
    .m_bresp    (xb_bresp),
    .m_bid      (xb_bid)
  );

  wire        soc_arvalid;
  wire        soc_arready;
  wire [31:0] soc_araddr;
  wire [3:0]  soc_arid;
  wire [7:0]  soc_arlen;
  wire [2:0]  soc_arsize;
  wire [1:0]  soc_arburst;
  wire        soc_rready;
  wire        soc_rvalid;
  wire [31:0] soc_rdata;
  wire [1:0]  soc_rresp;
  wire        soc_rlast;
  wire [3:0]  soc_rid;
  wire        soc_awvalid;
  wire        soc_awready;
  wire [31:0] soc_awaddr;
  wire [3:0]  soc_awid;
  wire [7:0]  soc_awlen;
  wire [2:0]  soc_awsize;
  wire [1:0]  soc_awburst;
  wire        soc_wvalid;
  wire        soc_wready;
  wire [31:0] soc_wdata;
  wire [3:0]  soc_wstrb;
  wire        soc_wlast;
  wire        soc_bready;
  wire        soc_bvalid;
  wire [1:0]  soc_bresp;
  wire [3:0]  soc_bid;

  wire        clint_arvalid;
  wire        clint_arready;
  wire [31:0] clint_araddr_axi;
  wire [3:0]  clint_arid_axi;
  wire [7:0]  clint_arlen_axi;
  wire [2:0]  clint_arsize_axi;
  wire [1:0]  clint_arburst_axi;
  wire        clint_rready_axi;
  wire        clint_rvalid_axi;
  wire [31:0] clint_rdata_axi;
  wire [1:0]  clint_rresp_axi;
  wire        clint_rlast_axi;
  wire [3:0]  clint_rid_axi;
  wire        clint_awvalid;
  wire        clint_awready;
  wire [31:0] clint_awaddr_axi;
  wire [3:0]  clint_awid_axi;
  wire [7:0]  clint_awlen_axi;
  wire [2:0]  clint_awsize_axi;
  wire [1:0]  clint_awburst_axi;
  wire        clint_wvalid;
  wire        clint_wready;
  wire [31:0] clint_wdata_axi;
  wire [3:0]  clint_wstrb_axi;
  wire        clint_wlast_axi;
  wire        clint_bready_axi;
  wire        clint_bvalid_axi;
  wire [1:0]  clint_bresp_axi;
  wire [3:0]  clint_bid_axi;

  ysyx_24110005_Xbar #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH)
  ) u_xbar (
    .clock        (clock),
    .reset        (reset),
    .xb_ar_valid  (xb_arvalid),
    .xb_ar_ready  (xb_arready),
    .xb_ar_addr   (xb_araddr),
    .xb_ar_id     (xb_arid),
    .xb_ar_len    (xb_arlen),
    .xb_ar_size   (xb_arsize),
    .xb_ar_burst  (xb_arburst),
    .xb_r_valid   (xb_rvalid),
    .xb_r_ready   (xb_rready),
    .xb_r_data    (xb_rdata),
    .xb_r_resp    (xb_rresp),
    .xb_r_last    (xb_rlast),
    .xb_r_id      (xb_rid),
    .xb_aw_valid  (xb_awvalid),
    .xb_aw_ready  (xb_awready),
    .xb_aw_addr   (xb_awaddr),
    .xb_aw_id     (xb_awid),
    .xb_aw_len    (xb_awlen),
    .xb_aw_size   (xb_awsize),
    .xb_aw_burst  (xb_awburst),
    .xb_w_valid   (xb_wvalid),
    .xb_w_ready   (xb_wready),
    .xb_w_data    (xb_wdata),
    .xb_w_strb    (xb_wstrb),
    .xb_w_last    (xb_wlast),
    .xb_b_valid   (xb_bvalid),
    .xb_b_ready   (xb_bready),
    .xb_b_resp    (xb_bresp),
    .xb_b_id      (xb_bid),
    .soc_arvalid  (soc_arvalid),
    .soc_arready  (soc_arready),
    .soc_araddr   (soc_araddr),
    .soc_arid     (soc_arid),
    .soc_arlen    (soc_arlen),
    .soc_arsize   (soc_arsize),
    .soc_arburst  (soc_arburst),
    .soc_rvalid   (soc_rvalid),
    .soc_rready   (soc_rready),
    .soc_rdata    (soc_rdata),
    .soc_rresp    (soc_rresp),
    .soc_rlast    (soc_rlast),
    .soc_rid      (soc_rid),
    .soc_awvalid  (soc_awvalid),
    .soc_awready  (soc_awready),
    .soc_awaddr   (soc_awaddr),
    .soc_awid     (soc_awid),
    .soc_awlen    (soc_awlen),
    .soc_awsize   (soc_awsize),
    .soc_awburst  (soc_awburst),
    .soc_wvalid   (soc_wvalid),
    .soc_wready   (soc_wready),
    .soc_wdata    (soc_wdata),
    .soc_wstrb    (soc_wstrb),
    .soc_wlast    (soc_wlast),
    .soc_bvalid   (soc_bvalid),
    .soc_bready   (soc_bready),
    .soc_bresp    (soc_bresp),
    .soc_bid      (soc_bid),
    .clint_arvalid(clint_arvalid),
    .clint_arready(clint_arready),
    .clint_araddr (clint_araddr_axi),
    .clint_arid   (clint_arid_axi),
    .clint_arlen  (clint_arlen_axi),
    .clint_arsize (clint_arsize_axi),
    .clint_arburst(clint_arburst_axi),
    .clint_rvalid (clint_rvalid_axi),
    .clint_rready (clint_rready_axi),
    .clint_rdata  (clint_rdata_axi),
    .clint_rresp  (clint_rresp_axi),
    .clint_rlast  (clint_rlast_axi),
    .clint_rid    (clint_rid_axi),
    .clint_awvalid(clint_awvalid),
    .clint_awready(clint_awready),
    .clint_awaddr (clint_awaddr_axi),
    .clint_awid   (clint_awid_axi),
    .clint_awlen  (clint_awlen_axi),
    .clint_awsize (clint_awsize_axi),
    .clint_awburst(clint_awburst_axi),
    .clint_wvalid (clint_wvalid),
    .clint_wready (clint_wready),
    .clint_wdata  (clint_wdata_axi),
    .clint_wstrb  (clint_wstrb_axi),
    .clint_wlast  (clint_wlast_axi),
    .clint_bvalid (clint_bvalid_axi),
    .clint_bready (clint_bready_axi),
    .clint_bresp  (clint_bresp_axi),
    .clint_bid    (clint_bid_axi)
  );

  assign io_master_arvalid = soc_arvalid;
  assign soc_arready       = io_master_arready;
  assign io_master_araddr  = soc_araddr;
  assign io_master_arid    = soc_arid;
  assign io_master_arlen   = soc_arlen;
  assign io_master_arsize  = soc_arsize;
  assign io_master_arburst = soc_arburst;
  assign soc_rvalid        = io_master_rvalid;
  assign io_master_rready  = soc_rready;
  assign soc_rdata         = io_master_rdata;
  assign soc_rresp         = io_master_rresp;
  assign soc_rlast         = io_master_rlast;
  assign soc_rid           = io_master_rid;
  assign io_master_awvalid = soc_awvalid;
  assign soc_awready       = io_master_awready;
  assign io_master_awaddr  = soc_awaddr;
  assign io_master_awid    = soc_awid;
  assign io_master_awlen   = soc_awlen;
  assign io_master_awsize  = soc_awsize;
  assign io_master_awburst = soc_awburst;
  assign io_master_wvalid  = soc_wvalid;
  assign soc_wready        = io_master_wready;
  assign io_master_wdata   = soc_wdata;
  assign io_master_wstrb   = soc_wstrb;
  assign io_master_wlast   = soc_wlast;
  assign soc_bvalid        = io_master_bvalid;
  assign io_master_bready  = soc_bready;
  assign soc_bresp         = io_master_bresp;
  assign soc_bid           = io_master_bid;

  ysyx_24110005_Clint u_clint (
    .clock   (clock),
    .reset   (reset),
    .s_arvalid(clint_arvalid),
    .s_arready(clint_arready),
    .s_araddr (clint_araddr_axi),
    .s_arid   (clint_arid_axi),
    .s_arlen  (clint_arlen_axi),
    .s_arsize (clint_arsize_axi),
    .s_arburst(clint_arburst_axi),
    .s_rvalid (clint_rvalid_axi),
    .s_rready (clint_rready_axi),
    .s_rdata  (clint_rdata_axi),
    .s_rresp  (clint_rresp_axi),
    .s_rlast  (clint_rlast_axi),
    .s_rid    (clint_rid_axi),
    .s_awvalid(clint_awvalid),
    .s_awready(clint_awready),
    .s_awaddr (clint_awaddr_axi),
    .s_awid   (clint_awid_axi),
    .s_awlen  (clint_awlen_axi),
    .s_awsize (clint_awsize_axi),
    .s_awburst(clint_awburst_axi),
    .s_wvalid (clint_wvalid),
    .s_wready (clint_wready),
    .s_wdata  (clint_wdata_axi),
    .s_wstrb  (clint_wstrb_axi),
    .s_wlast  (clint_wlast_axi),
    .s_bvalid (clint_bvalid_axi),
    .s_bready (clint_bready_axi),
    .s_bresp  (clint_bresp_axi),
    .s_bid    (clint_bid_axi)
  );

  reg [31:0] mtrace_awaddr_q;
  reg [2:0]  mtrace_awsize_q;
  reg        mtrace_aw_pending;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      mtrace_awaddr_q   <= 32'b0;
      mtrace_awsize_q   <= 3'b010;
      mtrace_aw_pending <= 1'b0;
    end else begin
      if (lsu_arvalid && lsu_arready) begin
        if (is_cacheable_addr(lsu_araddr) && (lsu_arlen == 8'd0)) begin
          mtrace_read(lsu_araddr, bytes_from_size(lsu_arsize));
        end
      end

      if (lsu_awvalid && lsu_awready) begin
        mtrace_awaddr_q   <= lsu_awaddr;
        mtrace_awsize_q   <= lsu_awsize;
        mtrace_aw_pending <= 1'b1;
      end

      if (lsu_wvalid && lsu_wready) begin
        if (mtrace_aw_pending) begin
          if (is_cacheable_addr(mtrace_awaddr_q) && lsu_wlast) begin
            mtrace_write(mtrace_awaddr_q, bytes_from_wstrb(lsu_wstrb), lsu_wdata);
          end
          mtrace_aw_pending <= 1'b0;
        end
      end
    end
  end

  always @(posedge clock) begin
    if (!reset) begin
      if (w_finish_sim && wb_fire) begin
        finish_sim();
      end
      if (ex_commit) begin
        inst_trace(ex_pc, ex_inst, trap_commit ? alu_mtvec : (mret_commit ? alu_mepc : alu_dnpc));
        // difftest_step(ex_pc, alu_dnpc);
      end
    end
  end

  /* verilator lint_off UNUSED */
  wire _unused_interrupt = io_interrupt;
  wire [31:0] _unused_exit_code = exit_code;
  wire [7:0]  _unused_lsu_wmask = lsu_wmask;
  wire [3:0]  _unused_ifu_id = ifu_arid;
  wire [7:0]  _unused_ifu_len = ifu_arlen;
  wire [2:0]  _unused_ifu_size = ifu_arsize;
  wire [1:0]  _unused_ifu_burst = ifu_arburst;
  wire [1:0]  _unused_ifu_rresp = ifu_rresp;
  wire [3:0]  _unused_ifu_rid = ifu_rid;
  wire [3:0]  _unused_mtrace_awsize = {1'b0,mtrace_awsize_q};
  /* verilator lint_on UNUSED */


endmodule
