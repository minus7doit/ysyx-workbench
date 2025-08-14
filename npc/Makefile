MODULE=ysyx_24110005_NPC


LLVM_CONFIG ?= llvm-config                # 如果 llvm-config 不在 PATH，可 export 这个变量
LLVM_CFLAGS_RAW := $(shell $(LLVM_CONFIG) --cflags)
LLVM_CFLAGS     := $(filter-out -D__STDC_FORMAT_MACROS,$(LLVM_CFLAGS_RAW))

LLVM_LDFLAGS := $(shell $(LLVM_CONFIG) --ldflags --libs --system-libs)

READLINE_LDFLAGS := -lreadline -ldl -lhistory     # history 可能已被 readline 隐含；加上更保险

.PHONY:sim
sim: waveform.vcd
 $(call git_commit, "sim RTL")

.PHONY:verilate
verilate: .stamp.verilate

.PHONY:build
build: obj_dir/Valu

.PHONY:waves
waves: $(MODULE)_waveform.vcd
	@echo
	@echo "### WAVES ###"
	gtkwave $(MODULE)_waveform.vcd

waveform.vcd: ./obj_dir/V$(MODULE)
	@echo
	@echo "### SIMULATING ###"
	@echo $(IMG)
	@./obj_dir/V$(MODULE) $(IMG) $(ARGS) $(ARGS_DIFF)

./obj_dir/V$(MODULE): .stamp.verilate
	@echo
	@echo "### BUILDING SIM ###"
	make -C obj_dir -f V$(MODULE).mk V$(MODULE) 

.stamp.verilate: ./vsrc/*.v ./csrc/tb_$(MODULE).cpp
	@echo
	@echo "### VERILATING ###"
	verilator  --Wno-EOFNEWLINE --trace -cc ./vsrc/*.v --exe ./csrc/tb_$(MODULE).cpp ./csrc/cpu_sim.cpp ./csrc/sdb.cpp ./csrc/trace.cpp ./csrc/elf.cpp ./csrc/diff.cpp ./csrc/paddr.cpp \
	--top-module $(MODULE) \
	-I$(NPC_HOME) \
	-CFLAGS "-std=c++17  $(LLVM_CFLAGS)"  \
	-LDFLAGS "$(LLVM_LDFLAGS) $(READLINE_LDFLAGS)" 
	@touch .stamp.verilate

.PHONY:lint
lint: *.v
	verilator --lint-only ./vsrc/*.v

.PHONY: clean
clean:
	rm -rf .stamp.*;
	rm -rf ./obj_dir
	rm -rf $(MODULE)_waveform.vcd

include ../Makefile
include difftest.mk