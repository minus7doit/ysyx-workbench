module ysyx_24110005_MDU 
#(  DATA_WIDTH = 32) (
  input  clock,
  input  reset,
  input  [DATA_WIDTH-1:0]  i_devidend,
  input  [DATA_WIDTH-1:0]  i_devisor,
  input  [1:0]             i_mdu_op,
  output [DATA_WIDTH-1:0]  o_result,
  input                    i_mdu_ready,
  output                   o_mdu_valid
);
parameter MDU_IDLE  = 2'b00;
parameter MDU_CAL   = 2'b01;
parameter MDU_OUTPUT= 2'b10;
reg [1:0] mdu_state;
reg [DATA_WIDTH-1:0] r_devidend;
reg [DATA_WIDTH-1:0] r_devisor;
reg [DATA_WIDTH:0]   r_rem;
wire rem_sign;
reg [DATA_WIDTH-1:0] r_quotient;
wire cal_done;

always @(posedge clock or posedge reset) begin
  if(reset)begin
    mdu_state<=MDU_IDLE;
  end
  else begin
    case(mdu_state)
      MDU_IDLE:begin
        if(i_mdu_ready)begin
          mdu_state <=MDU_CAL;
        end
      end
      MDU_CAL:begin
        if(cal_done)
        mdu_state<=MDU_OUTPUT;
      end
      MDU_OUTPUT:begin
        if(i_mdu_ready&&o_mdu_valid)
        mdu_state<=MDU_IDLE;
      end
      default:begin
        mdu_state<=MDU_IDLE;
      end
    endcase
  end  
end

assign o_mdu_valid=(mdu_state==MDU_OUTPUT);

wire [DATA_WIDTH-1:0] d;
reg [DATA_WIDTH-1:0] iter_cnt;
always @(posedge clock or posedge reset) begin
  if(reset)begin
    r_devidend<={DATA_WIDTH{1'b0}};
  end
  else begin
    if(mdu_state==MDU_IDLE&&i_mdu_ready)begin
      if(i_mdu_op[0])
        r_devidend<=i_devidend<<1;
      else
        r_devidend<=$signed(i_devidend)<<1;
    end
    else if(mdu_state==MDU_CAL)begin
      if(iter_cnt<DATA_WIDTH)
        r_devidend<={r_devidend[DATA_WIDTH-2:0],1'b0};
    end
  end
end

always @(posedge clock or posedge reset) begin
  if(reset)begin
        r_devisor<={DATA_WIDTH{1'b0}};
  end
  else begin
    if(mdu_state==MDU_IDLE&&i_mdu_ready)begin
      if(i_mdu_op[0])
        r_devisor<=i_devisor<<1;
      else
        r_devisor<=$signed(i_devisor)<<1;
    end
  end
end
always @(posedge clock or posedge reset) begin
  if(reset)begin
      r_rem<={(DATA_WIDTH+1){1'b0}};
  end
  else begin
     if(mdu_state==MDU_CAL)begin
        if(rem_sign)
           r_rem<=r_rem + r_devisor + {32'd0,r_devidend[DATA_WIDTH-1]};
        else 
           r_rem<=r_rem - r_devisor + {32'd0,r_devidend[DATA_WIDTH-1]};
     end
  end
end

assign rem_sign=r_rem[DATA_WIDTH];
always @(posedge clock or posedge reset) begin
  if(reset)begin
      r_quotient<={DATA_WIDTH{1'b0}};
  end
  else begin
     if(mdu_state==MDU_CAL)begin
        if(rem_sign)
          r_quotient<={r_quotient[DATA_WIDTH-2:0],1'b0};   
        else 
          r_quotient<={r_quotient[DATA_WIDTH-2:0],1'b1};
     end
  end
end

always @(posedge clock or posedge reset) begin
  if(reset)begin
    iter_cnt<={DATA_WIDTH{1'b0}};
  end
  else begin
    if(mdu_state==MDU_CAL)
      iter_cnt<=iter_cnt+1'b1;
    else
      iter_cnt<={DATA_WIDTH{1'b0}};
  end
end

assign cal_done=(iter_cnt==DATA_WIDTH);
    
endmodule