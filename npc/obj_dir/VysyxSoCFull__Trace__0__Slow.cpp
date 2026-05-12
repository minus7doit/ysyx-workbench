// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+1787,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1788,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1789,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1790,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1791,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1792,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1793,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1794,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1795,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1796,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1797,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1798,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1799,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1800,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1801,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1802,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1803,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1804,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1805,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1806,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+1787,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1788,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1789,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1790,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1791,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1792,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1793,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1794,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1795,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1796,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1797,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1798,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1799,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1800,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1801,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1802,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1803,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1804,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1805,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1806,"externalPins_uart_tx", false,-1);
    tracep->declBit(c+712,"dram_sel0", false,-1);
    tracep->declBit(c+713,"dram_sel1", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+714,"spi_sck", false,-1);
    tracep->declBus(c+715,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1556,"spi_mosi", false,-1);
    tracep->declBit(c+1807,"spi_miso", false,-1);
    tracep->declBit(c+1805,"uart_rx", false,-1);
    tracep->declBit(c+1806,"uart_tx", false,-1);
    tracep->declBit(c+1423,"psram_sck", false,-1);
    tracep->declBit(c+1424,"psram_ce_n", false,-1);
    tracep->declBus(c+1808,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1809,"sdram_clk", false,-1);
    tracep->declBit(c+1557,"sdram_cke", false,-1);
    tracep->declBit(c+716,"sdram_cs", false,-1);
    tracep->declBit(c+717,"sdram_ras", false,-1);
    tracep->declBit(c+718,"sdram_cas", false,-1);
    tracep->declBit(c+719,"sdram_we", false,-1);
    tracep->declBus(c+1124,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1558,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1559,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1774,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1787,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1788,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1789,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1790,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1791,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1792,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1793,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1794,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1795,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1796,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1797,"ps2_clk", false,-1);
    tracep->declBit(c+1798,"ps2_data", false,-1);
    tracep->declBus(c+1799,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1800,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1801,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1802,"vga_hsync", false,-1);
    tracep->declBit(c+1803,"vga_vsync", false,-1);
    tracep->declBit(c+1804,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+1247,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+9,"in_psel", false,-1);
    tracep->declBit(c+10,"in_penable", false,-1);
    tracep->declBus(c+1860,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1248,"in_pwrite", false,-1);
    tracep->declBus(c+1249,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1250,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+720,"in_pready", false,-1);
    tracep->declBus(c+721,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+722,"in_pslverr", false,-1);
    tracep->declBus(c+1425,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1426,"out_psel", false,-1);
    tracep->declBit(c+723,"out_penable", false,-1);
    tracep->declBus(c+1106,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1427,"out_pwrite", false,-1);
    tracep->declBus(c+1428,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1107,"out_pready", false,-1);
    tracep->declBus(c+1810,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1108,"out_pslverr", false,-1);
    tracep->declBus(c+1861,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1862,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1863,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1864,"SCALE", false,-1, 31,0);
    tracep->declBus(c+1865,"EXTRA_SCALED", false,-1, 31,0);
    tracep->declBus(c+1866,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1860,"S_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1867,"S_WAIT", false,-1, 2,0);
    tracep->declBus(c+1868,"S_RESP", false,-1, 2,0);
    tracep->declBus(c+724,"state", false,-1, 2,0);
    tracep->declBus(c+1811,"next_state", false,-1, 2,0);
    tracep->declBus(c+725,"extra_accum", false,-1, 31,0);
    tracep->declBus(c+726,"wait_cnt", false,-1, 31,0);
    tracep->declBus(c+727,"r_in_paddr", false,-1, 31,0);
    tracep->declBit(c+1869,"r_in_psel", false,-1);
    tracep->declBit(c+1870,"r_in_penable", false,-1);
    tracep->declBus(c+728,"r_in_pprot", false,-1, 2,0);
    tracep->declBit(c+729,"r_in_pwrite", false,-1);
    tracep->declBus(c+730,"r_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+731,"r_in_pstrb", false,-1, 3,0);
    tracep->declBus(c+721,"r_out_prdata", false,-1, 31,0);
    tracep->declBit(c+722,"r_out_pslverr", false,-1);
    tracep->declBit(c+1251,"w_tx_start", false,-1);
    tracep->declBit(c+1430,"w_dn_done", false,-1);
    tracep->declBus(c+732,"w_extra_accum_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1426,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+723,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1427,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1425,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1107,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1108,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1810,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1431,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1432,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1427,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1433,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1106,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1872,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1812,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1434,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1435,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1427,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1436,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1106,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+733,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1872,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1813,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1437,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1438,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1427,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1436,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1106,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1439,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1440,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1109,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1441,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1110,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1427,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1425,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1872,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1252,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1442,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1443,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1427,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1436,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1106,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1444,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1872,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1445,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1446,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1447,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1427,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1433,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1106,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1113,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1114,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1448,"sel_0", false,-1);
    tracep->declBit(c+1449,"sel_1", false,-1);
    tracep->declBit(c+1450,"sel_2", false,-1);
    tracep->declBit(c+1451,"sel_3", false,-1);
    tracep->declBit(c+1452,"sel_4", false,-1);
    tracep->declBit(c+1453,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+11,"auto_in_awready", false,-1);
    tracep->declBit(c+12,"auto_in_awvalid", false,-1);
    tracep->declBus(c+13,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+16,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+11,"auto_in_wready", false,-1);
    tracep->declBit(c+17,"auto_in_wvalid", false,-1);
    tracep->declBus(c+18,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+20,"auto_in_bready", false,-1);
    tracep->declBit(c+1454,"auto_in_bvalid", false,-1);
    tracep->declBus(c+21,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1455,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_in_arready", false,-1);
    tracep->declBit(c+23,"auto_in_arvalid", false,-1);
    tracep->declBus(c+24,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+27,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+28,"auto_in_rready", false,-1);
    tracep->declBit(c+1456,"auto_in_rvalid", false,-1);
    tracep->declBus(c+29,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1814,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+9,"auto_out_psel", false,-1);
    tracep->declBit(c+10,"auto_out_penable", false,-1);
    tracep->declBit(c+1248,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1247,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1249,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1250,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+720,"auto_out_pready", false,-1);
    tracep->declBit(c+722,"auto_out_pslverr", false,-1);
    tracep->declBus(c+721,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+10,"nodeOut_penable", false,-1);
    tracep->declBus(c+30,"state", false,-1, 1,0);
    tracep->declBit(c+22,"accept_read", false,-1);
    tracep->declBit(c+11,"accept_write", false,-1);
    tracep->declBit(c+31,"is_write_r", false,-1);
    tracep->declBit(c+1248,"is_write", false,-1);
    tracep->declBus(c+29,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+21,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+32,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+33,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+34,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+35,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+734,"resp", false,-1, 1,0);
    tracep->declBus(c+36,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1455,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1456,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+37,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1454,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+38,"auto_in_awready", false,-1);
    tracep->declBit(c+1625,"auto_in_awvalid", false,-1);
    tracep->declBus(c+39,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_in_wready", false,-1);
    tracep->declBit(c+1626,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1631,"auto_in_wlast", false,-1);
    tracep->declBit(c+518,"auto_in_bready", false,-1);
    tracep->declBit(c+43,"auto_in_bvalid", false,-1);
    tracep->declBus(c+44,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+45,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arready", false,-1);
    tracep->declBit(c+1632,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1633,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1635,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+519,"auto_in_rready", false,-1);
    tracep->declBit(c+48,"auto_in_rvalid", false,-1);
    tracep->declBus(c+49,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+51,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_rlast", false,-1);
    tracep->declBit(c+11,"auto_out_awready", false,-1);
    tracep->declBit(c+12,"auto_out_awvalid", false,-1);
    tracep->declBus(c+13,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+14,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+15,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+16,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+11,"auto_out_wready", false,-1);
    tracep->declBit(c+17,"auto_out_wvalid", false,-1);
    tracep->declBus(c+18,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+20,"auto_out_bready", false,-1);
    tracep->declBit(c+1454,"auto_out_bvalid", false,-1);
    tracep->declBus(c+21,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1455,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+22,"auto_out_arready", false,-1);
    tracep->declBit(c+23,"auto_out_arvalid", false,-1);
    tracep->declBus(c+24,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+27,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+28,"auto_out_rready", false,-1);
    tracep->declBit(c+1456,"auto_out_rvalid", false,-1);
    tracep->declBus(c+29,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1814,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1455,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+20,"io_enq_ready", false,-1);
    tracep->declBit(c+1454,"io_enq_valid", false,-1);
    tracep->declBus(c+21,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1455,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+518,"io_deq_ready", false,-1);
    tracep->declBit(c+43,"io_deq_valid", false,-1);
    tracep->declBus(c+44,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+45,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+53,"wrap", false,-1);
    tracep->declBit(c+54,"wrap_1", false,-1);
    tracep->declBit(c+55,"maybe_full", false,-1);
    tracep->declBit(c+56,"ptr_match", false,-1);
    tracep->declBit(c+57,"empty", false,-1);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1457,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+54,"R0_addr", false,-1);
    tracep->declBit(c+1871,"R0_en", false,-1);
    tracep->declBit(c+1785,"R0_clk", false,-1);
    tracep->declBus(c+59,"R0_data", false,-1, 5,0);
    tracep->declBit(c+53,"W0_addr", false,-1);
    tracep->declBit(c+1457,"W0_en", false,-1);
    tracep->declBit(c+1785,"W0_clk", false,-1);
    tracep->declBus(c+1815,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+60+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+62,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+28,"io_enq_ready", false,-1);
    tracep->declBit(c+1456,"io_enq_valid", false,-1);
    tracep->declBus(c+29,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1814,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1455,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+519,"io_deq_ready", false,-1);
    tracep->declBit(c+48,"io_deq_valid", false,-1);
    tracep->declBus(c+49,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+50,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+51,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+52,"io_deq_bits_last", false,-1);
    tracep->declBit(c+63,"wrap", false,-1);
    tracep->declBit(c+64,"wrap_1", false,-1);
    tracep->declBit(c+65,"maybe_full", false,-1);
    tracep->declBit(c+66,"ptr_match", false,-1);
    tracep->declBit(c+67,"empty", false,-1);
    tracep->declBit(c+68,"full", false,-1);
    tracep->declBit(c+1458,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+64,"R0_addr", false,-1);
    tracep->declBit(c+1871,"R0_en", false,-1);
    tracep->declBit(c+1785,"R0_clk", false,-1);
    tracep->declQuad(c+69,"R0_data", false,-1, 38,0);
    tracep->declBit(c+63,"W0_addr", false,-1);
    tracep->declBit(c+1458,"W0_en", false,-1);
    tracep->declBit(c+1785,"W0_clk", false,-1);
    tracep->declQuad(c+1816,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+71+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+75,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+46,"io_enq_ready", false,-1);
    tracep->declBit(c+1632,"io_enq_valid", false,-1);
    tracep->declBus(c+47,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1633,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1634,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1635,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+23,"io_deq_valid", false,-1);
    tracep->declBus(c+24,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+25,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+26,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+27,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+76,"wrap", false,-1);
    tracep->declBit(c+77,"wrap_1", false,-1);
    tracep->declBit(c+78,"maybe_full", false,-1);
    tracep->declBit(c+79,"ptr_match", false,-1);
    tracep->declBit(c+80,"empty", false,-1);
    tracep->declBit(c+81,"full", false,-1);
    tracep->declBit(c+1636,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+77,"R0_addr", false,-1);
    tracep->declBit(c+1871,"R0_en", false,-1);
    tracep->declBit(c+1785,"R0_clk", false,-1);
    tracep->declQuad(c+82,"R0_data", false,-1, 46,0);
    tracep->declBit(c+76,"W0_addr", false,-1);
    tracep->declBit(c+1636,"W0_en", false,-1);
    tracep->declBit(c+1785,"W0_clk", false,-1);
    tracep->declQuad(c+520,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+84+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+88,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+38,"io_enq_ready", false,-1);
    tracep->declBit(c+1625,"io_enq_valid", false,-1);
    tracep->declBus(c+39,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1606,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+40,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+12,"io_deq_valid", false,-1);
    tracep->declBus(c+13,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+14,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+15,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+16,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+89,"wrap", false,-1);
    tracep->declBit(c+90,"wrap_1", false,-1);
    tracep->declBit(c+91,"maybe_full", false,-1);
    tracep->declBit(c+92,"ptr_match", false,-1);
    tracep->declBit(c+93,"empty", false,-1);
    tracep->declBit(c+94,"full", false,-1);
    tracep->declBit(c+1637,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+90,"R0_addr", false,-1);
    tracep->declBit(c+1871,"R0_en", false,-1);
    tracep->declBit(c+1785,"R0_clk", false,-1);
    tracep->declQuad(c+95,"R0_data", false,-1, 46,0);
    tracep->declBit(c+89,"W0_addr", false,-1);
    tracep->declBit(c+1637,"W0_en", false,-1);
    tracep->declBit(c+1785,"W0_clk", false,-1);
    tracep->declQuad(c+1818,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+97+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+101,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+42,"io_enq_ready", false,-1);
    tracep->declBit(c+1626,"io_enq_valid", false,-1);
    tracep->declBus(c+1607,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1608,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1631,"io_enq_bits_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+17,"io_deq_valid", false,-1);
    tracep->declBus(c+18,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+19,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+102,"wrap", false,-1);
    tracep->declBit(c+103,"wrap_1", false,-1);
    tracep->declBit(c+104,"maybe_full", false,-1);
    tracep->declBit(c+105,"ptr_match", false,-1);
    tracep->declBit(c+106,"empty", false,-1);
    tracep->declBit(c+107,"full", false,-1);
    tracep->declBit(c+1638,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+103,"R0_addr", false,-1);
    tracep->declBit(c+1871,"R0_en", false,-1);
    tracep->declBit(c+1785,"R0_clk", false,-1);
    tracep->declQuad(c+108,"R0_data", false,-1, 35,0);
    tracep->declBit(c+102,"W0_addr", false,-1);
    tracep->declBit(c+1638,"W0_en", false,-1);
    tracep->declBit(c+1785,"W0_clk", false,-1);
    tracep->declQuad(c+1609,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+110+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+114,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1873,"R", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+735,"in_arready", false,-1);
    tracep->declBit(c+1639,"in_arvalid", false,-1);
    tracep->declBus(c+1874,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1640,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1297,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1820,"in_rready", false,-1);
    tracep->declBit(c+1459,"in_rvalid", false,-1);
    tracep->declBus(c+1115,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1116,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1117,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1460,"in_rlast", false,-1);
    tracep->declBit(c+736,"in_awready", false,-1);
    tracep->declBit(c+1417,"in_awvalid", false,-1);
    tracep->declBus(c+1874,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1298,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1875,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+737,"in_wready", false,-1);
    tracep->declBit(c+1627,"in_wvalid", false,-1);
    tracep->declBus(c+1299,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"in_wlast", false,-1);
    tracep->declBit(c+1643,"in_bready", false,-1);
    tracep->declBit(c+738,"in_bvalid", false,-1);
    tracep->declBus(c+739,"in_bid", false,-1, 3,0);
    tracep->declBus(c+740,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1560,"out_arready", false,-1);
    tracep->declBit(c+741,"out_arvalid", false,-1);
    tracep->declBus(c+742,"out_arid", false,-1, 3,0);
    tracep->declBus(c+743,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+744,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+745,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+746,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+747,"out_rready", false,-1);
    tracep->declBit(c+748,"out_rvalid", false,-1);
    tracep->declBus(c+749,"out_rid", false,-1, 3,0);
    tracep->declBus(c+750,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1877,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+751,"out_rlast", false,-1);
    tracep->declBit(c+1561,"out_awready", false,-1);
    tracep->declBit(c+752,"out_awvalid", false,-1);
    tracep->declBus(c+753,"out_awid", false,-1, 3,0);
    tracep->declBus(c+754,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+755,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+756,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+757,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1562,"out_wready", false,-1);
    tracep->declBit(c+758,"out_wvalid", false,-1);
    tracep->declBus(c+759,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+760,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+761,"out_wlast", false,-1);
    tracep->declBit(c+762,"out_bready", false,-1);
    tracep->declBit(c+763,"out_bvalid", false,-1);
    tracep->declBus(c+749,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1877,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1878,"FIFO_DW", false,-1, 31,0);
    tracep->declQuad(c+764,"rd_cyc_cnt", false,-1, 63,0);
    tracep->declQuad(c+766,"rd_start_cyc", false,-1, 63,0);
    tracep->declBus(c+742,"arid_q", false,-1, 3,0);
    tracep->declBus(c+743,"araddr_q", false,-1, 31,0);
    tracep->declBus(c+744,"arlen_q", false,-1, 7,0);
    tracep->declBus(c+745,"arsize_q", false,-1, 2,0);
    tracep->declBus(c+746,"arburst_q", false,-1, 1,0);
    tracep->declBit(c+768,"empty", false,-1);
    tracep->declBit(c+769,"full", false,-1);
    tracep->declArray(c+1118,"fifo_data_dly", false,-1, 102,0);
    tracep->declBit(c+770,"rd_ar_busy", false,-1);
    tracep->declBit(c+771,"rd_ar_sent", false,-1);
    tracep->declBit(c+1644,"in_ar_fire", false,-1);
    tracep->declBit(c+1645,"in_r_fire", false,-1);
    tracep->declBit(c+1125,"out_ar_fire", false,-1);
    tracep->declBit(c+772,"out_r_fire", false,-1);
    tracep->declQuad(c+773,"rd_end_cyc", false,-1, 63,0);
    tracep->declQuad(c+775,"wr_cyc_cnt", false,-1, 63,0);
    tracep->declQuad(c+777,"wr_start_cyc", false,-1, 63,0);
    tracep->declQuad(c+779,"wr_end_cyc", false,-1, 63,0);
    tracep->declBus(c+753,"awid_q", false,-1, 3,0);
    tracep->declBus(c+754,"awaddr_q", false,-1, 31,0);
    tracep->declBus(c+755,"awlen_q", false,-1, 7,0);
    tracep->declBus(c+756,"awsize_q", false,-1, 2,0);
    tracep->declBus(c+757,"awburst_q", false,-1, 1,0);
    tracep->declBus(c+759,"wdata_q", false,-1, 31,0);
    tracep->declBus(c+760,"wstrb_q", false,-1, 3,0);
    tracep->declBit(c+761,"wlast_q", false,-1);
    tracep->declBit(c+781,"bready_q", false,-1);
    tracep->declBit(c+782,"bvalid_q", false,-1);
    tracep->declBus(c+739,"bid_q", false,-1, 3,0);
    tracep->declBus(c+740,"bresp_q", false,-1, 1,0);
    tracep->declBit(c+783,"wr_aw_busy", false,-1);
    tracep->declBit(c+784,"wr_w_busy", false,-1);
    tracep->declBit(c+785,"wr_aw_sent", false,-1);
    tracep->declBit(c+786,"wr_w_sent", false,-1);
    tracep->declBit(c+1646,"in_aw_fire", false,-1);
    tracep->declBit(c+1647,"in_w_fire", false,-1);
    tracep->declBit(c+1648,"in_b_fire", false,-1);
    tracep->declBit(c+1126,"out_aw_fire", false,-1);
    tracep->declBit(c+1127,"out_w_fire", false,-1);
    tracep->declBit(c+787,"out_b_fire", false,-1);
    tracep->pushNamePrefix("rdata_fifo ");
    tracep->declBus(c+1878,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1863,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declArray(c+788,"i_data", false,-1, 102,0);
    tracep->declBit(c+772,"wen", false,-1);
    tracep->declBit(c+1645,"ren", false,-1);
    tracep->declArray(c+1118,"o_data", false,-1, 102,0);
    tracep->declBit(c+768,"o_empty", false,-1);
    tracep->declBit(c+769,"o_full", false,-1);
    tracep->declBus(c+1879,"PTR_W", false,-1, 31,0);
    tracep->declBus(c+1880,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+115+i*4,"fifo", true,(i+0), 102,0);
    }
    tracep->declBus(c+792,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+793,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+794,"count", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+147,"auto_in_awready", false,-1);
    tracep->declBit(c+1649,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1874,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1298,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1875,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+148,"auto_in_wready", false,-1);
    tracep->declBit(c+1650,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"auto_in_wlast", false,-1);
    tracep->declBit(c+1821,"auto_in_bready", false,-1);
    tracep->declBit(c+149,"auto_in_bvalid", false,-1);
    tracep->declBus(c+150,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+152,"auto_in_arready", false,-1);
    tracep->declBit(c+1651,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1874,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1640,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1297,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1652,"auto_in_rready", false,-1);
    tracep->declBit(c+153,"auto_in_rvalid", false,-1);
    tracep->declBus(c+154,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+157,"auto_in_rlast", false,-1);
    tracep->declBit(c+1653,"auto_out_awready", false,-1);
    tracep->declBit(c+1654,"auto_out_awvalid", false,-1);
    tracep->declBus(c+39,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+158,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1655,"auto_out_wready", false,-1);
    tracep->declBit(c+1656,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1631,"auto_out_wlast", false,-1);
    tracep->declBit(c+1657,"auto_out_bready", false,-1);
    tracep->declBit(c+159,"auto_out_bvalid", false,-1);
    tracep->declBus(c+150,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+161,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1658,"auto_out_arready", false,-1);
    tracep->declBit(c+1659,"auto_out_arvalid", false,-1);
    tracep->declBus(c+47,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1633,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1635,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1611,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1652,"auto_out_rready", false,-1);
    tracep->declBit(c+153,"auto_out_rvalid", false,-1);
    tracep->declBus(c+154,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+163,"auto_out_rlast", false,-1);
    tracep->declBit(c+1656,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+164,"w_idle", false,-1);
    tracep->declBit(c+1660,"in_awready", false,-1);
    tracep->declBit(c+165,"busy", false,-1);
    tracep->declBus(c+166,"r_addr", false,-1, 31,0);
    tracep->declBus(c+167,"r_len", false,-1, 7,0);
    tracep->declBus(c+1612,"len", false,-1, 7,0);
    tracep->declBus(c+1661,"addr", false,-1, 31,0);
    tracep->declBit(c+168,"busy_1", false,-1);
    tracep->declBus(c+169,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+170,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+171,"len_1", false,-1, 7,0);
    tracep->declBus(c+1613,"addr_1", false,-1, 31,0);
    tracep->declBit(c+172,"wbeats_latched", false,-1);
    tracep->declBit(c+1654,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1662,"wbeats_valid", false,-1);
    tracep->declBus(c+173,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1663,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1631,"w_last", false,-1);
    tracep->declBit(c+1657,"nodeOut_bready", false,-1);
    tracep->declBus(c+174,"error_0", false,-1, 1,0);
    tracep->declBus(c+175,"error_1", false,-1, 1,0);
    tracep->declBus(c+176,"error_2", false,-1, 1,0);
    tracep->declBus(c+177,"error_3", false,-1, 1,0);
    tracep->declBus(c+178,"error_4", false,-1, 1,0);
    tracep->declBus(c+179,"error_5", false,-1, 1,0);
    tracep->declBus(c+180,"error_6", false,-1, 1,0);
    tracep->declBus(c+181,"error_7", false,-1, 1,0);
    tracep->declBus(c+182,"error_8", false,-1, 1,0);
    tracep->declBus(c+183,"error_9", false,-1, 1,0);
    tracep->declBus(c+184,"error_10", false,-1, 1,0);
    tracep->declBus(c+185,"error_11", false,-1, 1,0);
    tracep->declBus(c+186,"error_12", false,-1, 1,0);
    tracep->declBus(c+187,"error_13", false,-1, 1,0);
    tracep->declBus(c+188,"error_14", false,-1, 1,0);
    tracep->declBus(c+189,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+1651,"io_enq_valid", false,-1);
    tracep->declBus(c+1874,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1640,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1297,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1641,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1642,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1664,"io_deq_ready", false,-1);
    tracep->declBit(c+1659,"io_deq_valid", false,-1);
    tracep->declBus(c+47,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1665,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1614,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1634,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1635,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+190,"ram", false,-1, 48,0);
    tracep->declBit(c+192,"full", false,-1);
    tracep->declBit(c+1659,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1666,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1649,"io_enq_valid", false,-1);
    tracep->declBus(c+1874,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1298,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1875,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1867,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1876,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1667,"io_deq_ready", false,-1);
    tracep->declBit(c+1668,"io_deq_valid", false,-1);
    tracep->declBus(c+39,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1615,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+193,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+40,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+41,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+194,"ram", false,-1, 48,0);
    tracep->declBit(c+196,"full", false,-1);
    tracep->declBit(c+1668,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1669,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+1650,"io_enq_valid", false,-1);
    tracep->declBus(c+1299,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1300,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1871,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1670,"io_deq_ready", false,-1);
    tracep->declBit(c+1671,"io_deq_valid", false,-1);
    tracep->declBus(c+1607,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1608,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+197,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+198,"ram", false,-1, 36,0);
    tracep->declBit(c+200,"full", false,-1);
    tracep->declBit(c+1671,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1672,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1673,"auto_in_awready", false,-1);
    tracep->declBit(c+1674,"auto_in_awvalid", false,-1);
    tracep->declBus(c+39,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1616,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1675,"auto_in_wready", false,-1);
    tracep->declBit(c+1628,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1676,"auto_in_bready", false,-1);
    tracep->declBit(c+201,"auto_in_bvalid", false,-1);
    tracep->declBus(c+202,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+203,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1677,"auto_in_arready", false,-1);
    tracep->declBit(c+1678,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1679,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1680,"auto_in_rready", false,-1);
    tracep->declBit(c+204,"auto_in_rvalid", false,-1);
    tracep->declBus(c+205,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+207,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1677,"nodeIn_arready", false,-1);
    tracep->declBit(c+1673,"nodeIn_awready", false,-1);
    tracep->declBit(c+1617,"w_sel0", false,-1);
    tracep->declBit(c+201,"w_full", false,-1);
    tracep->declBus(c+202,"w_id", false,-1, 3,0);
    tracep->declBit(c+208,"r_sel1", false,-1);
    tracep->declBit(c+209,"w_sel1", false,-1);
    tracep->declBit(c+204,"r_full", false,-1);
    tracep->declBus(c+205,"r_id", false,-1, 3,0);
    tracep->declBit(c+1681,"ren", false,-1);
    tracep->declBit(c+210,"rdata_REG", false,-1);
    tracep->declBus(c+211,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+212,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+213,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+214,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1682,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1681,"R0_en", false,-1);
    tracep->declBit(c+1785,"R0_clk", false,-1);
    tracep->declBus(c+215,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1618,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1683,"W0_en", false,-1);
    tracep->declBit(c+1785,"W0_clk", false,-1);
    tracep->declBus(c+1607,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1608,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1684,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1685,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1874,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1298,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1875,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1686,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1687,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+596,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1461,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1462,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1822,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1688,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1689,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1874,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1640,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1297,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1301,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1463,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1464,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1823,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1824,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1465,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+736,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1417,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1874,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1298,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1875,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+737,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1627,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1643,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+738,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+739,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+740,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+735,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1639,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1874,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1640,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1297,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1820,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1459,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1115,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1116,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1117,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1460,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+147,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1649,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1874,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1298,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1875,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+148,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1650,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1821,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+149,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+152,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1651,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1874,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1640,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1297,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1652,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+153,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+154,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+157,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1461,"in_0_bvalid", false,-1);
    tracep->declBit(c+1463,"in_0_rvalid", false,-1);
    tracep->declBit(c+1690,"in_0_wready", false,-1);
    tracep->declBit(c+1691,"in_0_awready", false,-1);
    tracep->declBit(c+1825,"in_0_arready", false,-1);
    tracep->declBit(c+1684,"anonIn_awready", false,-1);
    tracep->declBit(c+1688,"anonIn_arready", false,-1);
    tracep->declBit(c+1692,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1693,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1302,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1303,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1881,"arSel", false,-1, 15,0);
    tracep->declBus(c+1881,"awSel", false,-1, 15,0);
    tracep->declBus(c+1466,"rSel", false,-1, 15,0);
    tracep->declBus(c+1467,"bSel", false,-1, 15,0);
    tracep->declBus(c+216,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+217,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+218,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+219,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+220,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1882,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+221,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1883,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+222,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1884,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+223,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1885,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+224,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1886,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+225,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1887,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+226,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1888,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+227,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1889,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+228,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1890,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+229,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1891,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+230,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1892,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+231,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1893,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+232,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1894,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+233,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1895,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+234,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1896,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+235,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1897,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+236,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1898,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+237,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1899,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+238,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1900,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+239,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1901,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+240,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1902,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+241,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1903,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+242,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1904,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+243,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1905,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+244,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1906,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+245,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1907,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+246,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1908,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+247,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1909,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+248,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1910,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+249,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1911,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1694,"in_0_arvalid", false,-1);
    tracep->declBit(c+250,"latched", false,-1);
    tracep->declBit(c+1695,"in_0_awvalid", false,-1);
    tracep->declBit(c+1696,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1697,"in_0_wvalid", false,-1);
    tracep->declBit(c+251,"idle_2", false,-1);
    tracep->declBit(c+1468,"anyValid", false,-1);
    tracep->declBus(c+1469,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+252,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1470,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1471,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1472,"prefixOR_1", false,-1);
    tracep->declBit(c+1473,"winner_2_1", false,-1);
    tracep->declBit(c+253,"state_2_0", false,-1);
    tracep->declBit(c+254,"state_2_1", false,-1);
    tracep->declBit(c+1474,"muxState_2_0", false,-1);
    tracep->declBit(c+1475,"muxState_2_1", false,-1);
    tracep->declBit(c+255,"idle_3", false,-1);
    tracep->declBit(c+1476,"anyValid_1", false,-1);
    tracep->declBus(c+1477,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+256,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1478,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1479,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1480,"winner_3_0", false,-1);
    tracep->declBit(c+1481,"winner_3_1", false,-1);
    tracep->declBit(c+257,"state_3_0", false,-1);
    tracep->declBit(c+258,"state_3_1", false,-1);
    tracep->declBit(c+1482,"muxState_3_0", false,-1);
    tracep->declBit(c+1483,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+1696,"io_enq_valid", false,-1);
    tracep->declBus(c+1304,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1698,"io_deq_ready", false,-1);
    tracep->declBit(c+1699,"io_deq_valid", false,-1);
    tracep->declBus(c+1619,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+260,"wrap", false,-1);
    tracep->declBit(c+261,"wrap_1", false,-1);
    tracep->declBit(c+262,"maybe_full", false,-1);
    tracep->declBit(c+263,"ptr_match", false,-1);
    tracep->declBit(c+264,"empty", false,-1);
    tracep->declBit(c+265,"full", false,-1);
    tracep->declBit(c+1699,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1700,"do_deq", false,-1);
    tracep->declBit(c+1701,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+261,"R0_addr", false,-1);
    tracep->declBit(c+1871,"R0_en", false,-1);
    tracep->declBit(c+1785,"R0_clk", false,-1);
    tracep->declBus(c+266,"R0_data", false,-1, 1,0);
    tracep->declBit(c+260,"W0_addr", false,-1);
    tracep->declBit(c+1701,"W0_en", false,-1);
    tracep->declBit(c+1785,"W0_clk", false,-1);
    tracep->declBus(c+1304,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+267+i*1,"Memory", true,(i+0), 1,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1702,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1703,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1655,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1656,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1631,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1657,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+159,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1704,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1705,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1633,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1635,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1652,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+153,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+154,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+163,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1673,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1674,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1616,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1675,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1628,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1676,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+201,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+202,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+203,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1677,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1678,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1679,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1680,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+204,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+205,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+206,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+207,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1629,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1630,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+269,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1706,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1707,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+522,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+270,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+271,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+272,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+38,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1625,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+39,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1626,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1631,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+518,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+44,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+45,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1632,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1633,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1635,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+519,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+48,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+49,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+51,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+159,"in_0_bvalid", false,-1);
    tracep->declBit(c+153,"in_0_rvalid", false,-1);
    tracep->declBit(c+1708,"in_0_wready", false,-1);
    tracep->declBit(c+1709,"in_0_awready", false,-1);
    tracep->declBit(c+1704,"in_0_arready", false,-1);
    tracep->declBit(c+1702,"anonIn_awready", false,-1);
    tracep->declBit(c+1710,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1711,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1712,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1620,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1621,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1622,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+273,"arSel", false,-1, 15,0);
    tracep->declBus(c+274,"awSel", false,-1, 15,0);
    tracep->declBus(c+275,"rSel", false,-1, 15,0);
    tracep->declBus(c+276,"bSel", false,-1, 15,0);
    tracep->declBit(c+277,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+278,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+279,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+280,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+281,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+282,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+283,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+284,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+285,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+286,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+287,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+288,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+289,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+290,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+291,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+292,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+293,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+294,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+295,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+296,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+297,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+298,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+299,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+300,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+301,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+302,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+303,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+304,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+305,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+306,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+307,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+308,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+309,"latched", false,-1);
    tracep->declBit(c+1713,"in_0_awvalid", false,-1);
    tracep->declBit(c+1714,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1715,"in_0_wvalid", false,-1);
    tracep->declBit(c+310,"idle_3", false,-1);
    tracep->declBit(c+311,"anyValid", false,-1);
    tracep->declBus(c+312,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+313,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+314,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+315,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+316,"prefixOR_1", false,-1);
    tracep->declBit(c+317,"winner_3_1", false,-1);
    tracep->declBit(c+318,"winner_3_2", false,-1);
    tracep->declBit(c+319,"state_3_0", false,-1);
    tracep->declBit(c+320,"state_3_1", false,-1);
    tracep->declBit(c+321,"state_3_2", false,-1);
    tracep->declBit(c+322,"muxState_3_0", false,-1);
    tracep->declBit(c+323,"muxState_3_1", false,-1);
    tracep->declBit(c+324,"muxState_3_2", false,-1);
    tracep->declBit(c+325,"idle_4", false,-1);
    tracep->declBit(c+326,"anyValid_1", false,-1);
    tracep->declBus(c+327,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+328,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+329,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+330,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+331,"winner_4_0", false,-1);
    tracep->declBit(c+332,"winner_4_2", false,-1);
    tracep->declBit(c+333,"state_4_0", false,-1);
    tracep->declBit(c+334,"state_4_2", false,-1);
    tracep->declBit(c+335,"muxState_4_0", false,-1);
    tracep->declBit(c+336,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+1714,"io_enq_valid", false,-1);
    tracep->declBus(c+1623,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1716,"io_deq_ready", false,-1);
    tracep->declBit(c+1717,"io_deq_valid", false,-1);
    tracep->declBus(c+1624,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+338,"wrap", false,-1);
    tracep->declBit(c+339,"wrap_1", false,-1);
    tracep->declBit(c+340,"maybe_full", false,-1);
    tracep->declBit(c+341,"ptr_match", false,-1);
    tracep->declBit(c+342,"empty", false,-1);
    tracep->declBit(c+343,"full", false,-1);
    tracep->declBit(c+1717,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1718,"do_deq", false,-1);
    tracep->declBit(c+1719,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+339,"R0_addr", false,-1);
    tracep->declBit(c+1871,"R0_en", false,-1);
    tracep->declBit(c+1785,"R0_clk", false,-1);
    tracep->declBus(c+344,"R0_data", false,-1, 2,0);
    tracep->declBit(c+338,"W0_addr", false,-1);
    tracep->declBit(c+1719,"W0_en", false,-1);
    tracep->declBit(c+1785,"W0_clk", false,-1);
    tracep->declBus(c+1623,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+345+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1653,"auto_in_awready", false,-1);
    tracep->declBit(c+1654,"auto_in_awvalid", false,-1);
    tracep->declBus(c+39,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+158,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1655,"auto_in_wready", false,-1);
    tracep->declBit(c+1656,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1631,"auto_in_wlast", false,-1);
    tracep->declBit(c+1657,"auto_in_bready", false,-1);
    tracep->declBit(c+159,"auto_in_bvalid", false,-1);
    tracep->declBus(c+150,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+161,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1658,"auto_in_arready", false,-1);
    tracep->declBit(c+1659,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1633,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1635,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1611,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1652,"auto_in_rready", false,-1);
    tracep->declBit(c+153,"auto_in_rvalid", false,-1);
    tracep->declBus(c+154,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+163,"auto_in_rlast", false,-1);
    tracep->declBit(c+1702,"auto_out_awready", false,-1);
    tracep->declBit(c+1703,"auto_out_awvalid", false,-1);
    tracep->declBus(c+39,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1606,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+40,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+41,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1655,"auto_out_wready", false,-1);
    tracep->declBit(c+1656,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1607,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1608,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1631,"auto_out_wlast", false,-1);
    tracep->declBit(c+1657,"auto_out_bready", false,-1);
    tracep->declBit(c+159,"auto_out_bvalid", false,-1);
    tracep->declBus(c+150,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1704,"auto_out_arready", false,-1);
    tracep->declBit(c+1705,"auto_out_arvalid", false,-1);
    tracep->declBus(c+47,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1633,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1634,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1635,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1652,"auto_out_rready", false,-1);
    tracep->declBit(c+153,"auto_out_rvalid", false,-1);
    tracep->declBus(c+154,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+163,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+523,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+524,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+525,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+526,"io_deq_ready", false,-1);
    tracep->declBit(c+352,"io_deq_valid", false,-1);
    tracep->declBit(c+353,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"full", false,-1);
    tracep->declBit(c+353,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+354,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+355,"io_enq_ready", false,-1);
    tracep->declBit(c+527,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+528,"io_deq_ready", false,-1);
    tracep->declBit(c+356,"io_deq_valid", false,-1);
    tracep->declBit(c+357,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBit(c+357,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+358,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+359,"io_enq_ready", false,-1);
    tracep->declBit(c+529,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+530,"io_deq_ready", false,-1);
    tracep->declBit(c+360,"io_deq_valid", false,-1);
    tracep->declBit(c+361,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+360,"full", false,-1);
    tracep->declBit(c+361,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+362,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+363,"io_enq_ready", false,-1);
    tracep->declBit(c+531,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+532,"io_deq_ready", false,-1);
    tracep->declBit(c+364,"io_deq_valid", false,-1);
    tracep->declBit(c+365,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+364,"full", false,-1);
    tracep->declBit(c+365,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+366,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
    tracep->declBit(c+533,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+534,"io_deq_ready", false,-1);
    tracep->declBit(c+368,"io_deq_valid", false,-1);
    tracep->declBit(c+369,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+368,"full", false,-1);
    tracep->declBit(c+369,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+370,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+371,"io_enq_ready", false,-1);
    tracep->declBit(c+535,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+536,"io_deq_ready", false,-1);
    tracep->declBit(c+372,"io_deq_valid", false,-1);
    tracep->declBit(c+373,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+373,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+374,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+375,"io_enq_ready", false,-1);
    tracep->declBit(c+537,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+538,"io_deq_ready", false,-1);
    tracep->declBit(c+376,"io_deq_valid", false,-1);
    tracep->declBit(c+377,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"full", false,-1);
    tracep->declBit(c+377,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+378,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+379,"io_enq_ready", false,-1);
    tracep->declBit(c+539,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+540,"io_deq_ready", false,-1);
    tracep->declBit(c+380,"io_deq_valid", false,-1);
    tracep->declBit(c+381,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"full", false,-1);
    tracep->declBit(c+381,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+382,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+383,"io_enq_ready", false,-1);
    tracep->declBit(c+541,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+542,"io_deq_ready", false,-1);
    tracep->declBit(c+384,"io_deq_valid", false,-1);
    tracep->declBit(c+385,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+384,"full", false,-1);
    tracep->declBit(c+385,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+386,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+387,"io_enq_ready", false,-1);
    tracep->declBit(c+543,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+544,"io_deq_ready", false,-1);
    tracep->declBit(c+388,"io_deq_valid", false,-1);
    tracep->declBit(c+389,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+388,"full", false,-1);
    tracep->declBit(c+389,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+390,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+391,"io_enq_ready", false,-1);
    tracep->declBit(c+545,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+546,"io_deq_ready", false,-1);
    tracep->declBit(c+392,"io_deq_valid", false,-1);
    tracep->declBit(c+393,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+392,"full", false,-1);
    tracep->declBit(c+393,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+394,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+395,"io_enq_ready", false,-1);
    tracep->declBit(c+547,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+548,"io_deq_ready", false,-1);
    tracep->declBit(c+396,"io_deq_valid", false,-1);
    tracep->declBit(c+397,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+396,"full", false,-1);
    tracep->declBit(c+397,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+398,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+399,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+550,"io_deq_ready", false,-1);
    tracep->declBit(c+400,"io_deq_valid", false,-1);
    tracep->declBit(c+401,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+400,"full", false,-1);
    tracep->declBit(c+401,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+402,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+403,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+552,"io_deq_ready", false,-1);
    tracep->declBit(c+404,"io_deq_valid", false,-1);
    tracep->declBit(c+405,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+404,"full", false,-1);
    tracep->declBit(c+405,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+406,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+407,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+554,"io_deq_ready", false,-1);
    tracep->declBit(c+408,"io_deq_valid", false,-1);
    tracep->declBit(c+409,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+408,"full", false,-1);
    tracep->declBit(c+409,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+410,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+411,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+556,"io_deq_ready", false,-1);
    tracep->declBit(c+412,"io_deq_valid", false,-1);
    tracep->declBit(c+413,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+412,"full", false,-1);
    tracep->declBit(c+413,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+414,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+415,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+558,"io_deq_ready", false,-1);
    tracep->declBit(c+416,"io_deq_valid", false,-1);
    tracep->declBit(c+417,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+416,"full", false,-1);
    tracep->declBit(c+417,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+418,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+419,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+560,"io_deq_ready", false,-1);
    tracep->declBit(c+420,"io_deq_valid", false,-1);
    tracep->declBit(c+421,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+420,"full", false,-1);
    tracep->declBit(c+421,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+422,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+423,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+562,"io_deq_ready", false,-1);
    tracep->declBit(c+424,"io_deq_valid", false,-1);
    tracep->declBit(c+425,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+424,"full", false,-1);
    tracep->declBit(c+425,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+426,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+427,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+564,"io_deq_ready", false,-1);
    tracep->declBit(c+428,"io_deq_valid", false,-1);
    tracep->declBit(c+429,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+428,"full", false,-1);
    tracep->declBit(c+429,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+430,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+431,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+566,"io_deq_ready", false,-1);
    tracep->declBit(c+432,"io_deq_valid", false,-1);
    tracep->declBit(c+433,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+432,"full", false,-1);
    tracep->declBit(c+433,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+434,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+435,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+568,"io_deq_ready", false,-1);
    tracep->declBit(c+436,"io_deq_valid", false,-1);
    tracep->declBit(c+437,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+436,"full", false,-1);
    tracep->declBit(c+437,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+438,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+439,"io_enq_ready", false,-1);
    tracep->declBit(c+569,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+570,"io_deq_ready", false,-1);
    tracep->declBit(c+440,"io_deq_valid", false,-1);
    tracep->declBit(c+441,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+440,"full", false,-1);
    tracep->declBit(c+441,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+442,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+443,"io_enq_ready", false,-1);
    tracep->declBit(c+571,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+572,"io_deq_ready", false,-1);
    tracep->declBit(c+444,"io_deq_valid", false,-1);
    tracep->declBit(c+445,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+444,"full", false,-1);
    tracep->declBit(c+445,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+446,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+447,"io_enq_ready", false,-1);
    tracep->declBit(c+573,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+574,"io_deq_ready", false,-1);
    tracep->declBit(c+448,"io_deq_valid", false,-1);
    tracep->declBit(c+449,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+448,"full", false,-1);
    tracep->declBit(c+449,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+450,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+451,"io_enq_ready", false,-1);
    tracep->declBit(c+575,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+576,"io_deq_ready", false,-1);
    tracep->declBit(c+452,"io_deq_valid", false,-1);
    tracep->declBit(c+453,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+452,"full", false,-1);
    tracep->declBit(c+453,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+454,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+455,"io_enq_ready", false,-1);
    tracep->declBit(c+577,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+578,"io_deq_ready", false,-1);
    tracep->declBit(c+456,"io_deq_valid", false,-1);
    tracep->declBit(c+457,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+456,"full", false,-1);
    tracep->declBit(c+457,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+458,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+459,"io_enq_ready", false,-1);
    tracep->declBit(c+579,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+580,"io_deq_ready", false,-1);
    tracep->declBit(c+460,"io_deq_valid", false,-1);
    tracep->declBit(c+461,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+460,"full", false,-1);
    tracep->declBit(c+461,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+462,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+463,"io_enq_ready", false,-1);
    tracep->declBit(c+581,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+582,"io_deq_ready", false,-1);
    tracep->declBit(c+464,"io_deq_valid", false,-1);
    tracep->declBit(c+465,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+464,"full", false,-1);
    tracep->declBit(c+465,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+466,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+467,"io_enq_ready", false,-1);
    tracep->declBit(c+583,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+584,"io_deq_ready", false,-1);
    tracep->declBit(c+468,"io_deq_valid", false,-1);
    tracep->declBit(c+469,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+468,"full", false,-1);
    tracep->declBit(c+469,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+470,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+471,"io_enq_ready", false,-1);
    tracep->declBit(c+585,"io_enq_valid", false,-1);
    tracep->declBit(c+1611,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+586,"io_deq_ready", false,-1);
    tracep->declBit(c+472,"io_deq_valid", false,-1);
    tracep->declBit(c+473,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+472,"full", false,-1);
    tracep->declBit(c+473,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+474,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBit(c+1684,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1685,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1874,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1298,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1875,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1686,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1687,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1299,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+596,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1461,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1462,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1822,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1688,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1689,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1874,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1640,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1297,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1301,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1463,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1464,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1823,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1824,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1465,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBit(c+1872,"io_interrupt", false,-1);
    tracep->declBit(c+1684,"io_master_awready", false,-1);
    tracep->declBit(c+1685,"io_master_awvalid", false,-1);
    tracep->declBus(c+1298,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1686,"io_master_wready", false,-1);
    tracep->declBit(c+1687,"io_master_wvalid", false,-1);
    tracep->declBus(c+1299,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"io_master_wlast", false,-1);
    tracep->declBit(c+596,"io_master_bready", false,-1);
    tracep->declBit(c+1461,"io_master_bvalid", false,-1);
    tracep->declBus(c+1822,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1462,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1688,"io_master_arready", false,-1);
    tracep->declBit(c+1689,"io_master_arvalid", false,-1);
    tracep->declBus(c+1640,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1297,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1301,"io_master_rready", false,-1);
    tracep->declBit(c+1463,"io_master_rvalid", false,-1);
    tracep->declBus(c+1824,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1823,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1465,"io_master_rlast", false,-1);
    tracep->declBus(c+1464,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1872,"io_slave_awready", false,-1);
    tracep->declBit(c+1872,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1912,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1866,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1877,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1872,"io_slave_wready", false,-1);
    tracep->declBit(c+1872,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1912,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1874,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1872,"io_slave_wlast", false,-1);
    tracep->declBit(c+1872,"io_slave_bready", false,-1);
    tracep->declBit(c+1872,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1877,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1874,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1872,"io_slave_arready", false,-1);
    tracep->declBit(c+1872,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1912,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1875,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1866,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1877,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1872,"io_slave_rready", false,-1);
    tracep->declBit(c+1872,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1877,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1912,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1872,"io_slave_rlast", false,-1);
    tracep->declBus(c+1874,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1914,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1915,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1879,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1916,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1917,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1918,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+1919,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+1920,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1921,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+1922,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+1923,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1924,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+1925,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+1926,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+1927,"TYPE_FENCE_I", false,-1, 6,0);
    tracep->declBus(c+1928,"EXC_INST_MISALIGN", false,-1, 4,0);
    tracep->declBus(c+1929,"EXC_INST_ACCESS", false,-1, 4,0);
    tracep->declBus(c+1930,"EXC_ILLEGAL_INST", false,-1, 4,0);
    tracep->declBus(c+1931,"EXC_BREAKPOINT", false,-1, 4,0);
    tracep->declBus(c+1932,"EXC_LOAD_MISALIGN", false,-1, 4,0);
    tracep->declBus(c+1933,"EXC_LOAD_ACCESS", false,-1, 4,0);
    tracep->declBus(c+1934,"EXC_STORE_MISALIGN", false,-1, 4,0);
    tracep->declBus(c+1935,"EXC_STORE_ACCESS", false,-1, 4,0);
    tracep->declBus(c+1936,"EXC_ECALL_M", false,-1, 4,0);
    tracep->declBus(c+1937,"CSR_ECALL", false,-1, 11,0);
    tracep->declBus(c+1938,"CSR_EBREAK", false,-1, 11,0);
    tracep->declBus(c+1939,"CSR_MRET", false,-1, 11,0);
    tracep->declBit(c+1827,"debug_ifu_arready", false,-1);
    tracep->declBus(c+1305,"fetch_pc", false,-1, 31,0);
    tracep->declBit(c+1306,"id_valid", false,-1);
    tracep->declBit(c+1307,"id_hold_serial", false,-1);
    tracep->declBus(c+1308,"id_inst", false,-1, 31,0);
    tracep->declBus(c+1309,"id_pc", false,-1, 31,0);
    tracep->declBit(c+1310,"ex_valid", false,-1);
    tracep->declBit(c+597,"ex_serial", false,-1);
    tracep->declBit(c+598,"ex_wen_expect", false,-1);
    tracep->declBit(c+599,"ex_is_store", false,-1);
    tracep->declBit(c+600,"ex_is_ctrl", false,-1);
    tracep->declBus(c+601,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+1311,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+602,"ex_inst", false,-1, 31,0);
    tracep->declBit(c+1312,"id_exc_valid", false,-1);
    tracep->declBus(c+1313,"id_exc_code", false,-1, 4,0);
    tracep->declBus(c+1314,"id_exc_tval", false,-1, 31,0);
    tracep->declBit(c+1315,"ex_exc_valid", false,-1);
    tracep->declBus(c+1316,"ex_exc_code", false,-1, 4,0);
    tracep->declBus(c+1317,"ex_exc_tval", false,-1, 31,0);
    tracep->declBit(c+603,"ex_is_mret", false,-1);
    tracep->declBus(c+1318,"id_opcode", false,-1, 6,0);
    tracep->declBus(c+1319,"id_fun", false,-1, 2,0);
    tracep->declBus(c+1320,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+1321,"id_rs2", false,-1, 4,0);
    tracep->declBus(c+1322,"id_rd", false,-1, 4,0);
    tracep->declBus(c+1323,"id_imm", false,-1, 31,0);
    tracep->declBit(c+1324,"id_is_load", false,-1);
    tracep->declBit(c+1325,"id_is_store", false,-1);
    tracep->declBit(c+1326,"id_is_branch", false,-1);
    tracep->declBit(c+1327,"id_is_jal", false,-1);
    tracep->declBit(c+1328,"id_is_jalr", false,-1);
    tracep->declBit(c+1329,"id_is_csr", false,-1);
    tracep->declBit(c+1330,"id_is_fencei", false,-1);
    tracep->declBit(c+1331,"id_is_mdu", false,-1);
    tracep->declBit(c+1332,"id_is_ctrl", false,-1);
    tracep->declBit(c+1333,"id_is_serial", false,-1);
    tracep->declBit(c+1334,"id_wen_expect", false,-1);
    tracep->declBit(c+1335,"id_use_rs1", false,-1);
    tracep->declBit(c+1336,"id_use_rs2", false,-1);
    tracep->declBit(c+1337,"id_is_ecall", false,-1);
    tracep->declBit(c+1338,"id_is_ebreak", false,-1);
    tracep->declBit(c+1339,"id_is_mret", false,-1);
    tracep->declBit(c+1340,"id_is_illegal", false,-1);
    tracep->declBit(c+1341,"id_dec_exc_valid", false,-1);
    tracep->declBus(c+1342,"id_dec_exc_code", false,-1, 4,0);
    tracep->declBus(c+1343,"id_dec_exc_tval", false,-1, 31,0);
    tracep->declBus(c+1344,"src1", false,-1, 31,0);
    tracep->declBus(c+1345,"src2", false,-1, 31,0);
    tracep->declBit(c+700,"raw_hazard", false,-1);
    tracep->declBit(c+1346,"ifu_inst_valid", false,-1);
    tracep->declBus(c+1347,"ifu_inst", false,-1, 31,0);
    tracep->declBus(c+1348,"ifu_inst_pc", false,-1, 31,0);
    tracep->declBit(c+1828,"ifu_arvalid", false,-1);
    tracep->declBit(c+1827,"ifu_arready", false,-1);
    tracep->declBus(c+1305,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1875,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1867,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1876,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1871,"ifu_rready", false,-1);
    tracep->declBit(c+1349,"ifu_rvalid", false,-1);
    tracep->declBus(c+1350,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1877,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1349,"ifu_rlast", false,-1);
    tracep->declBus(c+1874,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1351,"dec_exc_ready", false,-1);
    tracep->declBit(c+1720,"dec_exc_valid", false,-1);
    tracep->declBit(c+1352,"exc_wb_valid", false,-1);
    tracep->declBit(c+1871,"exc_wb_ready", false,-1);
    tracep->declBit(c+1721,"lsu_dec_ar_valid", false,-1);
    tracep->declBit(c+707,"lsu_dec_ar_ready", false,-1);
    tracep->declBit(c+1353,"lsu_ex_w_valid", false,-1);
    tracep->declBit(c+1722,"lsu_ex_w_ready", false,-1);
    tracep->declBus(c+1354,"lsu_ex_rdata", false,-1, 31,0);
    tracep->declBit(c+1723,"lsu_ex_r_valid", false,-1);
    tracep->declBit(c+1724,"lsu_dec_exc_valid", false,-1);
    tracep->declBus(c+1418,"lsu_dec_exc_code", false,-1, 4,0);
    tracep->declBus(c+1355,"lsu_dec_exc_tval", false,-1, 31,0);
    tracep->declBit(c+1725,"lsu_resp_exc_valid", false,-1);
    tracep->declBus(c+1726,"lsu_resp_exc_code", false,-1, 4,0);
    tracep->declBus(c+1727,"lsu_resp_exc_tval", false,-1, 31,0);
    tracep->declBit(c+1352,"wb_fire", false,-1);
    tracep->declBit(c+1356,"fencei_flush", false,-1);
    tracep->declBit(c+1829,"store_resp_fire", false,-1);
    tracep->declBit(c+1728,"ex_commit", false,-1);
    tracep->declBus(c+1419,"trap_code_now", false,-1, 4,0);
    tracep->declBus(c+1420,"trap_tval_now", false,-1, 31,0);
    tracep->declBit(c+1729,"trap_has_exc", false,-1);
    tracep->declBit(c+1730,"trap_commit", false,-1);
    tracep->declBit(c+1731,"mret_commit", false,-1);
    tracep->declBit(c+1732,"normal_ctrl_redirect", false,-1);
    tracep->declBit(c+1732,"ctrl_redirect", false,-1);
    tracep->declBit(c+1732,"ctrl_flush", false,-1);
    tracep->declBit(c+1733,"global_flush", false,-1);
    tracep->declBit(c+1830,"ifu_fetch_allow", false,-1);
    tracep->declBit(c+701,"id_issue_base", false,-1);
    tracep->declBit(c+1734,"id_issue_base_masked", false,-1);
    tracep->declBit(c+1735,"id_fire", false,-1);
    tracep->declBit(c+1736,"lsu_store_capture_valid", false,-1);
    tracep->declBit(c+1737,"id_accept_ready", false,-1);
    tracep->declBit(c+1738,"ifu_take", false,-1);
    tracep->declBus(c+1253,"alu_dnpc", false,-1, 31,0);
    tracep->declBus(c+1254,"alu_wdata", false,-1, 31,0);
    tracep->declBit(c+702,"alu_wen", false,-1);
    tracep->declBit(c+1357,"w_finish_sim", false,-1);
    tracep->declBus(c+1358,"alu_mtvec", false,-1, 31,0);
    tracep->declBus(c+1359,"alu_mepc", false,-1, 31,0);
    tracep->declBit(c+703,"rf_wen", false,-1);
    tracep->declBus(c+604,"exit_code", false,-1, 31,0);
    tracep->declBit(c+1360,"ic_mem_arvalid", false,-1);
    tracep->declBit(c+1831,"ic_mem_arready", false,-1);
    tracep->declBus(c+605,"ic_mem_araddr", false,-1, 31,0);
    tracep->declBus(c+1940,"ic_mem_arlen", false,-1, 7,0);
    tracep->declBus(c+1867,"ic_mem_arsize", false,-1, 2,0);
    tracep->declBus(c+1876,"ic_mem_arburst", false,-1, 1,0);
    tracep->declBit(c+1361,"ic_mem_rready", false,-1);
    tracep->declBit(c+708,"ic_mem_rvalid", false,-1);
    tracep->declBus(c+1739,"ic_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+1832,"ic_mem_rresp", false,-1, 1,0);
    tracep->declBit(c+1740,"ic_mem_rlast", false,-1);
    tracep->declBus(c+1833,"ic_mem_rid", false,-1, 3,0);
    tracep->declBus(c+1362,"lsu_wmask", false,-1, 7,0);
    tracep->declBit(c+1741,"lsu_arvalid", false,-1);
    tracep->declBit(c+1742,"lsu_arready", false,-1);
    tracep->declBus(c+1355,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1875,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1867,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1876,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+606,"lsu_rready", false,-1);
    tracep->declBit(c+709,"lsu_rvalid", false,-1);
    tracep->declBus(c+1739,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1832,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1740,"lsu_rlast", false,-1);
    tracep->declBus(c+1833,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1363,"lsu_awvalid", false,-1);
    tracep->declBit(c+1743,"lsu_awready", false,-1);
    tracep->declBus(c+1298,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1363,"lsu_wvalid", false,-1);
    tracep->declBit(c+1744,"lsu_wready", false,-1);
    tracep->declBus(c+1299,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"lsu_wlast", false,-1);
    tracep->declBit(c+1871,"lsu_bready", false,-1);
    tracep->declBit(c+1745,"lsu_bvalid", false,-1);
    tracep->declBus(c+1834,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1835,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1746,"xb_arvalid", false,-1);
    tracep->declBit(c+1747,"xb_arready", false,-1);
    tracep->declBus(c+1640,"xb_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"xb_arid", false,-1, 3,0);
    tracep->declBus(c+1297,"xb_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"xb_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"xb_arburst", false,-1, 1,0);
    tracep->declBit(c+1364,"xb_rready", false,-1);
    tracep->declBit(c+1748,"xb_rvalid", false,-1);
    tracep->declBus(c+1739,"xb_rdata", false,-1, 31,0);
    tracep->declBus(c+1832,"xb_rresp", false,-1, 1,0);
    tracep->declBit(c+1740,"xb_rlast", false,-1);
    tracep->declBus(c+1833,"xb_rid", false,-1, 3,0);
    tracep->declBit(c+1749,"xb_awvalid", false,-1);
    tracep->declBit(c+1750,"xb_awready", false,-1);
    tracep->declBus(c+1298,"xb_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"xb_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"xb_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"xb_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"xb_awburst", false,-1, 1,0);
    tracep->declBit(c+1751,"xb_wvalid", false,-1);
    tracep->declBit(c+710,"xb_wready", false,-1);
    tracep->declBus(c+1299,"xb_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"xb_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"xb_wlast", false,-1);
    tracep->declBit(c+607,"xb_bready", false,-1);
    tracep->declBit(c+1752,"xb_bvalid", false,-1);
    tracep->declBus(c+1834,"xb_bresp", false,-1, 1,0);
    tracep->declBus(c+1835,"xb_bid", false,-1, 3,0);
    tracep->declBit(c+1689,"soc_arvalid", false,-1);
    tracep->declBit(c+1688,"soc_arready", false,-1);
    tracep->declBus(c+1640,"soc_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+1297,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+1301,"soc_rready", false,-1);
    tracep->declBit(c+1463,"soc_rvalid", false,-1);
    tracep->declBus(c+1823,"soc_rdata", false,-1, 31,0);
    tracep->declBus(c+1824,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+1465,"soc_rlast", false,-1);
    tracep->declBus(c+1464,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1685,"soc_awvalid", false,-1);
    tracep->declBit(c+1684,"soc_awready", false,-1);
    tracep->declBus(c+1298,"soc_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+1687,"soc_wvalid", false,-1);
    tracep->declBit(c+1686,"soc_wready", false,-1);
    tracep->declBus(c+1299,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"soc_wlast", false,-1);
    tracep->declBit(c+596,"soc_bready", false,-1);
    tracep->declBit(c+1461,"soc_bvalid", false,-1);
    tracep->declBus(c+1822,"soc_bresp", false,-1, 1,0);
    tracep->declBus(c+1462,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+1753,"clint_arvalid", false,-1);
    tracep->declBit(c+608,"clint_arready", false,-1);
    tracep->declBus(c+1640,"clint_araddr_axi", false,-1, 31,0);
    tracep->declBus(c+1874,"clint_arid_axi", false,-1, 3,0);
    tracep->declBus(c+1297,"clint_arlen_axi", false,-1, 7,0);
    tracep->declBus(c+1641,"clint_arsize_axi", false,-1, 2,0);
    tracep->declBus(c+1642,"clint_arburst_axi", false,-1, 1,0);
    tracep->declBit(c+704,"clint_rready_axi", false,-1);
    tracep->declBit(c+609,"clint_rvalid_axi", false,-1);
    tracep->declBus(c+610,"clint_rdata_axi", false,-1, 31,0);
    tracep->declBus(c+1877,"clint_rresp_axi", false,-1, 1,0);
    tracep->declBit(c+1871,"clint_rlast_axi", false,-1);
    tracep->declBus(c+611,"clint_rid_axi", false,-1, 3,0);
    tracep->declBit(c+1421,"clint_awvalid", false,-1);
    tracep->declBit(c+1872,"clint_awready", false,-1);
    tracep->declBus(c+1298,"clint_awaddr_axi", false,-1, 31,0);
    tracep->declBus(c+1874,"clint_awid_axi", false,-1, 3,0);
    tracep->declBus(c+1875,"clint_awlen_axi", false,-1, 7,0);
    tracep->declBus(c+1867,"clint_awsize_axi", false,-1, 2,0);
    tracep->declBus(c+1876,"clint_awburst_axi", false,-1, 1,0);
    tracep->declBit(c+711,"clint_wvalid", false,-1);
    tracep->declBit(c+1872,"clint_wready", false,-1);
    tracep->declBus(c+1299,"clint_wdata_axi", false,-1, 31,0);
    tracep->declBus(c+1300,"clint_wstrb_axi", false,-1, 3,0);
    tracep->declBit(c+1871,"clint_wlast_axi", false,-1);
    tracep->declBit(c+612,"clint_bready_axi", false,-1);
    tracep->declBit(c+1872,"clint_bvalid_axi", false,-1);
    tracep->declBus(c+1877,"clint_bresp_axi", false,-1, 1,0);
    tracep->declBus(c+1874,"clint_bid_axi", false,-1, 3,0);
    tracep->declBus(c+613,"mtrace_awaddr_q", false,-1, 31,0);
    tracep->declBus(c+614,"mtrace_awsize_q", false,-1, 2,0);
    tracep->declBit(c+615,"mtrace_aw_pending", false,-1);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1914,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1915,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1879,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBit(c+1720,"dec_exc_valid", false,-1);
    tracep->declBit(c+1351,"dec_exc_ready", false,-1);
    tracep->declBus(c+1322,"w_addr", false,-1, 4,0);
    tracep->declBus(c+1309,"pc", false,-1, 31,0);
    tracep->declBus(c+1344,"src1", false,-1, 31,0);
    tracep->declBus(c+1345,"src2", false,-1, 31,0);
    tracep->declBus(c+1323,"imm", false,-1, 31,0);
    tracep->declBus(c+1318,"opcode", false,-1, 6,0);
    tracep->declBus(c+1319,"fun", false,-1, 2,0);
    tracep->declBit(c+1330,"i_fencei", false,-1);
    tracep->declBit(c+1422,"i_dec_has_exc", false,-1);
    tracep->declBus(c+1253,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1254,"w_data", false,-1, 31,0);
    tracep->declBit(c+702,"wen", false,-1);
    tracep->declBit(c+1723,"lsu_ex_r_valid", false,-1);
    tracep->declBus(c+1354,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+1353,"lsu_ex_w_valid", false,-1);
    tracep->declBit(c+1722,"lsu_ex_w_ready", false,-1);
    tracep->declBit(c+1745,"bresp", false,-1);
    tracep->declBit(c+1352,"exc_wb_valid", false,-1);
    tracep->declBit(c+1871,"exc_wb_ready", false,-1);
    tracep->declBit(c+1357,"w_finish_sim", false,-1);
    tracep->declBit(c+1356,"o_fencei_flush", false,-1);
    tracep->declBit(c+1730,"i_trap_commit", false,-1);
    tracep->declBus(c+1311,"i_trap_mepc", false,-1, 31,0);
    tracep->declBus(c+1419,"i_trap_mcause", false,-1, 4,0);
    tracep->declBus(c+1420,"i_trap_mtval", false,-1, 31,0);
    tracep->declBus(c+1358,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+1359,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+616,"w_addr_ex", false,-1, 4,0);
    tracep->declBus(c+1365,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+1366,"src1_ex", false,-1, 31,0);
    tracep->declBus(c+1367,"src2_ex", false,-1, 31,0);
    tracep->declBus(c+1368,"opcode_ex", false,-1, 6,0);
    tracep->declBus(c+1369,"fun_ex", false,-1, 2,0);
    tracep->declBus(c+1370,"imm_ex", false,-1, 31,0);
    tracep->declBit(c+617,"fencei_ex", false,-1);
    tracep->declBit(c+618,"exc_pending_ex", false,-1);
    tracep->declBus(c+1371,"snpc", false,-1, 31,0);
    tracep->declBus(c+1941,"MVENDORID", false,-1, 31,0);
    tracep->declBus(c+1942,"MARCHID", false,-1, 31,0);
    tracep->declBus(c+1917,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1918,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+1919,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+1920,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1921,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+1922,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+1923,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1924,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+1925,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+1926,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+1943,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1944,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+1945,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+1946,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1947,"CSR_MTVAL", false,-1, 11,0);
    tracep->declBus(c+1937,"CSR_ECALL", false,-1, 11,0);
    tracep->declBus(c+1939,"CSR_MRET", false,-1, 11,0);
    tracep->declBus(c+1948,"CSR_MVENDORID", false,-1, 11,0);
    tracep->declBus(c+1949,"CSR_MARCHID", false,-1, 11,0);
    tracep->declBus(c+1950,"YIELD", false,-1, 31,0);
    tracep->declBus(c+1866,"STATE_REC", false,-1, 2,0);
    tracep->declBus(c+1860,"STATE_EX", false,-1, 2,0);
    tracep->declBus(c+1867,"STATE_MDU", false,-1, 2,0);
    tracep->declBus(c+1868,"STATE_OUTPUT_WB", false,-1, 2,0);
    tracep->declBus(c+1951,"STATE_STORE", false,-1, 2,0);
    tracep->declBus(c+1952,"STATE_LOAD", false,-1, 2,0);
    tracep->declQuad(c+1372,"signed_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declQuad(c+1374,"unsigned_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declBus(c+1376,"ex_state", false,-1, 2,0);
    tracep->declBit(c+1377,"mdu_ready", false,-1);
    tracep->declBit(c+1378,"mdu_valid", false,-1);
    tracep->declBus(c+1253,"dnpc_reg", false,-1, 31,0);
    tracep->declBus(c+1379,"mulh", false,-1, 31,0);
    tracep->declBus(c+1380,"mul_unsigned", false,-1, 31,0);
    tracep->declBit(c+1381,"is_div", false,-1);
    tracep->declBit(c+1382,"is_divu", false,-1);
    tracep->declBit(c+1383,"is_rem", false,-1);
    tracep->declBit(c+1384,"is_remu", false,-1);
    tracep->declBus(c+1385,"mdu_op", false,-1, 1,0);
    tracep->declBit(c+1386,"is_div_op", false,-1);
    tracep->declBus(c+1953,"o_result", false,-1, 31,0);
    tracep->declBus(c+1254,"w_data_reg", false,-1, 31,0);
    tracep->declBus(c+1387,"csr_data", false,-1, 31,0);
    tracep->declBit(c+1388,"csr_wen", false,-1);
    tracep->declBus(c+1389,"m_status", false,-1, 31,0);
    tracep->declBus(c+1390,"m_cause", false,-1, 31,0);
    tracep->declBus(c+1358,"m_tvec", false,-1, 31,0);
    tracep->declBus(c+1359,"m_epc", false,-1, 31,0);
    tracep->declBus(c+1391,"m_tval", false,-1, 31,0);
    tracep->pushNamePrefix("MDU_inst ");
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBus(c+1366,"i_devidend", false,-1, 31,0);
    tracep->declBus(c+1367,"i_devisor", false,-1, 31,0);
    tracep->declBus(c+1385,"i_mdu_op", false,-1, 1,0);
    tracep->declBus(c+1953,"o_result", false,-1, 31,0);
    tracep->declBit(c+1377,"i_mdu_ready", false,-1);
    tracep->declBit(c+1378,"o_mdu_valid", false,-1);
    tracep->declBus(c+1877,"MDU_IDLE", false,-1, 1,0);
    tracep->declBus(c+1876,"MDU_CAL", false,-1, 1,0);
    tracep->declBus(c+1954,"MDU_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+1392,"mdu_state", false,-1, 1,0);
    tracep->declBus(c+619,"r_devidend", false,-1, 31,0);
    tracep->declBus(c+620,"r_devisor", false,-1, 31,0);
    tracep->declQuad(c+621,"r_rem", false,-1, 32,0);
    tracep->declBit(c+623,"rem_sign", false,-1);
    tracep->declBus(c+624,"r_quotient", false,-1, 31,0);
    tracep->declBit(c+625,"cal_done", false,-1);
    tracep->declBus(c+1955,"d", false,-1, 31,0);
    tracep->declBus(c+626,"iter_cnt", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBit(c+1360,"ifu_arvalid", false,-1);
    tracep->declBit(c+1831,"ifu_arready", false,-1);
    tracep->declBus(c+605,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1940,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1867,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1876,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+708,"ifu_rvalid", false,-1);
    tracep->declBit(c+1361,"ifu_rready", false,-1);
    tracep->declBus(c+1739,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1832,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1740,"ifu_rlast", false,-1);
    tracep->declBus(c+1833,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1741,"lsu_arvalid", false,-1);
    tracep->declBit(c+1742,"lsu_arready", false,-1);
    tracep->declBus(c+1355,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1875,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1867,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1876,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+709,"lsu_rvalid", false,-1);
    tracep->declBit(c+606,"lsu_rready", false,-1);
    tracep->declBus(c+1739,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1832,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1740,"lsu_rlast", false,-1);
    tracep->declBus(c+1833,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1363,"lsu_awvalid", false,-1);
    tracep->declBit(c+1743,"lsu_awready", false,-1);
    tracep->declBus(c+1298,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1363,"lsu_wvalid", false,-1);
    tracep->declBit(c+1744,"lsu_wready", false,-1);
    tracep->declBus(c+1299,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"lsu_wlast", false,-1);
    tracep->declBit(c+1871,"lsu_bready", false,-1);
    tracep->declBit(c+1745,"lsu_bvalid", false,-1);
    tracep->declBus(c+1834,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1835,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1746,"m_arvalid", false,-1);
    tracep->declBit(c+1747,"m_arready", false,-1);
    tracep->declBus(c+1640,"m_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"m_arid", false,-1, 3,0);
    tracep->declBus(c+1297,"m_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"m_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"m_arburst", false,-1, 1,0);
    tracep->declBit(c+1748,"m_rvalid", false,-1);
    tracep->declBit(c+1364,"m_rready", false,-1);
    tracep->declBus(c+1739,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+1832,"m_rresp", false,-1, 1,0);
    tracep->declBit(c+1740,"m_rlast", false,-1);
    tracep->declBus(c+1833,"m_rid", false,-1, 3,0);
    tracep->declBit(c+1749,"m_awvalid", false,-1);
    tracep->declBit(c+1750,"m_awready", false,-1);
    tracep->declBus(c+1298,"m_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"m_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"m_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"m_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"m_awburst", false,-1, 1,0);
    tracep->declBit(c+1751,"m_wvalid", false,-1);
    tracep->declBit(c+710,"m_wready", false,-1);
    tracep->declBus(c+1299,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"m_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"m_wlast", false,-1);
    tracep->declBit(c+607,"m_bready", false,-1);
    tracep->declBit(c+1752,"m_bvalid", false,-1);
    tracep->declBus(c+1834,"m_bresp", false,-1, 1,0);
    tracep->declBus(c+1835,"m_bid", false,-1, 3,0);
    tracep->declBus(c+1877,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1876,"S_IFU", false,-1, 1,0);
    tracep->declBus(c+1954,"S_LSU_R", false,-1, 1,0);
    tracep->declBus(c+1956,"S_LSU_W", false,-1, 1,0);
    tracep->declBus(c+627,"state", false,-1, 1,0);
    tracep->declBit(c+628,"rd_busy", false,-1);
    tracep->declBit(c+629,"rd_owner", false,-1);
    tracep->declBit(c+630,"wr_busy", false,-1);
    tracep->declBit(c+631,"wr_aw_done", false,-1);
    tracep->declBit(c+632,"wr_w_done", false,-1);
    tracep->declBit(c+1393,"ifu_req_can_grant", false,-1);
    tracep->declBit(c+1754,"lsu_r_req_can_grant", false,-1);
    tracep->declBit(c+1755,"lsu_w_req_can_grant", false,-1);
    tracep->declBit(c+1393,"choose_ifu", false,-1);
    tracep->declBit(c+1754,"choose_lsu_r", false,-1);
    tracep->declBit(c+1755,"choose_lsu_w", false,-1);
    tracep->declBit(c+1756,"ifu_ar_fire", false,-1);
    tracep->declBit(c+1757,"lsu_ar_fire", false,-1);
    tracep->declBit(c+1758,"m_r_fire", false,-1);
    tracep->declBit(c+1759,"aw_issue_en", false,-1);
    tracep->declBit(c+1760,"w_issue_en", false,-1);
    tracep->declBit(c+607,"b_wait_en", false,-1);
    tracep->declBit(c+1761,"lsu_aw_fire", false,-1);
    tracep->declBit(c+1762,"lsu_w_fire", false,-1);
    tracep->declBit(c+1763,"m_b_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBit(c+1753,"s_arvalid", false,-1);
    tracep->declBit(c+608,"s_arready", false,-1);
    tracep->declBus(c+1640,"s_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"s_arid", false,-1, 3,0);
    tracep->declBus(c+1297,"s_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"s_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"s_arburst", false,-1, 1,0);
    tracep->declBit(c+609,"s_rvalid", false,-1);
    tracep->declBit(c+704,"s_rready", false,-1);
    tracep->declBus(c+610,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1877,"s_rresp", false,-1, 1,0);
    tracep->declBit(c+1871,"s_rlast", false,-1);
    tracep->declBus(c+611,"s_rid", false,-1, 3,0);
    tracep->declBit(c+1421,"s_awvalid", false,-1);
    tracep->declBit(c+1872,"s_awready", false,-1);
    tracep->declBus(c+1298,"s_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"s_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"s_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"s_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"s_awburst", false,-1, 1,0);
    tracep->declBit(c+711,"s_wvalid", false,-1);
    tracep->declBit(c+1872,"s_wready", false,-1);
    tracep->declBus(c+1299,"s_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"s_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"s_wlast", false,-1);
    tracep->declBit(c+1872,"s_bvalid", false,-1);
    tracep->declBit(c+612,"s_bready", false,-1);
    tracep->declBus(c+1877,"s_bresp", false,-1, 1,0);
    tracep->declBus(c+1874,"s_bid", false,-1, 3,0);
    tracep->declBus(c+1877,"CLINT_IDLE", false,-1, 1,0);
    tracep->declBus(c+1876,"CLINT_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+1957,"RTC_MMIO_LOW", false,-1, 31,0);
    tracep->declBus(c+1958,"RTC_MMIO_HI", false,-1, 31,0);
    tracep->declBus(c+633,"clint_state", false,-1, 1,0);
    tracep->declBit(c+1764,"clint_ar_fire", false,-1);
    tracep->declBit(c+705,"clint_r_fire", false,-1);
    tracep->declBus(c+634,"mtime_hi", false,-1, 31,0);
    tracep->declBus(c+635,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+610,"r_clint_rdata", false,-1, 31,0);
    tracep->declBus(c+611,"r_rid", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache ");
    tracep->declBus(c+1913,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1863,"LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+1959,"SET_NUM", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1836,"rst_n", false,-1);
    tracep->declBit(c+1356,"flush_i", false,-1);
    tracep->declBit(c+1828,"cpu_ar_valid", false,-1);
    tracep->declBus(c+1305,"cpu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+1827,"cpu_ar_ready", false,-1);
    tracep->declBit(c+1871,"cpu_inst_rready", false,-1);
    tracep->declBit(c+1349,"cpu_inst_rvalid", false,-1);
    tracep->declBus(c+1350,"cpu_inst_rdata", false,-1, 31,0);
    tracep->declBit(c+1360,"mem_ar_valid", false,-1);
    tracep->declBus(c+605,"mem_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1940,"mem_ar_len", false,-1, 7,0);
    tracep->declBus(c+1867,"mem_ar_size", false,-1, 2,0);
    tracep->declBus(c+1876,"mem_ar_burst", false,-1, 1,0);
    tracep->declBit(c+1831,"mem_ar_ready", false,-1);
    tracep->declBit(c+708,"mem_rvalid", false,-1);
    tracep->declBit(c+1361,"mem_rready", false,-1);
    tracep->declBus(c+1739,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+1740,"mem_rlast", false,-1);
    tracep->declBus(c+1960,"LINE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1914,"SET_IDX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1879,"INLINE_BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1961,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1877,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1876,"S_RD_MEM", false,-1, 1,0);
    tracep->declBus(c+1954,"S_UPDATE_CACHE", false,-1, 1,0);
    tracep->declArray(c+636,"cache_valid0", false,-1, 127,0);
    tracep->declArray(c+640,"cache_valid1", false,-1, 127,0);
    tracep->declBus(c+644,"addr_q", false,-1, 31,0);
    tracep->declBus(c+645,"tag_q", false,-1, 21,0);
    tracep->declBus(c+646,"set_q", false,-1, 6,0);
    tracep->declBus(c+1394,"offset_q", false,-1, 2,0);
    tracep->declBus(c+1395,"cur_tag", false,-1, 21,0);
    tracep->declBus(c+1396,"cur_set", false,-1, 6,0);
    tracep->declBus(c+1397,"cur_offset", false,-1, 2,0);
    tracep->declBit(c+1398,"hit0", false,-1);
    tracep->declBit(c+706,"hit1", false,-1);
    tracep->declBit(c+1399,"hit", false,-1);
    tracep->declArray(c+647,"lru_bit", false,-1, 127,0);
    tracep->declBit(c+651,"replace_way_q", false,-1);
    tracep->declBit(c+1349,"resp_valid", false,-1);
    tracep->declBus(c+1350,"resp_data", false,-1, 31,0);
    tracep->declBit(c+1349,"cpu_r_fire", false,-1);
    tracep->declBit(c+1837,"cpu_ar_fire", false,-1);
    tracep->declBit(c+1400,"mem_beat_cnt", false,-1);
    tracep->declBus(c+1401,"mem_data_buf", false,-1, 31,0);
    tracep->declBit(c+1765,"mem_r_fire", false,-1);
    tracep->declBit(c+1756,"mem_ar_fire", false,-1);
    tracep->declBit(c+1402,"refill_drop_q", false,-1);
    tracep->declQuad(c+652,"ic_req_cnt", false,-1, 63,0);
    tracep->declQuad(c+654,"ic_hit_cnt", false,-1, 63,0);
    tracep->declQuad(c+656,"ic_miss_cnt", false,-1, 63,0);
    tracep->declQuad(c+658,"ic_total_access_cycles", false,-1, 63,0);
    tracep->declQuad(c+660,"ic_miss_penalty_cycles", false,-1, 63,0);
    tracep->declQuad(c+1962,"req_cycle_cnt", false,-1, 63,0);
    tracep->declBit(c+662,"ic_access_busy", false,-1);
    tracep->declBit(c+663,"ic_miss_busy", false,-1);
    tracep->declBus(c+1403,"state", false,-1, 1,0);
    tracep->declBus(c+1964,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ifu ");
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBit(c+1830,"i_fetch_allow", false,-1);
    tracep->declBit(c+1737,"i_id_ready", false,-1);
    tracep->declBus(c+1305,"i_fetch_pc", false,-1, 31,0);
    tracep->declBit(c+1733,"i_flush", false,-1);
    tracep->declBit(c+1346,"o_inst_valid", false,-1);
    tracep->declBus(c+1347,"o_inst", false,-1, 31,0);
    tracep->declBus(c+1348,"o_inst_pc", false,-1, 31,0);
    tracep->declBit(c+1828,"o_ifu_arvalid", false,-1);
    tracep->declBit(c+1827,"i_ifu_arready", false,-1);
    tracep->declBus(c+1305,"o_ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"o_ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1875,"o_ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1867,"o_ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1876,"o_ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1871,"o_ifu_rready", false,-1);
    tracep->declBit(c+1349,"i_ifu_rvalid", false,-1);
    tracep->declBus(c+1350,"i_ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+1349,"i_ifu_rlast", false,-1);
    tracep->declBit(c+1404,"req_outstanding", false,-1);
    tracep->declBus(c+1405,"req_pc", false,-1, 31,0);
    tracep->declBit(c+1346,"buf_valid", false,-1);
    tracep->declBus(c+1347,"buf_inst", false,-1, 31,0);
    tracep->declBus(c+1348,"buf_pc", false,-1, 31,0);
    tracep->declBit(c+1406,"drop_resp", false,-1);
    tracep->declBit(c+1837,"ar_fire", false,-1);
    tracep->declBit(c+1349,"r_fire", false,-1);
    tracep->declBit(c+1766,"id_fire", false,-1);
    tracep->declBit(c+1965,"bug_dumped", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_lsu ");
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBus(c+1344,"i_src1", false,-1, 31,0);
    tracep->declBus(c+1345,"i_src2", false,-1, 31,0);
    tracep->declBus(c+1323,"i_imm", false,-1, 31,0);
    tracep->declBus(c+1319,"i_fun", false,-1, 2,0);
    tracep->declBus(c+1318,"i_opcode", false,-1, 6,0);
    tracep->declBit(c+1721,"i_lsu_dec_ar_valid", false,-1);
    tracep->declBit(c+1871,"i_exc_wb_ready", false,-1);
    tracep->declBit(c+1353,"i_lsu_ex_w_valid", false,-1);
    tracep->declBit(c+1736,"i_store_capture_valid", false,-1);
    tracep->declBit(c+1741,"o_lsu_arvalid", false,-1);
    tracep->declBit(c+1742,"i_lsu_arready", false,-1);
    tracep->declBus(c+1355,"o_lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"o_lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1875,"o_lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1867,"o_lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1876,"o_lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+606,"o_lsu_rready", false,-1);
    tracep->declBit(c+709,"i_lsu_rvalid", false,-1);
    tracep->declBus(c+1739,"i_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1832,"i_lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1740,"i_lsu_rlast", false,-1);
    tracep->declBus(c+1833,"i_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1363,"o_lsu_awvalid", false,-1);
    tracep->declBit(c+1743,"i_lsu_awready", false,-1);
    tracep->declBus(c+1298,"o_lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"o_lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"o_lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"o_lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"o_lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1363,"o_lsu_wvalid", false,-1);
    tracep->declBit(c+1744,"i_lsu_wready", false,-1);
    tracep->declBus(c+1299,"o_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"o_lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"o_lsu_wlast", false,-1);
    tracep->declBit(c+1871,"o_lsu_bready", false,-1);
    tracep->declBit(c+1745,"i_lsu_bvalid", false,-1);
    tracep->declBus(c+1834,"i_lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1835,"i_lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1354,"o_r_data", false,-1, 31,0);
    tracep->declBit(c+1723,"o_lsu_rvalid", false,-1);
    tracep->declBit(c+707,"o_lsu_dec_ar_ready", false,-1);
    tracep->declBit(c+1722,"o_lsu_ex_w_ready", false,-1);
    tracep->declBus(c+1362,"o_lsu_wmask", false,-1, 7,0);
    tracep->declBit(c+1724,"o_lsu_dec_exc_valid", false,-1);
    tracep->declBus(c+1418,"o_lsu_dec_exc_code", false,-1, 4,0);
    tracep->declBus(c+1355,"o_lsu_dec_exc_tval", false,-1, 31,0);
    tracep->declBit(c+1725,"o_lsu_resp_exc_valid", false,-1);
    tracep->declBus(c+1726,"o_lsu_resp_exc_code", false,-1, 4,0);
    tracep->declBus(c+1727,"o_lsu_resp_exc_tval", false,-1, 31,0);
    tracep->declBus(c+1917,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1923,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1932,"EXC_LOAD_MISALIGN", false,-1, 4,0);
    tracep->declBus(c+1933,"EXC_LOAD_ACCESS", false,-1, 4,0);
    tracep->declBus(c+1934,"EXC_STORE_MISALIGN", false,-1, 4,0);
    tracep->declBus(c+1935,"EXC_STORE_ACCESS", false,-1, 4,0);
    tracep->declBus(c+1355,"cur_mem_addr", false,-1, 31,0);
    tracep->declBus(c+1407,"cur_mem_offset", false,-1, 1,0);
    tracep->declBus(c+1362,"cur_wmask", false,-1, 7,0);
    tracep->declBus(c+1408,"cur_wstrb", false,-1, 3,0);
    tracep->declBus(c+1409,"cur_wdata", false,-1, 31,0);
    tracep->declBit(c+1410,"is_half", false,-1);
    tracep->declBit(c+1411,"is_word", false,-1);
    tracep->declBit(c+1412,"addr_misalign", false,-1);
    tracep->declBit(c+1767,"load_addr_misalign", false,-1);
    tracep->declBit(c+1413,"store_addr_misalign", false,-1);
    tracep->declBit(c+606,"load_pending", false,-1);
    tracep->declBus(c+1414,"load_offset_r", false,-1, 1,0);
    tracep->declBus(c+1415,"load_fun_r", false,-1, 2,0);
    tracep->declBus(c+1354,"r_lsu_data", false,-1, 31,0);
    tracep->declBit(c+664,"store_buf_valid", false,-1);
    tracep->declBus(c+1298,"store_addr_r", false,-1, 31,0);
    tracep->declBus(c+1299,"store_data_r", false,-1, 31,0);
    tracep->declBus(c+1300,"store_wstrb_r", false,-1, 3,0);
    tracep->declBit(c+1757,"ar_fire", false,-1);
    tracep->declBit(c+1723,"r_fire", false,-1);
    tracep->declBit(c+1745,"b_fire", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rf ");
    tracep->declBus(c+1915,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBit(c+703,"wen", false,-1);
    tracep->declBus(c+1254,"w_data", false,-1, 31,0);
    tracep->declBus(c+601,"w_addr", false,-1, 4,0);
    tracep->declBus(c+1320,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+1321,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+1344,"r_data1", false,-1, 31,0);
    tracep->declBus(c+1345,"r_data2", false,-1, 31,0);
    tracep->declBus(c+604,"exit_code", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+665+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+697,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1957,"CLINT_ADDR_LEFT", false,-1, 31,0);
    tracep->declBus(c+1958,"CLINT_ADDR_RIGHT", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1826,"reset", false,-1);
    tracep->declBit(c+1746,"xb_ar_valid", false,-1);
    tracep->declBit(c+1747,"xb_ar_ready", false,-1);
    tracep->declBus(c+1640,"xb_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1874,"xb_ar_id", false,-1, 3,0);
    tracep->declBus(c+1297,"xb_ar_len", false,-1, 7,0);
    tracep->declBus(c+1641,"xb_ar_size", false,-1, 2,0);
    tracep->declBus(c+1642,"xb_ar_burst", false,-1, 1,0);
    tracep->declBit(c+1748,"xb_r_valid", false,-1);
    tracep->declBit(c+1364,"xb_r_ready", false,-1);
    tracep->declBus(c+1739,"xb_r_data", false,-1, 31,0);
    tracep->declBus(c+1832,"xb_r_resp", false,-1, 1,0);
    tracep->declBit(c+1740,"xb_r_last", false,-1);
    tracep->declBus(c+1833,"xb_r_id", false,-1, 3,0);
    tracep->declBit(c+1749,"xb_aw_valid", false,-1);
    tracep->declBit(c+1750,"xb_aw_ready", false,-1);
    tracep->declBus(c+1298,"xb_aw_addr", false,-1, 31,0);
    tracep->declBus(c+1874,"xb_aw_id", false,-1, 3,0);
    tracep->declBus(c+1875,"xb_aw_len", false,-1, 7,0);
    tracep->declBus(c+1867,"xb_aw_size", false,-1, 2,0);
    tracep->declBus(c+1876,"xb_aw_burst", false,-1, 1,0);
    tracep->declBit(c+1751,"xb_w_valid", false,-1);
    tracep->declBit(c+710,"xb_w_ready", false,-1);
    tracep->declBus(c+1299,"xb_w_data", false,-1, 31,0);
    tracep->declBus(c+1300,"xb_w_strb", false,-1, 3,0);
    tracep->declBit(c+1871,"xb_w_last", false,-1);
    tracep->declBit(c+1752,"xb_b_valid", false,-1);
    tracep->declBit(c+607,"xb_b_ready", false,-1);
    tracep->declBus(c+1834,"xb_b_resp", false,-1, 1,0);
    tracep->declBus(c+1835,"xb_b_id", false,-1, 3,0);
    tracep->declBit(c+1689,"soc_arvalid", false,-1);
    tracep->declBit(c+1688,"soc_arready", false,-1);
    tracep->declBus(c+1640,"soc_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+1297,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+1463,"soc_rvalid", false,-1);
    tracep->declBit(c+1301,"soc_rready", false,-1);
    tracep->declBus(c+1823,"soc_rdata", false,-1, 31,0);
    tracep->declBus(c+1824,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+1465,"soc_rlast", false,-1);
    tracep->declBus(c+1464,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1685,"soc_awvalid", false,-1);
    tracep->declBit(c+1684,"soc_awready", false,-1);
    tracep->declBus(c+1298,"soc_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+1687,"soc_wvalid", false,-1);
    tracep->declBit(c+1686,"soc_wready", false,-1);
    tracep->declBus(c+1299,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"soc_wlast", false,-1);
    tracep->declBit(c+1461,"soc_bvalid", false,-1);
    tracep->declBit(c+596,"soc_bready", false,-1);
    tracep->declBus(c+1822,"soc_bresp", false,-1, 1,0);
    tracep->declBus(c+1462,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+1753,"clint_arvalid", false,-1);
    tracep->declBit(c+608,"clint_arready", false,-1);
    tracep->declBus(c+1640,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+1874,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1297,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1641,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1642,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+609,"clint_rvalid", false,-1);
    tracep->declBit(c+704,"clint_rready", false,-1);
    tracep->declBus(c+610,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1877,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1871,"clint_rlast", false,-1);
    tracep->declBus(c+611,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1421,"clint_awvalid", false,-1);
    tracep->declBit(c+1872,"clint_awready", false,-1);
    tracep->declBus(c+1298,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1874,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1875,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1867,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1876,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+711,"clint_wvalid", false,-1);
    tracep->declBit(c+1872,"clint_wready", false,-1);
    tracep->declBus(c+1299,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1300,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"clint_wlast", false,-1);
    tracep->declBit(c+1872,"clint_bvalid", false,-1);
    tracep->declBit(c+612,"clint_bready", false,-1);
    tracep->declBus(c+1877,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1874,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1768,"ar_to_clint", false,-1);
    tracep->declBit(c+1416,"aw_to_clint", false,-1);
    tracep->declBit(c+698,"rd_sel_clint", false,-1);
    tracep->declBit(c+699,"wr_sel_clint", false,-1);
    tracep->declBit(c+1769,"ar_hs", false,-1);
    tracep->declBit(c+1770,"aw_hs", false,-1);
    tracep->declBit(c+1758,"r_done", false,-1);
    tracep->declBit(c+1763,"b_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"io_d", false,-1);
    tracep->declBit(c+475,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"io_d", false,-1);
    tracep->declBit(c+475,"io_q", false,-1);
    tracep->declBit(c+475,"sync_0", false,-1);
    tracep->declBit(c+476,"sync_1", false,-1);
    tracep->declBit(c+477,"sync_2", false,-1);
    tracep->declBit(c+478,"sync_3", false,-1);
    tracep->declBit(c+479,"sync_4", false,-1);
    tracep->declBit(c+480,"sync_5", false,-1);
    tracep->declBit(c+481,"sync_6", false,-1);
    tracep->declBit(c+482,"sync_7", false,-1);
    tracep->declBit(c+483,"sync_8", false,-1);
    tracep->declBit(c+484,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1437,"auto_in_psel", false,-1);
    tracep->declBit(c+1438,"auto_in_penable", false,-1);
    tracep->declBit(c+1427,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1436,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1106,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1439,"auto_in_pready", false,-1);
    tracep->declBit(c+1440,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1109,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1787,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1788,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1789,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1790,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1791,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1792,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1793,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1794,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1795,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1796,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+1484,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1437,"in_psel", false,-1);
    tracep->declBit(c+1438,"in_penable", false,-1);
    tracep->declBus(c+1106,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1427,"in_pwrite", false,-1);
    tracep->declBus(c+1428,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1439,"in_pready", false,-1);
    tracep->declBus(c+1109,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1440,"in_pslverr", false,-1);
    tracep->declBus(c+1787,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1788,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1789,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1790,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1791,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1792,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1793,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1794,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1795,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1796,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1875,"LED_CTRL_ADDR", false,-1, 7,0);
    tracep->declBus(c+1966,"DIP_STATE_ADDR", false,-1, 7,0);
    tracep->declBus(c+1967,"SEG7_ADDR", false,-1, 7,0);
    tracep->declBus(c+1968,"RESERVE_ADDR", false,-1, 7,0);
    tracep->declBus(c+1969,"LED_NUM", false,-1, 31,0);
    tracep->declBus(c+1913,"SEG_CTRL_W", false,-1, 31,0);
    tracep->declBus(c+1913,"GPIO_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+795,"led_ctrl", false,-1, 15,0);
    tracep->declBus(c+796,"dip_state", false,-1, 15,0);
    tracep->declBus(c+797,"seg7_ctrl", false,-1, 31,0);
    tracep->declBit(c+798,"reserve", false,-1);
    tracep->declBit(c+1485,"addr_valid", false,-1);
    tracep->declBit(c+1486,"apb_setup", false,-1);
    tracep->declBit(c+1439,"apb_access", false,-1);
    tracep->declBit(c+1487,"apb_wr", false,-1);
    tracep->declBit(c+1488,"apb_rd", false,-1);
    tracep->declBus(c+1489,"apb_addr", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1434,"auto_in_psel", false,-1);
    tracep->declBit(c+1435,"auto_in_penable", false,-1);
    tracep->declBit(c+1427,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1436,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1106,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+733,"auto_in_pready", false,-1);
    tracep->declBit(c+1872,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1813,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1797,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1798,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+1484,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1434,"in_psel", false,-1);
    tracep->declBit(c+1435,"in_penable", false,-1);
    tracep->declBus(c+1106,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1427,"in_pwrite", false,-1);
    tracep->declBus(c+1428,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+733,"in_pready", false,-1);
    tracep->declBus(c+1813,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1872,"in_pslverr", false,-1);
    tracep->declBit(c+1797,"ps2_clk", false,-1);
    tracep->declBit(c+1798,"ps2_data", false,-1);
    tracep->declBus(c+1874,"PS_DATA_ADDR", false,-1, 3,0);
    tracep->declBus(c+1970,"PS_STATUS_ADDR", false,-1, 3,0);
    tracep->declBit(c+1490,"apb_setup", false,-1);
    tracep->declBit(c+1491,"apb_access", false,-1);
    tracep->declBit(c+1492,"ps2_write", false,-1);
    tracep->declBit(c+1493,"ps2_read", false,-1);
    tracep->declBus(c+799,"ps2_data_buf", false,-1, 10,0);
    tracep->declBus(c+800,"bit_cnt", false,-1, 3,0);
    tracep->declBit(c+801,"ps2_clk_syn0", false,-1);
    tracep->declBit(c+802,"ps2_clk_syn1", false,-1);
    tracep->declBit(c+803,"ps2_syn1_dly", false,-1);
    tracep->declBit(c+804,"ps2_pulse", false,-1);
    tracep->declBit(c+1838,"key_valid", false,-1);
    tracep->declBit(c+1839,"fifo_wen", false,-1);
    tracep->declBit(c+1494,"fifo_ren", false,-1);
    tracep->declBit(c+1495,"status_rd", false,-1);
    tracep->declBus(c+805,"fifo_wdata", false,-1, 7,0);
    tracep->declBus(c+1840,"fifo_rdata", false,-1, 7,0);
    tracep->declBit(c+806,"fifo_empty", false,-1);
    tracep->declBit(c+807,"fifo_full", false,-1);
    tracep->declBus(c+808,"kbd_status", false,-1, 31,0);
    tracep->pushNamePrefix("u_ps2_fifo ");
    tracep->declBus(c+1863,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+805,"i_data", false,-1, 7,0);
    tracep->declBit(c+1839,"wen", false,-1);
    tracep->declBit(c+1494,"ren", false,-1);
    tracep->declBus(c+1840,"o_data", false,-1, 7,0);
    tracep->declBit(c+806,"o_empty", false,-1);
    tracep->declBit(c+807,"o_full", false,-1);
    tracep->declBus(c+1915,"PTR_W", false,-1, 31,0);
    tracep->declBus(c+1971,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1255+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+809,"w_ptr", false,-1, 4,0);
    tracep->declBus(c+810,"r_ptr", false,-1, 4,0);
    tracep->declBus(c+811,"count", false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1629,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1630,"auto_in_wvalid", false,-1);
    tracep->declBit(c+269,"auto_in_arready", false,-1);
    tracep->declBit(c+1706,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1707,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+522,"auto_in_rready", false,-1);
    tracep->declBit(c+270,"auto_in_rvalid", false,-1);
    tracep->declBus(c+271,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+272,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+270,"state", false,-1);
    tracep->declBus(c+272,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+271,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1771,"raddr", false,-1, 31,0);
    tracep->declBit(c+1772,"ren", false,-1);
    tracep->declBus(c+1773,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1441,"auto_in_psel", false,-1);
    tracep->declBit(c+1110,"auto_in_penable", false,-1);
    tracep->declBit(c+1427,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1425,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1106,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"auto_in_pready", false,-1);
    tracep->declBit(c+1872,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1252,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1423,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1424,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1808,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+1425,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1441,"in_psel", false,-1);
    tracep->declBit(c+1110,"in_penable", false,-1);
    tracep->declBus(c+1106,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1427,"in_pwrite", false,-1);
    tracep->declBus(c+1428,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1111,"in_pready", false,-1);
    tracep->declBus(c+1252,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1872,"in_pslverr", false,-1);
    tracep->declBit(c+1423,"qspi_sck", false,-1);
    tracep->declBit(c+1424,"qspi_ce_n", false,-1);
    tracep->declBus(c+1808,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1808,"din", false,-1, 3,0);
    tracep->declBus(c+1496,"dout", false,-1, 3,0);
    tracep->declBus(c+1497,"douten", false,-1, 3,0);
    tracep->declBit(c+1122,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1785,"clk_i", false,-1);
    tracep->declBit(c+1786,"rst_i", false,-1);
    tracep->declBus(c+1425,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1428,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1252,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1429,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1441,"cyc_i", false,-1);
    tracep->declBit(c+1441,"stb_i", false,-1);
    tracep->declBit(c+1122,"ack_o", false,-1);
    tracep->declBit(c+1427,"we_i", false,-1);
    tracep->declBit(c+1423,"sck", false,-1);
    tracep->declBit(c+1424,"ce_n", false,-1);
    tracep->declBus(c+1808,"din", false,-1, 3,0);
    tracep->declBus(c+1496,"dout", false,-1, 3,0);
    tracep->declBus(c+1497,"douten", false,-1, 3,0);
    tracep->declBus(c+1877,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1876,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1954,"ST_INIT", false,-1, 1,0);
    tracep->declBit(c+812,"mi_sck", false,-1);
    tracep->declBit(c+813,"mi_ce_n", false,-1);
    tracep->declBus(c+814,"mi_dout", false,-1, 3,0);
    tracep->declBit(c+815,"mi_doe", false,-1);
    tracep->declBit(c+816,"mr_sck", false,-1);
    tracep->declBit(c+817,"mr_ce_n", false,-1);
    tracep->declBus(c+1808,"mr_din", false,-1, 3,0);
    tracep->declBus(c+818,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+819,"mr_doe", false,-1);
    tracep->declBit(c+820,"mw_sck", false,-1);
    tracep->declBit(c+821,"mw_ce_n", false,-1);
    tracep->declBus(c+1808,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1498,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+822,"mw_doe", false,-1);
    tracep->declBit(c+1972,"mi_init", false,-1);
    tracep->declBit(c+823,"mi_done", false,-1);
    tracep->declBit(c+1499,"mr_rd", false,-1);
    tracep->declBit(c+824,"mr_done", false,-1);
    tracep->declBit(c+1500,"mw_wr", false,-1);
    tracep->declBit(c+1501,"mw_done", false,-1);
    tracep->declBit(c+1441,"wb_valid", false,-1);
    tracep->declBit(c+1502,"wb_we", false,-1);
    tracep->declBit(c+1503,"wb_re", false,-1);
    tracep->declBus(c+825,"state", false,-1, 1,0);
    tracep->declBus(c+1123,"nstate", false,-1, 1,0);
    tracep->declBit(c+826,"qpi_ready", false,-1);
    tracep->declBus(c+1504,"size", false,-1, 2,0);
    tracep->declBus(c+1505,"byte0", false,-1, 7,0);
    tracep->declBus(c+1506,"byte1", false,-1, 7,0);
    tracep->declBus(c+1507,"byte2", false,-1, 7,0);
    tracep->declBus(c+1508,"byte3", false,-1, 7,0);
    tracep->declBus(c+1509,"wdata", false,-1, 31,0);
    tracep->declBus(c+1510,"waddr", false,-1, 1,0);
    tracep->pushNamePrefix("MI ");
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1841,"rst_n", false,-1);
    tracep->declBit(c+827,"start", false,-1);
    tracep->declBit(c+823,"done", false,-1);
    tracep->declBit(c+812,"sck", false,-1);
    tracep->declBit(c+813,"ce_n", false,-1);
    tracep->declBus(c+814,"dout", false,-1, 3,0);
    tracep->declBit(c+815,"douten", false,-1);
    tracep->declBus(c+1877,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1876,"SEND", false,-1, 1,0);
    tracep->declBus(c+1954,"INIT_DONE", false,-1, 1,0);
    tracep->declBus(c+828,"state", false,-1, 1,0);
    tracep->declBus(c+829,"nstate", false,-1, 1,0);
    tracep->declBus(c+830,"counter", false,-1, 3,0);
    tracep->declBus(c+1973,"CMD_35H", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1841,"rst_n", false,-1);
    tracep->declBus(c+1511,"addr", false,-1, 23,0);
    tracep->declBit(c+1499,"rd", false,-1);
    tracep->declBus(c+1951,"size", false,-1, 2,0);
    tracep->declBit(c+1871,"qpi_mode", false,-1);
    tracep->declBit(c+824,"done", false,-1);
    tracep->declBus(c+1252,"line", false,-1, 31,0);
    tracep->declBit(c+816,"sck", false,-1);
    tracep->declBit(c+817,"ce_n", false,-1);
    tracep->declBus(c+1808,"din", false,-1, 3,0);
    tracep->declBus(c+818,"dout", false,-1, 3,0);
    tracep->declBit(c+819,"douten", false,-1);
    tracep->declBus(c+1974,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1975,"READ", false,-1, 0,0);
    tracep->declBus(c+1976,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1977,"QPI_FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+831,"state", false,-1);
    tracep->declBit(c+1512,"nstate", false,-1);
    tracep->declBus(c+832,"counter", false,-1, 7,0);
    tracep->declBus(c+833,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1287+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1978,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+834,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1841,"rst_n", false,-1);
    tracep->declBus(c+1511,"addr", false,-1, 23,0);
    tracep->declBus(c+1509,"line", false,-1, 31,0);
    tracep->declBus(c+1504,"size", false,-1, 2,0);
    tracep->declBit(c+1500,"wr", false,-1);
    tracep->declBit(c+1871,"qpi_mode", false,-1);
    tracep->declBit(c+1501,"done", false,-1);
    tracep->declBit(c+820,"sck", false,-1);
    tracep->declBit(c+821,"ce_n", false,-1);
    tracep->declBus(c+1808,"din", false,-1, 3,0);
    tracep->declBus(c+1498,"dout", false,-1, 3,0);
    tracep->declBit(c+822,"douten", false,-1);
    tracep->declBus(c+1974,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1975,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1513,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1514,"QPI_FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+835,"state", false,-1);
    tracep->declBit(c+1515,"nstate", false,-1);
    tracep->declBus(c+836,"counter", false,-1, 7,0);
    tracep->declBus(c+837,"saddr", false,-1, 23,0);
    tracep->declBus(c+1979,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1561,"auto_in_awready", false,-1);
    tracep->declBit(c+752,"auto_in_awvalid", false,-1);
    tracep->declBus(c+753,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+754,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+755,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+756,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+757,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1562,"auto_in_wready", false,-1);
    tracep->declBit(c+758,"auto_in_wvalid", false,-1);
    tracep->declBus(c+759,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+760,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+761,"auto_in_wlast", false,-1);
    tracep->declBit(c+762,"auto_in_bready", false,-1);
    tracep->declBit(c+763,"auto_in_bvalid", false,-1);
    tracep->declBus(c+749,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1877,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1560,"auto_in_arready", false,-1);
    tracep->declBit(c+741,"auto_in_arvalid", false,-1);
    tracep->declBus(c+742,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+743,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+744,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+745,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+746,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+747,"auto_in_rready", false,-1);
    tracep->declBit(c+748,"auto_in_rvalid", false,-1);
    tracep->declBus(c+749,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+750,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1877,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+751,"auto_in_rlast", false,-1);
    tracep->declBit(c+1809,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1557,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+716,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+717,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+718,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+719,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1124,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1558,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1559,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1774,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1561,"in_awready", false,-1);
    tracep->declBus(c+754,"in_awaddr", false,-1, 31,0);
    tracep->declBit(c+752,"in_awvalid", false,-1);
    tracep->declBus(c+753,"in_awid", false,-1, 3,0);
    tracep->declBus(c+755,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+756,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+757,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1562,"in_wready", false,-1);
    tracep->declBit(c+758,"in_wvalid", false,-1);
    tracep->declBus(c+759,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+760,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+761,"in_wlast", false,-1);
    tracep->declBit(c+762,"in_bready", false,-1);
    tracep->declBit(c+763,"in_bvalid", false,-1);
    tracep->declBus(c+1877,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+749,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1560,"in_arready", false,-1);
    tracep->declBit(c+741,"in_arvalid", false,-1);
    tracep->declBus(c+743,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+742,"in_arid", false,-1, 3,0);
    tracep->declBus(c+744,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+745,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+746,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+747,"in_rready", false,-1);
    tracep->declBit(c+748,"in_rvalid", false,-1);
    tracep->declBus(c+1877,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+750,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+751,"in_rlast", false,-1);
    tracep->declBus(c+749,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1809,"sdram_clk", false,-1);
    tracep->declBit(c+1557,"sdram_cke", false,-1);
    tracep->declBit(c+716,"sdram_cs", false,-1);
    tracep->declBit(c+717,"sdram_ras", false,-1);
    tracep->declBit(c+718,"sdram_cas", false,-1);
    tracep->declBit(c+719,"sdram_we", false,-1);
    tracep->declBus(c+1124,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1558,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1559,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1774,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+838,"sdram_dout_en", false,-1);
    tracep->declBus(c+839,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1785,"clk_i", false,-1);
    tracep->declBit(c+1786,"rst_i", false,-1);
    tracep->declBit(c+752,"inport_awvalid_i", false,-1);
    tracep->declBus(c+754,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+753,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+755,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+757,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+758,"inport_wvalid_i", false,-1);
    tracep->declBus(c+759,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+760,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+761,"inport_wlast_i", false,-1);
    tracep->declBit(c+762,"inport_bready_i", false,-1);
    tracep->declBit(c+741,"inport_arvalid_i", false,-1);
    tracep->declBus(c+743,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+742,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+744,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+746,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+747,"inport_rready_i", false,-1);
    tracep->declBus(c+1774,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1561,"inport_awready_o", false,-1);
    tracep->declBit(c+1562,"inport_wready_o", false,-1);
    tracep->declBit(c+763,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1877,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+749,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1560,"inport_arready_o", false,-1);
    tracep->declBit(c+748,"inport_rvalid_o", false,-1);
    tracep->declBus(c+750,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1877,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+749,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+751,"inport_rlast_o", false,-1);
    tracep->declBit(c+1809,"sdram_clk_o", false,-1);
    tracep->declBit(c+1557,"sdram_cke_o", false,-1);
    tracep->declBit(c+716,"sdram_cs_o", false,-1);
    tracep->declBit(c+717,"sdram_ras_o", false,-1);
    tracep->declBit(c+718,"sdram_cas_o", false,-1);
    tracep->declBit(c+719,"sdram_we_o", false,-1);
    tracep->declBus(c+1559,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1124,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1558,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+839,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+838,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1862,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1980,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1981,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1982,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1563,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1564,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+840,"ram_rd_w", false,-1);
    tracep->declBit(c+1565,"ram_accept_w", false,-1);
    tracep->declBus(c+759,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+841,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+842,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+843,"ram_ack_w", false,-1);
    tracep->declBit(c+1872,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1785,"clk_i", false,-1);
    tracep->declBit(c+1786,"rst_i", false,-1);
    tracep->declBit(c+752,"axi_awvalid_i", false,-1);
    tracep->declBus(c+754,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+753,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+755,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+757,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+758,"axi_wvalid_i", false,-1);
    tracep->declBus(c+759,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+760,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+761,"axi_wlast_i", false,-1);
    tracep->declBit(c+762,"axi_bready_i", false,-1);
    tracep->declBit(c+741,"axi_arvalid_i", false,-1);
    tracep->declBus(c+743,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+742,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+744,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+746,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+747,"axi_rready_i", false,-1);
    tracep->declBit(c+1565,"ram_accept_i", false,-1);
    tracep->declBit(c+843,"ram_ack_i", false,-1);
    tracep->declBit(c+1872,"ram_error_i", false,-1);
    tracep->declBus(c+841,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1561,"axi_awready_o", false,-1);
    tracep->declBit(c+1562,"axi_wready_o", false,-1);
    tracep->declBit(c+763,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1877,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+749,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1560,"axi_arready_o", false,-1);
    tracep->declBit(c+748,"axi_rvalid_o", false,-1);
    tracep->declBus(c+750,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1877,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+749,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+751,"axi_rlast_o", false,-1);
    tracep->declBus(c+1564,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+840,"ram_rd_o", false,-1);
    tracep->declBus(c+842,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1563,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+759,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+844,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+845,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+846,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+847,"req_rd_q", false,-1);
    tracep->declBit(c+848,"req_wr_q", false,-1);
    tracep->declBus(c+849,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+850,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+851,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+852,"req_prio_q", false,-1);
    tracep->declBit(c+853,"req_hold_rd_q", false,-1);
    tracep->declBit(c+854,"req_hold_wr_q", false,-1);
    tracep->declBit(c+855,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1566,"req_push_w", false,-1);
    tracep->declBus(c+1128,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+856,"req_out_valid_w", false,-1);
    tracep->declBus(c+857,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+858,"resp_accept_w", false,-1);
    tracep->declBit(c+859,"resp_is_write_w", false,-1);
    tracep->declBit(c+860,"resp_is_read_w", false,-1);
    tracep->declBit(c+751,"resp_is_last_w", false,-1);
    tracep->declBus(c+749,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+861,"resp_valid_w", false,-1);
    tracep->declBit(c+862,"write_prio_w", false,-1);
    tracep->declBit(c+863,"read_prio_w", false,-1);
    tracep->declBit(c+864,"write_active_w", false,-1);
    tracep->declBit(c+840,"read_active_w", false,-1);
    tracep->declBus(c+1563,"addr_w", false,-1, 31,0);
    tracep->declBit(c+865,"wr_w", false,-1);
    tracep->declBit(c+840,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1971,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1880,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1982,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1785,"clk_i", false,-1);
    tracep->declBit(c+1786,"rst_i", false,-1);
    tracep->declBus(c+1128,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1566,"push_i", false,-1);
    tracep->declBit(c+858,"pop_i", false,-1);
    tracep->declBus(c+857,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+855,"accept_o", false,-1);
    tracep->declBit(c+856,"valid_o", false,-1);
    tracep->declBus(c+1879,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+866+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+870,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+871,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+872,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1913,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1880,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1982,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1785,"clk_i", false,-1);
    tracep->declBit(c+1786,"rst_i", false,-1);
    tracep->declBus(c+841,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+843,"push_i", false,-1);
    tracep->declBit(c+858,"pop_i", false,-1);
    tracep->declBus(c+750,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+873,"accept_o", false,-1);
    tracep->declBit(c+861,"valid_o", false,-1);
    tracep->declBus(c+1879,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+874+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+878,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+879,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+880,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1785,"clk_i", false,-1);
    tracep->declBit(c+1786,"rst_i", false,-1);
    tracep->declBus(c+1564,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+840,"inport_rd_i", false,-1);
    tracep->declBus(c+842,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1563,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+759,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1774,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1565,"inport_accept_o", false,-1);
    tracep->declBit(c+843,"inport_ack_o", false,-1);
    tracep->declBit(c+1872,"inport_error_o", false,-1);
    tracep->declBus(c+841,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1809,"sdram_clk_o", false,-1);
    tracep->declBit(c+1557,"sdram_cke_o", false,-1);
    tracep->declBit(c+716,"sdram_cs_o", false,-1);
    tracep->declBit(c+717,"sdram_ras_o", false,-1);
    tracep->declBit(c+718,"sdram_cas_o", false,-1);
    tracep->declBit(c+719,"sdram_we_o", false,-1);
    tracep->declBus(c+1559,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1124,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1558,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+839,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+838,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1862,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1980,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1981,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1982,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1982,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1880,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1880,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1983,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1984,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1985,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1986,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1913,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1982,"SDRAM_RANKS", false,-1, 31,0);
    tracep->declBus(c+1987,"SDRAM_RANK_W", false,-1, 31,0);
    tracep->declBus(c+1988,"SDRAM_RANK_SEL_BIT", false,-1, 31,0);
    tracep->declBus(c+1880,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1989,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1990,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1991,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1970,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1992,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1993,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1994,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1874,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1995,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1880,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1874,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1994,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1993,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1990,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1970,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1991,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1992,"STATE_WRITE", false,-1, 3,0);
    tracep->declBus(c+1989,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1996,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1997,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1997,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1997,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1982,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1982,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1971,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1563,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1564,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+840,"ram_rd_w", false,-1);
    tracep->declBit(c+1565,"ram_accept_w", false,-1);
    tracep->declBus(c+759,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+841,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+843,"ram_ack_w", false,-1);
    tracep->declBit(c+1567,"ram_req_w", false,-1);
    tracep->declBus(c+881,"command_q", false,-1, 3,0);
    tracep->declBus(c+1568,"addr_q", false,-1, 12,0);
    tracep->declBus(c+839,"data_q", false,-1, 31,0);
    tracep->declBit(c+882,"data_rd_en_q", false,-1);
    tracep->declBus(c+1559,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1557,"cke_q", false,-1);
    tracep->declBus(c+1558,"bank_q", false,-1, 1,0);
    tracep->declBit(c+883,"rank_q", false,-1);
    tracep->declBus(c+1774,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+884,"refresh_q", false,-1);
    tracep->declBit(c+885,"refresh_rank_q", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+886+i*1,"row_open_q", true,(i+0), 3,0);
    }
    tracep->pushNamePrefix("active_row_q");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+888,"[0]", false,-1, 12,0);
    tracep->declBus(c+889,"[1]", false,-1, 12,0);
    tracep->declBus(c+890,"[2]", false,-1, 12,0);
    tracep->declBus(c+891,"[3]", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+892,"[0]", false,-1, 12,0);
    tracep->declBus(c+893,"[1]", false,-1, 12,0);
    tracep->declBus(c+894,"[2]", false,-1, 12,0);
    tracep->declBus(c+895,"[3]", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1569,"state_q", false,-1, 3,0);
    tracep->declBus(c+1570,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1571,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1572,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+896,"delay_state_q", false,-1, 3,0);
    tracep->declBit(c+897,"req_rank_q", false,-1);
    tracep->declBus(c+1573,"req_bank_q", false,-1, 1,0);
    tracep->declBus(c+1574,"req_row_q", false,-1, 12,0);
    tracep->declBus(c+1575,"req_col_q", false,-1, 12,0);
    tracep->declBus(c+1576,"req_wr_q", false,-1, 3,0);
    tracep->declBit(c+898,"req_rd_q", false,-1);
    tracep->declBus(c+899,"req_write_data_q", false,-1, 31,0);
    tracep->declBit(c+1577,"addr_rank_w", false,-1);
    tracep->declBus(c+1578,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1579,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1580,"addr_row_w", false,-1, 12,0);
    tracep->declBit(c+1129,"current_row_hit_w", false,-1);
    tracep->declBit(c+1130,"current_bank_open_w", false,-1);
    tracep->declBit(c+900,"refresh_rank_open_w", false,-1);
    tracep->declBit(c+1565,"capture_req_w", false,-1);
    tracep->declBus(c+1880,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+901,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1581,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1998,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1582,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+902,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+841,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+903,"idx", false,-1, 31,0);
    tracep->declBus(c+904,"ridx", false,-1, 31,0);
    tracep->declBus(c+905,"rd_q", false,-1, 3,0);
    tracep->declBit(c+843,"ack_q", false,-1);
    tracep->declArray(c+1583,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1446,"auto_in_psel", false,-1);
    tracep->declBit(c+1447,"auto_in_penable", false,-1);
    tracep->declBit(c+1427,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1433,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1106,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"auto_in_pready", false,-1);
    tracep->declBit(c+1113,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1114,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+714,"spi_bundle_sck", false,-1);
    tracep->declBus(c+715,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1556,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1807,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1999,"spi_reg_start", false,-1, 31,0);
    tracep->declBus(c+2000,"spi_reg_end", false,-1, 31,0);
    tracep->declBus(c+1916,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+2001,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1863,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+1516,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1446,"in_psel", false,-1);
    tracep->declBit(c+1447,"in_penable", false,-1);
    tracep->declBus(c+1106,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1427,"in_pwrite", false,-1);
    tracep->declBus(c+1428,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"in_pready", false,-1);
    tracep->declBus(c+1114,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1113,"in_pslverr", false,-1);
    tracep->declBit(c+714,"spi_sck", false,-1);
    tracep->declBus(c+715,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1556,"spi_mosi", false,-1);
    tracep->declBit(c+1807,"spi_miso", false,-1);
    tracep->declBit(c+906,"spi_irq_out", false,-1);
    tracep->declBit(c+1517,"apb_setup", false,-1);
    tracep->declBit(c+1518,"apb_access", false,-1);
    tracep->declBit(c+1519,"apb_rd", false,-1);
    tracep->declBit(c+1520,"apb_wr", false,-1);
    tracep->declBit(c+1521,"addr_in_flash", false,-1);
    tracep->declBit(c+1522,"addr_in_spi_reg", false,-1);
    tracep->declBit(c+1523,"xip_setup_flash", false,-1);
    tracep->declBit(c+1524,"xip_flash_rd", false,-1);
    tracep->declBit(c+1525,"xip_spi_reg_rd", false,-1);
    tracep->declBit(c+1526,"xip_spi_wr", false,-1);
    tracep->declBit(c+1527,"xip_bad_wr", false,-1);
    tracep->declBit(c+1528,"xip_invalid_req", false,-1);
    tracep->declBus(c+1928,"SPI_TX_RX0", false,-1, 4,0);
    tracep->declBus(c+1932,"SPI_TX_RX1", false,-1, 4,0);
    tracep->declBus(c+2002,"SPI_TX_RX2", false,-1, 4,0);
    tracep->declBus(c+2003,"SPI_TX_RX3", false,-1, 4,0);
    tracep->declBus(c+2004,"SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+2005,"SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+2006,"SPI_SS", false,-1, 4,0);
    tracep->declBus(c+2007,"CTRL_GO_BSY_BIT", false,-1, 31,0);
    tracep->declBus(c+2008,"CTRL_RX_NEG_BIT", false,-1, 31,0);
    tracep->declBus(c+2009,"CTRL_TX_NEG_BIT", false,-1, 31,0);
    tracep->declBus(c+2010,"CTRL_LSB_BIT", false,-1, 31,0);
    tracep->declBus(c+2011,"CTRL_IE_BIT", false,-1, 31,0);
    tracep->declBus(c+2012,"CTRL_ASS_BIT", false,-1, 31,0);
    tracep->declBus(c+2013,"XIP_DIVIDE", false,-1, 31,0);
    tracep->declBus(c+2014,"XIP_SS", false,-1, 31,0);
    tracep->declBus(c+2015,"XIP_CHAR_LEN", false,-1, 31,0);
    tracep->declBus(c+2016,"XIP_CTRL", false,-1, 31,0);
    tracep->declBus(c+1994,"ST_IDLE", false,-1, 3,0);
    tracep->declBus(c+1993,"ST_W_TRX1", false,-1, 3,0);
    tracep->declBus(c+1990,"ST_W_TRX0", false,-1, 3,0);
    tracep->declBus(c+1970,"ST_DIVIDE", false,-1, 3,0);
    tracep->declBus(c+1991,"ST_SS", false,-1, 3,0);
    tracep->declBus(c+1992,"ST_CTRL", false,-1, 3,0);
    tracep->declBus(c+1989,"ST_GO_BUSY", false,-1, 3,0);
    tracep->declBus(c+1996,"ST_R_TRX0", false,-1, 3,0);
    tracep->declBus(c+2017,"ST_RESP", false,-1, 3,0);
    tracep->declBus(c+907,"xip_state", false,-1, 3,0);
    tracep->declBus(c+1529,"wb_adr_r", false,-1, 4,0);
    tracep->declBus(c+908,"wb_dat_w", false,-1, 31,0);
    tracep->declBus(c+1530,"wb_dat_r", false,-1, 31,0);
    tracep->declBus(c+1531,"wb_sel_r", false,-1, 3,0);
    tracep->declBit(c+1532,"wb_we_r", false,-1);
    tracep->declBit(c+1533,"wb_stb_r", false,-1);
    tracep->declBit(c+1534,"wb_cyc_r", false,-1);
    tracep->declBit(c+909,"wb_ack_w", false,-1);
    tracep->declBit(c+1872,"wb_err_w", false,-1);
    tracep->declBus(c+910,"xip_addr_q", false,-1, 31,0);
    tracep->declBit(c+911,"xip_busy", false,-1);
    tracep->declBus(c+912,"xip_rdata", false,-1, 31,0);
    tracep->declBit(c+913,"xip_resp_valid", false,-1);
    tracep->declBit(c+914,"xip_resp_err", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1987,"Tp", false,-1, 31,0);
    tracep->declBit(c+1785,"wb_clk_i", false,-1);
    tracep->declBit(c+1786,"wb_rst_i", false,-1);
    tracep->declBus(c+1529,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1530,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+908,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1531,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1532,"wb_we_i", false,-1);
    tracep->declBit(c+1533,"wb_stb_i", false,-1);
    tracep->declBit(c+1534,"wb_cyc_i", false,-1);
    tracep->declBit(c+909,"wb_ack_o", false,-1);
    tracep->declBit(c+1872,"wb_err_o", false,-1);
    tracep->declBit(c+906,"wb_int_o", false,-1);
    tracep->declBus(c+715,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+714,"sclk_pad_o", false,-1);
    tracep->declBit(c+1556,"mosi_pad_o", false,-1);
    tracep->declBit(c+1807,"miso_pad_i", false,-1);
    tracep->declBus(c+915,"divider", false,-1, 15,0);
    tracep->declBus(c+916,"ctrl", false,-1, 13,0);
    tracep->declBus(c+917,"ss", false,-1, 7,0);
    tracep->declBus(c+1535,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+918,"rx", false,-1, 127,0);
    tracep->declBit(c+922,"rx_negedge", false,-1);
    tracep->declBit(c+923,"tx_negedge", false,-1);
    tracep->declBus(c+924,"char_len", false,-1, 6,0);
    tracep->declBit(c+925,"go", false,-1);
    tracep->declBit(c+926,"lsb", false,-1);
    tracep->declBit(c+927,"ie", false,-1);
    tracep->declBit(c+928,"ass", false,-1);
    tracep->declBit(c+1536,"spi_divider_sel", false,-1);
    tracep->declBit(c+1537,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1538,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1539,"spi_ss_sel", false,-1);
    tracep->declBit(c+929,"tip", false,-1);
    tracep->declBit(c+930,"pos_edge", false,-1);
    tracep->declBit(c+931,"neg_edge", false,-1);
    tracep->declBit(c+932,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1987,"Tp", false,-1, 31,0);
    tracep->declBit(c+1785,"clk_in", false,-1);
    tracep->declBit(c+1786,"rst", false,-1);
    tracep->declBit(c+929,"enable", false,-1);
    tracep->declBit(c+925,"go", false,-1);
    tracep->declBit(c+932,"last_clk", false,-1);
    tracep->declBus(c+915,"divider", false,-1, 15,0);
    tracep->declBit(c+714,"clk_out", false,-1);
    tracep->declBit(c+930,"pos_edge", false,-1);
    tracep->declBit(c+931,"neg_edge", false,-1);
    tracep->declBus(c+933,"cnt", false,-1, 15,0);
    tracep->declBit(c+934,"cnt_zero", false,-1);
    tracep->declBit(c+935,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1987,"Tp", false,-1, 31,0);
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1786,"rst", false,-1);
    tracep->declBus(c+1540,"latch", false,-1, 3,0);
    tracep->declBus(c+1531,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+924,"len", false,-1, 6,0);
    tracep->declBit(c+926,"lsb", false,-1);
    tracep->declBit(c+925,"go", false,-1);
    tracep->declBit(c+930,"pos_edge", false,-1);
    tracep->declBit(c+931,"neg_edge", false,-1);
    tracep->declBit(c+922,"rx_negedge", false,-1);
    tracep->declBit(c+923,"tx_negedge", false,-1);
    tracep->declBit(c+929,"tip", false,-1);
    tracep->declBit(c+932,"last", false,-1);
    tracep->declBus(c+1530,"p_in", false,-1, 31,0);
    tracep->declArray(c+918,"p_out", false,-1, 127,0);
    tracep->declBit(c+714,"s_clk", false,-1);
    tracep->declBit(c+1807,"s_in", false,-1);
    tracep->declBit(c+1556,"s_out", false,-1);
    tracep->declBus(c+936,"cnt", false,-1, 7,0);
    tracep->declArray(c+918,"data", false,-1, 127,0);
    tracep->declBus(c+937,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+938,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+939,"rx_clk", false,-1);
    tracep->declBit(c+940,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1442,"auto_in_psel", false,-1);
    tracep->declBit(c+1443,"auto_in_penable", false,-1);
    tracep->declBit(c+1427,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1436,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1106,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1444,"auto_in_pready", false,-1);
    tracep->declBit(c+1872,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1445,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1805,"uart_rx", false,-1);
    tracep->declBit(c+1806,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1442,"in_psel", false,-1);
    tracep->declBit(c+1443,"in_penable", false,-1);
    tracep->declBus(c+1106,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1444,"in_pready", false,-1);
    tracep->declBit(c+1872,"in_pslverr", false,-1);
    tracep->declBus(c+1484,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1427,"in_pwrite", false,-1);
    tracep->declBus(c+1445,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1428,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1805,"uart_rx", false,-1);
    tracep->declBit(c+1806,"uart_tx", false,-1);
    tracep->declBit(c+941,"rtsn", false,-1);
    tracep->declBit(c+1872,"ctsn", false,-1);
    tracep->declBit(c+942,"dtr_pad_o", false,-1);
    tracep->declBit(c+1872,"dsr_pad_i", false,-1);
    tracep->declBit(c+1872,"ri_pad_i", false,-1);
    tracep->declBit(c+1872,"dcd_pad_i", false,-1);
    tracep->declBit(c+943,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+1541,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1542,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+485,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1543,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+944,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1786,"wb_rst_i", false,-1);
    tracep->declBus(c+1541,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1544,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1543,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1806,"stx_pad_o", false,-1);
    tracep->declBit(c+1805,"srx_pad_i", false,-1);
    tracep->declBus(c+1996,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+944,"rts_pad_o", false,-1);
    tracep->declBit(c+942,"dtr_pad_o", false,-1);
    tracep->declBit(c+943,"int_o", false,-1);
    tracep->declBit(c+945,"enable", false,-1);
    tracep->declBit(c+946,"srx_pad", false,-1);
    tracep->declBus(c+947,"ier", false,-1, 3,0);
    tracep->declBus(c+948,"iir", false,-1, 3,0);
    tracep->declBus(c+949,"fcr", false,-1, 1,0);
    tracep->declBus(c+950,"mcr", false,-1, 4,0);
    tracep->declBus(c+951,"lcr", false,-1, 7,0);
    tracep->declBus(c+952,"msr", false,-1, 7,0);
    tracep->declBus(c+953,"dl", false,-1, 15,0);
    tracep->declBus(c+954,"scratch", false,-1, 7,0);
    tracep->declBit(c+955,"start_dlc", false,-1);
    tracep->declBit(c+956,"lsr_mask_d", false,-1);
    tracep->declBit(c+957,"msi_reset", false,-1);
    tracep->declBus(c+958,"dlc", false,-1, 15,0);
    tracep->declBus(c+959,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+960,"rx_reset", false,-1);
    tracep->declBit(c+961,"tx_reset", false,-1);
    tracep->declBit(c+962,"dlab", false,-1);
    tracep->declBit(c+1871,"cts_pad_i", false,-1);
    tracep->declBit(c+1872,"dsr_pad_i", false,-1);
    tracep->declBit(c+1872,"ri_pad_i", false,-1);
    tracep->declBit(c+1872,"dcd_pad_i", false,-1);
    tracep->declBit(c+963,"loopback", false,-1);
    tracep->declBit(c+1872,"cts", false,-1);
    tracep->declBit(c+1871,"dsr", false,-1);
    tracep->declBit(c+1871,"ri", false,-1);
    tracep->declBit(c+1871,"dcd", false,-1);
    tracep->declBit(c+964,"cts_c", false,-1);
    tracep->declBit(c+965,"dsr_c", false,-1);
    tracep->declBit(c+966,"ri_c", false,-1);
    tracep->declBit(c+967,"dcd_c", false,-1);
    tracep->declBus(c+968,"lsr", false,-1, 7,0);
    tracep->declBit(c+969,"lsr0", false,-1);
    tracep->declBit(c+970,"lsr1", false,-1);
    tracep->declBit(c+971,"lsr2", false,-1);
    tracep->declBit(c+972,"lsr3", false,-1);
    tracep->declBit(c+973,"lsr4", false,-1);
    tracep->declBit(c+974,"lsr5", false,-1);
    tracep->declBit(c+975,"lsr6", false,-1);
    tracep->declBit(c+976,"lsr7", false,-1);
    tracep->declBit(c+977,"lsr0r", false,-1);
    tracep->declBit(c+978,"lsr1r", false,-1);
    tracep->declBit(c+979,"lsr2r", false,-1);
    tracep->declBit(c+980,"lsr3r", false,-1);
    tracep->declBit(c+981,"lsr4r", false,-1);
    tracep->declBit(c+982,"lsr5r", false,-1);
    tracep->declBit(c+983,"lsr6r", false,-1);
    tracep->declBit(c+984,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+985,"rls_int", false,-1);
    tracep->declBit(c+986,"rda_int", false,-1);
    tracep->declBit(c+987,"ti_int", false,-1);
    tracep->declBit(c+988,"thre_int", false,-1);
    tracep->declBit(c+989,"ms_int", false,-1);
    tracep->declBit(c+990,"tf_push", false,-1);
    tracep->declBit(c+991,"rf_pop", false,-1);
    tracep->declBus(c+1842,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+992,"rf_error_bit", false,-1);
    tracep->declBit(c+970,"rf_overrun", false,-1);
    tracep->declBit(c+993,"rf_push_pulse", false,-1);
    tracep->declBus(c+994,"rf_count", false,-1, 4,0);
    tracep->declBus(c+995,"tf_count", false,-1, 4,0);
    tracep->declBus(c+996,"tstate", false,-1, 2,0);
    tracep->declBus(c+997,"rstate", false,-1, 3,0);
    tracep->declBus(c+998,"counter_t", false,-1, 9,0);
    tracep->declBit(c+999,"thre_set_en", false,-1);
    tracep->declBus(c+1000,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1001,"block_value", false,-1, 7,0);
    tracep->declBit(c+1002,"serial_out", false,-1);
    tracep->declBit(c+1003,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+1004,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1005,"lsr0_d", false,-1);
    tracep->declBit(c+1006,"lsr1_d", false,-1);
    tracep->declBit(c+1007,"lsr2_d", false,-1);
    tracep->declBit(c+1008,"lsr3_d", false,-1);
    tracep->declBit(c+1009,"lsr4_d", false,-1);
    tracep->declBit(c+1010,"lsr5_d", false,-1);
    tracep->declBit(c+1011,"lsr6_d", false,-1);
    tracep->declBit(c+1012,"lsr7_d", false,-1);
    tracep->declBit(c+1013,"rls_int_d", false,-1);
    tracep->declBit(c+1014,"thre_int_d", false,-1);
    tracep->declBit(c+1015,"ms_int_d", false,-1);
    tracep->declBit(c+1016,"ti_int_d", false,-1);
    tracep->declBit(c+1017,"rda_int_d", false,-1);
    tracep->declBit(c+1018,"rls_int_rise", false,-1);
    tracep->declBit(c+1019,"thre_int_rise", false,-1);
    tracep->declBit(c+1020,"ms_int_rise", false,-1);
    tracep->declBit(c+1021,"ti_int_rise", false,-1);
    tracep->declBit(c+1022,"rda_int_rise", false,-1);
    tracep->declBit(c+1023,"rls_int_pnd", false,-1);
    tracep->declBit(c+1024,"rda_int_pnd", false,-1);
    tracep->declBit(c+1025,"thre_int_pnd", false,-1);
    tracep->declBit(c+1026,"ms_int_pnd", false,-1);
    tracep->declBit(c+1027,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1987,"Tp", false,-1, 31,0);
    tracep->declBus(c+1987,"width", false,-1, 31,0);
    tracep->declBus(c+1975,"init_value", false,-1, 0,0);
    tracep->declBit(c+1786,"rst_i", false,-1);
    tracep->declBit(c+1785,"clk_i", false,-1);
    tracep->declBit(c+1872,"stage1_rst_i", false,-1);
    tracep->declBit(c+1871,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1805,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+946,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1028,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1786,"wb_rst_i", false,-1);
    tracep->declBus(c+951,"lcr", false,-1, 7,0);
    tracep->declBit(c+991,"rf_pop", false,-1);
    tracep->declBit(c+1003,"srx_pad_i", false,-1);
    tracep->declBit(c+945,"enable", false,-1);
    tracep->declBit(c+960,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+998,"counter_t", false,-1, 9,0);
    tracep->declBus(c+994,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1842,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+970,"rf_overrun", false,-1);
    tracep->declBit(c+992,"rf_error_bit", false,-1);
    tracep->declBus(c+997,"rstate", false,-1, 3,0);
    tracep->declBit(c+993,"rf_push_pulse", false,-1);
    tracep->declBus(c+1029,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1030,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1031,"rshift", false,-1, 7,0);
    tracep->declBit(c+1032,"rparity", false,-1);
    tracep->declBit(c+1033,"rparity_error", false,-1);
    tracep->declBit(c+1034,"rframing_error", false,-1);
    tracep->declBit(c+1035,"rbit_in", false,-1);
    tracep->declBit(c+1036,"rparity_xor", false,-1);
    tracep->declBus(c+1037,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1038,"rf_push_q", false,-1);
    tracep->declBus(c+1039,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1040,"rf_push", false,-1);
    tracep->declBit(c+1041,"break_error", false,-1);
    tracep->declBit(c+1042,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1043,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1044,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1045,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1874,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1994,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1993,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1990,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1970,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1991,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1992,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1989,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1996,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+2017,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2018,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1046,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1047,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1950,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1969,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1880,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1915,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1786,"wb_rst_i", false,-1);
    tracep->declBit(c+993,"push", false,-1);
    tracep->declBit(c+991,"pop", false,-1);
    tracep->declBus(c+1039,"data_in", false,-1, 10,0);
    tracep->declBit(c+960,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1842,"data_out", false,-1, 10,0);
    tracep->declBit(c+970,"overrun", false,-1);
    tracep->declBus(c+994,"count", false,-1, 4,0);
    tracep->declBit(c+992,"error_bit", false,-1);
    tracep->declBus(c+1843,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1048+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1064,"top", false,-1, 3,0);
    tracep->declBus(c+1065,"bottom", false,-1, 3,0);
    tracep->declBus(c+1066,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1067,"word0", false,-1, 2,0);
    tracep->declBus(c+1068,"word1", false,-1, 2,0);
    tracep->declBus(c+1069,"word2", false,-1, 2,0);
    tracep->declBus(c+1070,"word3", false,-1, 2,0);
    tracep->declBus(c+1071,"word4", false,-1, 2,0);
    tracep->declBus(c+1072,"word5", false,-1, 2,0);
    tracep->declBus(c+1073,"word6", false,-1, 2,0);
    tracep->declBus(c+1074,"word7", false,-1, 2,0);
    tracep->declBus(c+1075,"word8", false,-1, 2,0);
    tracep->declBus(c+1076,"word9", false,-1, 2,0);
    tracep->declBus(c+1077,"word10", false,-1, 2,0);
    tracep->declBus(c+1078,"word11", false,-1, 2,0);
    tracep->declBus(c+1079,"word12", false,-1, 2,0);
    tracep->declBus(c+1080,"word13", false,-1, 2,0);
    tracep->declBus(c+1081,"word14", false,-1, 2,0);
    tracep->declBus(c+1082,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1880,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1863,"data_width", false,-1, 31,0);
    tracep->declBus(c+1969,"depth", false,-1, 31,0);
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+993,"we", false,-1);
    tracep->declBus(c+1064,"a", false,-1, 3,0);
    tracep->declBus(c+1065,"dpra", false,-1, 3,0);
    tracep->declBus(c+1083,"di", false,-1, 7,0);
    tracep->declBus(c+1843,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+486+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1786,"wb_rst_i", false,-1);
    tracep->declBus(c+951,"lcr", false,-1, 7,0);
    tracep->declBit(c+990,"tf_push", false,-1);
    tracep->declBus(c+1544,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+945,"enable", false,-1);
    tracep->declBit(c+961,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+1002,"stx_pad_o", false,-1);
    tracep->declBus(c+996,"tstate", false,-1, 2,0);
    tracep->declBus(c+995,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1084,"counter", false,-1, 4,0);
    tracep->declBus(c+1085,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1086,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1087,"stx_o_tmp", false,-1);
    tracep->declBit(c+1088,"parity_xor", false,-1);
    tracep->declBit(c+1089,"tf_pop", false,-1);
    tracep->declBit(c+1090,"bit_out", false,-1);
    tracep->declBus(c+1544,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1545,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1091,"tf_overrun", false,-1);
    tracep->declBus(c+1866,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1860,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1867,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1868,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1951,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1952,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1863,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1969,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1880,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1915,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+1786,"wb_rst_i", false,-1);
    tracep->declBit(c+990,"push", false,-1);
    tracep->declBit(c+1089,"pop", false,-1);
    tracep->declBus(c+1544,"data_in", false,-1, 7,0);
    tracep->declBit(c+961,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1545,"data_out", false,-1, 7,0);
    tracep->declBit(c+1091,"overrun", false,-1);
    tracep->declBus(c+995,"count", false,-1, 4,0);
    tracep->declBus(c+1092,"top", false,-1, 3,0);
    tracep->declBus(c+1093,"bottom", false,-1, 3,0);
    tracep->declBus(c+1094,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1880,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1863,"data_width", false,-1, 31,0);
    tracep->declBus(c+1969,"depth", false,-1, 31,0);
    tracep->declBit(c+1785,"clk", false,-1);
    tracep->declBit(c+990,"we", false,-1);
    tracep->declBus(c+1092,"a", false,-1, 3,0);
    tracep->declBus(c+1093,"dpra", false,-1, 3,0);
    tracep->declBus(c+1544,"di", false,-1, 7,0);
    tracep->declBus(c+1545,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+502+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBit(c+1431,"auto_in_psel", false,-1);
    tracep->declBit(c+1432,"auto_in_penable", false,-1);
    tracep->declBit(c+1427,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1433,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1106,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1428,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"auto_in_pready", false,-1);
    tracep->declBit(c+1872,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1812,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1799,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1800,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1801,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1802,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1803,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1804,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1785,"clock", false,-1);
    tracep->declBit(c+1786,"reset", false,-1);
    tracep->declBus(c+1516,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1431,"in_psel", false,-1);
    tracep->declBit(c+1432,"in_penable", false,-1);
    tracep->declBus(c+1106,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1427,"in_pwrite", false,-1);
    tracep->declBus(c+1428,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1429,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1871,"in_pready", false,-1);
    tracep->declBus(c+1812,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1872,"in_pslverr", false,-1);
    tracep->declBus(c+1799,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1800,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1801,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1802,"vga_hsync", false,-1);
    tracep->declBit(c+1803,"vga_vsync", false,-1);
    tracep->declBit(c+1804,"vga_valid", false,-1);
    tracep->declBus(c+2019,"VGA_XLEN", false,-1, 15,0);
    tracep->declBus(c+2020,"VGA_YLEN", false,-1, 15,0);
    tracep->declBus(c+2021,"CTRL_ADDR", false,-1, 31,0);
    tracep->declBus(c+2022,"SYNC_ADDR", false,-1, 31,0);
    tracep->declBus(c+2023,"FB_BASE", false,-1, 31,0);
    tracep->declBus(c+2024,"FB_WORDS", false,-1, 31,0);
    tracep->declBus(c+2025,"FB_BYTES", false,-1, 31,0);
    tracep->declBus(c+2026,"H_FRONTPORCH", false,-1, 31,0);
    tracep->declBus(c+2027,"H_ACTIVE", false,-1, 31,0);
    tracep->declBus(c+2028,"H_BACKPORCH", false,-1, 31,0);
    tracep->declBus(c+2029,"H_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1982,"V_FRONTPORCH", false,-1, 31,0);
    tracep->declBus(c+2030,"V_ACTIVE", false,-1, 31,0);
    tracep->declBus(c+2031,"V_BACKPORCH", false,-1, 31,0);
    tracep->declBus(c+2032,"V_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1095,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+1096,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1546,"apb_setup", false,-1);
    tracep->declBit(c+1547,"apb_access", false,-1);
    tracep->declBit(c+1548,"apb_wr", false,-1);
    tracep->declBit(c+1549,"apb_rd", false,-1);
    tracep->declBit(c+1550,"rd_ctrl", false,-1);
    tracep->declBit(c+1551,"sync_wr", false,-1);
    tracep->declBit(c+1552,"fb_wr", false,-1);
    tracep->declBit(c+1553,"fb_rd", false,-1);
    tracep->declBus(c+1554,"addr_offset", false,-1, 31,0);
    tracep->declBus(c+1555,"frame_waddr", false,-1, 18,0);
    tracep->declBus(c+1097,"sync", false,-1, 31,0);
    tracep->declBus(c+1098,"fb_addr", false,-1, 18,0);
    tracep->declBit(c+1099,"vga_hvalid", false,-1);
    tracep->declBit(c+1100,"vga_vvalid", false,-1);
    tracep->declBus(c+1101,"h_addr", false,-1, 9,0);
    tracep->declBus(c+1102,"v_addr", false,-1, 9,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+714,"sck", false,-1);
    tracep->declBit(c+1844,"ss", false,-1);
    tracep->declBit(c+1556,"mosi", false,-1);
    tracep->declBit(c+1845,"miso", false,-1);
    tracep->declBus(c+1846,"rx_shift", false,-1, 7,0);
    tracep->declBus(c+1847,"rx_bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1848,"rx_done", false,-1);
    tracep->declBus(c+1849,"tx_bit_cnt", false,-1, 3,0);
    tracep->declBit(c+1850,"r_miso", false,-1);
    tracep->declBit(c+1851,"rx_en", false,-1);
    tracep->declBit(c+1852,"rx_last_bit", false,-1);
    tracep->declBit(c+1853,"tx_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+714,"sck", false,-1);
    tracep->declBit(c+1103,"ss", false,-1);
    tracep->declBit(c+1556,"mosi", false,-1);
    tracep->declBit(c+1854,"miso", false,-1);
    tracep->declBit(c+1103,"reset", false,-1);
    tracep->declBus(c+1291,"state", false,-1, 2,0);
    tracep->declBus(c+1292,"counter", false,-1, 7,0);
    tracep->declBus(c+1293,"cmd", false,-1, 7,0);
    tracep->declBus(c+1294,"addr", false,-1, 23,0);
    tracep->declBus(c+1295,"data", false,-1, 31,0);
    tracep->declBit(c+1296,"ren", false,-1);
    tracep->declBus(c+1855,"rdata", false,-1, 31,0);
    tracep->declBus(c+1856,"raddr", false,-1, 31,0);
    tracep->declBus(c+1857,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+714,"clock", false,-1);
    tracep->declBit(c+1296,"valid", false,-1);
    tracep->declBus(c+1293,"cmd", false,-1, 7,0);
    tracep->declBus(c+1856,"addr", false,-1, 31,0);
    tracep->declBus(c+1855,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1423,"sck", false,-1);
    tracep->declBit(c+1424,"ce_n", false,-1);
    tracep->declBus(c+1808,"dio", false,-1, 3,0);
    tracep->declBus(c+2033,"PSRAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+1980,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1863,"CMD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1913,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1863,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1978,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+1979,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+1973,"CMD_QPIMODE", false,-1, 7,0);
    tracep->declBus(c+1971,"RD_DELAY", false,-1, 31,0);
    tracep->declBus(c+1874,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1994,"STATE_CMD", false,-1, 3,0);
    tracep->declBus(c+1993,"STATE_ADDR", false,-1, 3,0);
    tracep->declBus(c+1990,"STATE_RD_DELAY", false,-1, 3,0);
    tracep->declBus(c+1970,"STATE_WR", false,-1, 3,0);
    tracep->declBus(c+1991,"STATE_RD", false,-1, 3,0);
    tracep->declBus(c+1992,"STATE_RESP", false,-1, 3,0);
    tracep->declBus(c+1989,"STATE_QPIINIT", false,-1, 3,0);
    tracep->declBus(c+1602,"state", false,-1, 3,0);
    tracep->declBus(c+587,"cmd", false,-1, 7,0);
    tracep->declBus(c+1603,"addr", false,-1, 23,0);
    tracep->declBus(c+588,"wr_byte", false,-1, 7,0);
    tracep->declBit(c+589,"qpi_mode", false,-1);
    tracep->declBus(c+590,"cmd_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+591,"addr_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+592,"rd_delay_cnt", false,-1, 31,0);
    tracep->declBus(c+1604,"data_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+1858,"dio_out_r", false,-1, 3,0);
    tracep->declBus(c+1859,"dio_oe_r", false,-1, 3,0);
    tracep->declBus(c+1808,"dio_in", false,-1, 3,0);
    tracep->declBit(c+593,"cmd_done", false,-1);
    tracep->declBit(c+594,"addr_done", false,-1);
    tracep->declBit(c+1605,"data_done", false,-1);
    tracep->declBit(c+595,"rd_delay_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1_1 ");
    tracep->declBit(c+1809,"clk", false,-1);
    tracep->declBit(c+1557,"cke", false,-1);
    tracep->declBit(c+712,"cs", false,-1);
    tracep->declBit(c+717,"ras", false,-1);
    tracep->declBit(c+718,"cas", false,-1);
    tracep->declBit(c+719,"we", false,-1);
    tracep->declBus(c+1568,"a", false,-1, 12,0);
    tracep->declBus(c+1558,"ba", false,-1, 1,0);
    tracep->declBus(c+1586,"dqm", false,-1, 1,0);
    tracep->declBus(c+1775,"dq", false,-1, 15,0);
    tracep->declBus(c+1984,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+2034,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1969,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1989,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1990,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1991,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1970,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1992,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1993,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1994,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1874,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1995,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1104,"cmd", false,-1, 3,0);
    tracep->declBus(c+1131,"mode", false,-1, 12,0);
    tracep->declBus(c+1132,"row_open", false,-1, 3,0);
    tracep->declBus(c+1133,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1134,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1135,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1136,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1137,"rd_pending", false,-1);
    tracep->declBit(c+1138,"rd_burst", false,-1);
    tracep->declBus(c+1139,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1140,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1141,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1142,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1143,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1144,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1145,"wr_burst", false,-1);
    tracep->declBus(c+1146,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1147,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1148,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1149,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1150,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1151,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1152,"dq_oe", false,-1);
    tracep->declBus(c+1775,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1587,"active_fire", false,-1);
    tracep->declBit(c+1588,"read_fire", false,-1);
    tracep->declBit(c+1589,"write_fire", false,-1);
    tracep->declBit(c+1590,"bst_fire", false,-1);
    tracep->declBit(c+1591,"precharge_fire", false,-1);
    tracep->declBit(c+1592,"refresh_fire", false,-1);
    tracep->declBit(c+1593,"lmr_fire", false,-1);
    tracep->declBus(c+1153,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1154,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1776,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1777,"bank_is_open", false,-1);
    tracep->declBus(c+1155,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1156,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1157,"rd_first_beat", false,-1);
    tracep->declBit(c+1138,"rd_next_beat", false,-1);
    tracep->declBit(c+1152,"rd_data_valid", false,-1);
    tracep->declBus(c+1158,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1159,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1_2 ");
    tracep->declBit(c+1809,"clk", false,-1);
    tracep->declBit(c+1557,"cke", false,-1);
    tracep->declBit(c+712,"cs", false,-1);
    tracep->declBit(c+717,"ras", false,-1);
    tracep->declBit(c+718,"cas", false,-1);
    tracep->declBit(c+719,"we", false,-1);
    tracep->declBus(c+1568,"a", false,-1, 12,0);
    tracep->declBus(c+1558,"ba", false,-1, 1,0);
    tracep->declBus(c+1594,"dqm", false,-1, 1,0);
    tracep->declBus(c+1778,"dq", false,-1, 15,0);
    tracep->declBus(c+1984,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+2034,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1969,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1989,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1990,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1991,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1970,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1992,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1993,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1994,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1874,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1995,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1104,"cmd", false,-1, 3,0);
    tracep->declBus(c+1160,"mode", false,-1, 12,0);
    tracep->declBus(c+1161,"row_open", false,-1, 3,0);
    tracep->declBus(c+1162,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1163,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1164,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1165,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1166,"rd_pending", false,-1);
    tracep->declBit(c+1167,"rd_burst", false,-1);
    tracep->declBus(c+1168,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1169,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1170,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1171,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1172,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1173,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1174,"wr_burst", false,-1);
    tracep->declBus(c+1175,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1176,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1177,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1178,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1179,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1180,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1181,"dq_oe", false,-1);
    tracep->declBus(c+1778,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1587,"active_fire", false,-1);
    tracep->declBit(c+1588,"read_fire", false,-1);
    tracep->declBit(c+1589,"write_fire", false,-1);
    tracep->declBit(c+1590,"bst_fire", false,-1);
    tracep->declBit(c+1591,"precharge_fire", false,-1);
    tracep->declBit(c+1592,"refresh_fire", false,-1);
    tracep->declBit(c+1593,"lmr_fire", false,-1);
    tracep->declBus(c+1182,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1183,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1779,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1780,"bank_is_open", false,-1);
    tracep->declBus(c+1184,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1185,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1186,"rd_first_beat", false,-1);
    tracep->declBit(c+1167,"rd_next_beat", false,-1);
    tracep->declBit(c+1181,"rd_data_valid", false,-1);
    tracep->declBus(c+1187,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1188,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2_1 ");
    tracep->declBit(c+1809,"clk", false,-1);
    tracep->declBit(c+1557,"cke", false,-1);
    tracep->declBit(c+713,"cs", false,-1);
    tracep->declBit(c+717,"ras", false,-1);
    tracep->declBit(c+718,"cas", false,-1);
    tracep->declBit(c+719,"we", false,-1);
    tracep->declBus(c+1568,"a", false,-1, 12,0);
    tracep->declBus(c+1558,"ba", false,-1, 1,0);
    tracep->declBus(c+1586,"dqm", false,-1, 1,0);
    tracep->declBus(c+1775,"dq", false,-1, 15,0);
    tracep->declBus(c+1984,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+2034,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1969,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1989,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1990,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1991,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1970,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1992,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1993,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1994,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1874,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1995,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1105,"cmd", false,-1, 3,0);
    tracep->declBus(c+1189,"mode", false,-1, 12,0);
    tracep->declBus(c+1190,"row_open", false,-1, 3,0);
    tracep->declBus(c+1191,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1192,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1193,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1194,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1195,"rd_pending", false,-1);
    tracep->declBit(c+1196,"rd_burst", false,-1);
    tracep->declBus(c+1197,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1198,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1199,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1200,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1201,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1202,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1203,"wr_burst", false,-1);
    tracep->declBus(c+1204,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1205,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1206,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1207,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1208,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1209,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1210,"dq_oe", false,-1);
    tracep->declBus(c+1775,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1595,"active_fire", false,-1);
    tracep->declBit(c+1596,"read_fire", false,-1);
    tracep->declBit(c+1597,"write_fire", false,-1);
    tracep->declBit(c+1598,"bst_fire", false,-1);
    tracep->declBit(c+1599,"precharge_fire", false,-1);
    tracep->declBit(c+1600,"refresh_fire", false,-1);
    tracep->declBit(c+1601,"lmr_fire", false,-1);
    tracep->declBus(c+1211,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1212,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1781,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1782,"bank_is_open", false,-1);
    tracep->declBus(c+1213,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1214,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1215,"rd_first_beat", false,-1);
    tracep->declBit(c+1196,"rd_next_beat", false,-1);
    tracep->declBit(c+1210,"rd_data_valid", false,-1);
    tracep->declBus(c+1216,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1217,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2_2 ");
    tracep->declBit(c+1809,"clk", false,-1);
    tracep->declBit(c+1557,"cke", false,-1);
    tracep->declBit(c+713,"cs", false,-1);
    tracep->declBit(c+717,"ras", false,-1);
    tracep->declBit(c+718,"cas", false,-1);
    tracep->declBit(c+719,"we", false,-1);
    tracep->declBus(c+1568,"a", false,-1, 12,0);
    tracep->declBus(c+1558,"ba", false,-1, 1,0);
    tracep->declBus(c+1594,"dqm", false,-1, 1,0);
    tracep->declBus(c+1778,"dq", false,-1, 15,0);
    tracep->declBus(c+1984,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+2034,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1969,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1989,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1990,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1991,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1970,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1992,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1993,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1994,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1874,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1995,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1105,"cmd", false,-1, 3,0);
    tracep->declBus(c+1218,"mode", false,-1, 12,0);
    tracep->declBus(c+1219,"row_open", false,-1, 3,0);
    tracep->declBus(c+1220,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1221,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1222,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1223,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1224,"rd_pending", false,-1);
    tracep->declBit(c+1225,"rd_burst", false,-1);
    tracep->declBus(c+1226,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1227,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1228,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1229,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1230,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1231,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1232,"wr_burst", false,-1);
    tracep->declBus(c+1233,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1234,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1235,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1236,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1237,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1238,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1239,"dq_oe", false,-1);
    tracep->declBus(c+1778,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1595,"active_fire", false,-1);
    tracep->declBit(c+1596,"read_fire", false,-1);
    tracep->declBit(c+1597,"write_fire", false,-1);
    tracep->declBit(c+1598,"bst_fire", false,-1);
    tracep->declBit(c+1599,"precharge_fire", false,-1);
    tracep->declBit(c+1600,"refresh_fire", false,-1);
    tracep->declBit(c+1601,"lmr_fire", false,-1);
    tracep->declBus(c+1240,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1241,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1783,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1784,"bank_is_open", false,-1);
    tracep->declBus(c+1242,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1243,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1244,"rd_first_beat", false,-1);
    tracep->declBit(c+1225,"rd_next_beat", false,-1);
    tracep->declBit(c+1239,"rd_data_valid", false,-1);
    tracep->declBus(c+1245,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1246,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h9fe0647e__0;
    VlWide<4>/*127:0*/ __Vtemp_h5c06b5fc__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+10,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+12,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+13,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+14,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+15,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+16,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+17,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+18,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+19,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+24,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+25,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+26,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+27,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+38,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+44,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+45,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+46,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+49,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+50,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+51,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+52,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullWData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__fifo[0]),103);
    bufp->fullWData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__fifo[1]),103);
    bufp->fullWData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__fifo[2]),103);
    bufp->fullWData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__fifo[3]),103);
    bufp->fullWData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__fifo[4]),103);
    bufp->fullWData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__fifo[5]),103);
    bufp->fullWData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__fifo[6]),103);
    bufp->fullWData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__fifo[7]),103);
    bufp->fullBit(oldp+147,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+148,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+151,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+155,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+156,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+157,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+158,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+162,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+164,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+197,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)))));
    bufp->fullQData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+203,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+206,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+207,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+273,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+274,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+275,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+276,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+375,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+387,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+399,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+407,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+411,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+415,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+419,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+423,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+427,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+431,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+439,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+443,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+447,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+451,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+455,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+459,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+463,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+467,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+471,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+518,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+519,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+520,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+522,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+523,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+524,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+525,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+526,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+527,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+528,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+529,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+530,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+531,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+532,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+533,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+534,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+535,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+536,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+537,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+538,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+539,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+540,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+541,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+542,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+543,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+544,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+545,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+546,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+547,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+548,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+549,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+550,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+551,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+552,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+553,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+554,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+555,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+556,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+557,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+558,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+559,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+560,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+561,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+562,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+563,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+564,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+565,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+566,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+567,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+568,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+569,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+570,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+571,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+572,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+573,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+574,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+575,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+576,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+577,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+578,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+579,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+580,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+581,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+582,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+583,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+584,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+585,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+586,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte),8);
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode));
    bufp->fullIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt),32);
    bufp->fullIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt),32);
    bufp->fullIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt),32);
    bufp->fullBit(oldp+593,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode)
                              ? (1U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt)
                              : (7U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt))));
    bufp->fullBit(oldp+594,((0x14U == vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt)));
    bufp->fullBit(oldp+595,((5U == vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt)));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_serial));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_store));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_ctrl));
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd),5);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst),32);
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_mret));
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+605,((0xfffffff8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__addr_q)),32);
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_pending));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__b_wait_en));
    bufp->fullBit(oldp+608,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state))));
    bufp->fullBit(oldp+609,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state))));
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata),32);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid),4);
    bufp->fullBit(oldp+612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__b_wait_en))));
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q),32);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awsize_q),3);
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending));
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_addr_ex),5);
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fencei_ex));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__exc_pending_ex));
    bufp->fullIData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend),32);
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devisor),32);
    bufp->fullQData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem),33);
    bufp->fullBit(oldp+623,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient),32);
    bufp->fullBit(oldp+625,((0x20U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt)));
    bufp->fullIData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt),32);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state),2);
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done));
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state),2);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi),32);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low),32);
    bufp->fullWData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0),128);
    bufp->fullWData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1),128);
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__addr_q),32);
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q),22);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q),7);
    bufp->fullWData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit),128);
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q));
    bufp->fullQData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt),64);
    bufp->fullQData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt),64);
    bufp->fullQData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt),64);
    bufp->fullQData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles),64);
    bufp->fullQData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles),64);
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_buf_valid));
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0]),32);
    bufp->fullIData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[1]),32);
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[2]),32);
    bufp->fullIData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[3]),32);
    bufp->fullIData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[4]),32);
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[5]),32);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[6]),32);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[7]),32);
    bufp->fullIData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[8]),32);
    bufp->fullIData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[9]),32);
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[10]),32);
    bufp->fullIData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[11]),32);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[12]),32);
    bufp->fullIData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[13]),32);
    bufp->fullIData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[14]),32);
    bufp->fullIData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[15]),32);
    bufp->fullIData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[16]),32);
    bufp->fullIData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[17]),32);
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[18]),32);
    bufp->fullIData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[19]),32);
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[20]),32);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[21]),32);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[22]),32);
    bufp->fullIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[23]),32);
    bufp->fullIData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[24]),32);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[25]),32);
    bufp->fullIData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[26]),32);
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[27]),32);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[28]),32);
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[29]),32);
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[30]),32);
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[31]),32);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__i),32);
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect) 
                                   & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd)) 
                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_use_rs1) 
                                          & ((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd))) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_use_rs2) 
                                            & ((0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd))))))))));
    bufp->fullBit(oldp+701,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_hold_serial) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect) 
                                          & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd)) 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_use_rs1) 
                                                 & ((0x1fU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd))) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_use_rs2) 
                                                   & ((0x1fU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                          >> 0x14U)) 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd)))))))))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid))));
    bufp->fullBit(oldp+702,(((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                             | ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                | ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                   | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                      | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                         | ((0x67U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                            | (((0x6fU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                                | (0x73U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex))) 
                                               & (0U 
                                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_addr_ex)))))))))));
    bufp->fullBit(oldp+703,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid)) 
                                & (((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                    | ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                       | ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                          | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                             | ((0x13U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                                | ((0x67U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                                   | (((0x6fU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                                       | (0x73U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex))) 
                                                      & (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_addr_ex))))))))) 
                                   & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd)))))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready))));
    bufp->fullBit(oldp+705,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready)))));
    bufp->fullBit(oldp+706,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[
                              (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                     >> 8U))] >> (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                                     >> 3U))) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1
                                [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                           >> 3U))] 
                                == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+707,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_pending)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready))));
    bufp->fullBit(oldp+708,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rvalid)))));
    bufp->fullBit(oldp+709,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rvalid) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner)))));
    bufp->fullBit(oldp+710,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0)))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wvalid))));
    bufp->fullBit(oldp+712,((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q)))));
    bufp->fullBit(oldp+713,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q)) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 3U)))));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+716,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+717,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+718,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+719,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+720,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))));
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_prdata),32);
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_pslverr));
    bufp->fullBit(oldp+723,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))));
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum),32);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_paddr),32);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pprot),3);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pwrite));
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pwdata),32);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pstrb),4);
    bufp->fullIData(oldp+732,(((IData)(0x41aU) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum)),32);
    bufp->fullBit(oldp+733,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
    bufp->fullCData(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+735,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy)))));
    bufp->fullBit(oldp+736,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy)))));
    bufp->fullBit(oldp+737,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy)))));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_q),4);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q),2);
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q),4);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q),32);
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q),8);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize_q),3);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q),2);
    bufp->fullBit(oldp+747,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy) 
                             & ((8U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent)))));
    bufp->fullBit(oldp+748,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 5U)))));
    bufp->fullCData(oldp+749,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+751,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q),4);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q),32);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q),8);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awsize_q),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q),2);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q),32);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstrb_q),4);
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q));
    bufp->fullBit(oldp+762,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent)))));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullQData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt),64);
    bufp->fullQData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc),64);
    bufp->fullBit(oldp+768,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))));
    bufp->fullBit(oldp+769,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire));
    bufp->fullQData(oldp+773,((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                               + (5ULL * (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                          - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc)))),64);
    bufp->fullQData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt),64);
    bufp->fullQData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc),64);
    bufp->fullQData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc),64);
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bready_q));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_b_fire));
    __Vtemp_h9fe0647e__0[0U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr] 
                                 << 7U) | ((0x78U & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                             << 3U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                               >> 4U))));
    __Vtemp_h9fe0647e__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr] 
                                 >> 0x19U) | ((IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                                                       + 
                                                       (5ULL 
                                                        * 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                                         - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc)))) 
                                              << 7U));
    __Vtemp_h9fe0647e__0[2U] = (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                                          + (5ULL * 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                              - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc)))) 
                                 >> 0x19U) | ((IData)(
                                                      ((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                                                        + 
                                                        (5ULL 
                                                         * 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                                          - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc))) 
                                                       >> 0x20U)) 
                                              << 7U));
    __Vtemp_h9fe0647e__0[3U] = ((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                                          + (5ULL * 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                              - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc))) 
                                         >> 0x20U)) 
                                >> 0x19U);
    bufp->fullWData(oldp+788,(__Vtemp_h9fe0647e__0),103);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr),3);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count),4);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl),16);
    bufp->fullSData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state),16);
    bufp->fullIData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl),32);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve));
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf),11);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt),4);
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn0));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn1));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_syn1_dly));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_pulse));
    bufp->fullCData(oldp+805,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                        >> 2U))),8);
    bufp->fullBit(oldp+806,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
    bufp->fullBit(oldp+807,((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status),32);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr),5);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr),5);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count),6);
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_sck));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_ce_n));
    bufp->fullCData(oldp+814,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+815,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+818,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0xcU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
    bufp->fullBit(oldp+819,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+822,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+823,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))));
    bufp->fullBit(oldp+824,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ready));
    bufp->fullBit(oldp+827,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state),2);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__nstate),2);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter),4);
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+834,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+838,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullCData(oldp+842,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q)
                                    : 0U))),8);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+855,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+856,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+859,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+860,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+861,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+862,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+863,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+865,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+873,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q));
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[0]),4);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[1]),4);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [0U][0U]),13);
    bufp->fullSData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [0U][1U]),13);
    bufp->fullSData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [0U][2U]),13);
    bufp->fullSData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [0U][3U]),13);
    bufp->fullSData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [1U][0U]),13);
    bufp->fullSData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [1U][1U]),13);
    bufp->fullSData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [1U][2U]),13);
    bufp->fullSData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [1U][3U]),13);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rd_q));
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q),32);
    bufp->fullBit(oldp+900,((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
                             [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q])));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ridx),32);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w),32);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w));
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr_q),32);
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy));
    bufp->fullIData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err));
    bufp->fullSData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+922,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+923,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+924,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+925,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+926,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+927,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+928,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+932,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+934,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+935,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+937,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+941,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+942,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+944,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+962,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+963,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+964,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+965,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+966,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+967,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+968,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+971,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+972,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+973,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+992,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+999,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1018,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1019,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1020,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1021,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1022,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1041,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1042,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1043,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1044,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1045,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1047,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1066,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1083,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1094,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullIData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync),32);
    bufp->fullIData(oldp+1098,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_hvalid)
                                   ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                                - (IData)(0x90U)))
                                   : 0U) << 9U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_vvalid)
                                                    ? 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                       - (IData)(0x23U)))
                                                    : 0U))),19);
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_hvalid));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_vvalid));
    bufp->fullSData(oldp+1101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_hvalid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                              - (IData)(0x90U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1102,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_vvalid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                              - (IData)(0x23U)))
                                 : 0U)),10);
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cmd),4);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cmd),4);
    bufp->fullCData(oldp+1106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_h12f66507__0)
                                 ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pprot))),3);
    bufp->fullBit(oldp+1107,((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_bad_wr) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid))
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_invalid_req)))) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
                                       | (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)) 
                                          | ((IData)(
                                                     ((0U 
                                                       == 
                                                       (0x30000000U 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                                      & (~ 
                                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                                            : 
                                                           (0x16U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))))) 
                                             | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)) 
                                                | ((0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4))))))))));
    bufp->fullBit(oldp+1108,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_bad_wr) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err))
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_invalid_req)))) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                 & ((~ ((0U == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                        | ((4U == (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                           | ((8U == 
                                               (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                              | (0xcU 
                                                 == 
                                                 (0xffU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))))) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access))))));
    bufp->fullIData(oldp+1109,(((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl)
                                 : ((4U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state)
                                     : ((8U == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl
                                         : ((0xcU == 
                                             (0xffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve)
                                             : 0U))))),32);
    bufp->fullBit(oldp+1110,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))))));
    bufp->fullBit(oldp+1111,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)
                                   ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_bad_wr) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid))
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_invalid_req)))));
    bufp->fullBit(oldp+1113,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_bad_wr) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err))
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_invalid_req)))));
    bufp->fullIData(oldp+1114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                     : 0U))),32);
    bufp->fullCData(oldp+1115,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                                 ? 0U : (0xfU & (vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                                 >> 3U)))),4);
    bufp->fullIData(oldp+1116,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                                 ? 0U : ((vlSelf->__VdfgTmp_hb5d34fc7__0[1U] 
                                          << 0x19U) 
                                         | (vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                            >> 7U)))),32);
    bufp->fullCData(oldp+1117,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                                 ? 0U : (3U & (vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                               >> 1U)))),2);
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))) {
        __Vtemp_h5c06b5fc__0[0U] = 0U;
        __Vtemp_h5c06b5fc__0[1U] = 0U;
        __Vtemp_h5c06b5fc__0[2U] = 0U;
        __Vtemp_h5c06b5fc__0[3U] = 0U;
    } else {
        __Vtemp_h5c06b5fc__0[0U] = vlSelf->__VdfgTmp_hb5d34fc7__0[0U];
        __Vtemp_h5c06b5fc__0[1U] = vlSelf->__VdfgTmp_hb5d34fc7__0[1U];
        __Vtemp_h5c06b5fc__0[2U] = vlSelf->__VdfgTmp_hb5d34fc7__0[2U];
        __Vtemp_h5c06b5fc__0[3U] = vlSelf->__VdfgTmp_hb5d34fc7__0[3U];
    }
    bufp->fullWData(oldp+1118,(__Vtemp_h5c06b5fc__0),103);
    bufp->fullBit(oldp+1122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1123,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))
                                     ? 0U : 2U) : (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))),2);
    bufp->fullSData(oldp+1124,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q) 
                                 << 0xdU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullCData(oldp+1128,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q)) 
                                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q))
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1129,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
                               [(1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                       >> 0x19U))] 
                               >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                         >> 0xbU))) 
                              & ((0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 0xdU)) 
                                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                                 [(1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                         >> 0x19U))]
                                 [(3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                         >> 0xbU))]))));
    bufp->fullBit(oldp+1130,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
                                    [(1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 0x19U))] 
                                    >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                              >> 0xbU))))));
    bufp->fullSData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode),13);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open),4);
    bufp->fullSData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0),13);
    bufp->fullSData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1),13);
    bufp->fullSData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2),13);
    bufp->fullSData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3),13);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst));
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_bank),2);
    bufp->fullSData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_row),13);
    bufp->fullSData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain),10);
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst));
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank),2);
    bufp->fullSData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row),13);
    bufp->fullSData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain),10);
    bufp->fullSData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_out),16);
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_oe));
    bufp->fullSData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len),10);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cas_lat),3);
    bufp->fullSData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1157,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_word),16);
    bufp->fullSData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullSData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode),13);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open),4);
    bufp->fullSData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0),13);
    bufp->fullSData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1),13);
    bufp->fullSData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2),13);
    bufp->fullSData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3),13);
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst));
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_bank),2);
    bufp->fullSData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_row),13);
    bufp->fullSData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain),10);
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst));
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank),2);
    bufp->fullSData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row),13);
    bufp->fullSData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain),10);
    bufp->fullSData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_out),16);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_oe));
    bufp->fullSData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len),10);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__cas_lat),3);
    bufp->fullSData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1186,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_word),16);
    bufp->fullSData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullSData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode),13);
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open),4);
    bufp->fullSData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0),13);
    bufp->fullSData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1),13);
    bufp->fullSData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2),13);
    bufp->fullSData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3),13);
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst));
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_bank),2);
    bufp->fullSData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_row),13);
    bufp->fullSData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain),10);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst));
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank),2);
    bufp->fullSData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row),13);
    bufp->fullSData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain),10);
    bufp->fullSData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_out),16);
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_oe));
    bufp->fullSData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len),10);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cas_lat),3);
    bufp->fullSData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1215,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_word),16);
    bufp->fullSData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullSData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode),13);
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open),4);
    bufp->fullSData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0),13);
    bufp->fullSData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1),13);
    bufp->fullSData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2),13);
    bufp->fullSData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3),13);
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending));
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst));
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_bank),2);
    bufp->fullSData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_row),13);
    bufp->fullSData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain),10);
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst));
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank),2);
    bufp->fullSData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row),13);
    bufp->fullSData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain),10);
    bufp->fullSData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_out),16);
    bufp->fullBit(oldp+1239,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_oe));
    bufp->fullSData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len),10);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__cas_lat),3);
    bufp->fullSData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1244,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_word),16);
    bufp->fullSData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_tx_start));
    bufp->fullIData(oldp+1252,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullIData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__dnpc_reg),32);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_data_reg),32);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[0]),8);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[1]),8);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[2]),8);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[3]),8);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[4]),8);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[5]),8);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[6]),8);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[7]),8);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[8]),8);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[9]),8);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[10]),8);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[11]),8);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[12]),8);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[13]),8);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[14]),8);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[15]),8);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[16]),8);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[17]),8);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[18]),8);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[19]),8);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[20]),8);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[21]),8);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[22]),8);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[23]),8);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[24]),8);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[25]),8);
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[26]),8);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[27]),8);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[28]),8);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[29]),8);
    bufp->fullCData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[30]),8);
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[31]),8);
    bufp->fullCData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1296,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullCData(oldp+1297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_req_can_grant)
                                 ? 1U : 0U)),8);
    bufp->fullIData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_addr_r),32);
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_data_r),32);
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_wstrb_r),4);
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready));
    bufp->fullBit(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullIData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc),32);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_hold_serial));
    bufp->fullIData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst),32);
    bufp->fullIData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_pc),32);
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc),32);
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_exc_valid));
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_exc_code),5);
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_exc_tval),32);
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid));
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_code),5);
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_tval),32);
    bufp->fullCData(oldp+1318,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)),7);
    bufp->fullCData(oldp+1319,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1320,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1321,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1322,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                         >> 7U))),5);
    bufp->fullIData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_imm),32);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_load));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_store));
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_branch));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_jal));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_jalr));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_csr));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_fencei));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_mdu));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_ctrl));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_serial));
    bufp->fullBit(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wen_expect));
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_use_rs1));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_use_rs2));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_ecall));
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_ebreak));
    bufp->fullBit(oldp+1339,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h75345f17__0) 
                              & (0x302U == (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_imm)))));
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_illegal));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_dec_exc_valid));
    bufp->fullCData(oldp+1342,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_illegal)
                                 ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_ebreak)
                                          ? 3U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_ecall)
                                                   ? 0xbU
                                                   : 0U)))),5);
    bufp->fullIData(oldp+1343,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_illegal)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst
                                 : 0U)),32);
    bufp->fullIData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullBit(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid));
    bufp->fullIData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_inst),32);
    bufp->fullIData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_pc),32);
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid));
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_data),32);
    bufp->fullBit(oldp+1351,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullBit(oldp+1352,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullBit(oldp+1353,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullIData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_lsu_data),32);
    bufp->fullIData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr),32);
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush));
    bufp->fullBit(oldp+1357,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                              & ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fun_ex))))));
    bufp->fullIData(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_tvec),32);
    bufp->fullIData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_epc),32);
    bufp->fullBit(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_arvalid));
    bufp->fullBit(oldp+1361,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state))));
    bufp->fullCData(oldp+1362,(((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                 ? 3U : ((0x2000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                          ? 0xfU : 1U))),8);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid));
    bufp->fullBit(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready));
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__pc_ex),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src1_ex),32);
    bufp->fullIData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src2_ex),32);
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex),7);
    bufp->fullCData(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fun_ex),3);
    bufp->fullIData(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex),32);
    bufp->fullIData(oldp+1371,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__pc_ex)),32);
    bufp->fullQData(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__signed_mulh__Vstatic__mul_result),64);
    bufp->fullQData(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__unsigned_mulh__Vstatic__mul_result),64);
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state),3);
    bufp->fullBit(oldp+1377,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullBit(oldp+1378,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state))));
    bufp->fullIData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh),32);
    bufp->fullIData(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_unsigned),32);
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_div));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_divu));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_rem));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_remu));
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mdu_op),2);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_div_op));
    bufp->fullIData(oldp+1387,(((0x300U == (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_status
                                 : ((0x305U == (0xfffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_tvec
                                     : ((0x341U == 
                                         (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_epc
                                         : ((0x342U 
                                             == (0xfffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_cause
                                             : ((0x343U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_tval
                                                 : 
                                                ((0xf11U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                                  ? 0x79737978U
                                                  : 
                                                 ((0xf12U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                                   ? 0x16fe3b5U
                                                   : 0xffffffffU)))))))),32);
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__csr_wen));
    bufp->fullIData(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_status),32);
    bufp->fullIData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_cause),32);
    bufp->fullIData(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_tval),32);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state),2);
    bufp->fullBit(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_req_can_grant));
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__offset_q),3);
    bufp->fullIData(oldp+1395,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                >> 0xaU)),22);
    bufp->fullCData(oldp+1396,((0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                         >> 3U))),7);
    bufp->fullCData(oldp+1397,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc)),3);
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit0));
    bufp->fullBit(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit));
    bufp->fullBit(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt));
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_data_buf),32);
    bufp->fullBit(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_drop_q));
    bufp->fullCData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state),2);
    bufp->fullBit(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_outstanding));
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_pc),32);
    bufp->fullBit(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__drop_resp));
    bufp->fullCData(oldp+1407,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr)),2);
    bufp->fullCData(oldp+1408,((0xfU & ((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                         ? ((IData)(3U) 
                                            << (3U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr))
                                         : ((0x2000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                             ? ((IData)(0xfU) 
                                                << 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr))
                                             : ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr)))))),4);
    bufp->fullIData(oldp+1409,(((0x1000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                 ? ((0x1fU >= (0x18U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr 
                                                  << 3U)))
                                     ? (((0U != (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                    >> 0x14U)))
                                          ? (0xffffU 
                                             & vlSelf->__VdfgTmp_hc63e2312__0)
                                          : 0U) << 
                                        (0x18U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr 
                                                  << 3U)))
                                     : 0U) : ((0x2000U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2
                                               : ((0x1fU 
                                                   >= 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr 
                                                       << 3U)))
                                                   ? 
                                                  (((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                         >> 0x14U)))
                                                     ? 
                                                    (0xffU 
                                                     & vlSelf->__VdfgTmp_hc63e2312__0)
                                                     : 0U) 
                                                   << 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr 
                                                       << 3U)))
                                                   : 0U)))),32);
    bufp->fullBit(oldp+1410,(((1U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                            >> 0xcU))) 
                              | (5U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                              >> 0xcU))))));
    bufp->fullBit(oldp+1411,((2U == (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_misalign));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_addr_misalign));
    bufp->fullCData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_offset_r),2);
    bufp->fullCData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_fun_r),3);
    bufp->fullBit(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint));
    bufp->fullBit(oldp+1417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))));
    bufp->fullCData(oldp+1418,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_addr_misalign)
                                 ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_addr_misalign)
                                          ? 6U : 0U))),5);
    bufp->fullCData(oldp+1419,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_resp_exc_valid)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_resp_exc_code)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_code))),5);
    bufp->fullIData(oldp+1420,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_resp_exc_valid)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_resp_exc_tval
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_tval)),32);
    bufp->fullBit(oldp+1421,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint))));
    bufp->fullBit(oldp+1422,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_dec_exc_valid) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_dec_exc_valid))));
    bufp->fullBit(oldp+1423,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1424,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1428,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_dn_done));
    bufp->fullBit(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1433,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullIData(oldp+1436,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access));
    bufp->fullBit(oldp+1440,(((~ ((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                  | ((4U == (0xffU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                     | ((8U == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                        | (0xcU == 
                                           (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access))));
    bufp->fullBit(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1444,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1445,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1446,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1450,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1453,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid));
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid),4);
    bufp->fullBit(oldp+1463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rvalid));
    bufp->fullCData(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid),4);
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rlast));
    bufp->fullSData(oldp+1466,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)))),16);
    bufp->fullSData(oldp+1467,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)))),16);
    bufp->fullBit(oldp+1468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullIData(oldp+1484,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1485,(((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                              | ((4U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                 | ((8U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                    | (0xcU == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))))));
    bufp->fullBit(oldp+1486,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel))));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr));
    bufp->fullBit(oldp+1488,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access))));
    bufp->fullCData(oldp+1489,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),8);
    bufp->fullBit(oldp+1490,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel))));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_access));
    bufp->fullBit(oldp+1492,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_access) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite))));
    bufp->fullBit(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_read));
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren));
    bufp->fullBit(oldp+1495,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_read) 
                              & (4U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1503,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullCData(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1507,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1508,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1509,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1510,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))
                                 ? 0U : (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb) 
                                             >> 1U))
                                          ? 1U : ((
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb) 
                                                      >> 2U))
                                                   ? 2U
                                                   : 
                                                  (((1U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb) 
                                                       >> 3U))
                                                    ? 3U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb) 
                                                        >> 2U))
                                                     ? 2U
                                                     : 0U)))))),2);
    bufp->fullIData(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__addr),24);
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1513,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullCData(oldp+1514,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1516,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1517,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel))));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_access));
    bufp->fullBit(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_rd));
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_wr));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash));
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg));
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_setup_flash));
    bufp->fullBit(oldp+1524,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_rd) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash))));
    bufp->fullBit(oldp+1525,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_rd) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg))));
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_spi_wr));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_bad_wr));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_invalid_req));
    bufp->fullCData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_r),5);
    bufp->fullIData(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r),32);
    bufp->fullCData(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r),4);
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_r));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_r));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_r));
    bufp->fullIData(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1536,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_r))))));
    bufp->fullBit(oldp+1537,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_r))))));
    bufp->fullCData(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1539,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_r))))));
    bufp->fullCData(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1541,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                      >> 2U))),3);
    bufp->fullCData(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1546,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel))));
    bufp->fullBit(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_access));
    bufp->fullBit(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr));
    bufp->fullBit(oldp+1549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd));
    bufp->fullBit(oldp+1550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                              & (0x21000000U == (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    bufp->fullBit(oldp+1551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr) 
                              & (0x21000004U == (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    bufp->fullBit(oldp+1552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))));
    bufp->fullBit(oldp+1553,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))));
    bufp->fullIData(oldp+1554,(((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                - (IData)(0x21000008U))),32);
    bufp->fullIData(oldp+1555,((0x7ffffU & (((0x3fffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                             - (IData)(0x21000008U)) 
                                            >> 2U))),19);
    bufp->fullBit(oldp+1556,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullBit(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullSData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullCData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullCData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_bank_q),2);
    bufp->fullSData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_row_q),13);
    bufp->fullSData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_col_q),13);
    bufp->fullCData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_wr_q),4);
    bufp->fullBit(oldp+1577,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0x19U))));
    bufp->fullCData(oldp+1578,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xbU))),2);
    bufp->fullSData(oldp+1579,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 2U))),13);
    bufp->fullSData(oldp+1580,((0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 0xdU))),13);
    bufp->fullCData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullCData(oldp+1586,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1587,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_fire));
    bufp->fullBit(oldp+1588,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__read_fire));
    bufp->fullBit(oldp+1589,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire));
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bst_fire));
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__precharge_fire));
    bufp->fullBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__refresh_fire));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__lmr_fire));
    bufp->fullCData(oldp+1594,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_fire));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__read_fire));
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire));
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bst_fire));
    bufp->fullBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__precharge_fire));
    bufp->fullBit(oldp+1600,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__refresh_fire));
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__lmr_fire));
    bufp->fullCData(oldp+1602,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+1603,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt),32);
    bufp->fullBit(oldp+1605,((0x1cU == vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)));
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1608,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullQData(oldp+1609,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1611,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullCData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullIData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullIData(oldp+1616,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1617,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1618,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullCData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1621,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullCData(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullCData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1625,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullBit(oldp+1626,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullBit(oldp+1627,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1628,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1629,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1630,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1631,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1632,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1633,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1639,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_araddr),32);
    bufp->fullCData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arsize),3);
    bufp->fullCData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arburst),2);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire));
    bufp->fullBit(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire));
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire));
    bufp->fullBit(oldp+1647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_w_fire));
    bufp->fullBit(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire));
    bufp->fullBit(oldp+1649,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullBit(oldp+1675,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1678,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1679,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1682,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awready));
    bufp->fullBit(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awvalid));
    bufp->fullBit(oldp+1686,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_wvalid));
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_arready));
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_arvalid));
    bufp->fullBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1707,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dec_exc_valid));
    bufp->fullBit(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_dec_ar_valid));
    bufp->fullBit(oldp+1722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready))));
    bufp->fullBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_fire));
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_dec_exc_valid));
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_resp_exc_valid));
    bufp->fullCData(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_resp_exc_code),5);
    bufp->fullIData(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_resp_exc_tval),32);
    bufp->fullBit(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_commit));
    bufp->fullBit(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_has_exc));
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_commit));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_commit));
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__normal_ctrl_redirect));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush));
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_issue_base_masked));
    bufp->fullBit(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire));
    bufp->fullBit(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_store_capture_valid));
    bufp->fullBit(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_accept_ready));
    bufp->fullBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_take));
    bufp->fullIData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata),32);
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid));
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullBit(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid));
    bufp->fullBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready));
    bufp->fullBit(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rvalid));
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid));
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready));
    bufp->fullBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wvalid));
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_bvalid));
    bufp->fullBit(oldp+1753,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint))));
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_r_req_can_grant));
    bufp->fullBit(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_w_req_can_grant));
    bufp->fullBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_ar_fire));
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_ar_fire));
    bufp->fullBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire));
    bufp->fullBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__aw_issue_en));
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__w_issue_en));
    bufp->fullBit(oldp+1761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_aw_fire));
    bufp->fullBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_w_fire));
    bufp->fullBit(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_b_fire));
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_ar_fire));
    bufp->fullBit(oldp+1765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire));
    bufp->fullBit(oldp+1766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__id_fire));
    bufp->fullBit(oldp+1767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_addr_misalign));
    bufp->fullBit(oldp+1768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint));
    bufp->fullBit(oldp+1769,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready))));
    bufp->fullBit(oldp+1770,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready))));
    bufp->fullIData(oldp+1771,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullIData(oldp+1774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1775,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1776,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1777,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open));
    bufp->fullSData(oldp+1778,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1779,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1780,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open));
    bufp->fullSData(oldp+1781,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1782,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open));
    bufp->fullSData(oldp+1783,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1784,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open));
    bufp->fullBit(oldp+1785,(vlSelf->clock));
    bufp->fullBit(oldp+1786,(vlSelf->reset));
    bufp->fullSData(oldp+1787,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1788,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1789,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1790,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1791,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1792,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1793,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1794,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1795,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1796,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1797,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1798,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1799,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1800,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1801,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1802,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1803,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1804,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1805,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1806,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1807,((((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1809,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1810,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg)
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                          : 0U)) : 0U) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                             << 0x18U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                         : 0U) : 0U) 
                                   | (((0U == (3U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                                >> 0x1cU)))
                                        ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                            [3U] << 0x18U) 
                                           | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                               [2U] 
                                               << 0x10U) 
                                              | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [1U] 
                                                  << 8U) 
                                                 | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [0U])))
                                        : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xffU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state)
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xffU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl
                                                      : 
                                                     ((0xcU 
                                                       == 
                                                       (0xffU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve)
                                                       : 0U))))
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                                        ? 0U
                                                        : 
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr])
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_read) 
                                                        & (4U 
                                                           == 
                                                           (0xfU 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status
                                                        : 0U))
                                                      : 0U) 
                                                    | ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                                            >> 0x1cU)))
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                                                         & (0x21000000U 
                                                            == 
                                                            (0x3fffffffU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))
                                                         ? 0x28001e0U
                                                         : 
                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__frame_buf
                                                         [
                                                         (0x7ffffU 
                                                          & (((0x3fffffffU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                                              - (IData)(0x21000008U)) 
                                                             >> 2U))]
                                                          : 0U))
                                                        : 0U))))))),32);
    bufp->fullCData(oldp+1811,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel) 
                                                  & (1U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))
                                                  ? 0U
                                                  : 3U)
                                              : ((1U 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt)
                                                  ? 3U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_dn_done)
                                                  ? 
                                                 ((0x100U 
                                                   >= vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum)
                                                   ? 3U
                                                   : 2U)
                                                  : 1U)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_tx_start)
                                                  ? 1U
                                                  : 0U))))),3);
    bufp->fullIData(oldp+1812,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                                 & (0x21000000U == 
                                    (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))
                                 ? 0x28001e0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))
                                                  ? 
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__frame_buf
                                                 [(0x7ffffU 
                                                   & (((0x3fffffffU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                                       - (IData)(0x21000008U)) 
                                                      >> 2U))]
                                                  : 0U))),32);
    bufp->fullIData(oldp+1813,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)
                                 ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                     ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr])
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_read) 
                                     & (4U == (0xfU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status
                                     : 0U))),32);
    bufp->fullIData(oldp+1814,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1815,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1816,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullQData(oldp+1818,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1820,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1821,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullCData(oldp+1822,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                << 0x1eU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                      << 0x1aU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                               << 0x14U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                  << 0x12U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                        << 0xeU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                              << 0xaU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                              >> (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                     << 1U))))
                                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q)
                                                  : 0U)))),2);
    bufp->fullIData(oldp+1823,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                  ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 3U))
                                       : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                                  : 0U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                    ? 
                                                   ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       (vlSelf->__VdfgTmp_hf132a334__0 
                                                        >> 0x18U)
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                     << 0x18U) 
                                                    | ((0xff0000U 
                                                        & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? 
                                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                              ? 
                                                             (vlSelf->__VdfgTmp_hf132a334__0 
                                                              >> 0x10U)
                                                              : 0U)
                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                           << 0x10U)) 
                                                       | ((0xff00U 
                                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                ? 
                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                 ? 
                                                                (vlSelf->__VdfgTmp_hf132a334__0 
                                                                 >> 8U)
                                                                 : 0U)
                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                                 ? 
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                  ? vlSelf->__VdfgTmp_hf132a334__0
                                                                  : 0U)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                                    : 0U)))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                            ? ((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                                                ? 0U
                                                : (
                                                   (vlSelf->__VdfgTmp_hb5d34fc7__0[1U] 
                                                    << 0x19U) 
                                                   | (vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                                      >> 7U)))
                                            : 0U))),32);
    bufp->fullCData(oldp+1824,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                        ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                             ? (IData)(
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                        >> 1U))
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                   ? 0U
                                                   : 3U)
                                               : 0U))
                                        : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                                                   ? 0U
                                                   : 
                                                  ((vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                                      >> 1U)))
                                                  : 0U)))),2);
    bufp->fullBit(oldp+1825,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1)))));
    bufp->fullBit(oldp+1826,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_ifu_arready));
    bufp->fullBit(oldp+1828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+1829,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_store) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid)))));
    bufp->fullBit(oldp+1830,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)) 
                                       & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_serial) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid))))))));
    bufp->fullBit(oldp+1831,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_req_can_grant) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready)))));
    bufp->fullCData(oldp+1832,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint)
                                 ? 0U : (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                   ? (IData)(
                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                              >> 1U))
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                      ? 0U
                                                      : 3U)
                                                     : 0U))
                                                 : 0U) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                                                    ? 0U
                                                    : 
                                                   ((vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                                     << 0x1fU) 
                                                    | (vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                                       >> 1U)))
                                                   : 0U))))),2);
    bufp->fullCData(oldp+1833,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid))),4);
    bufp->fullCData(oldp+1834,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)
                                 ? 0U : (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                      << 0x1eU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                         << 0x1cU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                  << 0x16U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                     << 0x14U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                           << 0x10U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                        << 1U))))
                                                 : 0U) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q)
                                                   : 0U))))),2);
    bufp->fullCData(oldp+1835,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)
                                 ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid))),4);
    bufp->fullBit(oldp+1836,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))));
    bufp->fullBit(oldp+1837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire));
    bufp->fullBit(oldp+1838,(((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)) 
                              & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                     >> 1U)) & ((IData)(vlSelf->externalPins_ps2_data) 
                                                & VL_REDXOR_32(
                                                               (0x1ffU 
                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                                                   >> 2U))))))));
    bufp->fullBit(oldp+1839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen));
    bufp->fullCData(oldp+1840,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr])),8);
    bufp->fullBit(oldp+1841,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullSData(oldp+1842,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1844,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1845,(((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss))));
    bufp->fullCData(oldp+1846,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_shift),8);
    bufp->fullCData(oldp+1847,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt),3);
    bufp->fullBit(oldp+1848,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_done));
    bufp->fullCData(oldp+1849,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt),4);
    bufp->fullBit(oldp+1850,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso));
    bufp->fullBit(oldp+1851,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_en));
    bufp->fullBit(oldp+1852,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_last_bit));
    bufp->fullBit(oldp+1853,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_en));
    bufp->fullBit(oldp+1854,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1855,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1856,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1857,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1858,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out_r),4);
    bufp->fullCData(oldp+1859,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe_r),4);
    bufp->fullCData(oldp+1860,(1U),3);
    bufp->fullIData(oldp+1861,(0x1feU),32);
    bufp->fullIData(oldp+1862,(0x64U),32);
    bufp->fullIData(oldp+1863,(8U),32);
    bufp->fullIData(oldp+1864,(0x100U),32);
    bufp->fullIData(oldp+1865,(0x41aU),32);
    bufp->fullCData(oldp+1866,(0U),3);
    bufp->fullCData(oldp+1867,(2U),3);
    bufp->fullCData(oldp+1868,(3U),3);
    bufp->fullBit(oldp+1869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_psel));
    bufp->fullBit(oldp+1870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_penable));
    bufp->fullBit(oldp+1871,(1U));
    bufp->fullBit(oldp+1872,(0U));
    bufp->fullIData(oldp+1873,(5U),32);
    bufp->fullCData(oldp+1874,(0U),4);
    bufp->fullCData(oldp+1875,(0U),8);
    bufp->fullCData(oldp+1876,(1U),2);
    bufp->fullCData(oldp+1877,(0U),2);
    bufp->fullIData(oldp+1878,(0x67U),32);
    bufp->fullIData(oldp+1879,(3U),32);
    bufp->fullIData(oldp+1880,(4U),32);
    bufp->fullSData(oldp+1881,(1U),16);
    bufp->fullBit(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+1893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+1895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+1897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+1899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+1901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+1903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+1907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+1909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullBit(oldp+1911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullIData(oldp+1912,(0U),32);
    bufp->fullIData(oldp+1913,(0x20U),32);
    bufp->fullIData(oldp+1914,(7U),32);
    bufp->fullIData(oldp+1915,(5U),32);
    bufp->fullIData(oldp+1916,(0x30000000U),32);
    bufp->fullCData(oldp+1917,(3U),7);
    bufp->fullCData(oldp+1918,(0x13U),7);
    bufp->fullCData(oldp+1919,(0x67U),7);
    bufp->fullCData(oldp+1920,(0x73U),7);
    bufp->fullCData(oldp+1921,(0x63U),7);
    bufp->fullCData(oldp+1922,(0x6fU),7);
    bufp->fullCData(oldp+1923,(0x23U),7);
    bufp->fullCData(oldp+1924,(0x37U),7);
    bufp->fullCData(oldp+1925,(0x17U),7);
    bufp->fullCData(oldp+1926,(0x33U),7);
    bufp->fullCData(oldp+1927,(0xfU),7);
    bufp->fullCData(oldp+1928,(0U),5);
    bufp->fullCData(oldp+1929,(1U),5);
    bufp->fullCData(oldp+1930,(2U),5);
    bufp->fullCData(oldp+1931,(3U),5);
    bufp->fullCData(oldp+1932,(4U),5);
    bufp->fullCData(oldp+1933,(5U),5);
    bufp->fullCData(oldp+1934,(6U),5);
    bufp->fullCData(oldp+1935,(7U),5);
    bufp->fullCData(oldp+1936,(0xbU),5);
    bufp->fullSData(oldp+1937,(0U),12);
    bufp->fullSData(oldp+1938,(1U),12);
    bufp->fullSData(oldp+1939,(0x302U),12);
    bufp->fullCData(oldp+1940,(1U),8);
    bufp->fullIData(oldp+1941,(0x79737978U),32);
    bufp->fullIData(oldp+1942,(0x16fe3b5U),32);
    bufp->fullSData(oldp+1943,(0x300U),12);
    bufp->fullSData(oldp+1944,(0x305U),12);
    bufp->fullSData(oldp+1945,(0x341U),12);
    bufp->fullSData(oldp+1946,(0x342U),12);
    bufp->fullSData(oldp+1947,(0x343U),12);
    bufp->fullSData(oldp+1948,(0xf11U),12);
    bufp->fullSData(oldp+1949,(0xf12U),12);
    bufp->fullIData(oldp+1950,(0xbU),32);
    bufp->fullCData(oldp+1951,(4U),3);
    bufp->fullCData(oldp+1952,(5U),3);
    bufp->fullIData(oldp+1953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__o_result),32);
    bufp->fullCData(oldp+1954,(2U),2);
    bufp->fullIData(oldp+1955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__d),32);
    bufp->fullCData(oldp+1956,(3U),2);
    bufp->fullIData(oldp+1957,(0x2000000U),32);
    bufp->fullIData(oldp+1958,(0x2000004U),32);
    bufp->fullIData(oldp+1959,(0x80U),32);
    bufp->fullIData(oldp+1960,(0x40U),32);
    bufp->fullIData(oldp+1961,(0x16U),32);
    bufp->fullQData(oldp+1962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_cycle_cnt),64);
    bufp->fullIData(oldp+1964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__i),32);
    bufp->fullBit(oldp+1965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__bug_dumped));
    bufp->fullCData(oldp+1966,(4U),8);
    bufp->fullCData(oldp+1967,(8U),8);
    bufp->fullCData(oldp+1968,(0xcU),8);
    bufp->fullIData(oldp+1969,(0x10U),32);
    bufp->fullCData(oldp+1970,(4U),4);
    bufp->fullIData(oldp+1971,(6U),32);
    bufp->fullBit(oldp+1972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_init));
    bufp->fullCData(oldp+1973,(0x35U),8);
    bufp->fullBit(oldp+1974,(0U));
    bufp->fullBit(oldp+1975,(1U));
    bufp->fullCData(oldp+1976,(0x1bU),8);
    bufp->fullCData(oldp+1977,(0x15U),8);
    bufp->fullCData(oldp+1978,(0xebU),8);
    bufp->fullCData(oldp+1979,(0x38U),8);
    bufp->fullIData(oldp+1980,(0x18U),32);
    bufp->fullIData(oldp+1981,(9U),32);
    bufp->fullIData(oldp+1982,(2U),32);
    bufp->fullIData(oldp+1983,(0xdU),32);
    bufp->fullIData(oldp+1984,(0x2000U),32);
    bufp->fullIData(oldp+1985,(0x2710U),32);
    bufp->fullIData(oldp+1986,(0x30cU),32);
    bufp->fullIData(oldp+1987,(1U),32);
    bufp->fullIData(oldp+1988,(0x19U),32);
    bufp->fullCData(oldp+1989,(7U),4);
    bufp->fullCData(oldp+1990,(3U),4);
    bufp->fullCData(oldp+1991,(5U),4);
    bufp->fullCData(oldp+1992,(6U),4);
    bufp->fullCData(oldp+1993,(2U),4);
    bufp->fullCData(oldp+1994,(1U),4);
    bufp->fullSData(oldp+1995,(0x20U),13);
    bufp->fullCData(oldp+1996,(8U),4);
    bufp->fullIData(oldp+1997,(0xaU),32);
    bufp->fullIData(oldp+1998,(0x11U),32);
    bufp->fullIData(oldp+1999,(0x10001000U),32);
    bufp->fullIData(oldp+2000,(0x10001fffU),32);
    bufp->fullIData(oldp+2001,(0x3fffffffU),32);
    bufp->fullCData(oldp+2002,(8U),5);
    bufp->fullCData(oldp+2003,(0xcU),5);
    bufp->fullCData(oldp+2004,(0x10U),5);
    bufp->fullCData(oldp+2005,(0x14U),5);
    bufp->fullCData(oldp+2006,(0x18U),5);
    bufp->fullIData(oldp+2007,(8U),32);
    bufp->fullIData(oldp+2008,(9U),32);
    bufp->fullIData(oldp+2009,(0xaU),32);
    bufp->fullIData(oldp+2010,(0xbU),32);
    bufp->fullIData(oldp+2011,(0xcU),32);
    bufp->fullIData(oldp+2012,(0xdU),32);
    bufp->fullIData(oldp+2013,(4U),32);
    bufp->fullIData(oldp+2014,(1U),32);
    bufp->fullIData(oldp+2015,(0x40U),32);
    bufp->fullIData(oldp+2016,(0x2140U),32);
    bufp->fullCData(oldp+2017,(9U),4);
    bufp->fullCData(oldp+2018,(0xaU),4);
    bufp->fullSData(oldp+2019,(0x280U),16);
    bufp->fullSData(oldp+2020,(0x1e0U),16);
    bufp->fullIData(oldp+2021,(0x21000000U),32);
    bufp->fullIData(oldp+2022,(0x21000004U),32);
    bufp->fullIData(oldp+2023,(0x21000008U),32);
    bufp->fullIData(oldp+2024,(0x80000U),32);
    bufp->fullIData(oldp+2025,(0x200000U),32);
    bufp->fullIData(oldp+2026,(0x60U),32);
    bufp->fullIData(oldp+2027,(0x90U),32);
    bufp->fullIData(oldp+2028,(0x310U),32);
    bufp->fullIData(oldp+2029,(0x320U),32);
    bufp->fullIData(oldp+2030,(0x23U),32);
    bufp->fullIData(oldp+2031,(0x203U),32);
    bufp->fullIData(oldp+2032,(0x20dU),32);
    bufp->fullIData(oldp+2033,(0x400000U),32);
    bufp->fullIData(oldp+2034,(0x200U),32);
}
