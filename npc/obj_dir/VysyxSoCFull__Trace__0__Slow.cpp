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
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+1767,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1768,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1769,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1770,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1771,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1772,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1773,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1774,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1775,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1776,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1777,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1778,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1779,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1780,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1781,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1782,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1783,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1784,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1785,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1786,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+1767,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1768,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1769,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1770,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1771,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1772,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1773,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1774,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1775,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1776,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1777,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1778,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1779,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1780,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1781,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1782,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1783,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1784,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1785,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1786,"externalPins_uart_tx", false,-1);
    tracep->declBit(c+652,"dram_sel0", false,-1);
    tracep->declBit(c+653,"dram_sel1", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+654,"spi_sck", false,-1);
    tracep->declBus(c+655,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1481,"spi_mosi", false,-1);
    tracep->declBit(c+1787,"spi_miso", false,-1);
    tracep->declBit(c+1785,"uart_rx", false,-1);
    tracep->declBit(c+1786,"uart_tx", false,-1);
    tracep->declBit(c+1282,"psram_sck", false,-1);
    tracep->declBit(c+1283,"psram_ce_n", false,-1);
    tracep->declBus(c+1788,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1789,"sdram_clk", false,-1);
    tracep->declBit(c+1482,"sdram_cke", false,-1);
    tracep->declBit(c+656,"sdram_cs", false,-1);
    tracep->declBit(c+657,"sdram_ras", false,-1);
    tracep->declBit(c+658,"sdram_cas", false,-1);
    tracep->declBit(c+659,"sdram_we", false,-1);
    tracep->declBus(c+1790,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1483,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1484,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1587,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1767,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1768,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1769,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1770,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1771,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1772,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1773,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1774,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1775,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1776,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1777,"ps2_clk", false,-1);
    tracep->declBit(c+1778,"ps2_data", false,-1);
    tracep->declBus(c+1779,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1780,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1781,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1782,"vga_hsync", false,-1);
    tracep->declBit(c+1783,"vga_vsync", false,-1);
    tracep->declBit(c+1784,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+1225,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+20,"in_psel", false,-1);
    tracep->declBit(c+21,"in_penable", false,-1);
    tracep->declBus(c+1849,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1226,"in_pwrite", false,-1);
    tracep->declBus(c+1227,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1228,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+660,"in_pready", false,-1);
    tracep->declBus(c+661,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+662,"in_pslverr", false,-1);
    tracep->declBus(c+1284,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+1285,"out_psel", false,-1);
    tracep->declBit(c+663,"out_penable", false,-1);
    tracep->declBus(c+1093,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1286,"out_pwrite", false,-1);
    tracep->declBus(c+1287,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1094,"out_pready", false,-1);
    tracep->declBus(c+1791,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1095,"out_pslverr", false,-1);
    tracep->declBus(c+1850,"CPU_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1851,"DEV_FREQ_MHZ", false,-1, 31,0);
    tracep->declBus(c+1852,"SCALE_SHIFT", false,-1, 31,0);
    tracep->declBus(c+1853,"SCALE", false,-1, 31,0);
    tracep->declBus(c+1854,"EXTRA_SCALED", false,-1, 31,0);
    tracep->declBus(c+1855,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1849,"S_ACCESS", false,-1, 2,0);
    tracep->declBus(c+1856,"S_WAIT", false,-1, 2,0);
    tracep->declBus(c+1857,"S_RESP", false,-1, 2,0);
    tracep->declBus(c+664,"state", false,-1, 2,0);
    tracep->declBus(c+1792,"next_state", false,-1, 2,0);
    tracep->declBus(c+665,"extra_accum", false,-1, 31,0);
    tracep->declBus(c+666,"wait_cnt", false,-1, 31,0);
    tracep->declBus(c+667,"r_in_paddr", false,-1, 31,0);
    tracep->declBit(c+1858,"r_in_psel", false,-1);
    tracep->declBit(c+1859,"r_in_penable", false,-1);
    tracep->declBus(c+668,"r_in_pprot", false,-1, 2,0);
    tracep->declBit(c+669,"r_in_pwrite", false,-1);
    tracep->declBus(c+670,"r_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+671,"r_in_pstrb", false,-1, 3,0);
    tracep->declBus(c+661,"r_out_prdata", false,-1, 31,0);
    tracep->declBit(c+662,"r_out_pslverr", false,-1);
    tracep->declBit(c+1229,"w_tx_start", false,-1);
    tracep->declBit(c+1289,"w_dn_done", false,-1);
    tracep->declBus(c+672,"w_extra_accum_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+1285,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+663,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+1286,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1284,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1093,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1094,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1095,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1791,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1290,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1096,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1291,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1093,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1861,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1793,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1292,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1293,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1093,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1861,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1794,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1295,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1296,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1093,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1297,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1298,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1097,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1299,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+1098,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1284,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1093,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1861,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+1230,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1300,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1301,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1093,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1302,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1861,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1303,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1304,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1305,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1291,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1093,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1100,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1101,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1102,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1306,"sel_0", false,-1);
    tracep->declBit(c+1307,"sel_1", false,-1);
    tracep->declBit(c+1308,"sel_2", false,-1);
    tracep->declBit(c+1309,"sel_3", false,-1);
    tracep->declBit(c+1310,"sel_4", false,-1);
    tracep->declBit(c+1311,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+22,"auto_in_awready", false,-1);
    tracep->declBit(c+23,"auto_in_awvalid", false,-1);
    tracep->declBus(c+24,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+27,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+22,"auto_in_wready", false,-1);
    tracep->declBit(c+28,"auto_in_wvalid", false,-1);
    tracep->declBus(c+29,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+30,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+31,"auto_in_bready", false,-1);
    tracep->declBit(c+1312,"auto_in_bvalid", false,-1);
    tracep->declBus(c+32,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1313,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+33,"auto_in_arready", false,-1);
    tracep->declBit(c+34,"auto_in_arvalid", false,-1);
    tracep->declBus(c+35,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+36,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+37,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+38,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+39,"auto_in_rready", false,-1);
    tracep->declBit(c+1314,"auto_in_rvalid", false,-1);
    tracep->declBus(c+40,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1795,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1313,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+20,"auto_out_psel", false,-1);
    tracep->declBit(c+21,"auto_out_penable", false,-1);
    tracep->declBit(c+1226,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1225,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1228,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+660,"auto_out_pready", false,-1);
    tracep->declBit(c+662,"auto_out_pslverr", false,-1);
    tracep->declBus(c+661,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+21,"nodeOut_penable", false,-1);
    tracep->declBus(c+41,"state", false,-1, 1,0);
    tracep->declBit(c+33,"accept_read", false,-1);
    tracep->declBit(c+22,"accept_write", false,-1);
    tracep->declBit(c+42,"is_write_r", false,-1);
    tracep->declBit(c+1226,"is_write", false,-1);
    tracep->declBus(c+40,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+32,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+43,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+44,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+45,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+46,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+673,"resp", false,-1, 1,0);
    tracep->declBus(c+47,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1313,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1314,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+48,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1312,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+49,"auto_in_awready", false,-1);
    tracep->declBit(c+1647,"auto_in_awvalid", false,-1);
    tracep->declBus(c+50,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1648,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1546,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_in_wready", false,-1);
    tracep->declBit(c+1649,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1650,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1652,"auto_in_wlast", false,-1);
    tracep->declBit(c+502,"auto_in_bready", false,-1);
    tracep->declBit(c+52,"auto_in_bvalid", false,-1);
    tracep->declBus(c+53,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+55,"auto_in_arready", false,-1);
    tracep->declBit(c+1653,"auto_in_arvalid", false,-1);
    tracep->declBus(c+56,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1547,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1548,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+503,"auto_in_rready", false,-1);
    tracep->declBit(c+57,"auto_in_rvalid", false,-1);
    tracep->declBus(c+58,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+61,"auto_in_rlast", false,-1);
    tracep->declBit(c+22,"auto_out_awready", false,-1);
    tracep->declBit(c+23,"auto_out_awvalid", false,-1);
    tracep->declBus(c+24,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+27,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+22,"auto_out_wready", false,-1);
    tracep->declBit(c+28,"auto_out_wvalid", false,-1);
    tracep->declBus(c+29,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+30,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+31,"auto_out_bready", false,-1);
    tracep->declBit(c+1312,"auto_out_bvalid", false,-1);
    tracep->declBus(c+32,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1313,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+33,"auto_out_arready", false,-1);
    tracep->declBit(c+34,"auto_out_arvalid", false,-1);
    tracep->declBus(c+35,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+36,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+37,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+38,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+39,"auto_out_rready", false,-1);
    tracep->declBit(c+1314,"auto_out_rvalid", false,-1);
    tracep->declBus(c+40,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1795,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1313,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+31,"io_enq_ready", false,-1);
    tracep->declBit(c+1312,"io_enq_valid", false,-1);
    tracep->declBus(c+32,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1313,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+502,"io_deq_ready", false,-1);
    tracep->declBit(c+52,"io_deq_valid", false,-1);
    tracep->declBus(c+53,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+54,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+62,"wrap", false,-1);
    tracep->declBit(c+63,"wrap_1", false,-1);
    tracep->declBit(c+64,"maybe_full", false,-1);
    tracep->declBit(c+65,"ptr_match", false,-1);
    tracep->declBit(c+66,"empty", false,-1);
    tracep->declBit(c+67,"full", false,-1);
    tracep->declBit(c+1315,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+63,"R0_addr", false,-1);
    tracep->declBit(c+1860,"R0_en", false,-1);
    tracep->declBit(c+1765,"R0_clk", false,-1);
    tracep->declBus(c+68,"R0_data", false,-1, 5,0);
    tracep->declBit(c+62,"W0_addr", false,-1);
    tracep->declBit(c+1315,"W0_en", false,-1);
    tracep->declBit(c+1765,"W0_clk", false,-1);
    tracep->declBus(c+1796,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+69+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+71,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+39,"io_enq_ready", false,-1);
    tracep->declBit(c+1314,"io_enq_valid", false,-1);
    tracep->declBus(c+40,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1795,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1313,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+503,"io_deq_ready", false,-1);
    tracep->declBit(c+57,"io_deq_valid", false,-1);
    tracep->declBus(c+58,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+59,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+60,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+61,"io_deq_bits_last", false,-1);
    tracep->declBit(c+72,"wrap", false,-1);
    tracep->declBit(c+73,"wrap_1", false,-1);
    tracep->declBit(c+74,"maybe_full", false,-1);
    tracep->declBit(c+75,"ptr_match", false,-1);
    tracep->declBit(c+76,"empty", false,-1);
    tracep->declBit(c+77,"full", false,-1);
    tracep->declBit(c+1316,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+73,"R0_addr", false,-1);
    tracep->declBit(c+1860,"R0_en", false,-1);
    tracep->declBit(c+1765,"R0_clk", false,-1);
    tracep->declQuad(c+78,"R0_data", false,-1, 38,0);
    tracep->declBit(c+72,"W0_addr", false,-1);
    tracep->declBit(c+1316,"W0_en", false,-1);
    tracep->declBit(c+1765,"W0_clk", false,-1);
    tracep->declQuad(c+1797,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+80+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+84,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+55,"io_enq_ready", false,-1);
    tracep->declBit(c+1653,"io_enq_valid", false,-1);
    tracep->declBus(c+56,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1654,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1547,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1548,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+33,"io_deq_ready", false,-1);
    tracep->declBit(c+34,"io_deq_valid", false,-1);
    tracep->declBus(c+35,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+36,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+37,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+38,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+85,"wrap", false,-1);
    tracep->declBit(c+86,"wrap_1", false,-1);
    tracep->declBit(c+87,"maybe_full", false,-1);
    tracep->declBit(c+88,"ptr_match", false,-1);
    tracep->declBit(c+89,"empty", false,-1);
    tracep->declBit(c+90,"full", false,-1);
    tracep->declBit(c+1655,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+86,"R0_addr", false,-1);
    tracep->declBit(c+1860,"R0_en", false,-1);
    tracep->declBit(c+1765,"R0_clk", false,-1);
    tracep->declQuad(c+91,"R0_data", false,-1, 46,0);
    tracep->declBit(c+85,"W0_addr", false,-1);
    tracep->declBit(c+1655,"W0_en", false,-1);
    tracep->declBit(c+1765,"W0_clk", false,-1);
    tracep->declQuad(c+1799,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+93+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+97,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+49,"io_enq_ready", false,-1);
    tracep->declBit(c+1647,"io_enq_valid", false,-1);
    tracep->declBus(c+50,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1648,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1545,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1546,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+23,"io_deq_valid", false,-1);
    tracep->declBus(c+24,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+25,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+26,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+27,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+98,"wrap", false,-1);
    tracep->declBit(c+99,"wrap_1", false,-1);
    tracep->declBit(c+100,"maybe_full", false,-1);
    tracep->declBit(c+101,"ptr_match", false,-1);
    tracep->declBit(c+102,"empty", false,-1);
    tracep->declBit(c+103,"full", false,-1);
    tracep->declBit(c+1656,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+99,"R0_addr", false,-1);
    tracep->declBit(c+1860,"R0_en", false,-1);
    tracep->declBit(c+1765,"R0_clk", false,-1);
    tracep->declQuad(c+104,"R0_data", false,-1, 46,0);
    tracep->declBit(c+98,"W0_addr", false,-1);
    tracep->declBit(c+1656,"W0_en", false,-1);
    tracep->declBit(c+1765,"W0_clk", false,-1);
    tracep->declQuad(c+1801,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+106+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+110,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+51,"io_enq_ready", false,-1);
    tracep->declBit(c+1649,"io_enq_valid", false,-1);
    tracep->declBus(c+1650,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1651,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1652,"io_enq_bits_last", false,-1);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+28,"io_deq_valid", false,-1);
    tracep->declBus(c+29,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+30,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+111,"wrap", false,-1);
    tracep->declBit(c+112,"wrap_1", false,-1);
    tracep->declBit(c+113,"maybe_full", false,-1);
    tracep->declBit(c+114,"ptr_match", false,-1);
    tracep->declBit(c+115,"empty", false,-1);
    tracep->declBit(c+116,"full", false,-1);
    tracep->declBit(c+1657,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+112,"R0_addr", false,-1);
    tracep->declBit(c+1860,"R0_en", false,-1);
    tracep->declBit(c+1765,"R0_clk", false,-1);
    tracep->declQuad(c+117,"R0_data", false,-1, 35,0);
    tracep->declBit(c+111,"W0_addr", false,-1);
    tracep->declBit(c+1657,"W0_en", false,-1);
    tracep->declBit(c+1765,"W0_clk", false,-1);
    tracep->declQuad(c+1658,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+119+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+123,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4delay_delayer ");
    tracep->declBus(c+1862,"R", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+674,"in_arready", false,-1);
    tracep->declBit(c+1660,"in_arvalid", false,-1);
    tracep->declBus(c+1863,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1661,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1405,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1803,"in_rready", false,-1);
    tracep->declBit(c+675,"in_rvalid", false,-1);
    tracep->declBus(c+676,"in_rid", false,-1, 3,0);
    tracep->declBus(c+677,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+678,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+679,"in_rlast", false,-1);
    tracep->declBit(c+680,"in_awready", false,-1);
    tracep->declBit(c+1662,"in_awvalid", false,-1);
    tracep->declBus(c+1863,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1864,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+681,"in_wready", false,-1);
    tracep->declBit(c+1664,"in_wvalid", false,-1);
    tracep->declBus(c+1665,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"in_wlast", false,-1);
    tracep->declBit(c+1531,"in_bready", false,-1);
    tracep->declBit(c+682,"in_bvalid", false,-1);
    tracep->declBus(c+683,"in_bid", false,-1, 3,0);
    tracep->declBus(c+684,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1485,"out_arready", false,-1);
    tracep->declBit(c+685,"out_arvalid", false,-1);
    tracep->declBus(c+686,"out_arid", false,-1, 3,0);
    tracep->declBus(c+687,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+688,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+689,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+690,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+691,"out_rready", false,-1);
    tracep->declBit(c+692,"out_rvalid", false,-1);
    tracep->declBus(c+693,"out_rid", false,-1, 3,0);
    tracep->declBus(c+694,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1865,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+695,"out_rlast", false,-1);
    tracep->declBit(c+1486,"out_awready", false,-1);
    tracep->declBit(c+696,"out_awvalid", false,-1);
    tracep->declBus(c+697,"out_awid", false,-1, 3,0);
    tracep->declBus(c+698,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+699,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+700,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+701,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1487,"out_wready", false,-1);
    tracep->declBit(c+702,"out_wvalid", false,-1);
    tracep->declBus(c+703,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+704,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+705,"out_wlast", false,-1);
    tracep->declBit(c+706,"out_bready", false,-1);
    tracep->declBit(c+707,"out_bvalid", false,-1);
    tracep->declBus(c+693,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1865,"out_bresp", false,-1, 1,0);
    tracep->declQuad(c+708,"cyc_q", false,-1, 63,0);
    tracep->declBit(c+710,"rd_active", false,-1);
    tracep->declQuad(c+711,"rd_start_cyc", false,-1, 63,0);
    tracep->declBit(c+713,"rd_ar_latched", false,-1);
    tracep->declBit(c+714,"rd_ar_out_done", false,-1);
    tracep->declBit(c+715,"rd_ar_up_done", false,-1);
    tracep->declBit(c+716,"rd_ar_ready_pending", false,-1);
    tracep->declQuad(c+717,"rd_ar_ready_cyc", false,-1, 63,0);
    tracep->declBus(c+686,"rd_arid_q", false,-1, 3,0);
    tracep->declBus(c+687,"rd_araddr_q", false,-1, 31,0);
    tracep->declBus(c+688,"rd_arlen_q", false,-1, 7,0);
    tracep->declBus(c+689,"rd_arsize_q", false,-1, 2,0);
    tracep->declBus(c+690,"rd_arburst_q", false,-1, 1,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+719+i*1,"rdq_id", true,(i+0), 3,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+727+i*1,"rdq_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+735+i*1,"rdq_resp", true,(i+0), 1,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+743+i*1,"rdq_last", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+751+i*2,"rdq_relcy", true,(i+0), 63,0);
    }
    tracep->declBus(c+767,"rdq_head", false,-1, 2,0);
    tracep->declBus(c+768,"rdq_tail", false,-1, 2,0);
    tracep->declBus(c+769,"rdq_count", false,-1, 3,0);
    tracep->declBit(c+770,"rdq_empty", false,-1);
    tracep->declBit(c+771,"rdq_full", false,-1);
    tracep->declBus(c+772,"i", false,-1, 31,0);
    tracep->declBit(c+773,"wr_active", false,-1);
    tracep->declQuad(c+774,"wr_start_cyc", false,-1, 63,0);
    tracep->declBit(c+776,"wr_aw_latched", false,-1);
    tracep->declBit(c+777,"wr_aw_out_done", false,-1);
    tracep->declBit(c+778,"wr_aw_up_done", false,-1);
    tracep->declBit(c+779,"wr_aw_ready_pending", false,-1);
    tracep->declQuad(c+780,"wr_aw_ready_cyc", false,-1, 63,0);
    tracep->declBus(c+697,"wr_awid_q", false,-1, 3,0);
    tracep->declBus(c+698,"wr_awaddr_q", false,-1, 31,0);
    tracep->declBus(c+699,"wr_awlen_q", false,-1, 7,0);
    tracep->declBus(c+700,"wr_awsize_q", false,-1, 2,0);
    tracep->declBus(c+701,"wr_awburst_q", false,-1, 1,0);
    tracep->declBit(c+782,"wr_w_latched", false,-1);
    tracep->declBit(c+783,"wr_w_out_done", false,-1);
    tracep->declBit(c+784,"wr_w_up_done", false,-1);
    tracep->declBit(c+785,"wr_w_ready_pending", false,-1);
    tracep->declQuad(c+786,"wr_w_ready_cyc", false,-1, 63,0);
    tracep->declBus(c+703,"wr_wdata_q", false,-1, 31,0);
    tracep->declBus(c+704,"wr_wstrb_q", false,-1, 3,0);
    tracep->declBit(c+705,"wr_wlast_q", false,-1);
    tracep->declBit(c+788,"wr_b_pending", false,-1);
    tracep->declQuad(c+789,"wr_b_relcy", false,-1, 63,0);
    tracep->declBus(c+683,"wr_bid_q", false,-1, 3,0);
    tracep->declBus(c+684,"wr_bresp_q", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+124,"auto_in_awready", false,-1);
    tracep->declBit(c+1667,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1863,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1864,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_in_wready", false,-1);
    tracep->declBit(c+1668,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"auto_in_wlast", false,-1);
    tracep->declBit(c+1804,"auto_in_bready", false,-1);
    tracep->declBit(c+126,"auto_in_bvalid", false,-1);
    tracep->declBus(c+127,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+128,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+129,"auto_in_arready", false,-1);
    tracep->declBit(c+1669,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1863,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1532,"auto_in_rready", false,-1);
    tracep->declBit(c+130,"auto_in_rvalid", false,-1);
    tracep->declBus(c+131,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+134,"auto_in_rlast", false,-1);
    tracep->declBit(c+1730,"auto_out_awready", false,-1);
    tracep->declBit(c+1670,"auto_out_awvalid", false,-1);
    tracep->declBus(c+50,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1648,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1546,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+135,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1731,"auto_out_wready", false,-1);
    tracep->declBit(c+1671,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1650,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1652,"auto_out_wlast", false,-1);
    tracep->declBit(c+1533,"auto_out_bready", false,-1);
    tracep->declBit(c+136,"auto_out_bvalid", false,-1);
    tracep->declBus(c+127,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+137,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+138,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1732,"auto_out_arready", false,-1);
    tracep->declBit(c+1672,"auto_out_arvalid", false,-1);
    tracep->declBus(c+56,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1547,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1548,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1549,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1532,"auto_out_rready", false,-1);
    tracep->declBit(c+130,"auto_out_rvalid", false,-1);
    tracep->declBus(c+131,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+139,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+140,"auto_out_rlast", false,-1);
    tracep->declBit(c+1671,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+141,"w_idle", false,-1);
    tracep->declBit(c+1733,"in_awready", false,-1);
    tracep->declBit(c+142,"busy", false,-1);
    tracep->declBus(c+143,"r_addr", false,-1, 31,0);
    tracep->declBus(c+144,"r_len", false,-1, 7,0);
    tracep->declBus(c+1550,"len", false,-1, 7,0);
    tracep->declBus(c+1673,"addr", false,-1, 31,0);
    tracep->declBit(c+145,"busy_1", false,-1);
    tracep->declBus(c+146,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+147,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+148,"len_1", false,-1, 7,0);
    tracep->declBus(c+1674,"addr_1", false,-1, 31,0);
    tracep->declBit(c+149,"wbeats_latched", false,-1);
    tracep->declBit(c+1670,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1675,"wbeats_valid", false,-1);
    tracep->declBus(c+150,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1676,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1652,"w_last", false,-1);
    tracep->declBit(c+1533,"nodeOut_bready", false,-1);
    tracep->declBus(c+151,"error_0", false,-1, 1,0);
    tracep->declBus(c+152,"error_1", false,-1, 1,0);
    tracep->declBus(c+153,"error_2", false,-1, 1,0);
    tracep->declBus(c+154,"error_3", false,-1, 1,0);
    tracep->declBus(c+155,"error_4", false,-1, 1,0);
    tracep->declBus(c+156,"error_5", false,-1, 1,0);
    tracep->declBus(c+157,"error_6", false,-1, 1,0);
    tracep->declBus(c+158,"error_7", false,-1, 1,0);
    tracep->declBus(c+159,"error_8", false,-1, 1,0);
    tracep->declBus(c+160,"error_9", false,-1, 1,0);
    tracep->declBus(c+161,"error_10", false,-1, 1,0);
    tracep->declBus(c+162,"error_11", false,-1, 1,0);
    tracep->declBus(c+163,"error_12", false,-1, 1,0);
    tracep->declBus(c+164,"error_13", false,-1, 1,0);
    tracep->declBus(c+165,"error_14", false,-1, 1,0);
    tracep->declBus(c+166,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+129,"io_enq_ready", false,-1);
    tracep->declBit(c+1669,"io_enq_valid", false,-1);
    tracep->declBus(c+1863,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1661,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1405,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1406,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1407,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1734,"io_deq_ready", false,-1);
    tracep->declBit(c+1672,"io_deq_valid", false,-1);
    tracep->declBus(c+56,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1677,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1551,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1547,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1548,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+167,"ram", false,-1, 48,0);
    tracep->declBit(c+169,"full", false,-1);
    tracep->declBit(c+1672,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1735,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+124,"io_enq_ready", false,-1);
    tracep->declBit(c+1667,"io_enq_valid", false,-1);
    tracep->declBus(c+1863,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1663,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1864,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1408,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1409,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1736,"io_deq_ready", false,-1);
    tracep->declBit(c+1678,"io_deq_valid", false,-1);
    tracep->declBus(c+50,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1679,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+170,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1545,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1546,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+171,"ram", false,-1, 48,0);
    tracep->declBit(c+173,"full", false,-1);
    tracep->declBit(c+1678,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1737,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+125,"io_enq_ready", false,-1);
    tracep->declBit(c+1668,"io_enq_valid", false,-1);
    tracep->declBus(c+1665,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1666,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1410,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1738,"io_deq_ready", false,-1);
    tracep->declBit(c+1680,"io_deq_valid", false,-1);
    tracep->declBus(c+1650,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1651,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1805,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+174,"ram", false,-1, 36,0);
    tracep->declBit(c+176,"full", false,-1);
    tracep->declBit(c+1680,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1739,"do_enq", false,-1);
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
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1740,"auto_in_awready", false,-1);
    tracep->declBit(c+1681,"auto_in_awvalid", false,-1);
    tracep->declBus(c+50,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1682,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1806,"auto_in_wready", false,-1);
    tracep->declBit(c+1683,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1650,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1534,"auto_in_bready", false,-1);
    tracep->declBit(c+177,"auto_in_bvalid", false,-1);
    tracep->declBus(c+178,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+179,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1535,"auto_in_arready", false,-1);
    tracep->declBit(c+1684,"auto_in_arvalid", false,-1);
    tracep->declBus(c+56,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1685,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1536,"auto_in_rready", false,-1);
    tracep->declBit(c+180,"auto_in_rvalid", false,-1);
    tracep->declBus(c+181,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+182,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+183,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1535,"nodeIn_arready", false,-1);
    tracep->declBit(c+1740,"nodeIn_awready", false,-1);
    tracep->declBit(c+1686,"w_sel0", false,-1);
    tracep->declBit(c+177,"w_full", false,-1);
    tracep->declBus(c+178,"w_id", false,-1, 3,0);
    tracep->declBit(c+184,"r_sel1", false,-1);
    tracep->declBit(c+185,"w_sel1", false,-1);
    tracep->declBit(c+180,"r_full", false,-1);
    tracep->declBus(c+181,"r_id", false,-1, 3,0);
    tracep->declBit(c+1741,"ren", false,-1);
    tracep->declBit(c+186,"rdata_REG", false,-1);
    tracep->declBus(c+187,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+188,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+189,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+190,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1687,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1741,"R0_en", false,-1);
    tracep->declBit(c+1765,"R0_clk", false,-1);
    tracep->declBus(c+191,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1688,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1742,"W0_en", false,-1);
    tracep->declBit(c+1765,"W0_clk", false,-1);
    tracep->declBus(c+1650,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1651,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1743,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1689,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1863,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1864,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1807,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1411,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1412,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1317,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1318,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1808,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1744,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1690,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1863,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1413,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1319,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1320,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1809,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1810,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1321,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+680,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1662,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1863,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1864,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+681,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1664,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1531,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+682,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+683,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+684,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+674,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1660,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1863,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1803,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+675,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+676,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+677,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+678,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+679,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+124,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1667,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1863,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1864,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+125,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1668,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1804,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+126,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+127,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+128,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+129,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1669,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1863,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1532,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+130,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+131,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+134,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1317,"in_0_bvalid", false,-1);
    tracep->declBit(c+1319,"in_0_rvalid", false,-1);
    tracep->declBit(c+1745,"in_0_wready", false,-1);
    tracep->declBit(c+1746,"in_0_awready", false,-1);
    tracep->declBit(c+1811,"in_0_arready", false,-1);
    tracep->declBit(c+1743,"anonIn_awready", false,-1);
    tracep->declBit(c+1744,"anonIn_arready", false,-1);
    tracep->declBit(c+1691,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1692,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1693,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1694,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1866,"arSel", false,-1, 15,0);
    tracep->declBus(c+1866,"awSel", false,-1, 15,0);
    tracep->declBus(c+1322,"rSel", false,-1, 15,0);
    tracep->declBus(c+1323,"bSel", false,-1, 15,0);
    tracep->declBus(c+192,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+193,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+194,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+195,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+196,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1867,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+197,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1868,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+198,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1869,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+199,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1870,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+200,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1871,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+201,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1872,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+202,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1873,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+203,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1874,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+204,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1875,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+205,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1876,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+206,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1877,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+207,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1878,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+208,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1879,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+209,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1880,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+210,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1881,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+211,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1882,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+212,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1883,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+213,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1884,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+214,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1885,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+215,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1886,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+216,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1887,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+217,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1888,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+218,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1889,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+219,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1890,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+220,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1891,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+221,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1892,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+222,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1893,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+223,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1894,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+224,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1895,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+225,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1896,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1695,"in_0_arvalid", false,-1);
    tracep->declBit(c+226,"latched", false,-1);
    tracep->declBit(c+1696,"in_0_awvalid", false,-1);
    tracep->declBit(c+1697,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1698,"in_0_wvalid", false,-1);
    tracep->declBit(c+1231,"idle_2", false,-1);
    tracep->declBit(c+1324,"anyValid", false,-1);
    tracep->declBus(c+1325,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+1232,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1326,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1327,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1328,"prefixOR_1", false,-1);
    tracep->declBit(c+1329,"winner_2_1", false,-1);
    tracep->declBit(c+1233,"state_2_0", false,-1);
    tracep->declBit(c+1234,"state_2_1", false,-1);
    tracep->declBit(c+1330,"muxState_2_0", false,-1);
    tracep->declBit(c+1331,"muxState_2_1", false,-1);
    tracep->declBit(c+227,"idle_3", false,-1);
    tracep->declBit(c+1332,"anyValid_1", false,-1);
    tracep->declBus(c+1333,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+228,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1334,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1335,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1336,"winner_3_0", false,-1);
    tracep->declBit(c+1337,"winner_3_1", false,-1);
    tracep->declBit(c+229,"state_3_0", false,-1);
    tracep->declBit(c+230,"state_3_1", false,-1);
    tracep->declBit(c+1812,"muxState_3_0", false,-1);
    tracep->declBit(c+1813,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+1697,"io_enq_valid", false,-1);
    tracep->declBus(c+1699,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1747,"io_deq_ready", false,-1);
    tracep->declBit(c+1700,"io_deq_valid", false,-1);
    tracep->declBus(c+1701,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+232,"wrap", false,-1);
    tracep->declBit(c+233,"wrap_1", false,-1);
    tracep->declBit(c+234,"maybe_full", false,-1);
    tracep->declBit(c+235,"ptr_match", false,-1);
    tracep->declBit(c+236,"empty", false,-1);
    tracep->declBit(c+237,"full", false,-1);
    tracep->declBit(c+1700,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1748,"do_deq", false,-1);
    tracep->declBit(c+1749,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+233,"R0_addr", false,-1);
    tracep->declBit(c+1860,"R0_en", false,-1);
    tracep->declBit(c+1765,"R0_clk", false,-1);
    tracep->declBus(c+238,"R0_data", false,-1, 1,0);
    tracep->declBit(c+232,"W0_addr", false,-1);
    tracep->declBit(c+1749,"W0_en", false,-1);
    tracep->declBit(c+1765,"W0_clk", false,-1);
    tracep->declBus(c+1699,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+239+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1750,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1702,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+50,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1648,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1546,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1731,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1671,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1650,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1652,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1533,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+136,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+127,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+137,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1751,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1703,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+56,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1547,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1548,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1532,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+130,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+131,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1740,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1681,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+50,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1682,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1806,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1683,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1650,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1534,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+177,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+178,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+179,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1535,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1684,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+56,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1685,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1536,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+180,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+181,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+182,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+183,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1704,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1705,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+241,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1706,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+56,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1707,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+504,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+242,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+243,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+244,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+49,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1647,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+50,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1648,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1546,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+51,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1649,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1650,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1652,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+502,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+52,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+53,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1653,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+56,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1547,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1548,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+503,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+57,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+58,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+59,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+61,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+136,"in_0_bvalid", false,-1);
    tracep->declBit(c+130,"in_0_rvalid", false,-1);
    tracep->declBit(c+1752,"in_0_wready", false,-1);
    tracep->declBit(c+1753,"in_0_awready", false,-1);
    tracep->declBit(c+1751,"in_0_arready", false,-1);
    tracep->declBit(c+1750,"anonIn_awready", false,-1);
    tracep->declBit(c+1708,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1709,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1710,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1711,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1712,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1713,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+245,"arSel", false,-1, 15,0);
    tracep->declBus(c+246,"awSel", false,-1, 15,0);
    tracep->declBus(c+247,"rSel", false,-1, 15,0);
    tracep->declBus(c+248,"bSel", false,-1, 15,0);
    tracep->declBit(c+249,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+250,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+251,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+252,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+253,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+254,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+255,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+256,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+257,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+258,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+259,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+260,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+261,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+262,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+263,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+264,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+265,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+266,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+267,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+268,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+269,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+270,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+271,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+272,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+273,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+274,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+275,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+276,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+277,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+278,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+279,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+280,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+281,"latched", false,-1);
    tracep->declBit(c+1714,"in_0_awvalid", false,-1);
    tracep->declBit(c+1715,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1716,"in_0_wvalid", false,-1);
    tracep->declBit(c+282,"idle_3", false,-1);
    tracep->declBit(c+283,"anyValid", false,-1);
    tracep->declBus(c+284,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+285,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+286,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+287,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+288,"prefixOR_1", false,-1);
    tracep->declBit(c+289,"winner_3_1", false,-1);
    tracep->declBit(c+290,"winner_3_2", false,-1);
    tracep->declBit(c+291,"state_3_0", false,-1);
    tracep->declBit(c+292,"state_3_1", false,-1);
    tracep->declBit(c+293,"state_3_2", false,-1);
    tracep->declBit(c+294,"muxState_3_0", false,-1);
    tracep->declBit(c+295,"muxState_3_1", false,-1);
    tracep->declBit(c+296,"muxState_3_2", false,-1);
    tracep->declBit(c+297,"idle_4", false,-1);
    tracep->declBit(c+298,"anyValid_1", false,-1);
    tracep->declBus(c+299,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+300,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+301,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+302,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+303,"winner_4_0", false,-1);
    tracep->declBit(c+304,"winner_4_2", false,-1);
    tracep->declBit(c+305,"state_4_0", false,-1);
    tracep->declBit(c+306,"state_4_2", false,-1);
    tracep->declBit(c+307,"muxState_4_0", false,-1);
    tracep->declBit(c+308,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+1715,"io_enq_valid", false,-1);
    tracep->declBus(c+1717,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1754,"io_deq_ready", false,-1);
    tracep->declBit(c+1718,"io_deq_valid", false,-1);
    tracep->declBus(c+1719,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+310,"wrap", false,-1);
    tracep->declBit(c+311,"wrap_1", false,-1);
    tracep->declBit(c+312,"maybe_full", false,-1);
    tracep->declBit(c+313,"ptr_match", false,-1);
    tracep->declBit(c+314,"empty", false,-1);
    tracep->declBit(c+315,"full", false,-1);
    tracep->declBit(c+1718,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1755,"do_deq", false,-1);
    tracep->declBit(c+1756,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+311,"R0_addr", false,-1);
    tracep->declBit(c+1860,"R0_en", false,-1);
    tracep->declBit(c+1765,"R0_clk", false,-1);
    tracep->declBus(c+316,"R0_data", false,-1, 2,0);
    tracep->declBit(c+310,"W0_addr", false,-1);
    tracep->declBit(c+1756,"W0_en", false,-1);
    tracep->declBit(c+1765,"W0_clk", false,-1);
    tracep->declBus(c+1717,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+317+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1730,"auto_in_awready", false,-1);
    tracep->declBit(c+1670,"auto_in_awvalid", false,-1);
    tracep->declBus(c+50,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1648,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1546,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+135,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1731,"auto_in_wready", false,-1);
    tracep->declBit(c+1671,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1650,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1652,"auto_in_wlast", false,-1);
    tracep->declBit(c+1533,"auto_in_bready", false,-1);
    tracep->declBit(c+136,"auto_in_bvalid", false,-1);
    tracep->declBus(c+127,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+137,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+138,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1732,"auto_in_arready", false,-1);
    tracep->declBit(c+1672,"auto_in_arvalid", false,-1);
    tracep->declBus(c+56,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1547,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1548,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1549,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1532,"auto_in_rready", false,-1);
    tracep->declBit(c+130,"auto_in_rvalid", false,-1);
    tracep->declBus(c+131,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+139,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+140,"auto_in_rlast", false,-1);
    tracep->declBit(c+1750,"auto_out_awready", false,-1);
    tracep->declBit(c+1702,"auto_out_awvalid", false,-1);
    tracep->declBus(c+50,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1648,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1545,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1546,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1731,"auto_out_wready", false,-1);
    tracep->declBit(c+1671,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1650,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1651,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1652,"auto_out_wlast", false,-1);
    tracep->declBit(c+1533,"auto_out_bready", false,-1);
    tracep->declBit(c+136,"auto_out_bvalid", false,-1);
    tracep->declBus(c+127,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+137,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1751,"auto_out_arready", false,-1);
    tracep->declBit(c+1703,"auto_out_arvalid", false,-1);
    tracep->declBus(c+56,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1654,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1547,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1548,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1532,"auto_out_rready", false,-1);
    tracep->declBit(c+130,"auto_out_rvalid", false,-1);
    tracep->declBus(c+131,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+133,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+537,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+505,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+538,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+506,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+539,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+507,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+540,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+508,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+335,"io_enq_ready", false,-1);
    tracep->declBit(c+541,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+509,"io_deq_ready", false,-1);
    tracep->declBit(c+336,"io_deq_valid", false,-1);
    tracep->declBit(c+337,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->declBit(c+337,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+338,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+542,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+510,"io_deq_ready", false,-1);
    tracep->declBit(c+340,"io_deq_valid", false,-1);
    tracep->declBit(c+341,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->declBit(c+341,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+543,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+511,"io_deq_ready", false,-1);
    tracep->declBit(c+344,"io_deq_valid", false,-1);
    tracep->declBit(c+345,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+344,"full", false,-1);
    tracep->declBit(c+345,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+346,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+544,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+512,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+351,"io_enq_ready", false,-1);
    tracep->declBit(c+545,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+513,"io_deq_ready", false,-1);
    tracep->declBit(c+352,"io_deq_valid", false,-1);
    tracep->declBit(c+353,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+352,"full", false,-1);
    tracep->declBit(c+353,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+354,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+355,"io_enq_ready", false,-1);
    tracep->declBit(c+546,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+514,"io_deq_ready", false,-1);
    tracep->declBit(c+356,"io_deq_valid", false,-1);
    tracep->declBit(c+357,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+356,"full", false,-1);
    tracep->declBit(c+357,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+358,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+359,"io_enq_ready", false,-1);
    tracep->declBit(c+547,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+515,"io_deq_ready", false,-1);
    tracep->declBit(c+360,"io_deq_valid", false,-1);
    tracep->declBit(c+361,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+360,"full", false,-1);
    tracep->declBit(c+361,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+362,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+363,"io_enq_ready", false,-1);
    tracep->declBit(c+548,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+516,"io_deq_ready", false,-1);
    tracep->declBit(c+364,"io_deq_valid", false,-1);
    tracep->declBit(c+365,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+364,"full", false,-1);
    tracep->declBit(c+365,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+366,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+367,"io_enq_ready", false,-1);
    tracep->declBit(c+549,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+517,"io_deq_ready", false,-1);
    tracep->declBit(c+368,"io_deq_valid", false,-1);
    tracep->declBit(c+369,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+368,"full", false,-1);
    tracep->declBit(c+369,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+370,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+371,"io_enq_ready", false,-1);
    tracep->declBit(c+550,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+518,"io_deq_ready", false,-1);
    tracep->declBit(c+372,"io_deq_valid", false,-1);
    tracep->declBit(c+373,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+372,"full", false,-1);
    tracep->declBit(c+373,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+374,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+375,"io_enq_ready", false,-1);
    tracep->declBit(c+551,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+519,"io_deq_ready", false,-1);
    tracep->declBit(c+376,"io_deq_valid", false,-1);
    tracep->declBit(c+377,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+376,"full", false,-1);
    tracep->declBit(c+377,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+378,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+379,"io_enq_ready", false,-1);
    tracep->declBit(c+552,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+520,"io_deq_ready", false,-1);
    tracep->declBit(c+380,"io_deq_valid", false,-1);
    tracep->declBit(c+381,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+380,"full", false,-1);
    tracep->declBit(c+381,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+382,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+383,"io_enq_ready", false,-1);
    tracep->declBit(c+553,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+521,"io_deq_ready", false,-1);
    tracep->declBit(c+384,"io_deq_valid", false,-1);
    tracep->declBit(c+385,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+384,"full", false,-1);
    tracep->declBit(c+385,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+386,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+387,"io_enq_ready", false,-1);
    tracep->declBit(c+554,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+522,"io_deq_ready", false,-1);
    tracep->declBit(c+388,"io_deq_valid", false,-1);
    tracep->declBit(c+389,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+388,"full", false,-1);
    tracep->declBit(c+389,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+390,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+391,"io_enq_ready", false,-1);
    tracep->declBit(c+555,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+523,"io_deq_ready", false,-1);
    tracep->declBit(c+392,"io_deq_valid", false,-1);
    tracep->declBit(c+393,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+392,"full", false,-1);
    tracep->declBit(c+393,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+394,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+395,"io_enq_ready", false,-1);
    tracep->declBit(c+556,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+524,"io_deq_ready", false,-1);
    tracep->declBit(c+396,"io_deq_valid", false,-1);
    tracep->declBit(c+397,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+396,"full", false,-1);
    tracep->declBit(c+397,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+398,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+399,"io_enq_ready", false,-1);
    tracep->declBit(c+557,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+525,"io_deq_ready", false,-1);
    tracep->declBit(c+400,"io_deq_valid", false,-1);
    tracep->declBit(c+401,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+400,"full", false,-1);
    tracep->declBit(c+401,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+402,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+403,"io_enq_ready", false,-1);
    tracep->declBit(c+558,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+526,"io_deq_ready", false,-1);
    tracep->declBit(c+404,"io_deq_valid", false,-1);
    tracep->declBit(c+405,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+404,"full", false,-1);
    tracep->declBit(c+405,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+406,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+407,"io_enq_ready", false,-1);
    tracep->declBit(c+559,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+527,"io_deq_ready", false,-1);
    tracep->declBit(c+408,"io_deq_valid", false,-1);
    tracep->declBit(c+409,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+408,"full", false,-1);
    tracep->declBit(c+409,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+410,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+411,"io_enq_ready", false,-1);
    tracep->declBit(c+560,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+528,"io_deq_ready", false,-1);
    tracep->declBit(c+412,"io_deq_valid", false,-1);
    tracep->declBit(c+413,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+412,"full", false,-1);
    tracep->declBit(c+413,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+414,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+415,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+529,"io_deq_ready", false,-1);
    tracep->declBit(c+416,"io_deq_valid", false,-1);
    tracep->declBit(c+417,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+416,"full", false,-1);
    tracep->declBit(c+417,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+418,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+419,"io_enq_ready", false,-1);
    tracep->declBit(c+562,"io_enq_valid", false,-1);
    tracep->declBit(c+135,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+530,"io_deq_ready", false,-1);
    tracep->declBit(c+420,"io_deq_valid", false,-1);
    tracep->declBit(c+421,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+420,"full", false,-1);
    tracep->declBit(c+421,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+422,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+423,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+531,"io_deq_ready", false,-1);
    tracep->declBit(c+424,"io_deq_valid", false,-1);
    tracep->declBit(c+425,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+424,"full", false,-1);
    tracep->declBit(c+425,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+426,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+427,"io_enq_ready", false,-1);
    tracep->declBit(c+564,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+532,"io_deq_ready", false,-1);
    tracep->declBit(c+428,"io_deq_valid", false,-1);
    tracep->declBit(c+429,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+428,"full", false,-1);
    tracep->declBit(c+429,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+430,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+431,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+533,"io_deq_ready", false,-1);
    tracep->declBit(c+432,"io_deq_valid", false,-1);
    tracep->declBit(c+433,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+432,"full", false,-1);
    tracep->declBit(c+433,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+434,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+435,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+534,"io_deq_ready", false,-1);
    tracep->declBit(c+436,"io_deq_valid", false,-1);
    tracep->declBit(c+437,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+436,"full", false,-1);
    tracep->declBit(c+437,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+438,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+439,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+535,"io_deq_ready", false,-1);
    tracep->declBit(c+440,"io_deq_valid", false,-1);
    tracep->declBit(c+441,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+440,"full", false,-1);
    tracep->declBit(c+441,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+442,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+443,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+1549,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+536,"io_deq_ready", false,-1);
    tracep->declBit(c+444,"io_deq_valid", false,-1);
    tracep->declBit(c+445,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+444,"full", false,-1);
    tracep->declBit(c+445,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+446,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBit(c+1743,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1689,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1863,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1864,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1807,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1411,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1665,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1412,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1317,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1318,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1808,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1744,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1690,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1863,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1661,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1405,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1413,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1319,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1320,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1809,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1810,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1321,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBit(c+1861,"io_interrupt", false,-1);
    tracep->declBit(c+1743,"io_master_awready", false,-1);
    tracep->declBit(c+1689,"io_master_awvalid", false,-1);
    tracep->declBus(c+1663,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1807,"io_master_wready", false,-1);
    tracep->declBit(c+1411,"io_master_wvalid", false,-1);
    tracep->declBus(c+1665,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"io_master_wlast", false,-1);
    tracep->declBit(c+1412,"io_master_bready", false,-1);
    tracep->declBit(c+1317,"io_master_bvalid", false,-1);
    tracep->declBus(c+1808,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1318,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1744,"io_master_arready", false,-1);
    tracep->declBit(c+1690,"io_master_arvalid", false,-1);
    tracep->declBus(c+1661,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1405,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1413,"io_master_rready", false,-1);
    tracep->declBit(c+1319,"io_master_rvalid", false,-1);
    tracep->declBus(c+1810,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1809,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1321,"io_master_rlast", false,-1);
    tracep->declBus(c+1320,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1861,"io_slave_awready", false,-1);
    tracep->declBit(c+1861,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1897,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1855,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1865,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1861,"io_slave_wready", false,-1);
    tracep->declBit(c+1861,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1897,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1863,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1861,"io_slave_wlast", false,-1);
    tracep->declBit(c+1861,"io_slave_bready", false,-1);
    tracep->declBit(c+1861,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1865,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1863,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1861,"io_slave_arready", false,-1);
    tracep->declBit(c+1861,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1897,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1864,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1855,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1865,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1861,"io_slave_rready", false,-1);
    tracep->declBit(c+1861,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1865,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1897,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1861,"io_slave_rlast", false,-1);
    tracep->declBus(c+1863,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1899,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1900,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1901,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1902,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1414,"pc", false,-1, 31,0);
    tracep->declBus(c+1235,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1598,"current_inst", false,-1, 31,0);
    tracep->declBit(c+1415,"fetch_dec_valid", false,-1);
    tracep->declBit(c+1416,"fetch_dec_ready", false,-1);
    tracep->declBit(c+1417,"dec_exc_valid", false,-1);
    tracep->declBit(c+1418,"dec_exc_ready", false,-1);
    tracep->declBit(c+1419,"exc_wb_valid", false,-1);
    tracep->declBit(c+578,"exc_wb_ready", false,-1);
    tracep->declBit(c+579,"wb_bresp", false,-1);
    tracep->declBit(c+1815,"bresp", false,-1);
    tracep->declBit(c+1537,"all_bresp", false,-1);
    tracep->declBit(c+1420,"w_finish_sim", false,-1);
    tracep->declBus(c+1552,"exit_code", false,-1, 31,0);
    tracep->declBus(c+580,"mtrace_awaddr_q", false,-1, 31,0);
    tracep->declBus(c+581,"mtrace_awsize_q", false,-1, 2,0);
    tracep->declBit(c+582,"mtrace_aw_pending", false,-1);
    tracep->declBit(c+583,"ifu_arvalid", false,-1);
    tracep->declBit(c+1421,"ifu_arready", false,-1);
    tracep->declBus(c+1414,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1864,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1856,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1903,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1416,"ifu_rready", false,-1);
    tracep->declBit(c+1422,"ifu_rvalid", false,-1);
    tracep->declBus(c+584,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1865,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1422,"ifu_rlast", false,-1);
    tracep->declBus(c+1863,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1423,"ic_mem_arvalid", false,-1);
    tracep->declBit(c+1757,"ic_mem_arready", false,-1);
    tracep->declBus(c+585,"ic_mem_araddr", false,-1, 31,0);
    tracep->declBus(c+1904,"ic_mem_arlen", false,-1, 7,0);
    tracep->declBus(c+1856,"ic_mem_arsize", false,-1, 2,0);
    tracep->declBus(c+1903,"ic_mem_arburst", false,-1, 1,0);
    tracep->declBit(c+1424,"ic_mem_rready", false,-1);
    tracep->declBit(c+1538,"ic_mem_rvalid", false,-1);
    tracep->declBus(c+1539,"ic_mem_rdata", false,-1, 31,0);
    tracep->declBus(c+1816,"ic_mem_rresp", false,-1, 1,0);
    tracep->declBit(c+1540,"ic_mem_rlast", false,-1);
    tracep->declBus(c+1817,"ic_mem_rid", false,-1, 3,0);
    tracep->declBus(c+1425,"lsu_wmask", false,-1, 7,0);
    tracep->declBit(c+1426,"lsu_arvalid", false,-1);
    tracep->declBit(c+1758,"lsu_arready", false,-1);
    tracep->declBus(c+1720,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1864,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1856,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1903,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1427,"lsu_rready", false,-1);
    tracep->declBit(c+1541,"lsu_rvalid", false,-1);
    tracep->declBus(c+1539,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1816,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1540,"lsu_rlast", false,-1);
    tracep->declBus(c+1817,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1428,"lsu_awvalid", false,-1);
    tracep->declBit(c+1759,"lsu_awready", false,-1);
    tracep->declBus(c+1720,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1856,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1903,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1428,"lsu_wvalid", false,-1);
    tracep->declBit(c+1760,"lsu_wready", false,-1);
    tracep->declBus(c+1721,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1722,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"lsu_wlast", false,-1);
    tracep->declBit(c+1860,"lsu_bready", false,-1);
    tracep->declBit(c+1818,"lsu_bvalid", false,-1);
    tracep->declBus(c+1819,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1820,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1429,"fun", false,-1, 2,0);
    tracep->declBus(c+1430,"opcode", false,-1, 6,0);
    tracep->declBus(c+1431,"waddr", false,-1, 4,0);
    tracep->declBus(c+1599,"raddr1", false,-1, 4,0);
    tracep->declBus(c+1600,"raddr2", false,-1, 4,0);
    tracep->declBus(c+1432,"imm", false,-1, 31,0);
    tracep->declBus(c+1553,"src1", false,-1, 31,0);
    tracep->declBus(c+1554,"src2", false,-1, 31,0);
    tracep->declBus(c+447,"w_data", false,-1, 31,0);
    tracep->declBit(c+1433,"wen_ret_and_j", false,-1);
    tracep->declBit(c+1434,"wen", false,-1);
    tracep->declBus(c+1905,"fun_ex", false,-1, 2,0);
    tracep->declBus(c+1906,"opcode_ex", false,-1, 6,0);
    tracep->declBus(c+1907,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+1908,"src1_ex", false,-1, 31,0);
    tracep->declBus(c+1909,"src2_ex", false,-1, 31,0);
    tracep->declBus(c+586,"lsu_ex_rdata", false,-1, 31,0);
    tracep->declBit(c+1541,"lsu_ex_r_valid", false,-1);
    tracep->declBit(c+1428,"lsu_ex_w_valid", false,-1);
    tracep->declBit(c+1761,"lsu_ex_w_ready", false,-1);
    tracep->declBit(c+1426,"lsu_dec_ar_valid", false,-1);
    tracep->declBit(c+1758,"lsu_dec_ar_ready", false,-1);
    tracep->declBit(c+1435,"xb_arvalid", false,-1);
    tracep->declBit(c+1762,"xb_arready", false,-1);
    tracep->declBus(c+1661,"xb_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"xb_arid", false,-1, 3,0);
    tracep->declBus(c+1405,"xb_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"xb_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"xb_arburst", false,-1, 1,0);
    tracep->declBit(c+1436,"xb_rready", false,-1);
    tracep->declBit(c+1542,"xb_rvalid", false,-1);
    tracep->declBus(c+1539,"xb_rdata", false,-1, 31,0);
    tracep->declBus(c+1816,"xb_rresp", false,-1, 1,0);
    tracep->declBit(c+1540,"xb_rlast", false,-1);
    tracep->declBus(c+1817,"xb_rid", false,-1, 3,0);
    tracep->declBit(c+1437,"xb_awvalid", false,-1);
    tracep->declBit(c+1763,"xb_awready", false,-1);
    tracep->declBus(c+1663,"xb_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"xb_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"xb_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"xb_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"xb_awburst", false,-1, 1,0);
    tracep->declBit(c+1437,"xb_wvalid", false,-1);
    tracep->declBit(c+1764,"xb_wready", false,-1);
    tracep->declBus(c+1665,"xb_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"xb_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"xb_wlast", false,-1);
    tracep->declBit(c+1410,"xb_bready", false,-1);
    tracep->declBit(c+1821,"xb_bvalid", false,-1);
    tracep->declBus(c+1819,"xb_bresp", false,-1, 1,0);
    tracep->declBus(c+1820,"xb_bid", false,-1, 3,0);
    tracep->declBit(c+1690,"soc_arvalid", false,-1);
    tracep->declBit(c+1744,"soc_arready", false,-1);
    tracep->declBus(c+1661,"soc_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+1405,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+1413,"soc_rready", false,-1);
    tracep->declBit(c+1319,"soc_rvalid", false,-1);
    tracep->declBus(c+1809,"soc_rdata", false,-1, 31,0);
    tracep->declBus(c+1810,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+1321,"soc_rlast", false,-1);
    tracep->declBus(c+1320,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1689,"soc_awvalid", false,-1);
    tracep->declBit(c+1743,"soc_awready", false,-1);
    tracep->declBus(c+1663,"soc_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+1411,"soc_wvalid", false,-1);
    tracep->declBit(c+1807,"soc_wready", false,-1);
    tracep->declBus(c+1665,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"soc_wlast", false,-1);
    tracep->declBit(c+1412,"soc_bready", false,-1);
    tracep->declBit(c+1317,"soc_bvalid", false,-1);
    tracep->declBus(c+1808,"soc_bresp", false,-1, 1,0);
    tracep->declBus(c+1318,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+1822,"clint_arvalid", false,-1);
    tracep->declBit(c+587,"clint_arready", false,-1);
    tracep->declBus(c+1661,"clint_araddr_axi", false,-1, 31,0);
    tracep->declBus(c+1863,"clint_arid_axi", false,-1, 3,0);
    tracep->declBus(c+1405,"clint_arlen_axi", false,-1, 7,0);
    tracep->declBus(c+1406,"clint_arsize_axi", false,-1, 2,0);
    tracep->declBus(c+1407,"clint_arburst_axi", false,-1, 1,0);
    tracep->declBit(c+647,"clint_rready_axi", false,-1);
    tracep->declBit(c+588,"clint_rvalid_axi", false,-1);
    tracep->declBus(c+589,"clint_rdata_axi", false,-1, 31,0);
    tracep->declBus(c+1865,"clint_rresp_axi", false,-1, 1,0);
    tracep->declBit(c+1860,"clint_rlast_axi", false,-1);
    tracep->declBus(c+590,"clint_rid_axi", false,-1, 3,0);
    tracep->declBit(c+1823,"clint_awvalid", false,-1);
    tracep->declBit(c+1861,"clint_awready", false,-1);
    tracep->declBus(c+1663,"clint_awaddr_axi", false,-1, 31,0);
    tracep->declBus(c+1863,"clint_awid_axi", false,-1, 3,0);
    tracep->declBus(c+1864,"clint_awlen_axi", false,-1, 7,0);
    tracep->declBus(c+1408,"clint_awsize_axi", false,-1, 2,0);
    tracep->declBus(c+1409,"clint_awburst_axi", false,-1, 1,0);
    tracep->declBit(c+648,"clint_wvalid", false,-1);
    tracep->declBit(c+1861,"clint_wready", false,-1);
    tracep->declBus(c+1665,"clint_wdata_axi", false,-1, 31,0);
    tracep->declBus(c+1666,"clint_wstrb_axi", false,-1, 3,0);
    tracep->declBit(c+1410,"clint_wlast_axi", false,-1);
    tracep->declBit(c+649,"clint_bready_axi", false,-1);
    tracep->declBit(c+1861,"clint_bvalid_axi", false,-1);
    tracep->declBus(c+1865,"clint_bresp_axi", false,-1, 1,0);
    tracep->declBus(c+1863,"clint_bid_axi", false,-1, 3,0);
    tracep->declBit(c+591,"dec_exc_fencei", false,-1);
    tracep->declBit(c+1438,"fencei_flush", false,-1);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1899,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1900,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1901,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBit(c+1417,"dec_exc_valid", false,-1);
    tracep->declBit(c+1418,"dec_exc_ready", false,-1);
    tracep->declBus(c+1431,"w_addr", false,-1, 4,0);
    tracep->declBus(c+1414,"pc", false,-1, 31,0);
    tracep->declBus(c+1553,"src1", false,-1, 31,0);
    tracep->declBus(c+1554,"src2", false,-1, 31,0);
    tracep->declBus(c+1432,"imm", false,-1, 31,0);
    tracep->declBus(c+1430,"opcode", false,-1, 6,0);
    tracep->declBus(c+1429,"fun", false,-1, 2,0);
    tracep->declBit(c+591,"i_fencei", false,-1);
    tracep->declBus(c+1235,"dnpc", false,-1, 31,0);
    tracep->declBus(c+447,"w_data", false,-1, 31,0);
    tracep->declBit(c+1433,"wen", false,-1);
    tracep->declBit(c+1541,"lsu_ex_r_valid", false,-1);
    tracep->declBus(c+586,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+1428,"lsu_ex_w_valid", false,-1);
    tracep->declBit(c+1761,"lsu_ex_w_ready", false,-1);
    tracep->declBit(c+1815,"bresp", false,-1);
    tracep->declBit(c+1419,"exc_wb_valid", false,-1);
    tracep->declBit(c+578,"exc_wb_ready", false,-1);
    tracep->declBit(c+1420,"w_finish_sim", false,-1);
    tracep->declBit(c+1438,"o_fencei_flush", false,-1);
    tracep->declBus(c+1439,"w_addr_ex", false,-1, 4,0);
    tracep->declBus(c+1440,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+1441,"src1_ex", false,-1, 31,0);
    tracep->declBus(c+1442,"src2_ex", false,-1, 31,0);
    tracep->declBus(c+1443,"opcode_ex", false,-1, 6,0);
    tracep->declBus(c+1444,"fun_ex", false,-1, 2,0);
    tracep->declBus(c+1445,"imm_ex", false,-1, 31,0);
    tracep->declBit(c+592,"fencei_ex", false,-1);
    tracep->declBus(c+1446,"snpc", false,-1, 31,0);
    tracep->declBus(c+1910,"MVENDORID", false,-1, 31,0);
    tracep->declBus(c+1911,"MARCHID", false,-1, 31,0);
    tracep->declBus(c+1912,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1913,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+1914,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+1915,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1916,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+1917,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+1918,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1919,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+1920,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+1921,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+1922,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1923,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+1924,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+1925,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1926,"CSR_ECALL", false,-1, 11,0);
    tracep->declBus(c+1927,"CSR_MRET", false,-1, 11,0);
    tracep->declBus(c+1928,"CSR_MVENDORID", false,-1, 11,0);
    tracep->declBus(c+1929,"CSR_MARCHID", false,-1, 11,0);
    tracep->declBus(c+1930,"YIELD", false,-1, 31,0);
    tracep->declBus(c+1855,"STATE_REC", false,-1, 2,0);
    tracep->declBus(c+1849,"STATE_EX", false,-1, 2,0);
    tracep->declBus(c+1856,"STATE_MDU", false,-1, 2,0);
    tracep->declBus(c+1857,"STATE_OUTPUT_WB", false,-1, 2,0);
    tracep->declBus(c+1931,"STATE_STORE", false,-1, 2,0);
    tracep->declBus(c+1932,"STATE_LOAD", false,-1, 2,0);
    tracep->declQuad(c+1447,"signed_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declQuad(c+1449,"unsigned_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declBus(c+1451,"ex_state", false,-1, 2,0);
    tracep->declBit(c+1452,"mdu_ready", false,-1);
    tracep->declBit(c+593,"mdu_valid", false,-1);
    tracep->declBus(c+1235,"dnpc_reg", false,-1, 31,0);
    tracep->declBus(c+1453,"mulh", false,-1, 31,0);
    tracep->declBus(c+1454,"mul_unsigned", false,-1, 31,0);
    tracep->declBit(c+1455,"is_div", false,-1);
    tracep->declBit(c+1456,"is_divu", false,-1);
    tracep->declBit(c+1457,"is_rem", false,-1);
    tracep->declBit(c+1458,"is_remu", false,-1);
    tracep->declBus(c+1459,"mdu_op", false,-1, 1,0);
    tracep->declBit(c+1460,"is_div_op", false,-1);
    tracep->declBus(c+1933,"o_result", false,-1, 31,0);
    tracep->declBus(c+447,"w_data_reg", false,-1, 31,0);
    tracep->declBus(c+1824,"csr_data", false,-1, 31,0);
    tracep->declBit(c+1461,"csr_wen", false,-1);
    tracep->declBus(c+448,"m_status", false,-1, 31,0);
    tracep->declBus(c+449,"m_cause", false,-1, 31,0);
    tracep->declBus(c+1236,"m_tvec", false,-1, 31,0);
    tracep->declBus(c+1237,"m_epc", false,-1, 31,0);
    tracep->pushNamePrefix("MDU_inst ");
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBus(c+1441,"i_devidend", false,-1, 31,0);
    tracep->declBus(c+1442,"i_devisor", false,-1, 31,0);
    tracep->declBus(c+1459,"i_mdu_op", false,-1, 1,0);
    tracep->declBus(c+1933,"o_result", false,-1, 31,0);
    tracep->declBit(c+1452,"i_mdu_ready", false,-1);
    tracep->declBit(c+593,"o_mdu_valid", false,-1);
    tracep->declBus(c+1865,"MDU_IDLE", false,-1, 1,0);
    tracep->declBus(c+1903,"MDU_CAL", false,-1, 1,0);
    tracep->declBus(c+1934,"MDU_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+594,"mdu_state", false,-1, 1,0);
    tracep->declBus(c+595,"r_devidend", false,-1, 31,0);
    tracep->declBus(c+596,"r_devisor", false,-1, 31,0);
    tracep->declQuad(c+597,"r_rem", false,-1, 32,0);
    tracep->declBit(c+599,"rem_sign", false,-1);
    tracep->declBus(c+600,"r_quotient", false,-1, 31,0);
    tracep->declBit(c+601,"cal_done", false,-1);
    tracep->declBus(c+1935,"d", false,-1, 31,0);
    tracep->declBus(c+602,"iter_cnt", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBit(c+1423,"ifu_arvalid", false,-1);
    tracep->declBit(c+1757,"ifu_arready", false,-1);
    tracep->declBus(c+585,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1904,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1856,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1903,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1538,"ifu_rvalid", false,-1);
    tracep->declBit(c+1424,"ifu_rready", false,-1);
    tracep->declBus(c+1539,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1816,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1540,"ifu_rlast", false,-1);
    tracep->declBus(c+1817,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+1426,"lsu_arvalid", false,-1);
    tracep->declBit(c+1758,"lsu_arready", false,-1);
    tracep->declBus(c+1720,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1864,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1856,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1903,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1541,"lsu_rvalid", false,-1);
    tracep->declBit(c+1427,"lsu_rready", false,-1);
    tracep->declBus(c+1539,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1816,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1540,"lsu_rlast", false,-1);
    tracep->declBus(c+1817,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1428,"lsu_awvalid", false,-1);
    tracep->declBit(c+1759,"lsu_awready", false,-1);
    tracep->declBus(c+1720,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1856,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1903,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1428,"lsu_wvalid", false,-1);
    tracep->declBit(c+1760,"lsu_wready", false,-1);
    tracep->declBus(c+1721,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1722,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"lsu_wlast", false,-1);
    tracep->declBit(c+1860,"lsu_bready", false,-1);
    tracep->declBit(c+1818,"lsu_bvalid", false,-1);
    tracep->declBus(c+1819,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1820,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1435,"m_arvalid", false,-1);
    tracep->declBit(c+1762,"m_arready", false,-1);
    tracep->declBus(c+1661,"m_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"m_arid", false,-1, 3,0);
    tracep->declBus(c+1405,"m_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"m_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"m_arburst", false,-1, 1,0);
    tracep->declBit(c+1542,"m_rvalid", false,-1);
    tracep->declBit(c+1436,"m_rready", false,-1);
    tracep->declBus(c+1539,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+1816,"m_rresp", false,-1, 1,0);
    tracep->declBit(c+1540,"m_rlast", false,-1);
    tracep->declBus(c+1817,"m_rid", false,-1, 3,0);
    tracep->declBit(c+1437,"m_awvalid", false,-1);
    tracep->declBit(c+1763,"m_awready", false,-1);
    tracep->declBus(c+1663,"m_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"m_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"m_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"m_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"m_awburst", false,-1, 1,0);
    tracep->declBit(c+1437,"m_wvalid", false,-1);
    tracep->declBit(c+1764,"m_wready", false,-1);
    tracep->declBus(c+1665,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"m_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"m_wlast", false,-1);
    tracep->declBit(c+1410,"m_bready", false,-1);
    tracep->declBit(c+1821,"m_bvalid", false,-1);
    tracep->declBus(c+1819,"m_bresp", false,-1, 1,0);
    tracep->declBus(c+1820,"m_bid", false,-1, 3,0);
    tracep->declBus(c+1865,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1903,"S_IFU", false,-1, 1,0);
    tracep->declBus(c+1934,"S_LSU_R", false,-1, 1,0);
    tracep->declBus(c+1936,"S_LSU_W", false,-1, 1,0);
    tracep->declBus(c+1462,"state", false,-1, 1,0);
    tracep->declBit(c+1474,"ifu_ar_fire", false,-1);
    tracep->declBit(c+1475,"lsu_ar_fire", false,-1);
    tracep->declBit(c+1476,"lsu_aw_fire", false,-1);
    tracep->declBit(c+1477,"lsu_w_fire", false,-1);
    tracep->declBit(c+1818,"lsu_b_fire", false,-1);
    tracep->declBit(c+1478,"m_ar_fire", false,-1);
    tracep->declBit(c+1543,"m_r_fire", false,-1);
    tracep->declBit(c+1479,"m_aw_fire", false,-1);
    tracep->declBit(c+1480,"m_w_fire", false,-1);
    tracep->declBit(c+1544,"m_b_fire", false,-1);
    tracep->declBit(c+1463,"sel_ifu", false,-1);
    tracep->declBit(c+1464,"sel_lsu_r", false,-1);
    tracep->declBit(c+1410,"sel_lsu_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBit(c+1822,"s_arvalid", false,-1);
    tracep->declBit(c+587,"s_arready", false,-1);
    tracep->declBus(c+1661,"s_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"s_arid", false,-1, 3,0);
    tracep->declBus(c+1405,"s_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"s_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"s_arburst", false,-1, 1,0);
    tracep->declBit(c+588,"s_rvalid", false,-1);
    tracep->declBit(c+647,"s_rready", false,-1);
    tracep->declBus(c+589,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1865,"s_rresp", false,-1, 1,0);
    tracep->declBit(c+1860,"s_rlast", false,-1);
    tracep->declBus(c+590,"s_rid", false,-1, 3,0);
    tracep->declBit(c+1823,"s_awvalid", false,-1);
    tracep->declBit(c+1861,"s_awready", false,-1);
    tracep->declBus(c+1663,"s_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"s_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"s_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"s_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"s_awburst", false,-1, 1,0);
    tracep->declBit(c+648,"s_wvalid", false,-1);
    tracep->declBit(c+1861,"s_wready", false,-1);
    tracep->declBus(c+1665,"s_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"s_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"s_wlast", false,-1);
    tracep->declBit(c+1861,"s_bvalid", false,-1);
    tracep->declBit(c+649,"s_bready", false,-1);
    tracep->declBus(c+1865,"s_bresp", false,-1, 1,0);
    tracep->declBus(c+1863,"s_bid", false,-1, 3,0);
    tracep->declBus(c+1865,"CLINT_IDLE", false,-1, 1,0);
    tracep->declBus(c+1903,"CLINT_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+1937,"RTC_MMIO_LOW", false,-1, 31,0);
    tracep->declBus(c+1938,"RTC_MMIO_HI", false,-1, 31,0);
    tracep->declBus(c+603,"clint_state", false,-1, 1,0);
    tracep->declBit(c+1723,"clint_ar_fire", false,-1);
    tracep->declBit(c+650,"clint_r_fire", false,-1);
    tracep->declBus(c+604,"mtime_hi", false,-1, 31,0);
    tracep->declBus(c+605,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+589,"r_clint_rdata", false,-1, 31,0);
    tracep->declBus(c+590,"r_rid", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_decoder ");
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1900,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1899,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1901,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBus(c+1598,"inst", false,-1, 31,0);
    tracep->declBit(c+1415,"fetch_dec_valid", false,-1);
    tracep->declBit(c+1416,"fetch_dec_ready", false,-1);
    tracep->declBus(c+1599,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+1600,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+1431,"dec_exc_waddr", false,-1, 4,0);
    tracep->declBus(c+1432,"dec_exc_imm", false,-1, 31,0);
    tracep->declBus(c+1429,"dec_exc_fun", false,-1, 2,0);
    tracep->declBus(c+1430,"dec_exc_opcode", false,-1, 6,0);
    tracep->declBit(c+591,"dec_exc_fencei", false,-1);
    tracep->declBit(c+1426,"mem_ar_valid", false,-1);
    tracep->declBit(c+1758,"mem_ar_ready", false,-1);
    tracep->declBit(c+1417,"dec_exc_valid", false,-1);
    tracep->declBit(c+1418,"dec_exc_ready", false,-1);
    tracep->declBus(c+1939,"TYPE_NUM", false,-1, 31,0);
    tracep->declBus(c+1899,"TYPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1912,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1913,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+1915,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1916,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+1917,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+1918,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1919,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+1920,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+1921,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+1940,"TYPE_FENCE_I", false,-1, 6,0);
    tracep->declBus(c+1903,"STATE_ID", false,-1, 1,0);
    tracep->declBus(c+1934,"STATE_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+1936,"STATE_LOAD_DATA", false,-1, 1,0);
    tracep->declBus(c+1429,"r_fun", false,-1, 2,0);
    tracep->declBus(c+1430,"r_opcode", false,-1, 6,0);
    tracep->declBus(c+1431,"r_waddr", false,-1, 4,0);
    tracep->declBus(c+1432,"r_imm", false,-1, 31,0);
    tracep->declBit(c+591,"r_fencei", false,-1);
    tracep->declBus(c+1601,"fun", false,-1, 2,0);
    tracep->declBus(c+1602,"opcode", false,-1, 6,0);
    tracep->declBus(c+1603,"w_addr", false,-1, 4,0);
    tracep->declBus(c+1604,"imm", false,-1, 31,0);
    tracep->declBit(c+1605,"mem_load_en", false,-1);
    tracep->declBit(c+1606,"is_fencei", false,-1);
    tracep->declBus(c+1465,"id_state", false,-1, 1,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+1939,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1899,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1898,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1604,"out", false,-1, 31,0);
    tracep->declBus(c+1602,"key", false,-1, 6,0);
    tracep->declBus(c+1897,"default_out", false,-1, 31,0);
    tracep->declArray(c+1607,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1939,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1899,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1898,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1941,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+1604,"out", false,-1, 31,0);
    tracep->declBus(c+1602,"key", false,-1, 6,0);
    tracep->declBus(c+1897,"default_out", false,-1, 31,0);
    tracep->declArray(c+1607,"lut", false,-1, 350,0);
    tracep->declBus(c+1942,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+1618+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1636+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+1645,"lut_out", false,-1, 31,0);
    tracep->declBit(c+1646,"hit", false,-1);
    tracep->declBus(c+1943,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_icache ");
    tracep->declBus(c+1898,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1852,"LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+1944,"SET_NUM", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1825,"rst_n", false,-1);
    tracep->declBit(c+1438,"flush_i", false,-1);
    tracep->declBit(c+583,"cpu_ar_valid", false,-1);
    tracep->declBus(c+1414,"cpu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+1421,"cpu_ar_ready", false,-1);
    tracep->declBit(c+1416,"cpu_inst_rready", false,-1);
    tracep->declBit(c+1422,"cpu_inst_rvalid", false,-1);
    tracep->declBus(c+584,"cpu_inst_rdata", false,-1, 31,0);
    tracep->declBit(c+1423,"mem_ar_valid", false,-1);
    tracep->declBus(c+585,"mem_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1904,"mem_ar_len", false,-1, 7,0);
    tracep->declBus(c+1856,"mem_ar_size", false,-1, 2,0);
    tracep->declBus(c+1903,"mem_ar_burst", false,-1, 1,0);
    tracep->declBit(c+1757,"mem_ar_ready", false,-1);
    tracep->declBit(c+1538,"mem_rvalid", false,-1);
    tracep->declBit(c+1424,"mem_rready", false,-1);
    tracep->declBus(c+1539,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+1540,"mem_rlast", false,-1);
    tracep->declBus(c+1945,"WORD_BYTES", false,-1, 31,0);
    tracep->declBus(c+1946,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+1947,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+1901,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1899,"SET_INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1948,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1946,"WORD_OFFSET_W", false,-1, 31,0);
    tracep->declBus(c+1941,"WORD_INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1949,"WORD_INDEX_ZERO", false,-1, 0,0);
    tracep->declBus(c+1950,"WORD_INDEX_ONE", false,-1, 0,0);
    tracep->declBus(c+1951,"LAST_WORD_INDEX_U32", false,-1, 31,0);
    tracep->declBus(c+1950,"LAST_WORD_INDEX", false,-1, 0,0);
    tracep->declBus(c+1904,"AXI_ARLEN", false,-1, 7,0);
    tracep->declBus(c+1856,"AXI_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+1903,"AXI_ARBURS", false,-1, 1,0);
    tracep->declBus(c+1865,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1903,"ST_HIT", false,-1, 1,0);
    tracep->declBus(c+1934,"ST_MISS", false,-1, 1,0);
    tracep->declBus(c+1936,"ST_WAIT_RESP", false,-1, 1,0);
    tracep->declBus(c+1466,"state", false,-1, 1,0);
    tracep->declArray(c+606,"cache_valid0", false,-1, 127,0);
    tracep->declArray(c+610,"cache_valid1", false,-1, 127,0);
    tracep->declArray(c+614,"lru_bit", false,-1, 127,0);
    tracep->declBus(c+618,"req_addr_r", false,-1, 31,0);
    tracep->declBit(c+619,"victim_way_r", false,-1);
    tracep->declBus(c+620,"refill_word_idx", false,-1, 0,0);
    tracep->declQuad(c+621,"ic_req_cnt", false,-1, 63,0);
    tracep->declQuad(c+623,"ic_hit_cnt", false,-1, 63,0);
    tracep->declQuad(c+625,"ic_miss_cnt", false,-1, 63,0);
    tracep->declQuad(c+627,"ic_total_access_cycles", false,-1, 63,0);
    tracep->declQuad(c+629,"ic_miss_penalty_cycles", false,-1, 63,0);
    tracep->declBit(c+631,"req_inflight", false,-1);
    tracep->declBit(c+632,"req_is_hit", false,-1);
    tracep->declQuad(c+633,"req_cycle_cnt", false,-1, 63,0);
    tracep->declBus(c+1467,"cur_set", false,-1, 6,0);
    tracep->declBus(c+1468,"cur_tag", false,-1, 21,0);
    tracep->declBus(c+635,"req_set", false,-1, 6,0);
    tracep->declBus(c+636,"req_tag", false,-1, 21,0);
    tracep->declBus(c+637,"req_word_index", false,-1, 0,0);
    tracep->declBus(c+638,"req_byte_offset", false,-1, 2,0);
    tracep->declBit(c+1469,"cur_hit0", false,-1);
    tracep->declBit(c+651,"cur_hit1", false,-1);
    tracep->declBit(c+1470,"hit", false,-1);
    tracep->declBit(c+639,"req_hit0", false,-1);
    tracep->declBit(c+640,"req_hit1", false,-1);
    tracep->declBus(c+641,"req_data_way0", false,-1, 31,0);
    tracep->declBus(c+642,"req_data_way1", false,-1, 31,0);
    tracep->declBus(c+584,"req_hit_data", false,-1, 31,0);
    tracep->declBit(c+1471,"cur_way0_valid", false,-1);
    tracep->declBit(c+1472,"cur_way1_valid", false,-1);
    tracep->declBit(c+1473,"victim_way_sel", false,-1);
    tracep->declBus(c+585,"req_line_base_addr", false,-1, 31,0);
    tracep->declBus(c+643,"i", false,-1, 31,0);
    tracep->declArray(c+606,"w_cache_valid0", false,-1, 127,0);
    tracep->declArray(c+610,"w_cache_valid1", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ifu ");
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBus(c+1414,"i_pc", false,-1, 31,0);
    tracep->declBit(c+1416,"i_ifu_dec_ready", false,-1);
    tracep->declBit(c+1537,"if_bresp", false,-1);
    tracep->declBus(c+1598,"o_current_inst", false,-1, 31,0);
    tracep->declBit(c+1415,"o_ifu_dec_r_valid", false,-1);
    tracep->declBit(c+583,"o_ifu_arvalid", false,-1);
    tracep->declBit(c+1421,"i_ifu_arready", false,-1);
    tracep->declBus(c+1414,"o_ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"o_ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1864,"o_ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1856,"o_ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1903,"o_ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1416,"o_ifu_rready", false,-1);
    tracep->declBit(c+1422,"i_ifu_rvalid", false,-1);
    tracep->declBus(c+584,"i_ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1865,"i_ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1422,"i_ifu_rlast", false,-1);
    tracep->declBus(c+1863,"i_ifu_rid", false,-1, 3,0);
    tracep->declBit(c+583,"r_ifu_ar_valid", false,-1);
    tracep->declBus(c+1598,"r_cur_inst", false,-1, 31,0);
    tracep->declBit(c+1415,"r_ifu_dec_rvalid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_lsu ");
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBus(c+1553,"i_src1", false,-1, 31,0);
    tracep->declBus(c+1554,"i_src2", false,-1, 31,0);
    tracep->declBus(c+1432,"i_imm", false,-1, 31,0);
    tracep->declBus(c+1429,"i_fun", false,-1, 2,0);
    tracep->declBus(c+1430,"i_opcode", false,-1, 6,0);
    tracep->declBit(c+1426,"i_lsu_dec_ar_valid", false,-1);
    tracep->declBit(c+578,"i_exc_wb_ready", false,-1);
    tracep->declBit(c+1428,"i_lsu_ex_w_valid", false,-1);
    tracep->declBit(c+1426,"o_lsu_arvalid", false,-1);
    tracep->declBit(c+1758,"i_lsu_arready", false,-1);
    tracep->declBus(c+1720,"o_lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"o_lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1864,"o_lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1856,"o_lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1903,"o_lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1427,"o_lsu_rready", false,-1);
    tracep->declBit(c+1541,"i_lsu_rvalid", false,-1);
    tracep->declBus(c+1539,"i_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1816,"i_lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1540,"i_lsu_rlast", false,-1);
    tracep->declBus(c+1817,"i_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+1428,"o_lsu_awvalid", false,-1);
    tracep->declBit(c+1759,"i_lsu_awready", false,-1);
    tracep->declBus(c+1720,"o_lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"o_lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"o_lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1856,"o_lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1903,"o_lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+1428,"o_lsu_wvalid", false,-1);
    tracep->declBit(c+1760,"i_lsu_wready", false,-1);
    tracep->declBus(c+1721,"o_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+1722,"o_lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"o_lsu_wlast", false,-1);
    tracep->declBit(c+1860,"o_lsu_bready", false,-1);
    tracep->declBit(c+1818,"i_lsu_bvalid", false,-1);
    tracep->declBus(c+1819,"i_lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1820,"i_lsu_bid", false,-1, 3,0);
    tracep->declBus(c+586,"o_r_data", false,-1, 31,0);
    tracep->declBit(c+1541,"o_lsu_rvalid", false,-1);
    tracep->declBit(c+1758,"o_lsu_dec_ar_ready", false,-1);
    tracep->declBit(c+1761,"o_lsu_ex_w_ready", false,-1);
    tracep->declBus(c+1425,"o_lsu_wmask", false,-1, 7,0);
    tracep->declBus(c+1912,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1720,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+1724,"mem_offset", false,-1, 1,0);
    tracep->declBus(c+586,"r_lsu_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rf ");
    tracep->declBus(c+1900,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBit(c+1434,"wen", false,-1);
    tracep->declBus(c+447,"w_data", false,-1, 31,0);
    tracep->declBus(c+1431,"w_addr", false,-1, 4,0);
    tracep->declBus(c+1599,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+1600,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+1553,"r_data1", false,-1, 31,0);
    tracep->declBus(c+1554,"r_data2", false,-1, 31,0);
    tracep->declBit(c+1419,"exc_wb_valid", false,-1);
    tracep->declBit(c+578,"exc_wb_ready", false,-1);
    tracep->declBit(c+579,"wb_bresp", false,-1);
    tracep->declBus(c+1552,"exit_code", false,-1, 31,0);
    tracep->declBus(c+1903,"STATE_REC", false,-1, 1,0);
    tracep->declBus(c+1934,"STATE_WB", false,-1, 1,0);
    tracep->declBus(c+644,"wb_state", false,-1, 1,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1555+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1937,"CLINT_ADDR_LEFT", false,-1, 31,0);
    tracep->declBus(c+1938,"CLINT_ADDR_RIGHT", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1814,"reset", false,-1);
    tracep->declBit(c+1435,"xb_ar_valid", false,-1);
    tracep->declBit(c+1762,"xb_ar_ready", false,-1);
    tracep->declBus(c+1661,"xb_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1863,"xb_ar_id", false,-1, 3,0);
    tracep->declBus(c+1405,"xb_ar_len", false,-1, 7,0);
    tracep->declBus(c+1406,"xb_ar_size", false,-1, 2,0);
    tracep->declBus(c+1407,"xb_ar_burst", false,-1, 1,0);
    tracep->declBit(c+1542,"xb_r_valid", false,-1);
    tracep->declBit(c+1436,"xb_r_ready", false,-1);
    tracep->declBus(c+1539,"xb_r_data", false,-1, 31,0);
    tracep->declBus(c+1816,"xb_r_resp", false,-1, 1,0);
    tracep->declBit(c+1540,"xb_r_last", false,-1);
    tracep->declBus(c+1817,"xb_r_id", false,-1, 3,0);
    tracep->declBit(c+1437,"xb_aw_valid", false,-1);
    tracep->declBit(c+1763,"xb_aw_ready", false,-1);
    tracep->declBus(c+1663,"xb_aw_addr", false,-1, 31,0);
    tracep->declBus(c+1863,"xb_aw_id", false,-1, 3,0);
    tracep->declBus(c+1864,"xb_aw_len", false,-1, 7,0);
    tracep->declBus(c+1408,"xb_aw_size", false,-1, 2,0);
    tracep->declBus(c+1409,"xb_aw_burst", false,-1, 1,0);
    tracep->declBit(c+1437,"xb_w_valid", false,-1);
    tracep->declBit(c+1764,"xb_w_ready", false,-1);
    tracep->declBus(c+1665,"xb_w_data", false,-1, 31,0);
    tracep->declBus(c+1666,"xb_w_strb", false,-1, 3,0);
    tracep->declBit(c+1410,"xb_w_last", false,-1);
    tracep->declBit(c+1821,"xb_b_valid", false,-1);
    tracep->declBit(c+1410,"xb_b_ready", false,-1);
    tracep->declBus(c+1819,"xb_b_resp", false,-1, 1,0);
    tracep->declBus(c+1820,"xb_b_id", false,-1, 3,0);
    tracep->declBit(c+1690,"soc_arvalid", false,-1);
    tracep->declBit(c+1744,"soc_arready", false,-1);
    tracep->declBus(c+1661,"soc_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+1405,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+1319,"soc_rvalid", false,-1);
    tracep->declBit(c+1413,"soc_rready", false,-1);
    tracep->declBus(c+1809,"soc_rdata", false,-1, 31,0);
    tracep->declBus(c+1810,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+1321,"soc_rlast", false,-1);
    tracep->declBus(c+1320,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1689,"soc_awvalid", false,-1);
    tracep->declBit(c+1743,"soc_awready", false,-1);
    tracep->declBus(c+1663,"soc_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+1411,"soc_wvalid", false,-1);
    tracep->declBit(c+1807,"soc_wready", false,-1);
    tracep->declBus(c+1665,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"soc_wlast", false,-1);
    tracep->declBit(c+1317,"soc_bvalid", false,-1);
    tracep->declBit(c+1412,"soc_bready", false,-1);
    tracep->declBus(c+1808,"soc_bresp", false,-1, 1,0);
    tracep->declBus(c+1318,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+1822,"clint_arvalid", false,-1);
    tracep->declBit(c+587,"clint_arready", false,-1);
    tracep->declBus(c+1661,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+1863,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1405,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1406,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1407,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+588,"clint_rvalid", false,-1);
    tracep->declBit(c+647,"clint_rready", false,-1);
    tracep->declBus(c+589,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1865,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1860,"clint_rlast", false,-1);
    tracep->declBus(c+590,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1823,"clint_awvalid", false,-1);
    tracep->declBit(c+1861,"clint_awready", false,-1);
    tracep->declBus(c+1663,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1863,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1864,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1408,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1409,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+648,"clint_wvalid", false,-1);
    tracep->declBit(c+1861,"clint_wready", false,-1);
    tracep->declBus(c+1665,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1666,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1410,"clint_wlast", false,-1);
    tracep->declBit(c+1861,"clint_bvalid", false,-1);
    tracep->declBit(c+649,"clint_bready", false,-1);
    tracep->declBus(c+1865,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1863,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1725,"ar_to_clint", false,-1);
    tracep->declBit(c+1726,"aw_to_clint", false,-1);
    tracep->declBit(c+645,"rd_sel_clint", false,-1);
    tracep->declBit(c+646,"wr_sel_clint", false,-1);
    tracep->declBit(c+1478,"ar_hs", false,-1);
    tracep->declBit(c+1479,"aw_hs", false,-1);
    tracep->declBit(c+1543,"r_done", false,-1);
    tracep->declBit(c+1544,"b_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"io_d", false,-1);
    tracep->declBit(c+450,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"io_d", false,-1);
    tracep->declBit(c+450,"io_q", false,-1);
    tracep->declBit(c+450,"sync_0", false,-1);
    tracep->declBit(c+451,"sync_1", false,-1);
    tracep->declBit(c+452,"sync_2", false,-1);
    tracep->declBit(c+453,"sync_3", false,-1);
    tracep->declBit(c+454,"sync_4", false,-1);
    tracep->declBit(c+455,"sync_5", false,-1);
    tracep->declBit(c+456,"sync_6", false,-1);
    tracep->declBit(c+457,"sync_7", false,-1);
    tracep->declBit(c+458,"sync_8", false,-1);
    tracep->declBit(c+459,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1295,"auto_in_psel", false,-1);
    tracep->declBit(c+1296,"auto_in_penable", false,-1);
    tracep->declBit(c+1286,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1093,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1297,"auto_in_pready", false,-1);
    tracep->declBit(c+1298,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1097,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1767,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1768,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1769,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1770,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1771,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1772,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1773,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1774,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1775,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1776,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+1338,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1295,"in_psel", false,-1);
    tracep->declBit(c+1296,"in_penable", false,-1);
    tracep->declBus(c+1093,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1286,"in_pwrite", false,-1);
    tracep->declBus(c+1287,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1297,"in_pready", false,-1);
    tracep->declBus(c+1097,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1298,"in_pslverr", false,-1);
    tracep->declBus(c+1767,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1768,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1769,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1770,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1771,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1772,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1773,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1774,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1775,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1776,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1864,"LED_CTRL_ADDR", false,-1, 7,0);
    tracep->declBus(c+1952,"DIP_STATE_ADDR", false,-1, 7,0);
    tracep->declBus(c+1953,"SEG7_ADDR", false,-1, 7,0);
    tracep->declBus(c+1954,"RESERVE_ADDR", false,-1, 7,0);
    tracep->declBus(c+1955,"LED_NUM", false,-1, 31,0);
    tracep->declBus(c+1898,"SEG_CTRL_W", false,-1, 31,0);
    tracep->declBus(c+1898,"GPIO_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+791,"led_ctrl", false,-1, 15,0);
    tracep->declBus(c+792,"dip_state", false,-1, 15,0);
    tracep->declBus(c+793,"seg7_ctrl", false,-1, 31,0);
    tracep->declBit(c+794,"reserve", false,-1);
    tracep->declBit(c+1339,"addr_valid", false,-1);
    tracep->declBit(c+1340,"apb_setup", false,-1);
    tracep->declBit(c+1297,"apb_access", false,-1);
    tracep->declBit(c+1341,"apb_wr", false,-1);
    tracep->declBit(c+1342,"apb_rd", false,-1);
    tracep->declBus(c+1343,"apb_addr", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1292,"auto_in_psel", false,-1);
    tracep->declBit(c+1293,"auto_in_penable", false,-1);
    tracep->declBit(c+1286,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1093,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"auto_in_pready", false,-1);
    tracep->declBit(c+1861,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1794,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1777,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1778,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+1338,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1292,"in_psel", false,-1);
    tracep->declBit(c+1293,"in_penable", false,-1);
    tracep->declBus(c+1093,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1286,"in_pwrite", false,-1);
    tracep->declBus(c+1287,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"in_pready", false,-1);
    tracep->declBus(c+1794,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1861,"in_pslverr", false,-1);
    tracep->declBit(c+1777,"ps2_clk", false,-1);
    tracep->declBit(c+1778,"ps2_data", false,-1);
    tracep->declBus(c+1863,"PS_DATA_ADDR", false,-1, 3,0);
    tracep->declBus(c+1956,"PS_STATUS_ADDR", false,-1, 3,0);
    tracep->declBit(c+1344,"apb_setup", false,-1);
    tracep->declBit(c+1345,"apb_access", false,-1);
    tracep->declBit(c+1346,"apb_wr", false,-1);
    tracep->declBit(c+1347,"apb_rd", false,-1);
    tracep->declBit(c+1348,"rd_status", false,-1);
    tracep->declBit(c+1349,"rd_data", false,-1);
    tracep->declBus(c+460,"ps2_clock_sync", false,-1, 2,0);
    tracep->declBus(c+795,"key_bit_cnt", false,-1, 3,0);
    tracep->declBus(c+796,"ps2_status", false,-1, 31,0);
    tracep->declBit(c+1957,"key_down", false,-1);
    tracep->declBit(c+1350,"fifo_ren", false,-1);
    tracep->declBus(c+797,"fifo_wbuf", false,-1, 10,0);
    tracep->declBus(c+798,"fifo_wdata", false,-1, 7,0);
    tracep->declBus(c+1826,"fifo_rdata", false,-1, 7,0);
    tracep->declBit(c+10,"fifo_wen", false,-1);
    tracep->declBit(c+799,"fifo_full", false,-1);
    tracep->declBit(c+800,"fifo_empty", false,-1);
    tracep->declBit(c+1238,"sampling", false,-1);
    tracep->declBit(c+801,"parity_ok", false,-1);
    tracep->declBit(c+802,"start_ok", false,-1);
    tracep->declBit(c+1778,"stop_ok", false,-1);
    tracep->declBit(c+11,"frame_valid", false,-1);
    tracep->declBit(c+803,"overflow", false,-1);
    tracep->pushNamePrefix("u_ps2_fifo ");
    tracep->declBus(c+1852,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+798,"i_data", false,-1, 7,0);
    tracep->declBit(c+10,"wen", false,-1);
    tracep->declBit(c+1350,"ren", false,-1);
    tracep->declBus(c+1826,"o_data", false,-1, 7,0);
    tracep->declBit(c+800,"o_empty", false,-1);
    tracep->declBit(c+799,"o_full", false,-1);
    tracep->declBus(c+1900,"PTR_W", false,-1, 31,0);
    tracep->declBus(c+1958,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1239+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+804,"w_ptr", false,-1, 4,0);
    tracep->declBus(c+805,"r_ptr", false,-1, 4,0);
    tracep->declBus(c+806,"count", false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1704,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1705,"auto_in_wvalid", false,-1);
    tracep->declBit(c+241,"auto_in_arready", false,-1);
    tracep->declBit(c+1706,"auto_in_arvalid", false,-1);
    tracep->declBus(c+56,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1707,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+504,"auto_in_rready", false,-1);
    tracep->declBit(c+242,"auto_in_rvalid", false,-1);
    tracep->declBus(c+243,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+244,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+242,"state", false,-1);
    tracep->declBus(c+244,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+243,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1727,"raddr", false,-1, 31,0);
    tracep->declBit(c+1728,"ren", false,-1);
    tracep->declBus(c+1729,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1299,"auto_in_psel", false,-1);
    tracep->declBit(c+1098,"auto_in_penable", false,-1);
    tracep->declBit(c+1286,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1284,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1093,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"auto_in_pready", false,-1);
    tracep->declBit(c+1861,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1230,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1282,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1283,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1788,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+1284,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1299,"in_psel", false,-1);
    tracep->declBit(c+1098,"in_penable", false,-1);
    tracep->declBus(c+1093,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1286,"in_pwrite", false,-1);
    tracep->declBus(c+1287,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1099,"in_pready", false,-1);
    tracep->declBus(c+1230,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1861,"in_pslverr", false,-1);
    tracep->declBit(c+1282,"qspi_sck", false,-1);
    tracep->declBit(c+1283,"qspi_ce_n", false,-1);
    tracep->declBus(c+1788,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1788,"din", false,-1, 3,0);
    tracep->declBus(c+1351,"dout", false,-1, 3,0);
    tracep->declBus(c+1352,"douten", false,-1, 3,0);
    tracep->declBit(c+1103,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1765,"clk_i", false,-1);
    tracep->declBit(c+1766,"rst_i", false,-1);
    tracep->declBus(c+1284,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1287,"dat_i", false,-1, 31,0);
    tracep->declBus(c+1230,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1288,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1299,"cyc_i", false,-1);
    tracep->declBit(c+1299,"stb_i", false,-1);
    tracep->declBit(c+1103,"ack_o", false,-1);
    tracep->declBit(c+1286,"we_i", false,-1);
    tracep->declBit(c+1282,"sck", false,-1);
    tracep->declBit(c+1283,"ce_n", false,-1);
    tracep->declBus(c+1788,"din", false,-1, 3,0);
    tracep->declBus(c+1351,"dout", false,-1, 3,0);
    tracep->declBus(c+1352,"douten", false,-1, 3,0);
    tracep->declBus(c+1865,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1903,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1934,"ST_INIT", false,-1, 1,0);
    tracep->declBit(c+807,"mi_sck", false,-1);
    tracep->declBit(c+808,"mi_ce_n", false,-1);
    tracep->declBus(c+809,"mi_dout", false,-1, 3,0);
    tracep->declBit(c+810,"mi_doe", false,-1);
    tracep->declBit(c+811,"mr_sck", false,-1);
    tracep->declBit(c+812,"mr_ce_n", false,-1);
    tracep->declBus(c+1788,"mr_din", false,-1, 3,0);
    tracep->declBus(c+813,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+814,"mr_doe", false,-1);
    tracep->declBit(c+815,"mw_sck", false,-1);
    tracep->declBit(c+816,"mw_ce_n", false,-1);
    tracep->declBus(c+1788,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1353,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+817,"mw_doe", false,-1);
    tracep->declBit(c+1959,"mi_init", false,-1);
    tracep->declBit(c+818,"mi_done", false,-1);
    tracep->declBit(c+1354,"mr_rd", false,-1);
    tracep->declBit(c+819,"mr_done", false,-1);
    tracep->declBit(c+1355,"mw_wr", false,-1);
    tracep->declBit(c+1356,"mw_done", false,-1);
    tracep->declBit(c+1299,"wb_valid", false,-1);
    tracep->declBit(c+1357,"wb_we", false,-1);
    tracep->declBit(c+1358,"wb_re", false,-1);
    tracep->declBus(c+820,"state", false,-1, 1,0);
    tracep->declBus(c+1104,"nstate", false,-1, 1,0);
    tracep->declBit(c+821,"qpi_ready", false,-1);
    tracep->declBus(c+1359,"size", false,-1, 2,0);
    tracep->declBus(c+1360,"byte0", false,-1, 7,0);
    tracep->declBus(c+1361,"byte1", false,-1, 7,0);
    tracep->declBus(c+1362,"byte2", false,-1, 7,0);
    tracep->declBus(c+1363,"byte3", false,-1, 7,0);
    tracep->declBus(c+1364,"wdata", false,-1, 31,0);
    tracep->declBus(c+1365,"waddr", false,-1, 1,0);
    tracep->pushNamePrefix("MI ");
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1827,"rst_n", false,-1);
    tracep->declBit(c+822,"start", false,-1);
    tracep->declBit(c+818,"done", false,-1);
    tracep->declBit(c+807,"sck", false,-1);
    tracep->declBit(c+808,"ce_n", false,-1);
    tracep->declBus(c+809,"dout", false,-1, 3,0);
    tracep->declBit(c+810,"douten", false,-1);
    tracep->declBus(c+1865,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1903,"SEND", false,-1, 1,0);
    tracep->declBus(c+1934,"INIT_DONE", false,-1, 1,0);
    tracep->declBus(c+823,"state", false,-1, 1,0);
    tracep->declBus(c+824,"nstate", false,-1, 1,0);
    tracep->declBus(c+825,"counter", false,-1, 3,0);
    tracep->declBus(c+1960,"CMD_35H", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1827,"rst_n", false,-1);
    tracep->declBus(c+1366,"addr", false,-1, 23,0);
    tracep->declBit(c+1354,"rd", false,-1);
    tracep->declBus(c+1931,"size", false,-1, 2,0);
    tracep->declBit(c+1860,"qpi_mode", false,-1);
    tracep->declBit(c+819,"done", false,-1);
    tracep->declBus(c+1230,"line", false,-1, 31,0);
    tracep->declBit(c+811,"sck", false,-1);
    tracep->declBit(c+812,"ce_n", false,-1);
    tracep->declBus(c+1788,"din", false,-1, 3,0);
    tracep->declBus(c+813,"dout", false,-1, 3,0);
    tracep->declBit(c+814,"douten", false,-1);
    tracep->declBus(c+1949,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1950,"READ", false,-1, 0,0);
    tracep->declBus(c+1961,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1962,"QPI_FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+826,"state", false,-1);
    tracep->declBit(c+1367,"nstate", false,-1);
    tracep->declBus(c+827,"counter", false,-1, 7,0);
    tracep->declBus(c+828,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1271+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1963,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+829,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1827,"rst_n", false,-1);
    tracep->declBus(c+1366,"addr", false,-1, 23,0);
    tracep->declBus(c+1364,"line", false,-1, 31,0);
    tracep->declBus(c+1359,"size", false,-1, 2,0);
    tracep->declBit(c+1355,"wr", false,-1);
    tracep->declBit(c+1860,"qpi_mode", false,-1);
    tracep->declBit(c+1356,"done", false,-1);
    tracep->declBit(c+815,"sck", false,-1);
    tracep->declBit(c+816,"ce_n", false,-1);
    tracep->declBus(c+1788,"din", false,-1, 3,0);
    tracep->declBus(c+1353,"dout", false,-1, 3,0);
    tracep->declBit(c+817,"douten", false,-1);
    tracep->declBus(c+1949,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1950,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1368,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1369,"QPI_FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+830,"state", false,-1);
    tracep->declBit(c+1370,"nstate", false,-1);
    tracep->declBus(c+831,"counter", false,-1, 7,0);
    tracep->declBus(c+832,"saddr", false,-1, 23,0);
    tracep->declBus(c+1964,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1486,"auto_in_awready", false,-1);
    tracep->declBit(c+696,"auto_in_awvalid", false,-1);
    tracep->declBus(c+697,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+698,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+699,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+700,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+701,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1487,"auto_in_wready", false,-1);
    tracep->declBit(c+702,"auto_in_wvalid", false,-1);
    tracep->declBus(c+703,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+704,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+705,"auto_in_wlast", false,-1);
    tracep->declBit(c+706,"auto_in_bready", false,-1);
    tracep->declBit(c+707,"auto_in_bvalid", false,-1);
    tracep->declBus(c+693,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1865,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1485,"auto_in_arready", false,-1);
    tracep->declBit(c+685,"auto_in_arvalid", false,-1);
    tracep->declBus(c+686,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+687,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+688,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+689,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+690,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+691,"auto_in_rready", false,-1);
    tracep->declBit(c+692,"auto_in_rvalid", false,-1);
    tracep->declBus(c+693,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+694,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1865,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+695,"auto_in_rlast", false,-1);
    tracep->declBit(c+1789,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1482,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+656,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+657,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+658,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+659,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1790,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1483,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1484,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1587,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1486,"in_awready", false,-1);
    tracep->declBus(c+698,"in_awaddr", false,-1, 31,0);
    tracep->declBit(c+696,"in_awvalid", false,-1);
    tracep->declBus(c+697,"in_awid", false,-1, 3,0);
    tracep->declBus(c+699,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+700,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+701,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1487,"in_wready", false,-1);
    tracep->declBit(c+702,"in_wvalid", false,-1);
    tracep->declBus(c+703,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+704,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+705,"in_wlast", false,-1);
    tracep->declBit(c+706,"in_bready", false,-1);
    tracep->declBit(c+707,"in_bvalid", false,-1);
    tracep->declBus(c+1865,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+693,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1485,"in_arready", false,-1);
    tracep->declBit(c+685,"in_arvalid", false,-1);
    tracep->declBus(c+687,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+686,"in_arid", false,-1, 3,0);
    tracep->declBus(c+688,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+689,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+690,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+691,"in_rready", false,-1);
    tracep->declBit(c+692,"in_rvalid", false,-1);
    tracep->declBus(c+1865,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+694,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+695,"in_rlast", false,-1);
    tracep->declBus(c+693,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1789,"sdram_clk", false,-1);
    tracep->declBit(c+1482,"sdram_cke", false,-1);
    tracep->declBit(c+656,"sdram_cs", false,-1);
    tracep->declBit(c+657,"sdram_ras", false,-1);
    tracep->declBit(c+658,"sdram_cas", false,-1);
    tracep->declBit(c+659,"sdram_we", false,-1);
    tracep->declBus(c+1790,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1483,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1484,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1587,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+833,"sdram_dout_en", false,-1);
    tracep->declBus(c+834,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1765,"clk_i", false,-1);
    tracep->declBit(c+1766,"rst_i", false,-1);
    tracep->declBit(c+696,"inport_awvalid_i", false,-1);
    tracep->declBus(c+698,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+697,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+699,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+701,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+702,"inport_wvalid_i", false,-1);
    tracep->declBus(c+703,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+704,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+705,"inport_wlast_i", false,-1);
    tracep->declBit(c+706,"inport_bready_i", false,-1);
    tracep->declBit(c+685,"inport_arvalid_i", false,-1);
    tracep->declBus(c+687,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+686,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+688,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+690,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+691,"inport_rready_i", false,-1);
    tracep->declBus(c+1587,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1486,"inport_awready_o", false,-1);
    tracep->declBit(c+1487,"inport_wready_o", false,-1);
    tracep->declBit(c+707,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1865,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+693,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1485,"inport_arready_o", false,-1);
    tracep->declBit(c+692,"inport_rvalid_o", false,-1);
    tracep->declBus(c+694,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1865,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+693,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+695,"inport_rlast_o", false,-1);
    tracep->declBit(c+1789,"sdram_clk_o", false,-1);
    tracep->declBit(c+1482,"sdram_cke_o", false,-1);
    tracep->declBit(c+656,"sdram_cs_o", false,-1);
    tracep->declBit(c+657,"sdram_ras_o", false,-1);
    tracep->declBit(c+658,"sdram_cas_o", false,-1);
    tracep->declBit(c+659,"sdram_we_o", false,-1);
    tracep->declBus(c+1484,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1790,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1483,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+834,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+833,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1851,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1965,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1939,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1946,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1488,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1489,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+835,"ram_rd_w", false,-1);
    tracep->declBit(c+1490,"ram_accept_w", false,-1);
    tracep->declBus(c+703,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+836,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+837,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+838,"ram_ack_w", false,-1);
    tracep->declBit(c+1861,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1765,"clk_i", false,-1);
    tracep->declBit(c+1766,"rst_i", false,-1);
    tracep->declBit(c+696,"axi_awvalid_i", false,-1);
    tracep->declBus(c+698,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+697,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+699,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+701,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+702,"axi_wvalid_i", false,-1);
    tracep->declBus(c+703,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+704,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+705,"axi_wlast_i", false,-1);
    tracep->declBit(c+706,"axi_bready_i", false,-1);
    tracep->declBit(c+685,"axi_arvalid_i", false,-1);
    tracep->declBus(c+687,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+686,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+688,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+690,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+691,"axi_rready_i", false,-1);
    tracep->declBit(c+1490,"ram_accept_i", false,-1);
    tracep->declBit(c+838,"ram_ack_i", false,-1);
    tracep->declBit(c+1861,"ram_error_i", false,-1);
    tracep->declBus(c+836,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1486,"axi_awready_o", false,-1);
    tracep->declBit(c+1487,"axi_wready_o", false,-1);
    tracep->declBit(c+707,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1865,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+693,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1485,"axi_arready_o", false,-1);
    tracep->declBit(c+692,"axi_rvalid_o", false,-1);
    tracep->declBus(c+694,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1865,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+693,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+695,"axi_rlast_o", false,-1);
    tracep->declBus(c+1489,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+835,"ram_rd_o", false,-1);
    tracep->declBus(c+837,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1488,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+703,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+839,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+840,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+841,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+842,"req_rd_q", false,-1);
    tracep->declBit(c+843,"req_wr_q", false,-1);
    tracep->declBus(c+844,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+845,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+846,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+847,"req_prio_q", false,-1);
    tracep->declBit(c+848,"req_hold_rd_q", false,-1);
    tracep->declBit(c+849,"req_hold_wr_q", false,-1);
    tracep->declBit(c+850,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1491,"req_push_w", false,-1);
    tracep->declBus(c+1828,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+851,"req_out_valid_w", false,-1);
    tracep->declBus(c+852,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+853,"resp_accept_w", false,-1);
    tracep->declBit(c+854,"resp_is_write_w", false,-1);
    tracep->declBit(c+855,"resp_is_read_w", false,-1);
    tracep->declBit(c+695,"resp_is_last_w", false,-1);
    tracep->declBus(c+693,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+856,"resp_valid_w", false,-1);
    tracep->declBit(c+857,"write_prio_w", false,-1);
    tracep->declBit(c+858,"read_prio_w", false,-1);
    tracep->declBit(c+859,"write_active_w", false,-1);
    tracep->declBit(c+835,"read_active_w", false,-1);
    tracep->declBus(c+1488,"addr_w", false,-1, 31,0);
    tracep->declBit(c+860,"wr_w", false,-1);
    tracep->declBit(c+835,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1958,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1945,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1946,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1765,"clk_i", false,-1);
    tracep->declBit(c+1766,"rst_i", false,-1);
    tracep->declBus(c+1828,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1491,"push_i", false,-1);
    tracep->declBit(c+853,"pop_i", false,-1);
    tracep->declBus(c+852,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+850,"accept_o", false,-1);
    tracep->declBit(c+851,"valid_o", false,-1);
    tracep->declBus(c+1901,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+861+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+865,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+866,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+867,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1898,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1945,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1946,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1765,"clk_i", false,-1);
    tracep->declBit(c+1766,"rst_i", false,-1);
    tracep->declBus(c+836,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+838,"push_i", false,-1);
    tracep->declBit(c+853,"pop_i", false,-1);
    tracep->declBus(c+694,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+868,"accept_o", false,-1);
    tracep->declBit(c+856,"valid_o", false,-1);
    tracep->declBus(c+1901,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+869+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+873,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+874,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+875,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1765,"clk_i", false,-1);
    tracep->declBit(c+1766,"rst_i", false,-1);
    tracep->declBus(c+1489,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+835,"inport_rd_i", false,-1);
    tracep->declBus(c+837,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1488,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+703,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1587,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1490,"inport_accept_o", false,-1);
    tracep->declBit(c+838,"inport_ack_o", false,-1);
    tracep->declBit(c+1861,"inport_error_o", false,-1);
    tracep->declBus(c+836,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1789,"sdram_clk_o", false,-1);
    tracep->declBit(c+1482,"sdram_cke_o", false,-1);
    tracep->declBit(c+656,"sdram_cs_o", false,-1);
    tracep->declBit(c+657,"sdram_ras_o", false,-1);
    tracep->declBit(c+658,"sdram_cas_o", false,-1);
    tracep->declBit(c+659,"sdram_we_o", false,-1);
    tracep->declBus(c+1484,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1790,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1483,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+834,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+833,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1851,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1965,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1939,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1946,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1946,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1966,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1967,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1968,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1969,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1898,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1946,"SDRAM_RANKS", false,-1, 31,0);
    tracep->declBus(c+1941,"SDRAM_RANK_W", false,-1, 31,0);
    tracep->declBus(c+1970,"SDRAM_RANK_SEL_BIT", false,-1, 31,0);
    tracep->declBus(c+1945,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1971,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1972,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1973,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1974,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1975,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1977,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1945,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1863,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1976,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1975,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1972,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1956,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1973,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1974,"STATE_WRITE", false,-1, 3,0);
    tracep->declBus(c+1971,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1978,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1979,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1979,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1979,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1946,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1946,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1958,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1488,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1489,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+835,"ram_rd_w", false,-1);
    tracep->declBit(c+1490,"ram_accept_w", false,-1);
    tracep->declBus(c+703,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+836,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+838,"ram_ack_w", false,-1);
    tracep->declBit(c+1492,"ram_req_w", false,-1);
    tracep->declBus(c+876,"command_q", false,-1, 3,0);
    tracep->declBus(c+1493,"addr_q", false,-1, 12,0);
    tracep->declBus(c+834,"data_q", false,-1, 31,0);
    tracep->declBit(c+877,"data_rd_en_q", false,-1);
    tracep->declBus(c+1484,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1482,"cke_q", false,-1);
    tracep->declBus(c+1483,"bank_q", false,-1, 1,0);
    tracep->declBit(c+878,"rank_q", false,-1);
    tracep->declBus(c+1587,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+879,"refresh_q", false,-1);
    tracep->declBit(c+880,"refresh_rank_q", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+881+i*1,"row_open_q", true,(i+0), 3,0);
    }
    tracep->pushNamePrefix("active_row_q");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+883,"[0]", false,-1, 12,0);
    tracep->declBus(c+884,"[1]", false,-1, 12,0);
    tracep->declBus(c+885,"[2]", false,-1, 12,0);
    tracep->declBus(c+886,"[3]", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+887,"[0]", false,-1, 12,0);
    tracep->declBus(c+888,"[1]", false,-1, 12,0);
    tracep->declBus(c+889,"[2]", false,-1, 12,0);
    tracep->declBus(c+890,"[3]", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1494,"state_q", false,-1, 3,0);
    tracep->declBus(c+1495,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1496,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1497,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+891,"delay_state_q", false,-1, 3,0);
    tracep->declBit(c+892,"req_rank_q", false,-1);
    tracep->declBus(c+1498,"req_bank_q", false,-1, 1,0);
    tracep->declBus(c+1499,"req_row_q", false,-1, 12,0);
    tracep->declBus(c+1500,"req_col_q", false,-1, 12,0);
    tracep->declBus(c+1501,"req_wr_q", false,-1, 3,0);
    tracep->declBit(c+893,"req_rd_q", false,-1);
    tracep->declBus(c+894,"req_write_data_q", false,-1, 31,0);
    tracep->declBit(c+1502,"addr_rank_w", false,-1);
    tracep->declBus(c+1503,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1504,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1505,"addr_row_w", false,-1, 12,0);
    tracep->declBit(c+1829,"current_row_hit_w", false,-1);
    tracep->declBit(c+1830,"current_bank_open_w", false,-1);
    tracep->declBit(c+895,"refresh_rank_open_w", false,-1);
    tracep->declBit(c+1490,"capture_req_w", false,-1);
    tracep->declBus(c+1945,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+896,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1506,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1980,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1507,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+897,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+836,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+898,"idx", false,-1, 31,0);
    tracep->declBus(c+899,"ridx", false,-1, 31,0);
    tracep->declBus(c+900,"rd_q", false,-1, 3,0);
    tracep->declBit(c+838,"ack_q", false,-1);
    tracep->declArray(c+1508,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1304,"auto_in_psel", false,-1);
    tracep->declBit(c+1305,"auto_in_penable", false,-1);
    tracep->declBit(c+1286,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1291,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1093,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1100,"auto_in_pready", false,-1);
    tracep->declBit(c+1101,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1102,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+654,"spi_bundle_sck", false,-1);
    tracep->declBus(c+655,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1481,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1787,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1981,"spi_reg_start", false,-1, 31,0);
    tracep->declBus(c+1982,"spi_reg_end", false,-1, 31,0);
    tracep->declBus(c+1902,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1983,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1852,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+1371,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1304,"in_psel", false,-1);
    tracep->declBit(c+1305,"in_penable", false,-1);
    tracep->declBus(c+1093,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1286,"in_pwrite", false,-1);
    tracep->declBus(c+1287,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1100,"in_pready", false,-1);
    tracep->declBus(c+1102,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1101,"in_pslverr", false,-1);
    tracep->declBit(c+654,"spi_sck", false,-1);
    tracep->declBus(c+655,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1481,"spi_mosi", false,-1);
    tracep->declBit(c+1787,"spi_miso", false,-1);
    tracep->declBit(c+901,"spi_irq_out", false,-1);
    tracep->declBit(c+1372,"apb_setup", false,-1);
    tracep->declBit(c+1373,"apb_access", false,-1);
    tracep->declBit(c+1374,"hit_spi_reg", false,-1);
    tracep->declBit(c+1375,"hit_flash_xip", false,-1);
    tracep->declBus(c+1984,"SPI_TX_RX0", false,-1, 4,0);
    tracep->declBus(c+1985,"SPI_TX_RX1", false,-1, 4,0);
    tracep->declBus(c+1986,"SPI_TX_RX2", false,-1, 4,0);
    tracep->declBus(c+1987,"SPI_TX_RX3", false,-1, 4,0);
    tracep->declBus(c+1988,"SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1989,"SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1990,"SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1991,"CTRL_GO_BSY_BIT", false,-1, 31,0);
    tracep->declBus(c+1943,"CTRL_RX_NEG_BIT", false,-1, 31,0);
    tracep->declBus(c+1992,"CTRL_TX_NEG_BIT", false,-1, 31,0);
    tracep->declBus(c+1993,"CTRL_LSB_BIT", false,-1, 31,0);
    tracep->declBus(c+1994,"CTRL_IE_BIT", false,-1, 31,0);
    tracep->declBus(c+1995,"CTRL_ASS_BIT", false,-1, 31,0);
    tracep->declBus(c+1996,"XIP_DIVIDE", false,-1, 31,0);
    tracep->declBus(c+1951,"XIP_SS_SEL", false,-1, 31,0);
    tracep->declBus(c+1997,"XIP_CHAR_LEN", false,-1, 31,0);
    tracep->declBus(c+1998,"XIP_CTRL", false,-1, 31,0);
    tracep->declBus(c+1863,"XIP_IDLE", false,-1, 3,0);
    tracep->declBus(c+1976,"XIP_W_RTX0", false,-1, 3,0);
    tracep->declBus(c+1975,"XIP_W_RTX1", false,-1, 3,0);
    tracep->declBus(c+1972,"XIP_R_RTX0", false,-1, 3,0);
    tracep->declBus(c+1956,"XIP_W_DIVIDE", false,-1, 3,0);
    tracep->declBus(c+1973,"XIP_W_SS", false,-1, 3,0);
    tracep->declBus(c+1974,"XIP_W_CTRL", false,-1, 3,0);
    tracep->declBus(c+1971,"XIP_R_GO_BUSY", false,-1, 3,0);
    tracep->declBus(c+1978,"XIP_RESP", false,-1, 3,0);
    tracep->declBus(c+902,"xip_state", false,-1, 3,0);
    tracep->declBit(c+903,"xip_busy", false,-1);
    tracep->declBus(c+904,"xip_addr_latched", false,-1, 31,0);
    tracep->declBus(c+905,"xip_rdata", false,-1, 31,0);
    tracep->declBit(c+906,"xip_resp_valid", false,-1);
    tracep->declBit(c+907,"xip_resp_err", false,-1);
    tracep->declBus(c+1376,"wb_adr_i_r", false,-1, 4,0);
    tracep->declBus(c+1377,"wb_dat_i_r", false,-1, 31,0);
    tracep->declBus(c+1378,"wb_sel_i_r", false,-1, 3,0);
    tracep->declBit(c+1379,"wb_we_i_r", false,-1);
    tracep->declBit(c+1380,"wb_stb_i_r", false,-1);
    tracep->declBit(c+1381,"wb_cyc_i_r", false,-1);
    tracep->declBus(c+908,"wb_dat_o_w", false,-1, 31,0);
    tracep->declBit(c+909,"wb_ack_o_w", false,-1);
    tracep->declBit(c+1861,"wb_err_o_w", false,-1);
    tracep->declBit(c+1382,"hit_xip_rd_setup", false,-1);
    tracep->declBit(c+1383,"hit_xip_bad_acc", false,-1);
    tracep->declBit(c+1384,"hit_invalid_acc", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1941,"Tp", false,-1, 31,0);
    tracep->declBit(c+1765,"wb_clk_i", false,-1);
    tracep->declBit(c+1766,"wb_rst_i", false,-1);
    tracep->declBus(c+1376,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1377,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+908,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1378,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1379,"wb_we_i", false,-1);
    tracep->declBit(c+1380,"wb_stb_i", false,-1);
    tracep->declBit(c+1381,"wb_cyc_i", false,-1);
    tracep->declBit(c+909,"wb_ack_o", false,-1);
    tracep->declBit(c+1861,"wb_err_o", false,-1);
    tracep->declBit(c+901,"wb_int_o", false,-1);
    tracep->declBus(c+655,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+654,"sclk_pad_o", false,-1);
    tracep->declBit(c+1481,"mosi_pad_o", false,-1);
    tracep->declBit(c+1787,"miso_pad_i", false,-1);
    tracep->declBus(c+910,"divider", false,-1, 15,0);
    tracep->declBus(c+911,"ctrl", false,-1, 13,0);
    tracep->declBus(c+912,"ss", false,-1, 7,0);
    tracep->declBus(c+1385,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+913,"rx", false,-1, 127,0);
    tracep->declBit(c+917,"rx_negedge", false,-1);
    tracep->declBit(c+918,"tx_negedge", false,-1);
    tracep->declBus(c+919,"char_len", false,-1, 6,0);
    tracep->declBit(c+920,"go", false,-1);
    tracep->declBit(c+921,"lsb", false,-1);
    tracep->declBit(c+922,"ie", false,-1);
    tracep->declBit(c+923,"ass", false,-1);
    tracep->declBit(c+1386,"spi_divider_sel", false,-1);
    tracep->declBit(c+1387,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1388,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1389,"spi_ss_sel", false,-1);
    tracep->declBit(c+924,"tip", false,-1);
    tracep->declBit(c+925,"pos_edge", false,-1);
    tracep->declBit(c+926,"neg_edge", false,-1);
    tracep->declBit(c+927,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1941,"Tp", false,-1, 31,0);
    tracep->declBit(c+1765,"clk_in", false,-1);
    tracep->declBit(c+1766,"rst", false,-1);
    tracep->declBit(c+924,"enable", false,-1);
    tracep->declBit(c+920,"go", false,-1);
    tracep->declBit(c+927,"last_clk", false,-1);
    tracep->declBus(c+910,"divider", false,-1, 15,0);
    tracep->declBit(c+654,"clk_out", false,-1);
    tracep->declBit(c+925,"pos_edge", false,-1);
    tracep->declBit(c+926,"neg_edge", false,-1);
    tracep->declBus(c+928,"cnt", false,-1, 15,0);
    tracep->declBit(c+929,"cnt_zero", false,-1);
    tracep->declBit(c+930,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1941,"Tp", false,-1, 31,0);
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1766,"rst", false,-1);
    tracep->declBus(c+1390,"latch", false,-1, 3,0);
    tracep->declBus(c+1378,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+919,"len", false,-1, 6,0);
    tracep->declBit(c+921,"lsb", false,-1);
    tracep->declBit(c+920,"go", false,-1);
    tracep->declBit(c+925,"pos_edge", false,-1);
    tracep->declBit(c+926,"neg_edge", false,-1);
    tracep->declBit(c+917,"rx_negedge", false,-1);
    tracep->declBit(c+918,"tx_negedge", false,-1);
    tracep->declBit(c+924,"tip", false,-1);
    tracep->declBit(c+927,"last", false,-1);
    tracep->declBus(c+1377,"p_in", false,-1, 31,0);
    tracep->declArray(c+913,"p_out", false,-1, 127,0);
    tracep->declBit(c+654,"s_clk", false,-1);
    tracep->declBit(c+1787,"s_in", false,-1);
    tracep->declBit(c+1481,"s_out", false,-1);
    tracep->declBus(c+931,"cnt", false,-1, 7,0);
    tracep->declArray(c+913,"data", false,-1, 127,0);
    tracep->declBus(c+932,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+933,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+934,"rx_clk", false,-1);
    tracep->declBit(c+935,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1300,"auto_in_psel", false,-1);
    tracep->declBit(c+1301,"auto_in_penable", false,-1);
    tracep->declBit(c+1286,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1294,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1093,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1302,"auto_in_pready", false,-1);
    tracep->declBit(c+1861,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1303,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1785,"uart_rx", false,-1);
    tracep->declBit(c+1786,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1300,"in_psel", false,-1);
    tracep->declBit(c+1301,"in_penable", false,-1);
    tracep->declBus(c+1093,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1302,"in_pready", false,-1);
    tracep->declBit(c+1861,"in_pslverr", false,-1);
    tracep->declBus(c+1338,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1286,"in_pwrite", false,-1);
    tracep->declBus(c+1303,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1287,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1785,"uart_rx", false,-1);
    tracep->declBit(c+1786,"uart_tx", false,-1);
    tracep->declBit(c+936,"rtsn", false,-1);
    tracep->declBit(c+1861,"ctsn", false,-1);
    tracep->declBit(c+937,"dtr_pad_o", false,-1);
    tracep->declBit(c+1861,"dsr_pad_i", false,-1);
    tracep->declBit(c+1861,"ri_pad_i", false,-1);
    tracep->declBit(c+1861,"dcd_pad_i", false,-1);
    tracep->declBit(c+938,"interrupt", false,-1);
    tracep->declBit(c+12,"reg_we", false,-1);
    tracep->declBit(c+13,"reg_re", false,-1);
    tracep->declBus(c+1391,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1392,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+461,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1393,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+939,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1766,"wb_rst_i", false,-1);
    tracep->declBus(c+1391,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1394,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1393,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+12,"wb_we_i", false,-1);
    tracep->declBit(c+13,"wb_re_i", false,-1);
    tracep->declBit(c+1786,"stx_pad_o", false,-1);
    tracep->declBit(c+1785,"srx_pad_i", false,-1);
    tracep->declBus(c+1978,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+939,"rts_pad_o", false,-1);
    tracep->declBit(c+937,"dtr_pad_o", false,-1);
    tracep->declBit(c+938,"int_o", false,-1);
    tracep->declBit(c+940,"enable", false,-1);
    tracep->declBit(c+941,"srx_pad", false,-1);
    tracep->declBus(c+942,"ier", false,-1, 3,0);
    tracep->declBus(c+943,"iir", false,-1, 3,0);
    tracep->declBus(c+944,"fcr", false,-1, 1,0);
    tracep->declBus(c+945,"mcr", false,-1, 4,0);
    tracep->declBus(c+946,"lcr", false,-1, 7,0);
    tracep->declBus(c+947,"msr", false,-1, 7,0);
    tracep->declBus(c+948,"dl", false,-1, 15,0);
    tracep->declBus(c+949,"scratch", false,-1, 7,0);
    tracep->declBit(c+950,"start_dlc", false,-1);
    tracep->declBit(c+951,"lsr_mask_d", false,-1);
    tracep->declBit(c+952,"msi_reset", false,-1);
    tracep->declBus(c+953,"dlc", false,-1, 15,0);
    tracep->declBus(c+954,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+955,"rx_reset", false,-1);
    tracep->declBit(c+956,"tx_reset", false,-1);
    tracep->declBit(c+957,"dlab", false,-1);
    tracep->declBit(c+1860,"cts_pad_i", false,-1);
    tracep->declBit(c+1861,"dsr_pad_i", false,-1);
    tracep->declBit(c+1861,"ri_pad_i", false,-1);
    tracep->declBit(c+1861,"dcd_pad_i", false,-1);
    tracep->declBit(c+958,"loopback", false,-1);
    tracep->declBit(c+1861,"cts", false,-1);
    tracep->declBit(c+1860,"dsr", false,-1);
    tracep->declBit(c+1860,"ri", false,-1);
    tracep->declBit(c+1860,"dcd", false,-1);
    tracep->declBit(c+959,"cts_c", false,-1);
    tracep->declBit(c+960,"dsr_c", false,-1);
    tracep->declBit(c+961,"ri_c", false,-1);
    tracep->declBit(c+962,"dcd_c", false,-1);
    tracep->declBus(c+963,"lsr", false,-1, 7,0);
    tracep->declBit(c+964,"lsr0", false,-1);
    tracep->declBit(c+965,"lsr1", false,-1);
    tracep->declBit(c+966,"lsr2", false,-1);
    tracep->declBit(c+967,"lsr3", false,-1);
    tracep->declBit(c+968,"lsr4", false,-1);
    tracep->declBit(c+969,"lsr5", false,-1);
    tracep->declBit(c+970,"lsr6", false,-1);
    tracep->declBit(c+971,"lsr7", false,-1);
    tracep->declBit(c+972,"lsr0r", false,-1);
    tracep->declBit(c+973,"lsr1r", false,-1);
    tracep->declBit(c+974,"lsr2r", false,-1);
    tracep->declBit(c+975,"lsr3r", false,-1);
    tracep->declBit(c+976,"lsr4r", false,-1);
    tracep->declBit(c+977,"lsr5r", false,-1);
    tracep->declBit(c+978,"lsr6r", false,-1);
    tracep->declBit(c+979,"lsr7r", false,-1);
    tracep->declBit(c+14,"lsr_mask", false,-1);
    tracep->declBit(c+980,"rls_int", false,-1);
    tracep->declBit(c+981,"rda_int", false,-1);
    tracep->declBit(c+982,"ti_int", false,-1);
    tracep->declBit(c+983,"thre_int", false,-1);
    tracep->declBit(c+984,"ms_int", false,-1);
    tracep->declBit(c+985,"tf_push", false,-1);
    tracep->declBit(c+986,"rf_pop", false,-1);
    tracep->declBus(c+1831,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+987,"rf_error_bit", false,-1);
    tracep->declBit(c+965,"rf_overrun", false,-1);
    tracep->declBit(c+988,"rf_push_pulse", false,-1);
    tracep->declBus(c+989,"rf_count", false,-1, 4,0);
    tracep->declBus(c+990,"tf_count", false,-1, 4,0);
    tracep->declBus(c+991,"tstate", false,-1, 2,0);
    tracep->declBus(c+992,"rstate", false,-1, 3,0);
    tracep->declBus(c+993,"counter_t", false,-1, 9,0);
    tracep->declBit(c+994,"thre_set_en", false,-1);
    tracep->declBus(c+995,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+996,"block_value", false,-1, 7,0);
    tracep->declBit(c+997,"serial_out", false,-1);
    tracep->declBit(c+998,"serial_in", false,-1);
    tracep->declBit(c+15,"lsr_mask_condition", false,-1);
    tracep->declBit(c+16,"iir_read", false,-1);
    tracep->declBit(c+17,"msr_read", false,-1);
    tracep->declBit(c+18,"fifo_read", false,-1);
    tracep->declBit(c+19,"fifo_write", false,-1);
    tracep->declBus(c+999,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1000,"lsr0_d", false,-1);
    tracep->declBit(c+1001,"lsr1_d", false,-1);
    tracep->declBit(c+1002,"lsr2_d", false,-1);
    tracep->declBit(c+1003,"lsr3_d", false,-1);
    tracep->declBit(c+1004,"lsr4_d", false,-1);
    tracep->declBit(c+1005,"lsr5_d", false,-1);
    tracep->declBit(c+1006,"lsr6_d", false,-1);
    tracep->declBit(c+1007,"lsr7_d", false,-1);
    tracep->declBit(c+1008,"rls_int_d", false,-1);
    tracep->declBit(c+1009,"thre_int_d", false,-1);
    tracep->declBit(c+1010,"ms_int_d", false,-1);
    tracep->declBit(c+1011,"ti_int_d", false,-1);
    tracep->declBit(c+1012,"rda_int_d", false,-1);
    tracep->declBit(c+1013,"rls_int_rise", false,-1);
    tracep->declBit(c+1014,"thre_int_rise", false,-1);
    tracep->declBit(c+1015,"ms_int_rise", false,-1);
    tracep->declBit(c+1016,"ti_int_rise", false,-1);
    tracep->declBit(c+1017,"rda_int_rise", false,-1);
    tracep->declBit(c+1018,"rls_int_pnd", false,-1);
    tracep->declBit(c+1019,"rda_int_pnd", false,-1);
    tracep->declBit(c+1020,"thre_int_pnd", false,-1);
    tracep->declBit(c+1021,"ms_int_pnd", false,-1);
    tracep->declBit(c+1022,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1941,"Tp", false,-1, 31,0);
    tracep->declBus(c+1941,"width", false,-1, 31,0);
    tracep->declBus(c+1950,"init_value", false,-1, 0,0);
    tracep->declBit(c+1766,"rst_i", false,-1);
    tracep->declBit(c+1765,"clk_i", false,-1);
    tracep->declBit(c+1861,"stage1_rst_i", false,-1);
    tracep->declBit(c+1860,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1785,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+941,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1023,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1766,"wb_rst_i", false,-1);
    tracep->declBus(c+946,"lcr", false,-1, 7,0);
    tracep->declBit(c+986,"rf_pop", false,-1);
    tracep->declBit(c+998,"srx_pad_i", false,-1);
    tracep->declBit(c+940,"enable", false,-1);
    tracep->declBit(c+955,"rx_reset", false,-1);
    tracep->declBit(c+14,"lsr_mask", false,-1);
    tracep->declBus(c+993,"counter_t", false,-1, 9,0);
    tracep->declBus(c+989,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1831,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+965,"rf_overrun", false,-1);
    tracep->declBit(c+987,"rf_error_bit", false,-1);
    tracep->declBus(c+992,"rstate", false,-1, 3,0);
    tracep->declBit(c+988,"rf_push_pulse", false,-1);
    tracep->declBus(c+1024,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1025,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1026,"rshift", false,-1, 7,0);
    tracep->declBit(c+1027,"rparity", false,-1);
    tracep->declBit(c+1028,"rparity_error", false,-1);
    tracep->declBit(c+1029,"rframing_error", false,-1);
    tracep->declBit(c+1030,"rbit_in", false,-1);
    tracep->declBit(c+1031,"rparity_xor", false,-1);
    tracep->declBus(c+1032,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1033,"rf_push_q", false,-1);
    tracep->declBus(c+1034,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1035,"rf_push", false,-1);
    tracep->declBit(c+1036,"break_error", false,-1);
    tracep->declBit(c+1037,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1038,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1039,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1040,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1863,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1976,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1975,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1972,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1956,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1973,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1974,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1971,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1978,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1999,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+2000,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1041,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1042,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1930,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1955,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1945,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1900,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1766,"wb_rst_i", false,-1);
    tracep->declBit(c+988,"push", false,-1);
    tracep->declBit(c+986,"pop", false,-1);
    tracep->declBus(c+1034,"data_in", false,-1, 10,0);
    tracep->declBit(c+955,"fifo_reset", false,-1);
    tracep->declBit(c+14,"reset_status", false,-1);
    tracep->declBus(c+1831,"data_out", false,-1, 10,0);
    tracep->declBit(c+965,"overrun", false,-1);
    tracep->declBus(c+989,"count", false,-1, 4,0);
    tracep->declBit(c+987,"error_bit", false,-1);
    tracep->declBus(c+1832,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1043+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1059,"top", false,-1, 3,0);
    tracep->declBus(c+1060,"bottom", false,-1, 3,0);
    tracep->declBus(c+1061,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1062,"word0", false,-1, 2,0);
    tracep->declBus(c+1063,"word1", false,-1, 2,0);
    tracep->declBus(c+1064,"word2", false,-1, 2,0);
    tracep->declBus(c+1065,"word3", false,-1, 2,0);
    tracep->declBus(c+1066,"word4", false,-1, 2,0);
    tracep->declBus(c+1067,"word5", false,-1, 2,0);
    tracep->declBus(c+1068,"word6", false,-1, 2,0);
    tracep->declBus(c+1069,"word7", false,-1, 2,0);
    tracep->declBus(c+1070,"word8", false,-1, 2,0);
    tracep->declBus(c+1071,"word9", false,-1, 2,0);
    tracep->declBus(c+1072,"word10", false,-1, 2,0);
    tracep->declBus(c+1073,"word11", false,-1, 2,0);
    tracep->declBus(c+1074,"word12", false,-1, 2,0);
    tracep->declBus(c+1075,"word13", false,-1, 2,0);
    tracep->declBus(c+1076,"word14", false,-1, 2,0);
    tracep->declBus(c+1077,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1945,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1852,"data_width", false,-1, 31,0);
    tracep->declBus(c+1955,"depth", false,-1, 31,0);
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+988,"we", false,-1);
    tracep->declBus(c+1059,"a", false,-1, 3,0);
    tracep->declBus(c+1060,"dpra", false,-1, 3,0);
    tracep->declBus(c+1078,"di", false,-1, 7,0);
    tracep->declBus(c+1832,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+462+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1766,"wb_rst_i", false,-1);
    tracep->declBus(c+946,"lcr", false,-1, 7,0);
    tracep->declBit(c+985,"tf_push", false,-1);
    tracep->declBus(c+1394,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+940,"enable", false,-1);
    tracep->declBit(c+956,"tx_reset", false,-1);
    tracep->declBit(c+14,"lsr_mask", false,-1);
    tracep->declBit(c+997,"stx_pad_o", false,-1);
    tracep->declBus(c+991,"tstate", false,-1, 2,0);
    tracep->declBus(c+990,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1079,"counter", false,-1, 4,0);
    tracep->declBus(c+1080,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1081,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1082,"stx_o_tmp", false,-1);
    tracep->declBit(c+1083,"parity_xor", false,-1);
    tracep->declBit(c+1084,"tf_pop", false,-1);
    tracep->declBit(c+1085,"bit_out", false,-1);
    tracep->declBus(c+1394,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1395,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1086,"tf_overrun", false,-1);
    tracep->declBus(c+1855,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1849,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1856,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1857,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1931,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1932,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1852,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1955,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1945,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1900,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+1766,"wb_rst_i", false,-1);
    tracep->declBit(c+985,"push", false,-1);
    tracep->declBit(c+1084,"pop", false,-1);
    tracep->declBus(c+1394,"data_in", false,-1, 7,0);
    tracep->declBit(c+956,"fifo_reset", false,-1);
    tracep->declBit(c+14,"reset_status", false,-1);
    tracep->declBus(c+1395,"data_out", false,-1, 7,0);
    tracep->declBit(c+1086,"overrun", false,-1);
    tracep->declBus(c+990,"count", false,-1, 4,0);
    tracep->declBus(c+1087,"top", false,-1, 3,0);
    tracep->declBus(c+1088,"bottom", false,-1, 3,0);
    tracep->declBus(c+1089,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1945,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1852,"data_width", false,-1, 31,0);
    tracep->declBus(c+1955,"depth", false,-1, 31,0);
    tracep->declBit(c+1765,"clk", false,-1);
    tracep->declBit(c+985,"we", false,-1);
    tracep->declBus(c+1087,"a", false,-1, 3,0);
    tracep->declBus(c+1088,"dpra", false,-1, 3,0);
    tracep->declBus(c+1394,"di", false,-1, 7,0);
    tracep->declBus(c+1395,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+478+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBit(c+1290,"auto_in_psel", false,-1);
    tracep->declBit(c+1096,"auto_in_penable", false,-1);
    tracep->declBit(c+1286,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1291,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1093,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1287,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"auto_in_pready", false,-1);
    tracep->declBit(c+1861,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1793,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1779,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1780,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1781,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1782,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1783,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1784,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1765,"clock", false,-1);
    tracep->declBit(c+1766,"reset", false,-1);
    tracep->declBus(c+1371,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1290,"in_psel", false,-1);
    tracep->declBit(c+1096,"in_penable", false,-1);
    tracep->declBus(c+1093,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1286,"in_pwrite", false,-1);
    tracep->declBus(c+1287,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1288,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1860,"in_pready", false,-1);
    tracep->declBus(c+1793,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1861,"in_pslverr", false,-1);
    tracep->declBus(c+1779,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1780,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1781,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1782,"vga_hsync", false,-1);
    tracep->declBit(c+1783,"vga_vsync", false,-1);
    tracep->declBit(c+1784,"vga_valid", false,-1);
    tracep->declBus(c+2001,"VGA_XLEN", false,-1, 15,0);
    tracep->declBus(c+2002,"VGA_YLEN", false,-1, 15,0);
    tracep->declBus(c+2003,"CTRL_ADDR", false,-1, 31,0);
    tracep->declBus(c+2004,"SYNC_ADDR", false,-1, 31,0);
    tracep->declBus(c+2005,"FB_BASE", false,-1, 31,0);
    tracep->declBus(c+2006,"FB_WORDS", false,-1, 31,0);
    tracep->declBus(c+2007,"FB_BYTES", false,-1, 31,0);
    tracep->declBus(c+2008,"H_FRONTPORCH", false,-1, 31,0);
    tracep->declBus(c+2009,"H_ACTIVE", false,-1, 31,0);
    tracep->declBus(c+2010,"H_BACKPORCH", false,-1, 31,0);
    tracep->declBus(c+2011,"H_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1946,"V_FRONTPORCH", false,-1, 31,0);
    tracep->declBus(c+2012,"V_ACTIVE", false,-1, 31,0);
    tracep->declBus(c+2013,"V_BACKPORCH", false,-1, 31,0);
    tracep->declBus(c+2014,"V_TOTAL", false,-1, 31,0);
    tracep->declBit(c+1396,"apb_access", false,-1);
    tracep->declBit(c+1397,"apb_wr", false,-1);
    tracep->declBit(c+1398,"apb_rd", false,-1);
    tracep->declBit(c+1399,"ctrl_rd", false,-1);
    tracep->declBit(c+1400,"sync_wr", false,-1);
    tracep->declBit(c+1401,"fb_wr", false,-1);
    tracep->declBit(c+1402,"fb_rd", false,-1);
    tracep->declBus(c+1403,"addr_offset", false,-1, 31,0);
    tracep->declBus(c+1404,"frame_waddr", false,-1, 18,0);
    tracep->declBus(c+494,"sync_reg", false,-1, 31,0);
    tracep->declBus(c+495,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+496,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+497,"h_valid", false,-1);
    tracep->declBit(c+498,"v_valid", false,-1);
    tracep->declBus(c+499,"h_addr", false,-1, 9,0);
    tracep->declBus(c+500,"v_addr", false,-1, 9,0);
    tracep->declBus(c+501,"scan_addr", false,-1, 18,0);
    tracep->declBus(c+1275,"pixel", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+654,"sck", false,-1);
    tracep->declBit(c+1833,"ss", false,-1);
    tracep->declBit(c+1481,"mosi", false,-1);
    tracep->declBit(c+1834,"miso", false,-1);
    tracep->declBus(c+1835,"rx_shift", false,-1, 7,0);
    tracep->declBus(c+1836,"rx_bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1837,"rx_done", false,-1);
    tracep->declBus(c+1838,"tx_bit_cnt", false,-1, 3,0);
    tracep->declBit(c+1839,"r_miso", false,-1);
    tracep->declBit(c+1840,"rx_en", false,-1);
    tracep->declBit(c+1841,"rx_last_bit", false,-1);
    tracep->declBit(c+1842,"tx_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+654,"sck", false,-1);
    tracep->declBit(c+1090,"ss", false,-1);
    tracep->declBit(c+1481,"mosi", false,-1);
    tracep->declBit(c+1843,"miso", false,-1);
    tracep->declBit(c+1090,"reset", false,-1);
    tracep->declBus(c+1276,"state", false,-1, 2,0);
    tracep->declBus(c+1277,"counter", false,-1, 7,0);
    tracep->declBus(c+1278,"cmd", false,-1, 7,0);
    tracep->declBus(c+1279,"addr", false,-1, 23,0);
    tracep->declBus(c+1280,"data", false,-1, 31,0);
    tracep->declBit(c+1281,"ren", false,-1);
    tracep->declBus(c+1844,"rdata", false,-1, 31,0);
    tracep->declBus(c+1845,"raddr", false,-1, 31,0);
    tracep->declBus(c+1846,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+654,"clock", false,-1);
    tracep->declBit(c+1281,"valid", false,-1);
    tracep->declBus(c+1278,"cmd", false,-1, 7,0);
    tracep->declBus(c+1845,"addr", false,-1, 31,0);
    tracep->declBus(c+1844,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1282,"sck", false,-1);
    tracep->declBit(c+1283,"ce_n", false,-1);
    tracep->declBus(c+1788,"dio", false,-1, 3,0);
    tracep->declBus(c+2015,"PSRAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+1965,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1852,"CMD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1898,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1852,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1963,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+1964,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+1960,"CMD_QPIMODE", false,-1, 7,0);
    tracep->declBus(c+1958,"RD_DELAY", false,-1, 31,0);
    tracep->declBus(c+1863,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1976,"STATE_CMD", false,-1, 3,0);
    tracep->declBus(c+1975,"STATE_ADDR", false,-1, 3,0);
    tracep->declBus(c+1972,"STATE_RD_DELAY", false,-1, 3,0);
    tracep->declBus(c+1956,"STATE_WR", false,-1, 3,0);
    tracep->declBus(c+1973,"STATE_RD", false,-1, 3,0);
    tracep->declBus(c+1974,"STATE_RESP", false,-1, 3,0);
    tracep->declBus(c+1971,"STATE_QPIINIT", false,-1, 3,0);
    tracep->declBus(c+1527,"state", false,-1, 3,0);
    tracep->declBus(c+569,"cmd", false,-1, 7,0);
    tracep->declBus(c+1528,"addr", false,-1, 23,0);
    tracep->declBus(c+570,"wr_byte", false,-1, 7,0);
    tracep->declBit(c+571,"qpi_mode", false,-1);
    tracep->declBus(c+572,"cmd_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+573,"addr_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+574,"rd_delay_cnt", false,-1, 31,0);
    tracep->declBus(c+1529,"data_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+1847,"dio_out_r", false,-1, 3,0);
    tracep->declBus(c+1848,"dio_oe_r", false,-1, 3,0);
    tracep->declBus(c+1788,"dio_in", false,-1, 3,0);
    tracep->declBit(c+575,"cmd_done", false,-1);
    tracep->declBit(c+576,"addr_done", false,-1);
    tracep->declBit(c+1530,"data_done", false,-1);
    tracep->declBit(c+577,"rd_delay_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1_1 ");
    tracep->declBit(c+1789,"clk", false,-1);
    tracep->declBit(c+1482,"cke", false,-1);
    tracep->declBit(c+652,"cs", false,-1);
    tracep->declBit(c+657,"ras", false,-1);
    tracep->declBit(c+658,"cas", false,-1);
    tracep->declBit(c+659,"we", false,-1);
    tracep->declBus(c+1493,"a", false,-1, 12,0);
    tracep->declBus(c+1483,"ba", false,-1, 1,0);
    tracep->declBus(c+1511,"dqm", false,-1, 1,0);
    tracep->declBus(c+1588,"dq", false,-1, 15,0);
    tracep->declBus(c+1967,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+2016,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1955,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1105,"mem0", false,-1, 15,0);
    tracep->declBus(c+1971,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1972,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1973,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1974,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1975,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1977,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1091,"cmd", false,-1, 3,0);
    tracep->declBus(c+1106,"mode", false,-1, 12,0);
    tracep->declBus(c+1107,"row_open", false,-1, 3,0);
    tracep->declBus(c+1108,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1109,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1110,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1111,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1112,"rd_pending", false,-1);
    tracep->declBit(c+1113,"rd_burst", false,-1);
    tracep->declBus(c+1114,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1115,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1116,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1117,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1118,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1119,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1120,"wr_burst", false,-1);
    tracep->declBus(c+1121,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1122,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1123,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1124,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1125,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1126,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1127,"dq_oe", false,-1);
    tracep->declBus(c+1588,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1512,"active_fire", false,-1);
    tracep->declBit(c+1513,"read_fire", false,-1);
    tracep->declBit(c+1514,"write_fire", false,-1);
    tracep->declBit(c+1515,"bst_fire", false,-1);
    tracep->declBit(c+1516,"precharge_fire", false,-1);
    tracep->declBit(c+1517,"refresh_fire", false,-1);
    tracep->declBit(c+1518,"lmr_fire", false,-1);
    tracep->declBus(c+1128,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1129,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1589,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1590,"bank_is_open", false,-1);
    tracep->declBus(c+1130,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1131,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1132,"rd_first_beat", false,-1);
    tracep->declBit(c+1113,"rd_next_beat", false,-1);
    tracep->declBit(c+1127,"rd_data_valid", false,-1);
    tracep->declBus(c+1133,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1134,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1_2 ");
    tracep->declBit(c+1789,"clk", false,-1);
    tracep->declBit(c+1482,"cke", false,-1);
    tracep->declBit(c+652,"cs", false,-1);
    tracep->declBit(c+657,"ras", false,-1);
    tracep->declBit(c+658,"cas", false,-1);
    tracep->declBit(c+659,"we", false,-1);
    tracep->declBus(c+1493,"a", false,-1, 12,0);
    tracep->declBus(c+1483,"ba", false,-1, 1,0);
    tracep->declBus(c+1519,"dqm", false,-1, 1,0);
    tracep->declBus(c+1591,"dq", false,-1, 15,0);
    tracep->declBus(c+1967,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+2016,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1955,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1135,"mem0", false,-1, 15,0);
    tracep->declBus(c+1971,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1972,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1973,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1974,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1975,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1977,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1091,"cmd", false,-1, 3,0);
    tracep->declBus(c+1136,"mode", false,-1, 12,0);
    tracep->declBus(c+1137,"row_open", false,-1, 3,0);
    tracep->declBus(c+1138,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1139,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1140,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1141,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1142,"rd_pending", false,-1);
    tracep->declBit(c+1143,"rd_burst", false,-1);
    tracep->declBus(c+1144,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1145,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1146,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1147,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1148,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1149,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1150,"wr_burst", false,-1);
    tracep->declBus(c+1151,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1152,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1153,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1154,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1155,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1156,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1157,"dq_oe", false,-1);
    tracep->declBus(c+1591,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1512,"active_fire", false,-1);
    tracep->declBit(c+1513,"read_fire", false,-1);
    tracep->declBit(c+1514,"write_fire", false,-1);
    tracep->declBit(c+1515,"bst_fire", false,-1);
    tracep->declBit(c+1516,"precharge_fire", false,-1);
    tracep->declBit(c+1517,"refresh_fire", false,-1);
    tracep->declBit(c+1518,"lmr_fire", false,-1);
    tracep->declBus(c+1158,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1159,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1592,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1593,"bank_is_open", false,-1);
    tracep->declBus(c+1160,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1161,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1162,"rd_first_beat", false,-1);
    tracep->declBit(c+1143,"rd_next_beat", false,-1);
    tracep->declBit(c+1157,"rd_data_valid", false,-1);
    tracep->declBus(c+1163,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1164,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2_1 ");
    tracep->declBit(c+1789,"clk", false,-1);
    tracep->declBit(c+1482,"cke", false,-1);
    tracep->declBit(c+653,"cs", false,-1);
    tracep->declBit(c+657,"ras", false,-1);
    tracep->declBit(c+658,"cas", false,-1);
    tracep->declBit(c+659,"we", false,-1);
    tracep->declBus(c+1493,"a", false,-1, 12,0);
    tracep->declBus(c+1483,"ba", false,-1, 1,0);
    tracep->declBus(c+1511,"dqm", false,-1, 1,0);
    tracep->declBus(c+1588,"dq", false,-1, 15,0);
    tracep->declBus(c+1967,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+2016,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1955,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1165,"mem0", false,-1, 15,0);
    tracep->declBus(c+1971,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1972,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1973,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1974,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1975,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1977,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1092,"cmd", false,-1, 3,0);
    tracep->declBus(c+1166,"mode", false,-1, 12,0);
    tracep->declBus(c+1167,"row_open", false,-1, 3,0);
    tracep->declBus(c+1168,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1169,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1170,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1171,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1172,"rd_pending", false,-1);
    tracep->declBit(c+1173,"rd_burst", false,-1);
    tracep->declBus(c+1174,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1175,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1176,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1177,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1178,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1179,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1180,"wr_burst", false,-1);
    tracep->declBus(c+1181,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1182,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1183,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1184,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1185,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1186,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1187,"dq_oe", false,-1);
    tracep->declBus(c+1588,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1520,"active_fire", false,-1);
    tracep->declBit(c+1521,"read_fire", false,-1);
    tracep->declBit(c+1522,"write_fire", false,-1);
    tracep->declBit(c+1523,"bst_fire", false,-1);
    tracep->declBit(c+1524,"precharge_fire", false,-1);
    tracep->declBit(c+1525,"refresh_fire", false,-1);
    tracep->declBit(c+1526,"lmr_fire", false,-1);
    tracep->declBus(c+1188,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1189,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1594,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1595,"bank_is_open", false,-1);
    tracep->declBus(c+1190,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1191,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1192,"rd_first_beat", false,-1);
    tracep->declBit(c+1173,"rd_next_beat", false,-1);
    tracep->declBit(c+1187,"rd_data_valid", false,-1);
    tracep->declBus(c+1193,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1194,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2_2 ");
    tracep->declBit(c+1789,"clk", false,-1);
    tracep->declBit(c+1482,"cke", false,-1);
    tracep->declBit(c+653,"cs", false,-1);
    tracep->declBit(c+657,"ras", false,-1);
    tracep->declBit(c+658,"cas", false,-1);
    tracep->declBit(c+659,"we", false,-1);
    tracep->declBus(c+1493,"a", false,-1, 12,0);
    tracep->declBus(c+1483,"ba", false,-1, 1,0);
    tracep->declBus(c+1519,"dqm", false,-1, 1,0);
    tracep->declBus(c+1591,"dq", false,-1, 15,0);
    tracep->declBus(c+1967,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+2016,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1955,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1195,"mem0", false,-1, 15,0);
    tracep->declBus(c+1971,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1972,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1973,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1974,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1975,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1976,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1863,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1977,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1092,"cmd", false,-1, 3,0);
    tracep->declBus(c+1196,"mode", false,-1, 12,0);
    tracep->declBus(c+1197,"row_open", false,-1, 3,0);
    tracep->declBus(c+1198,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1199,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1200,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1201,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1202,"rd_pending", false,-1);
    tracep->declBit(c+1203,"rd_burst", false,-1);
    tracep->declBus(c+1204,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1205,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1206,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1207,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1208,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1209,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1210,"wr_burst", false,-1);
    tracep->declBus(c+1211,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1212,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1213,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1214,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1215,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1216,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1217,"dq_oe", false,-1);
    tracep->declBus(c+1591,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1520,"active_fire", false,-1);
    tracep->declBit(c+1521,"read_fire", false,-1);
    tracep->declBit(c+1522,"write_fire", false,-1);
    tracep->declBit(c+1523,"bst_fire", false,-1);
    tracep->declBit(c+1524,"precharge_fire", false,-1);
    tracep->declBit(c+1525,"refresh_fire", false,-1);
    tracep->declBit(c+1526,"lmr_fire", false,-1);
    tracep->declBus(c+1218,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1219,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1596,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1597,"bank_is_open", false,-1);
    tracep->declBus(c+1220,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1221,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1222,"rd_first_beat", false,-1);
    tracep->declBit(c+1203,"rd_next_beat", false,-1);
    tracep->declBit(c+1217,"rd_data_valid", false,-1);
    tracep->declBus(c+1223,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1224,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
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
    VlWide<256>/*8191:0*/ __Vtemp_h2ead791c__0;
    VlWide<256>/*8191:0*/ __Vtemp_he95c2b7b__0;
    VlWide<256>/*8191:0*/ __Vtemp_hcbff4277__0;
    VlWide<256>/*8191:0*/ __Vtemp_haeb9c346__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__key_list[8]),7);
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__frame_valid));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+21,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+23,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+24,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+25,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+26,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+27,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+29,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+30,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+31,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+34,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+35,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+36,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+37,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+38,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullBit(oldp+51,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+52,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+53,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+54,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+55,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullBit(oldp+57,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+58,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+59,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+60,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+61,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+124,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+125,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullCData(oldp+128,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+129,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullIData(oldp+132,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+133,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+134,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+135,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+139,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+141,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullQData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+179,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+182,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+183,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+241,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+245,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+246,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+247,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+248,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+335,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+375,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+387,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+395,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+399,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+407,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+411,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+415,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+419,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+423,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+427,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+431,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+439,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+443,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_data_reg),32);
    bufp->fullIData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_status),32);
    bufp->fullIData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_cause),32);
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clock_sync),3);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync_reg),32);
    bufp->fullSData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullSData(oldp+499,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                             - (IData)(0x91U)))
                                : 0U)),10);
    bufp->fullSData(oldp+500,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),10);
    bufp->fullIData(oldp+501,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__h_valid)
                                  ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                               - (IData)(0x91U)))
                                  : 0U) << 9U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__v_valid)
                                                   ? 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                      - (IData)(0x24U)))
                                                   : 0U))),19);
    bufp->fullBit(oldp+502,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+503,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+504,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+505,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+506,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+507,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+508,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+509,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+510,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+511,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+512,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+513,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+514,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+515,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+516,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+517,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+518,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+519,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+520,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+521,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+522,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+523,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+524,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+525,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+526,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+527,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+528,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+529,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+530,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+531,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+532,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+533,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+534,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+535,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+536,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+537,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+538,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+539,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+540,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+541,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+542,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+543,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+544,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+545,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+546,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+547,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+548,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+549,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+550,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+551,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+552,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+553,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+554,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+555,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+556,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+557,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+558,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+559,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+560,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+561,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+563,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+564,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+565,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+566,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+567,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+568,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte),8);
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode));
    bufp->fullIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt),32);
    bufp->fullIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt),32);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt),32);
    bufp->fullBit(oldp+575,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode)
                              ? (1U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt)
                              : (7U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt))));
    bufp->fullBit(oldp+576,((0x14U == vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt)));
    bufp->fullBit(oldp+577,((5U == vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt)));
    bufp->fullBit(oldp+578,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__wb_state))));
    bufp->fullBit(oldp+579,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__wb_state))));
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q),32);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awsize_q),3);
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_ifu_ar_valid));
    bufp->fullIData(oldp+584,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[
                                 (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                        >> 8U))] >> 
                                 (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                           >> 3U))) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tags0
                                   [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                              >> 3U))] 
                                   == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                       >> 0xaU))) ? (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0
                                                             [
                                                             (0x7fU 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                                                 >> 3U))] 
                                                             >> 
                                                             (0x20U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                                                 << 3U))))
                                : (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1
                                           [(0x7fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                                >> 3U))] 
                                           >> (0x20U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                                  << 3U)))))),32);
    bufp->fullIData(oldp+585,((0xfffffff8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r)),32);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_lsu_data),32);
    bufp->fullBit(oldp+587,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state))));
    bufp->fullBit(oldp+588,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state))));
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata),32);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid),4);
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fencei));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fencei_ex));
    bufp->fullBit(oldp+593,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state))));
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state),2);
    bufp->fullIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend),32);
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devisor),32);
    bufp->fullQData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem),33);
    bufp->fullBit(oldp+599,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient),32);
    bufp->fullBit(oldp+601,((0x20U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt)));
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt),32);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state),2);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low),32);
    bufp->fullWData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0),128);
    bufp->fullWData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1),128);
    bufp->fullWData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit),128);
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r),32);
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__victim_way_r));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_word_idx));
    bufp->fullQData(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt),64);
    bufp->fullQData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt),64);
    bufp->fullQData(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt),64);
    bufp->fullQData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles),64);
    bufp->fullQData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles),64);
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_inflight));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_is_hit));
    bufp->fullQData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_cycle_cnt),64);
    bufp->fullCData(oldp+635,((0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                        >> 3U))),7);
    bufp->fullIData(oldp+636,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                               >> 0xaU)),22);
    bufp->fullBit(oldp+637,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                   >> 2U))));
    bufp->fullCData(oldp+638,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r)),3);
    bufp->fullBit(oldp+639,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[
                              (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                     >> 8U))] >> (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                                     >> 3U))) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tags0
                                [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                           >> 3U))] 
                                == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+640,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[
                              (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                     >> 8U))] >> (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                                     >> 3U))) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tags1
                                [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                           >> 3U))] 
                                == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                    >> 0xaU)))));
    bufp->fullIData(oldp+641,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0
                                       [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                                  >> 3U))] 
                                       >> (0x20U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                            << 3U))))),32);
    bufp->fullIData(oldp+642,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1
                                       [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                                  >> 3U))] 
                                       >> (0x20U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_addr_r 
                                            << 3U))))),32);
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__i),32);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__wb_state),2);
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint));
    bufp->fullBit(oldp+647,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready))));
    bufp->fullBit(oldp+648,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid))));
    bufp->fullBit(oldp+649,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)))));
    bufp->fullBit(oldp+650,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready)))));
    bufp->fullBit(oldp+651,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cur_way1_valid) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tags1
                                [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                           >> 3U))] 
                                == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+652,((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q)))));
    bufp->fullBit(oldp+653,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q)) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 3U)))));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+656,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+657,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+658,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+659,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+660,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))));
    bufp->fullIData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_prdata),32);
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_pslverr));
    bufp->fullBit(oldp+663,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))));
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state),3);
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum),32);
    bufp->fullIData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt),32);
    bufp->fullIData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_paddr),32);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pprot),3);
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pwrite));
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pwdata),32);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pstrb),4);
    bufp->fullIData(oldp+672,(((IData)(0x41aU) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum)),32);
    bufp->fullCData(oldp+673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_head]),4);
    bufp->fullIData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_head]),32);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_head]),2);
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last
                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_head]));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_awready));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_wready));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_bid_q),4);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_bresp_q),2);
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arid_q),4);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_araddr_q),32);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arlen_q),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arsize_q),3);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arburst_q),2);
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_rready));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_rvalid));
    bufp->fullCData(oldp+693,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+695,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_awid_q),4);
    bufp->fullIData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_awaddr_q),32);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_awlen_q),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_awsize_q),3);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_awburst_q),2);
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_wdata_q),32);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_wstrb_q),4);
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_wlast_q));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_bready));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullQData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__cyc_q),64);
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_active));
    bufp->fullQData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc),64);
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_latched));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_out_done));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_up_done));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_ready_pending));
    bufp->fullQData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_ready_cyc),64);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id[0]),4);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id[1]),4);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id[2]),4);
    bufp->fullCData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id[3]),4);
    bufp->fullCData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id[4]),4);
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id[5]),4);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id[6]),4);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_id[7]),4);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data[0]),32);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data[1]),32);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data[2]),32);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data[3]),32);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data[4]),32);
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data[5]),32);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data[6]),32);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data[7]),32);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp[0]),2);
    bufp->fullCData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp[1]),2);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp[2]),2);
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp[3]),2);
    bufp->fullCData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp[4]),2);
    bufp->fullCData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp[5]),2);
    bufp->fullCData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp[6]),2);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp[7]),2);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last[0]));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last[1]));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last[2]));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last[3]));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last[4]));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last[5]));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last[6]));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_last[7]));
    bufp->fullQData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_relcy[0]),64);
    bufp->fullQData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_relcy[1]),64);
    bufp->fullQData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_relcy[2]),64);
    bufp->fullQData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_relcy[3]),64);
    bufp->fullQData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_relcy[4]),64);
    bufp->fullQData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_relcy[5]),64);
    bufp->fullQData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_relcy[6]),64);
    bufp->fullQData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_relcy[7]),64);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_head),3);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_tail),3);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_count),4);
    bufp->fullBit(oldp+770,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_count))));
    bufp->fullBit(oldp+771,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_count))));
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__i),32);
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_active));
    bufp->fullQData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc),64);
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_latched));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_out_done));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_up_done));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_ready_pending));
    bufp->fullQData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_ready_cyc),64);
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_latched));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_out_done));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_up_done));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_ready_pending));
    bufp->fullQData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_ready_cyc),64);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_b_pending));
    bufp->fullQData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_b_relcy),64);
    bufp->fullSData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl),16);
    bufp->fullSData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state),16);
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl),32);
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve));
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__key_bit_cnt),4);
    bufp->fullIData(oldp+796,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow) 
                                << 2U) | (((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
                                           << 1U) | 
                                          (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))))),32);
    bufp->fullSData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wbuf),11);
    bufp->fullCData(oldp+798,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wbuf) 
                                        >> 2U))),8);
    bufp->fullBit(oldp+799,((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
    bufp->fullBit(oldp+800,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
    bufp->fullBit(oldp+801,((1U & VL_REDXOR_32((0x1ffU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wbuf) 
                                                   >> 2U))))));
    bufp->fullBit(oldp+802,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wbuf) 
                                      >> 1U)))));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow));
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr),5);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr),5);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count),6);
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_sck));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_ce_n));
    bufp->fullCData(oldp+809,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+810,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+813,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+814,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+817,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+818,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))));
    bufp->fullBit(oldp+819,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ready));
    bufp->fullBit(oldp+822,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state),2);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__nstate),2);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter),4);
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+829,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+833,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullCData(oldp+837,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_awlen_q)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arlen_q)
                                    : 0U))),8);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+850,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+851,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+854,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+855,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                >> 5U))));
    bufp->fullBit(oldp+856,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+857,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+858,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+860,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+868,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q));
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[0]),4);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[1]),4);
    bufp->fullSData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [0U][0U]),13);
    bufp->fullSData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [0U][1U]),13);
    bufp->fullSData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [0U][2U]),13);
    bufp->fullSData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [0U][3U]),13);
    bufp->fullSData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [1U][0U]),13);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [1U][1U]),13);
    bufp->fullSData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [1U][2U]),13);
    bufp->fullSData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                              [1U][3U]),13);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rd_q));
    bufp->fullIData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q),32);
    bufp->fullBit(oldp+895,((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
                             [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q])));
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ridx),32);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy));
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr_latched),32);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err));
    bufp->fullIData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o_w),32);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o_w));
    bufp->fullSData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+917,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+918,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+919,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+920,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+921,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+922,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+923,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+927,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+929,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+930,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+932,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+936,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+937,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+939,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+957,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+958,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+959,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+960,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+961,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+962,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+963,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+966,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+967,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+968,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+987,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+994,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1013,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1014,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1015,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1016,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1017,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1036,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1037,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1038,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1039,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1040,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1042,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1061,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1078,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1089,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cmd),4);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cmd),4);
    bufp->fullCData(oldp+1093,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT____VdfgTmp_h12f66507__0)
                                 ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pprot))),3);
    bufp->fullBit(oldp+1094,((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o_w)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_bad_acc) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid))
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_invalid_acc)))) 
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
                                             | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)))))))));
    bufp->fullBit(oldp+1095,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                               & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_bad_acc) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err))
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_invalid_acc)))) 
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
    bufp->fullBit(oldp+1096,((IData)(((0x20000000U 
                                       == (0x30000000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))))));
    bufp->fullIData(oldp+1097,(((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
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
    bufp->fullBit(oldp+1098,((IData)(((0U == (0x30000000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))))));
    bufp->fullBit(oldp+1099,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1100,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o_w)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
                                   ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_bad_acc) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid))
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_invalid_acc)))));
    bufp->fullBit(oldp+1101,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_bad_acc) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err))
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_invalid_acc)))));
    bufp->fullIData(oldp+1102,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o_w
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                     : 0U))),32);
    bufp->fullBit(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1104,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))
                                     ? 0U : 2U) : (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))),2);
    VL_ASSIGN_W(8192,__Vtemp_h2ead791c__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank0
                [0U]);
    bufp->fullSData(oldp+1105,((0xffffU & __Vtemp_h2ead791c__0[0U])),16);
    bufp->fullSData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode),13);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open),4);
    bufp->fullSData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0),13);
    bufp->fullSData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1),13);
    bufp->fullSData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2),13);
    bufp->fullSData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3),13);
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst));
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_bank),2);
    bufp->fullSData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_row),13);
    bufp->fullSData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain),10);
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst));
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank),2);
    bufp->fullSData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row),13);
    bufp->fullSData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain),10);
    bufp->fullSData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_out),16);
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_oe));
    bufp->fullSData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len),10);
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cas_lat),3);
    bufp->fullSData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1132,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_word),16);
    bufp->fullSData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp),9);
    VL_ASSIGN_W(8192,__Vtemp_he95c2b7b__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank0
                [0U]);
    bufp->fullSData(oldp+1135,((0xffffU & __Vtemp_he95c2b7b__0[0U])),16);
    bufp->fullSData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode),13);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open),4);
    bufp->fullSData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0),13);
    bufp->fullSData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1),13);
    bufp->fullSData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2),13);
    bufp->fullSData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3),13);
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst));
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_bank),2);
    bufp->fullSData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_row),13);
    bufp->fullSData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain),10);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst));
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank),2);
    bufp->fullSData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row),13);
    bufp->fullSData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain),10);
    bufp->fullSData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_out),16);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_oe));
    bufp->fullSData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len),10);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__cas_lat),3);
    bufp->fullSData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1162,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_word),16);
    bufp->fullSData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp),9);
    VL_ASSIGN_W(8192,__Vtemp_hcbff4277__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank0
                [0U]);
    bufp->fullSData(oldp+1165,((0xffffU & __Vtemp_hcbff4277__0[0U])),16);
    bufp->fullSData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode),13);
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open),4);
    bufp->fullSData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0),13);
    bufp->fullSData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1),13);
    bufp->fullSData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2),13);
    bufp->fullSData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3),13);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_bank),2);
    bufp->fullSData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_row),13);
    bufp->fullSData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain),10);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst));
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank),2);
    bufp->fullSData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row),13);
    bufp->fullSData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain),10);
    bufp->fullSData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_out),16);
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_oe));
    bufp->fullSData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len),10);
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cas_lat),3);
    bufp->fullSData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1192,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_word),16);
    bufp->fullSData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp),9);
    VL_ASSIGN_W(8192,__Vtemp_haeb9c346__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank0
                [0U]);
    bufp->fullSData(oldp+1195,((0xffffU & __Vtemp_haeb9c346__0[0U])),16);
    bufp->fullSData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode),13);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open),4);
    bufp->fullSData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0),13);
    bufp->fullSData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1),13);
    bufp->fullSData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2),13);
    bufp->fullSData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3),13);
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst));
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_bank),2);
    bufp->fullSData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_row),13);
    bufp->fullSData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain),10);
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst));
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank),2);
    bufp->fullSData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row),13);
    bufp->fullSData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain),10);
    bufp->fullSData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_out),16);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_oe));
    bufp->fullSData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len),10);
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__cas_lat),3);
    bufp->fullSData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1222,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_word),16);
    bufp->fullSData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_tx_start));
    bufp->fullIData(oldp+1230,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                 [3U] << 0x18U) | (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))),32);
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullIData(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__dnpc_reg),32);
    bufp->fullIData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_tvec),32);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_epc),32);
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__sampling));
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[0]),8);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[1]),8);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[2]),8);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[3]),8);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[4]),8);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[5]),8);
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[6]),8);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[7]),8);
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[8]),8);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[9]),8);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[10]),8);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[11]),8);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[12]),8);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[13]),8);
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[14]),8);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[15]),8);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[16]),8);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[17]),8);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[18]),8);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[19]),8);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[20]),8);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[21]),8);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[22]),8);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[23]),8);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[24]),8);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[25]),8);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[26]),8);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[27]),8);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[28]),8);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[29]),8);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[30]),8);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[31]),8);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullIData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__pixel),32);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1281,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr),32);
    bufp->fullBit(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel));
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    bufp->fullIData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata),32);
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb),4);
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_dn_done));
    bufp->fullBit(oldp+1290,((IData)(((0x20000000U 
                                       == (0x30000000U 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_psel)))));
    bufp->fullIData(oldp+1291,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),30);
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullIData(oldp+1294,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),29);
    bufp->fullBit(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access));
    bufp->fullBit(oldp+1298,(((~ ((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                  | ((4U == (0xffU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                     | ((8U == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                        | (0xcU == 
                                           (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access))));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1302,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1303,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1308,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1311,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid));
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid),4);
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rvalid));
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid),4);
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rlast));
    bufp->fullSData(oldp+1322,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)))),16);
    bufp->fullSData(oldp+1323,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)))),16);
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullIData(oldp+1338,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1339,(((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                              | ((4U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                 | ((8U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                    | (0xcU == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))))));
    bufp->fullBit(oldp+1340,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel))));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr));
    bufp->fullBit(oldp+1342,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access))));
    bufp->fullCData(oldp+1343,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),8);
    bufp->fullBit(oldp+1344,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel))));
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_access));
    bufp->fullBit(oldp+1346,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_access) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite))));
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_rd));
    bufp->fullBit(oldp+1348,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_rd) 
                              & (4U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    bufp->fullBit(oldp+1349,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_rd) 
                              & (0U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren));
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1358,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1362,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1363,((vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1364,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+1365,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
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
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__addr),24);
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullCData(oldp+1368,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullCData(oldp+1369,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullIData(oldp+1371,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)),32);
    bufp->fullBit(oldp+1372,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel))));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_access));
    bufp->fullBit(oldp+1374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg));
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip));
    bufp->fullCData(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i_r),5);
    bufp->fullIData(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i_r),32);
    bufp->fullCData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i_r),4);
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i_r));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i_r));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i_r));
    bufp->fullBit(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_rd_setup));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_bad_acc));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_invalid_acc));
    bufp->fullIData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1386,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i_r))))));
    bufp->fullBit(oldp+1387,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i_r))))));
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1389,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i_r))))));
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1391,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                      >> 2U))),3);
    bufp->fullCData(oldp+1392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_access));
    bufp->fullBit(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr));
    bufp->fullBit(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd));
    bufp->fullBit(oldp+1399,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                              & (0x21000000U == (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    bufp->fullBit(oldp+1400,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr) 
                              & (0x21000004U == (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    bufp->fullBit(oldp+1401,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))));
    bufp->fullBit(oldp+1402,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))));
    bufp->fullIData(oldp+1403,(((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                - (IData)(0x21000008U))),32);
    bufp->fullIData(oldp+1404,((0x7ffffU & (((0x3fffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                             - (IData)(0x21000008U)) 
                                            >> 2U))),19);
    bufp->fullCData(oldp+1405,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                 ? 1U : 0U)),8);
    bufp->fullCData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arsize),3);
    bufp->fullCData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arburst),2);
    bufp->fullCData(oldp+1408,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                 ? 2U : 0U)),3);
    bufp->fullCData(oldp+1409,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                 ? 1U : 0U)),2);
    bufp->fullBit(oldp+1410,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_wvalid));
    bufp->fullBit(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready));
    bufp->fullBit(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready));
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_ifu_dec_rvalid));
    bufp->fullBit(oldp+1416,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state))));
    bufp->fullBit(oldp+1417,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state))));
    bufp->fullBit(oldp+1418,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullBit(oldp+1419,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullBit(oldp+1420,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                              & ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fun_ex))))));
    bufp->fullBit(oldp+1421,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state))));
    bufp->fullBit(oldp+1422,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state))));
    bufp->fullBit(oldp+1423,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state))));
    bufp->fullBit(oldp+1424,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state))));
    bufp->fullCData(oldp+1425,(((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun))
                                 ? 3U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun))
                                          ? 0xfU : 1U))),8);
    bufp->fullBit(oldp+1426,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state))));
    bufp->fullBit(oldp+1427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready));
    bufp->fullBit(oldp+1428,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullCData(oldp+1429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun),3);
    bufp->fullCData(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_opcode),7);
    bufp->fullCData(oldp+1431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_waddr),5);
    bufp->fullIData(oldp+1432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_imm),32);
    bufp->fullBit(oldp+1433,(((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
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
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen));
    bufp->fullBit(oldp+1435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready));
    bufp->fullBit(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid));
    bufp->fullBit(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush));
    bufp->fullCData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_addr_ex),5);
    bufp->fullIData(oldp+1440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__pc_ex),32);
    bufp->fullIData(oldp+1441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src1_ex),32);
    bufp->fullIData(oldp+1442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src2_ex),32);
    bufp->fullCData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex),7);
    bufp->fullCData(oldp+1444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fun_ex),3);
    bufp->fullIData(oldp+1445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex),32);
    bufp->fullIData(oldp+1446,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__pc_ex)),32);
    bufp->fullQData(oldp+1447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__signed_mulh__Vstatic__mul_result),64);
    bufp->fullQData(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__unsigned_mulh__Vstatic__mul_result),64);
    bufp->fullCData(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state),3);
    bufp->fullBit(oldp+1452,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullIData(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh),32);
    bufp->fullIData(oldp+1454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_unsigned),32);
    bufp->fullBit(oldp+1455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_div));
    bufp->fullBit(oldp+1456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_divu));
    bufp->fullBit(oldp+1457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_rem));
    bufp->fullBit(oldp+1458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_remu));
    bufp->fullCData(oldp+1459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mdu_op),2);
    bufp->fullBit(oldp+1460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_div_op));
    bufp->fullBit(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__csr_wen));
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state),2);
    bufp->fullBit(oldp+1463,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+1464,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullCData(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state),2);
    bufp->fullCData(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state),2);
    bufp->fullCData(oldp+1467,((0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                         >> 3U))),7);
    bufp->fullIData(oldp+1468,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc 
                                >> 0xaU)),22);
    bufp->fullBit(oldp+1469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cur_hit0));
    bufp->fullBit(oldp+1470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit));
    bufp->fullBit(oldp+1471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cur_way0_valid));
    bufp->fullBit(oldp+1472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cur_way1_valid));
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__victim_way_sel));
    bufp->fullBit(oldp+1474,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_arready))));
    bufp->fullBit(oldp+1475,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready))));
    bufp->fullBit(oldp+1476,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready))));
    bufp->fullBit(oldp+1477,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready))));
    bufp->fullBit(oldp+1478,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready))));
    bufp->fullBit(oldp+1479,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready))));
    bufp->fullBit(oldp+1480,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wready) 
                                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))))));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullIData(oldp+1488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullBit(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullSData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullCData(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullCData(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_bank_q),2);
    bufp->fullSData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_row_q),13);
    bufp->fullSData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_col_q),13);
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_wr_q),4);
    bufp->fullBit(oldp+1502,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0x19U))));
    bufp->fullCData(oldp+1503,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xbU))),2);
    bufp->fullSData(oldp+1504,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 2U))),13);
    bufp->fullSData(oldp+1505,((0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 0xdU))),13);
    bufp->fullCData(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullCData(oldp+1511,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_fire));
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__read_fire));
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire));
    bufp->fullBit(oldp+1515,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bst_fire));
    bufp->fullBit(oldp+1516,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__precharge_fire));
    bufp->fullBit(oldp+1517,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__refresh_fire));
    bufp->fullBit(oldp+1518,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__lmr_fire));
    bufp->fullCData(oldp+1519,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1520,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_fire));
    bufp->fullBit(oldp+1521,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__read_fire));
    bufp->fullBit(oldp+1522,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire));
    bufp->fullBit(oldp+1523,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bst_fire));
    bufp->fullBit(oldp+1524,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__precharge_fire));
    bufp->fullBit(oldp+1525,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__refresh_fire));
    bufp->fullBit(oldp+1526,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__lmr_fire));
    bufp->fullCData(oldp+1527,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+1528,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullIData(oldp+1529,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt),32);
    bufp->fullBit(oldp+1530,((0x1cU == vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__all_bresp));
    bufp->fullBit(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rvalid));
    bufp->fullIData(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata),32);
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast));
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rvalid));
    bufp->fullBit(oldp+1543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire));
    bufp->fullBit(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_b_fire));
    bufp->fullCData(oldp+1545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+1546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullCData(oldp+1547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1549,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullCData(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullIData(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf
                               [0xaU]),32);
    bufp->fullIData(oldp+1553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+1554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullIData(oldp+1555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0]),32);
    bufp->fullIData(oldp+1556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[1]),32);
    bufp->fullIData(oldp+1557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[2]),32);
    bufp->fullIData(oldp+1558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[3]),32);
    bufp->fullIData(oldp+1559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[4]),32);
    bufp->fullIData(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[5]),32);
    bufp->fullIData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[6]),32);
    bufp->fullIData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[7]),32);
    bufp->fullIData(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[8]),32);
    bufp->fullIData(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[9]),32);
    bufp->fullIData(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[10]),32);
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[11]),32);
    bufp->fullIData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[12]),32);
    bufp->fullIData(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[13]),32);
    bufp->fullIData(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[14]),32);
    bufp->fullIData(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[15]),32);
    bufp->fullIData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[16]),32);
    bufp->fullIData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[17]),32);
    bufp->fullIData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[18]),32);
    bufp->fullIData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[19]),32);
    bufp->fullIData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[20]),32);
    bufp->fullIData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[21]),32);
    bufp->fullIData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[22]),32);
    bufp->fullIData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[23]),32);
    bufp->fullIData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[24]),32);
    bufp->fullIData(oldp+1580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[25]),32);
    bufp->fullIData(oldp+1581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[26]),32);
    bufp->fullIData(oldp+1582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[27]),32);
    bufp->fullIData(oldp+1583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[28]),32);
    bufp->fullIData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[29]),32);
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[30]),32);
    bufp->fullIData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[31]),32);
    bufp->fullIData(oldp+1587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1588,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1589,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open));
    bufp->fullSData(oldp+1591,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1592,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open));
    bufp->fullSData(oldp+1594,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open));
    bufp->fullSData(oldp+1596,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1597,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open));
    bufp->fullIData(oldp+1598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst),32);
    bufp->fullCData(oldp+1599,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1600,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1601,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst 
                                      >> 0xcU))),3);
    bufp->fullCData(oldp+1602,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst)),7);
    bufp->fullCData(oldp+1603,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst 
                                         >> 7U))),5);
    bufp->fullIData(oldp+1604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm),32);
    bufp->fullBit(oldp+1605,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst))));
    bufp->fullBit(oldp+1606,((IData)((0x100fU == (0x707fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst)))));
    bufp->fullWData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____Vcellinp__imm_mux__lut),351);
    bufp->fullQData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+1624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+1626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+1645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+1646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+1647,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1648,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+1649,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1650,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1651,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1652,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1653,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1658,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1660,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_arvalid));
    bufp->fullIData(oldp+1661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_araddr),32);
    bufp->fullBit(oldp+1662,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_awvalid));
    bufp->fullIData(oldp+1663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awaddr),32);
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_wvalid));
    bufp->fullIData(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wdata),32);
    bufp->fullCData(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wstrb),4);
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1668,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1682,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1683,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1685,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1686,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1687,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1688,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awvalid));
    bufp->fullBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_arvalid));
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1707,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1712,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr),32);
    bufp->fullIData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata),32);
    bufp->fullCData(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_ar_fire));
    bufp->fullCData(oldp+1724,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr)),2);
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint));
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint));
    bufp->fullIData(oldp+1727,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awready));
    bufp->fullBit(oldp+1744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_arready));
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_arready));
    bufp->fullBit(oldp+1758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+1759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+1761,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready))));
    bufp->fullBit(oldp+1762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready));
    bufp->fullBit(oldp+1763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready));
    bufp->fullBit(oldp+1764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wready));
    bufp->fullBit(oldp+1765,(vlSelf->clock));
    bufp->fullBit(oldp+1766,(vlSelf->reset));
    bufp->fullSData(oldp+1767,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1768,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1769,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1770,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1771,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1772,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1773,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1774,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1775,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1776,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1777,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1778,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1779,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1780,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1781,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1782,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1783,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1784,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1785,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1786,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1787,((((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1789,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullSData(oldp+1790,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q) 
                                 << 0xdU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullIData(oldp+1791,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o_w
                                      : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
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
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__key_down) 
                                                        << 0x1fU) 
                                                       | ((0U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                                           ? 0U
                                                           : 
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                                          [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr]))
                                                       : 
                                                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_rd) 
                                                        & (4U 
                                                           == 
                                                           (0xfU 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow) 
                                                         << 2U) 
                                                        | (((0x20U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
                                                            << 1U) 
                                                           | (0U 
                                                              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))))
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
    bufp->fullCData(oldp+1792,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
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
    bufp->fullIData(oldp+1793,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
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
    bufp->fullIData(oldp+1794,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__key_down) 
                                     << 0x1fU) | ((0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                                   ? 0U
                                                   : 
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                                  [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr]))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_rd) 
                                     & (4U == (0xfU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))
                                     ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__overflow) 
                                         << 2U) | (
                                                   ((0x20U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
                                                    << 1U) 
                                                   | (0U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))))
                                     : 0U))),32);
    bufp->fullIData(oldp+1795,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1796,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1797,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullQData(oldp+1799,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+1801,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1803,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1805,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))))));
    bufp->fullBit(oldp+1806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1807,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1808,((3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
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
                                        : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_bresp_q)
                                                  : 0U)))),2);
    bufp->fullIData(oldp+1809,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_data
                                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_head]
                                            : 0U))),32);
    bufp->fullCData(oldp+1810,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp
                                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_head]
                                                  : 0U)))),2);
    bufp->fullBit(oldp+1811,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_arready)))));
    bufp->fullBit(oldp+1812,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))));
    bufp->fullBit(oldp+1813,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))));
    bufp->fullBit(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1815,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready))));
    bufp->fullCData(oldp+1816,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint)
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
                                                  vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_resp
                                                  [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdq_head]
                                                   : 0U))))),2);
    bufp->fullCData(oldp+1817,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid))),4);
    bufp->fullBit(oldp+1818,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid)))));
    bufp->fullCData(oldp+1819,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)
                                 ? 0U : (3U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0))
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
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_bresp_q)
                                                   : 0U))))),2);
    bufp->fullCData(oldp+1820,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)
                                 ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid))),4);
    bufp->fullBit(oldp+1821,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid))));
    bufp->fullBit(oldp+1822,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint))));
    bufp->fullBit(oldp+1823,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint))));
    bufp->fullIData(oldp+1824,(((0x300U == (0xfffU 
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
                                             : ((0xf11U 
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
                                                  : 0xffffffffU))))))),32);
    bufp->fullBit(oldp+1825,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))));
    bufp->fullCData(oldp+1826,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr])),8);
    bufp->fullBit(oldp+1827,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+1828,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                                 ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arlen_q)) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_arid_q)))
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                                     ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_awlen_q)) 
                                         << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_awid_q))
                                     : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1829,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
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
    bufp->fullBit(oldp+1830,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
                                    [(1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 0x19U))] 
                                    >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                              >> 0xbU))))));
    bufp->fullSData(oldp+1831,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1833,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1834,(((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss))));
    bufp->fullCData(oldp+1835,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_shift),8);
    bufp->fullCData(oldp+1836,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt),3);
    bufp->fullBit(oldp+1837,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_done));
    bufp->fullCData(oldp+1838,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt),4);
    bufp->fullBit(oldp+1839,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso));
    bufp->fullBit(oldp+1840,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_en));
    bufp->fullBit(oldp+1841,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_last_bit));
    bufp->fullBit(oldp+1842,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_en));
    bufp->fullBit(oldp+1843,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1844,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1845,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1846,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1847,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out_r),4);
    bufp->fullCData(oldp+1848,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe_r),4);
    bufp->fullCData(oldp+1849,(1U),3);
    bufp->fullIData(oldp+1850,(0x1feU),32);
    bufp->fullIData(oldp+1851,(0x64U),32);
    bufp->fullIData(oldp+1852,(8U),32);
    bufp->fullIData(oldp+1853,(0x100U),32);
    bufp->fullIData(oldp+1854,(0x41aU),32);
    bufp->fullCData(oldp+1855,(0U),3);
    bufp->fullCData(oldp+1856,(2U),3);
    bufp->fullCData(oldp+1857,(3U),3);
    bufp->fullBit(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_psel));
    bufp->fullBit(oldp+1859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_penable));
    bufp->fullBit(oldp+1860,(1U));
    bufp->fullBit(oldp+1861,(0U));
    bufp->fullIData(oldp+1862,(5U),32);
    bufp->fullCData(oldp+1863,(0U),4);
    bufp->fullCData(oldp+1864,(0U),8);
    bufp->fullCData(oldp+1865,(0U),2);
    bufp->fullSData(oldp+1866,(1U),16);
    bufp->fullBit(oldp+1867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+1868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+1870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+1874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+1876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+1878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+1880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+1882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+1884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+1886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+1888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+1890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+1892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+1894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullBit(oldp+1896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullIData(oldp+1897,(0U),32);
    bufp->fullIData(oldp+1898,(0x20U),32);
    bufp->fullIData(oldp+1899,(7U),32);
    bufp->fullIData(oldp+1900,(5U),32);
    bufp->fullIData(oldp+1901,(3U),32);
    bufp->fullIData(oldp+1902,(0x30000000U),32);
    bufp->fullCData(oldp+1903,(1U),2);
    bufp->fullCData(oldp+1904,(1U),8);
    bufp->fullCData(oldp+1905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fun_ex),3);
    bufp->fullCData(oldp+1906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode_ex),7);
    bufp->fullIData(oldp+1907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_ex),32);
    bufp->fullIData(oldp+1908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1_ex),32);
    bufp->fullIData(oldp+1909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2_ex),32);
    bufp->fullIData(oldp+1910,(0x79737978U),32);
    bufp->fullIData(oldp+1911,(0x16fe3b5U),32);
    bufp->fullCData(oldp+1912,(3U),7);
    bufp->fullCData(oldp+1913,(0x13U),7);
    bufp->fullCData(oldp+1914,(0x67U),7);
    bufp->fullCData(oldp+1915,(0x73U),7);
    bufp->fullCData(oldp+1916,(0x63U),7);
    bufp->fullCData(oldp+1917,(0x6fU),7);
    bufp->fullCData(oldp+1918,(0x23U),7);
    bufp->fullCData(oldp+1919,(0x37U),7);
    bufp->fullCData(oldp+1920,(0x17U),7);
    bufp->fullCData(oldp+1921,(0x33U),7);
    bufp->fullSData(oldp+1922,(0x300U),12);
    bufp->fullSData(oldp+1923,(0x305U),12);
    bufp->fullSData(oldp+1924,(0x341U),12);
    bufp->fullSData(oldp+1925,(0x342U),12);
    bufp->fullSData(oldp+1926,(0U),12);
    bufp->fullSData(oldp+1927,(0x302U),12);
    bufp->fullSData(oldp+1928,(0xf11U),12);
    bufp->fullSData(oldp+1929,(0xf12U),12);
    bufp->fullIData(oldp+1930,(0xbU),32);
    bufp->fullCData(oldp+1931,(4U),3);
    bufp->fullCData(oldp+1932,(5U),3);
    bufp->fullIData(oldp+1933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__o_result),32);
    bufp->fullCData(oldp+1934,(2U),2);
    bufp->fullIData(oldp+1935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__d),32);
    bufp->fullCData(oldp+1936,(3U),2);
    bufp->fullIData(oldp+1937,(0x2000000U),32);
    bufp->fullIData(oldp+1938,(0x2000004U),32);
    bufp->fullIData(oldp+1939,(9U),32);
    bufp->fullCData(oldp+1940,(0xfU),7);
    bufp->fullIData(oldp+1941,(1U),32);
    bufp->fullIData(oldp+1942,(0x27U),32);
    bufp->fullIData(oldp+1943,(9U),32);
    bufp->fullIData(oldp+1944,(0x80U),32);
    bufp->fullIData(oldp+1945,(4U),32);
    bufp->fullIData(oldp+1946,(2U),32);
    bufp->fullIData(oldp+1947,(0x40U),32);
    bufp->fullIData(oldp+1948,(0x16U),32);
    bufp->fullBit(oldp+1949,(0U));
    bufp->fullBit(oldp+1950,(1U));
    bufp->fullIData(oldp+1951,(1U),32);
    bufp->fullCData(oldp+1952,(4U),8);
    bufp->fullCData(oldp+1953,(8U),8);
    bufp->fullCData(oldp+1954,(0xcU),8);
    bufp->fullIData(oldp+1955,(0x10U),32);
    bufp->fullCData(oldp+1956,(4U),4);
    bufp->fullBit(oldp+1957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__key_down));
    bufp->fullIData(oldp+1958,(6U),32);
    bufp->fullBit(oldp+1959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_init));
    bufp->fullCData(oldp+1960,(0x35U),8);
    bufp->fullCData(oldp+1961,(0x1bU),8);
    bufp->fullCData(oldp+1962,(0x15U),8);
    bufp->fullCData(oldp+1963,(0xebU),8);
    bufp->fullCData(oldp+1964,(0x38U),8);
    bufp->fullIData(oldp+1965,(0x18U),32);
    bufp->fullIData(oldp+1966,(0xdU),32);
    bufp->fullIData(oldp+1967,(0x2000U),32);
    bufp->fullIData(oldp+1968,(0x2710U),32);
    bufp->fullIData(oldp+1969,(0x30cU),32);
    bufp->fullIData(oldp+1970,(0x19U),32);
    bufp->fullCData(oldp+1971,(7U),4);
    bufp->fullCData(oldp+1972,(3U),4);
    bufp->fullCData(oldp+1973,(5U),4);
    bufp->fullCData(oldp+1974,(6U),4);
    bufp->fullCData(oldp+1975,(2U),4);
    bufp->fullCData(oldp+1976,(1U),4);
    bufp->fullSData(oldp+1977,(0x20U),13);
    bufp->fullCData(oldp+1978,(8U),4);
    bufp->fullIData(oldp+1979,(0xaU),32);
    bufp->fullIData(oldp+1980,(0x11U),32);
    bufp->fullIData(oldp+1981,(0x10001000U),32);
    bufp->fullIData(oldp+1982,(0x10001fffU),32);
    bufp->fullIData(oldp+1983,(0x3fffffffU),32);
    bufp->fullCData(oldp+1984,(0U),5);
    bufp->fullCData(oldp+1985,(4U),5);
    bufp->fullCData(oldp+1986,(8U),5);
    bufp->fullCData(oldp+1987,(0xcU),5);
    bufp->fullCData(oldp+1988,(0x10U),5);
    bufp->fullCData(oldp+1989,(0x14U),5);
    bufp->fullCData(oldp+1990,(0x18U),5);
    bufp->fullIData(oldp+1991,(8U),32);
    bufp->fullIData(oldp+1992,(0xaU),32);
    bufp->fullIData(oldp+1993,(0xbU),32);
    bufp->fullIData(oldp+1994,(0xcU),32);
    bufp->fullIData(oldp+1995,(0xdU),32);
    bufp->fullIData(oldp+1996,(4U),32);
    bufp->fullIData(oldp+1997,(0x40U),32);
    bufp->fullIData(oldp+1998,(0x2140U),32);
    bufp->fullCData(oldp+1999,(9U),4);
    bufp->fullCData(oldp+2000,(0xaU),4);
    bufp->fullSData(oldp+2001,(0x280U),16);
    bufp->fullSData(oldp+2002,(0x1e0U),16);
    bufp->fullIData(oldp+2003,(0x21000000U),32);
    bufp->fullIData(oldp+2004,(0x21000004U),32);
    bufp->fullIData(oldp+2005,(0x21000008U),32);
    bufp->fullIData(oldp+2006,(0x80000U),32);
    bufp->fullIData(oldp+2007,(0x200000U),32);
    bufp->fullIData(oldp+2008,(0x60U),32);
    bufp->fullIData(oldp+2009,(0x90U),32);
    bufp->fullIData(oldp+2010,(0x310U),32);
    bufp->fullIData(oldp+2011,(0x320U),32);
    bufp->fullIData(oldp+2012,(0x23U),32);
    bufp->fullIData(oldp+2013,(0x203U),32);
    bufp->fullIData(oldp+2014,(0x20dU),32);
    bufp->fullIData(oldp+2015,(0x400000U),32);
    bufp->fullIData(oldp+2016,(0x200U),32);
}
