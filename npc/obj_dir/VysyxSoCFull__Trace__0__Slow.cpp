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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+1752,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1753,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1754,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1755,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1756,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1757,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1758,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1759,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1760,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1761,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1762,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1763,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1764,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1765,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1766,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1767,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1768,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1769,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1770,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1771,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+1752,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1753,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1754,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1755,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1756,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1757,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1758,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1759,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1760,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1761,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1762,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1763,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1764,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1765,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1766,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1767,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1768,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1769,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1770,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1771,"externalPins_uart_tx", false,-1);
    tracep->declBit(c+883,"dram_sel0", false,-1);
    tracep->declBit(c+884,"dram_sel1", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+1831,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1832,"spi_mosi", false,-1);
    tracep->declBit(c+1772,"spi_miso", false,-1);
    tracep->declBit(c+1770,"uart_rx", false,-1);
    tracep->declBit(c+1771,"uart_tx", false,-1);
    tracep->declBit(c+1473,"psram_sck", false,-1);
    tracep->declBit(c+1474,"psram_ce_n", false,-1);
    tracep->declBus(c+1773,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1774,"sdram_clk", false,-1);
    tracep->declBit(c+1560,"sdram_cke", false,-1);
    tracep->declBit(c+885,"sdram_cs", false,-1);
    tracep->declBit(c+886,"sdram_ras", false,-1);
    tracep->declBit(c+887,"sdram_cas", false,-1);
    tracep->declBit(c+888,"sdram_we", false,-1);
    tracep->declBus(c+1232,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1561,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1562,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1739,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1752,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1753,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1754,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1755,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1756,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1757,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1758,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1759,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1760,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1761,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1762,"ps2_clk", false,-1);
    tracep->declBit(c+1763,"ps2_data", false,-1);
    tracep->declBus(c+1764,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1765,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1766,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1767,"vga_hsync", false,-1);
    tracep->declBit(c+1768,"vga_vsync", false,-1);
    tracep->declBit(c+1769,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+1365,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+9,"in_psel", false,-1);
    tracep->declBit(c+10,"in_penable", false,-1);
    tracep->declBus(c+1833,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+11,"in_pwrite", false,-1);
    tracep->declBus(c+1366,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1475,"in_pready", false,-1);
    tracep->declBus(c+1476,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1368,"in_pslverr", false,-1);
    tracep->declBus(c+1365,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+9,"out_psel", false,-1);
    tracep->declBit(c+10,"out_penable", false,-1);
    tracep->declBus(c+1833,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+11,"out_pwrite", false,-1);
    tracep->declBus(c+1366,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1475,"out_pready", false,-1);
    tracep->declBus(c+1476,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1368,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+9,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+10,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+11,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+1365,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1475,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1368,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1476,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1369,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+1370,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+11,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+1371,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1833,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1832,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1834,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+554,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+1372,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+1373,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+11,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1833,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+889,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1834,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1775,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+1375,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+1376,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+11,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1833,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1377,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1378,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1776,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1379,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+555,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+11,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+1365,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1777,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1834,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+12,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1380,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1381,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+11,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1833,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1382,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1834,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1778,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1383,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+1384,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+11,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+1371,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1833,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1385,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1386,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+556,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1387,"sel_0", false,-1);
    tracep->declBit(c+1388,"sel_1", false,-1);
    tracep->declBit(c+1389,"sel_2", false,-1);
    tracep->declBit(c+1390,"sel_3", false,-1);
    tracep->declBit(c+1391,"sel_4", false,-1);
    tracep->declBit(c+1392,"sel_5", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+13,"auto_in_awready", false,-1);
    tracep->declBit(c+14,"auto_in_awvalid", false,-1);
    tracep->declBus(c+15,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+16,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+17,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+18,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+13,"auto_in_wready", false,-1);
    tracep->declBit(c+19,"auto_in_wvalid", false,-1);
    tracep->declBus(c+20,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+21,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+22,"auto_in_bready", false,-1);
    tracep->declBit(c+1477,"auto_in_bvalid", false,-1);
    tracep->declBus(c+23,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1393,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+25,"auto_in_arvalid", false,-1);
    tracep->declBus(c+26,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+27,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+28,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+29,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+30,"auto_in_rready", false,-1);
    tracep->declBit(c+1478,"auto_in_rvalid", false,-1);
    tracep->declBus(c+31,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1779,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1393,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+9,"auto_out_psel", false,-1);
    tracep->declBit(c+10,"auto_out_penable", false,-1);
    tracep->declBit(c+11,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1365,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1366,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1475,"auto_out_pready", false,-1);
    tracep->declBit(c+1368,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1476,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+10,"nodeOut_penable", false,-1);
    tracep->declBus(c+32,"state", false,-1, 1,0);
    tracep->declBit(c+24,"accept_read", false,-1);
    tracep->declBit(c+13,"accept_write", false,-1);
    tracep->declBit(c+33,"is_write_r", false,-1);
    tracep->declBit(c+11,"is_write", false,-1);
    tracep->declBus(c+31,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+23,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+34,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+35,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+36,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+37,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1394,"resp", false,-1, 1,0);
    tracep->declBus(c+38,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1393,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1478,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+39,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1477,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+40,"auto_in_awready", false,-1);
    tracep->declBit(c+1609,"auto_in_awvalid", false,-1);
    tracep->declBus(c+41,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1611,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1612,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_in_wready", false,-1);
    tracep->declBit(c+1613,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1614,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1615,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"auto_in_wlast", false,-1);
    tracep->declBit(c+563,"auto_in_bready", false,-1);
    tracep->declBit(c+43,"auto_in_bvalid", false,-1);
    tracep->declBus(c+44,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+45,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_in_arready", false,-1);
    tracep->declBit(c+1617,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1619,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+564,"auto_in_rready", false,-1);
    tracep->declBit(c+48,"auto_in_rvalid", false,-1);
    tracep->declBus(c+49,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+51,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_rlast", false,-1);
    tracep->declBit(c+13,"auto_out_awready", false,-1);
    tracep->declBit(c+14,"auto_out_awvalid", false,-1);
    tracep->declBus(c+15,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+16,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+17,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+18,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+13,"auto_out_wready", false,-1);
    tracep->declBit(c+19,"auto_out_wvalid", false,-1);
    tracep->declBus(c+20,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+21,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+22,"auto_out_bready", false,-1);
    tracep->declBit(c+1477,"auto_out_bvalid", false,-1);
    tracep->declBus(c+23,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1393,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_out_arready", false,-1);
    tracep->declBit(c+25,"auto_out_arvalid", false,-1);
    tracep->declBus(c+26,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+27,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+28,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+29,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+30,"auto_out_rready", false,-1);
    tracep->declBit(c+1478,"auto_out_rvalid", false,-1);
    tracep->declBus(c+31,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1779,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1393,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+22,"io_enq_ready", false,-1);
    tracep->declBit(c+1477,"io_enq_valid", false,-1);
    tracep->declBus(c+23,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1393,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+563,"io_deq_ready", false,-1);
    tracep->declBit(c+43,"io_deq_valid", false,-1);
    tracep->declBus(c+44,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+45,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+53,"wrap", false,-1);
    tracep->declBit(c+54,"wrap_1", false,-1);
    tracep->declBit(c+55,"maybe_full", false,-1);
    tracep->declBit(c+56,"ptr_match", false,-1);
    tracep->declBit(c+57,"empty", false,-1);
    tracep->declBit(c+58,"full", false,-1);
    tracep->declBit(c+1479,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+54,"R0_addr", false,-1);
    tracep->declBit(c+1832,"R0_en", false,-1);
    tracep->declBit(c+1750,"R0_clk", false,-1);
    tracep->declBus(c+59,"R0_data", false,-1, 5,0);
    tracep->declBit(c+53,"W0_addr", false,-1);
    tracep->declBit(c+1479,"W0_en", false,-1);
    tracep->declBit(c+1750,"W0_clk", false,-1);
    tracep->declBus(c+557,"W0_data", false,-1, 5,0);
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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+30,"io_enq_ready", false,-1);
    tracep->declBit(c+1478,"io_enq_valid", false,-1);
    tracep->declBus(c+31,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1779,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1393,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+564,"io_deq_ready", false,-1);
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
    tracep->declBit(c+1480,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+64,"R0_addr", false,-1);
    tracep->declBit(c+1832,"R0_en", false,-1);
    tracep->declBit(c+1750,"R0_clk", false,-1);
    tracep->declQuad(c+69,"R0_data", false,-1, 38,0);
    tracep->declBit(c+63,"W0_addr", false,-1);
    tracep->declBit(c+1480,"W0_en", false,-1);
    tracep->declBit(c+1750,"W0_clk", false,-1);
    tracep->declQuad(c+1780,"W0_data", false,-1, 38,0);
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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+46,"io_enq_ready", false,-1);
    tracep->declBit(c+1617,"io_enq_valid", false,-1);
    tracep->declBus(c+47,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1618,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1619,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1620,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+24,"io_deq_ready", false,-1);
    tracep->declBit(c+25,"io_deq_valid", false,-1);
    tracep->declBus(c+26,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+27,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+28,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+29,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+76,"wrap", false,-1);
    tracep->declBit(c+77,"wrap_1", false,-1);
    tracep->declBit(c+78,"maybe_full", false,-1);
    tracep->declBit(c+79,"ptr_match", false,-1);
    tracep->declBit(c+80,"empty", false,-1);
    tracep->declBit(c+81,"full", false,-1);
    tracep->declBit(c+1621,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+77,"R0_addr", false,-1);
    tracep->declBit(c+1832,"R0_en", false,-1);
    tracep->declBit(c+1750,"R0_clk", false,-1);
    tracep->declQuad(c+82,"R0_data", false,-1, 46,0);
    tracep->declBit(c+76,"W0_addr", false,-1);
    tracep->declBit(c+1621,"W0_en", false,-1);
    tracep->declBit(c+1750,"W0_clk", false,-1);
    tracep->declQuad(c+1782,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+40,"io_enq_ready", false,-1);
    tracep->declBit(c+1609,"io_enq_valid", false,-1);
    tracep->declBus(c+41,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1610,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1611,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1612,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+14,"io_deq_valid", false,-1);
    tracep->declBus(c+15,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+16,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+17,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+18,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+89,"wrap", false,-1);
    tracep->declBit(c+90,"wrap_1", false,-1);
    tracep->declBit(c+91,"maybe_full", false,-1);
    tracep->declBit(c+92,"ptr_match", false,-1);
    tracep->declBit(c+93,"empty", false,-1);
    tracep->declBit(c+94,"full", false,-1);
    tracep->declBit(c+1622,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+90,"R0_addr", false,-1);
    tracep->declBit(c+1832,"R0_en", false,-1);
    tracep->declBit(c+1750,"R0_clk", false,-1);
    tracep->declQuad(c+95,"R0_data", false,-1, 46,0);
    tracep->declBit(c+89,"W0_addr", false,-1);
    tracep->declBit(c+1622,"W0_en", false,-1);
    tracep->declBit(c+1750,"W0_clk", false,-1);
    tracep->declQuad(c+1784,"W0_data", false,-1, 46,0);
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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+42,"io_enq_ready", false,-1);
    tracep->declBit(c+1613,"io_enq_valid", false,-1);
    tracep->declBus(c+1614,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1615,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1616,"io_enq_bits_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+19,"io_deq_valid", false,-1);
    tracep->declBus(c+20,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+21,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+102,"wrap", false,-1);
    tracep->declBit(c+103,"wrap_1", false,-1);
    tracep->declBit(c+104,"maybe_full", false,-1);
    tracep->declBit(c+105,"ptr_match", false,-1);
    tracep->declBit(c+106,"empty", false,-1);
    tracep->declBit(c+107,"full", false,-1);
    tracep->declBit(c+1623,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+103,"R0_addr", false,-1);
    tracep->declBit(c+1832,"R0_en", false,-1);
    tracep->declBit(c+1750,"R0_clk", false,-1);
    tracep->declQuad(c+108,"R0_data", false,-1, 35,0);
    tracep->declBit(c+102,"W0_addr", false,-1);
    tracep->declBit(c+1623,"W0_en", false,-1);
    tracep->declBit(c+1750,"W0_clk", false,-1);
    tracep->declQuad(c+1624,"W0_data", false,-1, 35,0);
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
    tracep->declBus(c+1835,"R", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+890,"in_arready", false,-1);
    tracep->declBit(c+1786,"in_arvalid", false,-1);
    tracep->declBus(c+1836,"in_arid", false,-1, 3,0);
    tracep->declBus(c+1517,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+1518,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+1787,"in_rready", false,-1);
    tracep->declBit(c+1481,"in_rvalid", false,-1);
    tracep->declBus(c+1225,"in_rid", false,-1, 3,0);
    tracep->declBus(c+1226,"in_rdata", false,-1, 31,0);
    tracep->declBus(c+1227,"in_rresp", false,-1, 1,0);
    tracep->declBit(c+1482,"in_rlast", false,-1);
    tracep->declBit(c+891,"in_awready", false,-1);
    tracep->declBit(c+1788,"in_awvalid", false,-1);
    tracep->declBus(c+1836,"in_awid", false,-1, 3,0);
    tracep->declBus(c+1521,"in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1831,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+892,"in_wready", false,-1);
    tracep->declBit(c+1626,"in_wvalid", false,-1);
    tracep->declBus(c+1524,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"in_wlast", false,-1);
    tracep->declBit(c+1680,"in_bready", false,-1);
    tracep->declBit(c+893,"in_bvalid", false,-1);
    tracep->declBus(c+894,"in_bid", false,-1, 3,0);
    tracep->declBus(c+895,"in_bresp", false,-1, 1,0);
    tracep->declBit(c+1563,"out_arready", false,-1);
    tracep->declBit(c+896,"out_arvalid", false,-1);
    tracep->declBus(c+897,"out_arid", false,-1, 3,0);
    tracep->declBus(c+898,"out_araddr", false,-1, 31,0);
    tracep->declBus(c+899,"out_arlen", false,-1, 7,0);
    tracep->declBus(c+900,"out_arsize", false,-1, 2,0);
    tracep->declBus(c+901,"out_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"out_rready", false,-1);
    tracep->declBit(c+903,"out_rvalid", false,-1);
    tracep->declBus(c+904,"out_rid", false,-1, 3,0);
    tracep->declBus(c+905,"out_rdata", false,-1, 31,0);
    tracep->declBus(c+1837,"out_rresp", false,-1, 1,0);
    tracep->declBit(c+906,"out_rlast", false,-1);
    tracep->declBit(c+1564,"out_awready", false,-1);
    tracep->declBit(c+907,"out_awvalid", false,-1);
    tracep->declBus(c+908,"out_awid", false,-1, 3,0);
    tracep->declBus(c+909,"out_awaddr", false,-1, 31,0);
    tracep->declBus(c+910,"out_awlen", false,-1, 7,0);
    tracep->declBus(c+911,"out_awsize", false,-1, 2,0);
    tracep->declBus(c+912,"out_awburst", false,-1, 1,0);
    tracep->declBit(c+1565,"out_wready", false,-1);
    tracep->declBit(c+913,"out_wvalid", false,-1);
    tracep->declBus(c+914,"out_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"out_wstrb", false,-1, 3,0);
    tracep->declBit(c+916,"out_wlast", false,-1);
    tracep->declBit(c+917,"out_bready", false,-1);
    tracep->declBit(c+918,"out_bvalid", false,-1);
    tracep->declBus(c+904,"out_bid", false,-1, 3,0);
    tracep->declBus(c+1837,"out_bresp", false,-1, 1,0);
    tracep->declBus(c+1838,"FIFO_DW", false,-1, 31,0);
    tracep->declQuad(c+919,"rd_cyc_cnt", false,-1, 63,0);
    tracep->declQuad(c+921,"rd_start_cyc", false,-1, 63,0);
    tracep->declBus(c+897,"arid_q", false,-1, 3,0);
    tracep->declBus(c+898,"araddr_q", false,-1, 31,0);
    tracep->declBus(c+899,"arlen_q", false,-1, 7,0);
    tracep->declBus(c+900,"arsize_q", false,-1, 2,0);
    tracep->declBus(c+901,"arburst_q", false,-1, 1,0);
    tracep->declBit(c+923,"empty", false,-1);
    tracep->declBit(c+924,"full", false,-1);
    tracep->declArray(c+1228,"fifo_data_dly", false,-1, 102,0);
    tracep->declBit(c+925,"rd_ar_busy", false,-1);
    tracep->declBit(c+926,"rd_ar_sent", false,-1);
    tracep->declBit(c+1681,"in_ar_fire", false,-1);
    tracep->declBit(c+1682,"in_r_fire", false,-1);
    tracep->declBit(c+1233,"out_ar_fire", false,-1);
    tracep->declBit(c+927,"out_r_fire", false,-1);
    tracep->declQuad(c+928,"rd_end_cyc", false,-1, 63,0);
    tracep->declQuad(c+930,"wr_cyc_cnt", false,-1, 63,0);
    tracep->declQuad(c+932,"wr_start_cyc", false,-1, 63,0);
    tracep->declQuad(c+934,"wr_end_cyc", false,-1, 63,0);
    tracep->declBus(c+908,"awid_q", false,-1, 3,0);
    tracep->declBus(c+909,"awaddr_q", false,-1, 31,0);
    tracep->declBus(c+910,"awlen_q", false,-1, 7,0);
    tracep->declBus(c+911,"awsize_q", false,-1, 2,0);
    tracep->declBus(c+912,"awburst_q", false,-1, 1,0);
    tracep->declBus(c+914,"wdata_q", false,-1, 31,0);
    tracep->declBus(c+915,"wstrb_q", false,-1, 3,0);
    tracep->declBit(c+916,"wlast_q", false,-1);
    tracep->declBit(c+936,"bready_q", false,-1);
    tracep->declBit(c+937,"bvalid_q", false,-1);
    tracep->declBus(c+894,"bid_q", false,-1, 3,0);
    tracep->declBus(c+895,"bresp_q", false,-1, 1,0);
    tracep->declBit(c+938,"wr_aw_busy", false,-1);
    tracep->declBit(c+939,"wr_w_busy", false,-1);
    tracep->declBit(c+940,"wr_aw_sent", false,-1);
    tracep->declBit(c+941,"wr_w_sent", false,-1);
    tracep->declBit(c+1683,"in_aw_fire", false,-1);
    tracep->declBit(c+1684,"in_w_fire", false,-1);
    tracep->declBit(c+1685,"in_b_fire", false,-1);
    tracep->declBit(c+1234,"out_aw_fire", false,-1);
    tracep->declBit(c+1235,"out_w_fire", false,-1);
    tracep->declBit(c+942,"out_b_fire", false,-1);
    tracep->pushNamePrefix("rdata_fifo ");
    tracep->declBus(c+1838,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1839,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declArray(c+943,"i_data", false,-1, 102,0);
    tracep->declBit(c+927,"wen", false,-1);
    tracep->declBit(c+1682,"ren", false,-1);
    tracep->declArray(c+1228,"o_data", false,-1, 102,0);
    tracep->declBit(c+923,"o_empty", false,-1);
    tracep->declBit(c+924,"o_full", false,-1);
    tracep->declBus(c+1840,"PTR_W", false,-1, 31,0);
    tracep->declBus(c+1841,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+115+i*4,"fifo", true,(i+0), 102,0);
    }
    tracep->declBus(c+947,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+948,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+949,"count", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+147,"auto_in_awready", false,-1);
    tracep->declBit(c+1627,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1836,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1831,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+148,"auto_in_wready", false,-1);
    tracep->declBit(c+1628,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1524,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"auto_in_wlast", false,-1);
    tracep->declBit(c+1789,"auto_in_bready", false,-1);
    tracep->declBit(c+149,"auto_in_bvalid", false,-1);
    tracep->declBus(c+150,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+152,"auto_in_arready", false,-1);
    tracep->declBit(c+1629,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1836,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1517,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1518,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1686,"auto_in_rready", false,-1);
    tracep->declBit(c+153,"auto_in_rvalid", false,-1);
    tracep->declBus(c+154,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+157,"auto_in_rlast", false,-1);
    tracep->declBit(c+1687,"auto_out_awready", false,-1);
    tracep->declBit(c+1630,"auto_out_awvalid", false,-1);
    tracep->declBus(c+41,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1611,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1612,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+158,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1688,"auto_out_wready", false,-1);
    tracep->declBit(c+1631,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1614,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1615,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"auto_out_wlast", false,-1);
    tracep->declBit(c+1689,"auto_out_bready", false,-1);
    tracep->declBit(c+159,"auto_out_bvalid", false,-1);
    tracep->declBus(c+150,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+161,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1690,"auto_out_arready", false,-1);
    tracep->declBit(c+1632,"auto_out_arvalid", false,-1);
    tracep->declBus(c+47,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1619,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1633,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1686,"auto_out_rready", false,-1);
    tracep->declBit(c+153,"auto_out_rvalid", false,-1);
    tracep->declBus(c+154,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+163,"auto_out_rlast", false,-1);
    tracep->declBit(c+1631,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+164,"w_idle", false,-1);
    tracep->declBit(c+1691,"in_awready", false,-1);
    tracep->declBit(c+165,"busy", false,-1);
    tracep->declBus(c+166,"r_addr", false,-1, 31,0);
    tracep->declBus(c+167,"r_len", false,-1, 7,0);
    tracep->declBus(c+1634,"len", false,-1, 7,0);
    tracep->declBus(c+1635,"addr", false,-1, 31,0);
    tracep->declBit(c+168,"busy_1", false,-1);
    tracep->declBus(c+169,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+170,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+171,"len_1", false,-1, 7,0);
    tracep->declBus(c+1636,"addr_1", false,-1, 31,0);
    tracep->declBit(c+172,"wbeats_latched", false,-1);
    tracep->declBit(c+1630,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1637,"wbeats_valid", false,-1);
    tracep->declBus(c+173,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1638,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1616,"w_last", false,-1);
    tracep->declBit(c+1689,"nodeOut_bready", false,-1);
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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+152,"io_enq_ready", false,-1);
    tracep->declBit(c+1629,"io_enq_valid", false,-1);
    tracep->declBus(c+1836,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1517,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1518,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1519,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1520,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1692,"io_deq_ready", false,-1);
    tracep->declBit(c+1632,"io_deq_valid", false,-1);
    tracep->declBus(c+47,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1639,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1640,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1619,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1620,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+190,"ram", false,-1, 48,0);
    tracep->declBit(c+192,"full", false,-1);
    tracep->declBit(c+1632,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1693,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+147,"io_enq_ready", false,-1);
    tracep->declBit(c+1627,"io_enq_valid", false,-1);
    tracep->declBus(c+1836,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1521,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1831,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1522,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1523,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1694,"io_deq_ready", false,-1);
    tracep->declBit(c+1641,"io_deq_valid", false,-1);
    tracep->declBus(c+41,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1642,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+193,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1611,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1612,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+194,"ram", false,-1, 48,0);
    tracep->declBit(c+196,"full", false,-1);
    tracep->declBit(c+1641,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1695,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+148,"io_enq_ready", false,-1);
    tracep->declBit(c+1628,"io_enq_valid", false,-1);
    tracep->declBus(c+1524,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1525,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1526,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1696,"io_deq_ready", false,-1);
    tracep->declBit(c+1643,"io_deq_valid", false,-1);
    tracep->declBus(c+1614,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1615,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1790,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+197,"ram", false,-1, 36,0);
    tracep->declBit(c+199,"full", false,-1);
    tracep->declBit(c+1643,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1697,"do_enq", false,-1);
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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1698,"auto_in_awready", false,-1);
    tracep->declBit(c+1644,"auto_in_awvalid", false,-1);
    tracep->declBus(c+41,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1645,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1791,"auto_in_wready", false,-1);
    tracep->declBit(c+1646,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1614,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1615,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1699,"auto_in_bready", false,-1);
    tracep->declBit(c+200,"auto_in_bvalid", false,-1);
    tracep->declBus(c+201,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1700,"auto_in_arready", false,-1);
    tracep->declBit(c+1647,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1648,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1701,"auto_in_rready", false,-1);
    tracep->declBit(c+203,"auto_in_rvalid", false,-1);
    tracep->declBus(c+204,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+205,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+206,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1700,"nodeIn_arready", false,-1);
    tracep->declBit(c+1698,"nodeIn_awready", false,-1);
    tracep->declBit(c+1649,"w_sel0", false,-1);
    tracep->declBit(c+200,"w_full", false,-1);
    tracep->declBus(c+201,"w_id", false,-1, 3,0);
    tracep->declBit(c+207,"r_sel1", false,-1);
    tracep->declBit(c+208,"w_sel1", false,-1);
    tracep->declBit(c+203,"r_full", false,-1);
    tracep->declBus(c+204,"r_id", false,-1, 3,0);
    tracep->declBit(c+1702,"ren", false,-1);
    tracep->declBit(c+209,"rdata_REG", false,-1);
    tracep->declBus(c+210,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+211,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+212,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+213,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1650,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1702,"R0_en", false,-1);
    tracep->declBit(c+1750,"R0_clk", false,-1);
    tracep->declBus(c+214,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1651,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1703,"W0_en", false,-1);
    tracep->declBit(c+1750,"W0_clk", false,-1);
    tracep->declBus(c+1614,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1615,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1704,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1527,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1836,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1831,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1792,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1528,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1524,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1529,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+1483,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+1484,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+1793,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1705,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1530,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1836,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1517,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1518,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1531,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+1485,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+1486,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1794,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1795,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1487,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+891,"auto_anon_out_1_awready", false,-1);
    tracep->declBit(c+1788,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBus(c+1836,"auto_anon_out_1_awid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_anon_out_1_awaddr", false,-1, 31,0);
    tracep->declBus(c+1831,"auto_anon_out_1_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"auto_anon_out_1_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"auto_anon_out_1_awburst", false,-1, 1,0);
    tracep->declBit(c+892,"auto_anon_out_1_wready", false,-1);
    tracep->declBit(c+1626,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBus(c+1524,"auto_anon_out_1_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"auto_anon_out_1_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"auto_anon_out_1_wlast", false,-1);
    tracep->declBit(c+1680,"auto_anon_out_1_bready", false,-1);
    tracep->declBit(c+893,"auto_anon_out_1_bvalid", false,-1);
    tracep->declBus(c+894,"auto_anon_out_1_bid", false,-1, 3,0);
    tracep->declBus(c+895,"auto_anon_out_1_bresp", false,-1, 1,0);
    tracep->declBit(c+890,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1786,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+1836,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1517,"auto_anon_out_1_araddr", false,-1, 31,0);
    tracep->declBus(c+1518,"auto_anon_out_1_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"auto_anon_out_1_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_out_1_arburst", false,-1, 1,0);
    tracep->declBit(c+1787,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+1481,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+1225,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+1226,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBus(c+1227,"auto_anon_out_1_rresp", false,-1, 1,0);
    tracep->declBit(c+1482,"auto_anon_out_1_rlast", false,-1);
    tracep->declBit(c+147,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1627,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+1836,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1831,"auto_anon_out_0_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+148,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1628,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1524,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+1789,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+149,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+152,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1629,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+1836,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1517,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1518,"auto_anon_out_0_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1686,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+153,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+154,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+157,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+1483,"in_0_bvalid", false,-1);
    tracep->declBit(c+1485,"in_0_rvalid", false,-1);
    tracep->declBit(c+1706,"in_0_wready", false,-1);
    tracep->declBit(c+1707,"in_0_awready", false,-1);
    tracep->declBit(c+1796,"in_0_arready", false,-1);
    tracep->declBit(c+1704,"anonIn_awready", false,-1);
    tracep->declBit(c+1705,"anonIn_arready", false,-1);
    tracep->declBit(c+1532,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1533,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1534,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1535,"requestAWIO_0_1", false,-1);
    tracep->declBus(c+1842,"arSel", false,-1, 15,0);
    tracep->declBus(c+1842,"awSel", false,-1, 15,0);
    tracep->declBus(c+1488,"rSel", false,-1, 15,0);
    tracep->declBus(c+1489,"bSel", false,-1, 15,0);
    tracep->declBus(c+215,"arFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+216,"arFIFOMap_0_last", false,-1);
    tracep->declBus(c+217,"awFIFOMap_0_count", false,-1, 2,0);
    tracep->declBit(c+218,"awFIFOMap_0_last", false,-1);
    tracep->declBus(c+219,"arFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1843,"arFIFOMap_1_last", false,-1);
    tracep->declBus(c+220,"awFIFOMap_1_count", false,-1, 2,0);
    tracep->declBit(c+1844,"awFIFOMap_1_last", false,-1);
    tracep->declBus(c+221,"arFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1845,"arFIFOMap_2_last", false,-1);
    tracep->declBus(c+222,"awFIFOMap_2_count", false,-1, 2,0);
    tracep->declBit(c+1846,"awFIFOMap_2_last", false,-1);
    tracep->declBus(c+223,"arFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1847,"arFIFOMap_3_last", false,-1);
    tracep->declBus(c+224,"awFIFOMap_3_count", false,-1, 2,0);
    tracep->declBit(c+1848,"awFIFOMap_3_last", false,-1);
    tracep->declBus(c+225,"arFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1849,"arFIFOMap_4_last", false,-1);
    tracep->declBus(c+226,"awFIFOMap_4_count", false,-1, 2,0);
    tracep->declBit(c+1850,"awFIFOMap_4_last", false,-1);
    tracep->declBus(c+227,"arFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1851,"arFIFOMap_5_last", false,-1);
    tracep->declBus(c+228,"awFIFOMap_5_count", false,-1, 2,0);
    tracep->declBit(c+1852,"awFIFOMap_5_last", false,-1);
    tracep->declBus(c+229,"arFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1853,"arFIFOMap_6_last", false,-1);
    tracep->declBus(c+230,"awFIFOMap_6_count", false,-1, 2,0);
    tracep->declBit(c+1854,"awFIFOMap_6_last", false,-1);
    tracep->declBus(c+231,"arFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1855,"arFIFOMap_7_last", false,-1);
    tracep->declBus(c+232,"awFIFOMap_7_count", false,-1, 2,0);
    tracep->declBit(c+1856,"awFIFOMap_7_last", false,-1);
    tracep->declBus(c+233,"arFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1857,"arFIFOMap_8_last", false,-1);
    tracep->declBus(c+234,"awFIFOMap_8_count", false,-1, 2,0);
    tracep->declBit(c+1858,"awFIFOMap_8_last", false,-1);
    tracep->declBus(c+235,"arFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1859,"arFIFOMap_9_last", false,-1);
    tracep->declBus(c+236,"awFIFOMap_9_count", false,-1, 2,0);
    tracep->declBit(c+1860,"awFIFOMap_9_last", false,-1);
    tracep->declBus(c+237,"arFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1861,"arFIFOMap_10_last", false,-1);
    tracep->declBus(c+238,"awFIFOMap_10_count", false,-1, 2,0);
    tracep->declBit(c+1862,"awFIFOMap_10_last", false,-1);
    tracep->declBus(c+239,"arFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1863,"arFIFOMap_11_last", false,-1);
    tracep->declBus(c+240,"awFIFOMap_11_count", false,-1, 2,0);
    tracep->declBit(c+1864,"awFIFOMap_11_last", false,-1);
    tracep->declBus(c+241,"arFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1865,"arFIFOMap_12_last", false,-1);
    tracep->declBus(c+242,"awFIFOMap_12_count", false,-1, 2,0);
    tracep->declBit(c+1866,"awFIFOMap_12_last", false,-1);
    tracep->declBus(c+243,"arFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1867,"arFIFOMap_13_last", false,-1);
    tracep->declBus(c+244,"awFIFOMap_13_count", false,-1, 2,0);
    tracep->declBit(c+1868,"awFIFOMap_13_last", false,-1);
    tracep->declBus(c+245,"arFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1869,"arFIFOMap_14_last", false,-1);
    tracep->declBus(c+246,"awFIFOMap_14_count", false,-1, 2,0);
    tracep->declBit(c+1870,"awFIFOMap_14_last", false,-1);
    tracep->declBus(c+247,"arFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1871,"arFIFOMap_15_last", false,-1);
    tracep->declBus(c+248,"awFIFOMap_15_count", false,-1, 2,0);
    tracep->declBit(c+1872,"awFIFOMap_15_last", false,-1);
    tracep->declBit(c+1652,"in_0_arvalid", false,-1);
    tracep->declBit(c+249,"latched", false,-1);
    tracep->declBit(c+1653,"in_0_awvalid", false,-1);
    tracep->declBit(c+1654,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1655,"in_0_wvalid", false,-1);
    tracep->declBit(c+250,"idle_2", false,-1);
    tracep->declBit(c+1490,"anyValid", false,-1);
    tracep->declBus(c+1491,"readys_valid", false,-1, 1,0);
    tracep->declBus(c+251,"readys_mask", false,-1, 1,0);
    tracep->declBus(c+1492,"readys_unready", false,-1, 3,0);
    tracep->declBus(c+1493,"readys_readys", false,-1, 1,0);
    tracep->declBit(c+1494,"prefixOR_1", false,-1);
    tracep->declBit(c+1495,"winner_2_1", false,-1);
    tracep->declBit(c+252,"state_2_0", false,-1);
    tracep->declBit(c+253,"state_2_1", false,-1);
    tracep->declBit(c+1496,"muxState_2_0", false,-1);
    tracep->declBit(c+1497,"muxState_2_1", false,-1);
    tracep->declBit(c+254,"idle_3", false,-1);
    tracep->declBit(c+1498,"anyValid_1", false,-1);
    tracep->declBus(c+1499,"readys_valid_1", false,-1, 1,0);
    tracep->declBus(c+255,"readys_mask_1", false,-1, 1,0);
    tracep->declBus(c+1500,"readys_unready_1", false,-1, 3,0);
    tracep->declBus(c+1501,"readys_readys_1", false,-1, 1,0);
    tracep->declBit(c+1502,"winner_3_0", false,-1);
    tracep->declBit(c+1503,"winner_3_1", false,-1);
    tracep->declBit(c+256,"state_3_0", false,-1);
    tracep->declBit(c+257,"state_3_1", false,-1);
    tracep->declBit(c+1504,"muxState_3_0", false,-1);
    tracep->declBit(c+1505,"muxState_3_1", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+1654,"io_enq_valid", false,-1);
    tracep->declBus(c+1536,"io_enq_bits", false,-1, 1,0);
    tracep->declBit(c+1708,"io_deq_ready", false,-1);
    tracep->declBit(c+1656,"io_deq_valid", false,-1);
    tracep->declBus(c+1657,"io_deq_bits", false,-1, 1,0);
    tracep->declBit(c+259,"wrap", false,-1);
    tracep->declBit(c+260,"wrap_1", false,-1);
    tracep->declBit(c+261,"maybe_full", false,-1);
    tracep->declBit(c+262,"ptr_match", false,-1);
    tracep->declBit(c+263,"empty", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+1656,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1709,"do_deq", false,-1);
    tracep->declBit(c+1710,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+260,"R0_addr", false,-1);
    tracep->declBit(c+1832,"R0_en", false,-1);
    tracep->declBit(c+1750,"R0_clk", false,-1);
    tracep->declBus(c+265,"R0_data", false,-1, 1,0);
    tracep->declBit(c+259,"W0_addr", false,-1);
    tracep->declBit(c+1710,"W0_en", false,-1);
    tracep->declBit(c+1750,"W0_clk", false,-1);
    tracep->declBus(c+1536,"W0_data", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+266+i*1,"Memory", true,(i+0), 1,0);
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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1711,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1658,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+41,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1611,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1612,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1688,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1631,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1614,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1615,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1689,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+159,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1712,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1659,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1619,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1686,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+153,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+154,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+163,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1698,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1644,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+41,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1645,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1791,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1646,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1614,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1615,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1699,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+200,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+201,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+202,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1700,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1647,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1648,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1701,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+203,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+204,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+205,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+206,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1660,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1661,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+268,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1662,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+565,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+269,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+270,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+40,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1609,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+41,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1611,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1612,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1613,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1614,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1615,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+563,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+44,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+45,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+46,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1617,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+47,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1619,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+564,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+48,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+49,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+51,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+159,"in_0_bvalid", false,-1);
    tracep->declBit(c+153,"in_0_rvalid", false,-1);
    tracep->declBit(c+1713,"in_0_wready", false,-1);
    tracep->declBit(c+1714,"in_0_awready", false,-1);
    tracep->declBit(c+1712,"in_0_arready", false,-1);
    tracep->declBit(c+1711,"anonIn_awready", false,-1);
    tracep->declBit(c+1664,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1665,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1666,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1667,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1668,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1669,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+272,"arSel", false,-1, 15,0);
    tracep->declBus(c+273,"awSel", false,-1, 15,0);
    tracep->declBus(c+274,"rSel", false,-1, 15,0);
    tracep->declBus(c+275,"bSel", false,-1, 15,0);
    tracep->declBit(c+276,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+277,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+278,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+279,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+280,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+281,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+282,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+283,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+284,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+285,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+286,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+287,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+288,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+289,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+290,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+291,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+292,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+293,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+294,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+295,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+296,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+297,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+298,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+299,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+300,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+301,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+302,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+303,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+304,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+305,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+306,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+307,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+308,"latched", false,-1);
    tracep->declBit(c+1670,"in_0_awvalid", false,-1);
    tracep->declBit(c+1671,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1672,"in_0_wvalid", false,-1);
    tracep->declBit(c+309,"idle_3", false,-1);
    tracep->declBit(c+310,"anyValid", false,-1);
    tracep->declBus(c+311,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+312,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+313,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+314,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+315,"prefixOR_1", false,-1);
    tracep->declBit(c+316,"winner_3_1", false,-1);
    tracep->declBit(c+317,"winner_3_2", false,-1);
    tracep->declBit(c+318,"state_3_0", false,-1);
    tracep->declBit(c+319,"state_3_1", false,-1);
    tracep->declBit(c+320,"state_3_2", false,-1);
    tracep->declBit(c+321,"muxState_3_0", false,-1);
    tracep->declBit(c+322,"muxState_3_1", false,-1);
    tracep->declBit(c+323,"muxState_3_2", false,-1);
    tracep->declBit(c+324,"idle_4", false,-1);
    tracep->declBit(c+325,"anyValid_1", false,-1);
    tracep->declBus(c+326,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+327,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+328,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+329,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+330,"winner_4_0", false,-1);
    tracep->declBit(c+331,"winner_4_2", false,-1);
    tracep->declBit(c+332,"state_4_0", false,-1);
    tracep->declBit(c+333,"state_4_2", false,-1);
    tracep->declBit(c+334,"muxState_4_0", false,-1);
    tracep->declBit(c+335,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+336,"io_enq_ready", false,-1);
    tracep->declBit(c+1671,"io_enq_valid", false,-1);
    tracep->declBus(c+1673,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1715,"io_deq_ready", false,-1);
    tracep->declBit(c+1674,"io_deq_valid", false,-1);
    tracep->declBus(c+1675,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+337,"wrap", false,-1);
    tracep->declBit(c+338,"wrap_1", false,-1);
    tracep->declBit(c+339,"maybe_full", false,-1);
    tracep->declBit(c+340,"ptr_match", false,-1);
    tracep->declBit(c+341,"empty", false,-1);
    tracep->declBit(c+342,"full", false,-1);
    tracep->declBit(c+1674,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1716,"do_deq", false,-1);
    tracep->declBit(c+1717,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+338,"R0_addr", false,-1);
    tracep->declBit(c+1832,"R0_en", false,-1);
    tracep->declBit(c+1750,"R0_clk", false,-1);
    tracep->declBus(c+343,"R0_data", false,-1, 2,0);
    tracep->declBit(c+337,"W0_addr", false,-1);
    tracep->declBit(c+1717,"W0_en", false,-1);
    tracep->declBit(c+1750,"W0_clk", false,-1);
    tracep->declBus(c+1673,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+344+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1687,"auto_in_awready", false,-1);
    tracep->declBit(c+1630,"auto_in_awvalid", false,-1);
    tracep->declBus(c+41,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1611,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1612,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+158,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1688,"auto_in_wready", false,-1);
    tracep->declBit(c+1631,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1614,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1615,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"auto_in_wlast", false,-1);
    tracep->declBit(c+1689,"auto_in_bready", false,-1);
    tracep->declBit(c+159,"auto_in_bvalid", false,-1);
    tracep->declBus(c+150,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+161,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1690,"auto_in_arready", false,-1);
    tracep->declBit(c+1632,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1619,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1633,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1686,"auto_in_rready", false,-1);
    tracep->declBit(c+153,"auto_in_rvalid", false,-1);
    tracep->declBus(c+154,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+162,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+163,"auto_in_rlast", false,-1);
    tracep->declBit(c+1711,"auto_out_awready", false,-1);
    tracep->declBit(c+1658,"auto_out_awvalid", false,-1);
    tracep->declBus(c+41,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1610,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1611,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1612,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1688,"auto_out_wready", false,-1);
    tracep->declBit(c+1631,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1614,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1615,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1616,"auto_out_wlast", false,-1);
    tracep->declBit(c+1689,"auto_out_bready", false,-1);
    tracep->declBit(c+159,"auto_out_bvalid", false,-1);
    tracep->declBus(c+150,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+160,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1712,"auto_out_arready", false,-1);
    tracep->declBit(c+1659,"auto_out_arvalid", false,-1);
    tracep->declBus(c+47,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1618,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1619,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1620,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1686,"auto_out_rready", false,-1);
    tracep->declBit(c+153,"auto_out_rvalid", false,-1);
    tracep->declBus(c+154,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+156,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+163,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+346,"io_enq_ready", false,-1);
    tracep->declBit(c+566,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+567,"io_deq_ready", false,-1);
    tracep->declBit(c+347,"io_deq_valid", false,-1);
    tracep->declBit(c+348,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+347,"full", false,-1);
    tracep->declBit(c+348,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+349,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+350,"io_enq_ready", false,-1);
    tracep->declBit(c+568,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+569,"io_deq_ready", false,-1);
    tracep->declBit(c+351,"io_deq_valid", false,-1);
    tracep->declBit(c+352,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+351,"full", false,-1);
    tracep->declBit(c+352,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+353,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+354,"io_enq_ready", false,-1);
    tracep->declBit(c+570,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+571,"io_deq_ready", false,-1);
    tracep->declBit(c+355,"io_deq_valid", false,-1);
    tracep->declBit(c+356,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+355,"full", false,-1);
    tracep->declBit(c+356,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+357,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+358,"io_enq_ready", false,-1);
    tracep->declBit(c+572,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+573,"io_deq_ready", false,-1);
    tracep->declBit(c+359,"io_deq_valid", false,-1);
    tracep->declBit(c+360,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+359,"full", false,-1);
    tracep->declBit(c+360,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+361,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+362,"io_enq_ready", false,-1);
    tracep->declBit(c+574,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+575,"io_deq_ready", false,-1);
    tracep->declBit(c+363,"io_deq_valid", false,-1);
    tracep->declBit(c+364,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+363,"full", false,-1);
    tracep->declBit(c+364,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+365,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+366,"io_enq_ready", false,-1);
    tracep->declBit(c+576,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+577,"io_deq_ready", false,-1);
    tracep->declBit(c+367,"io_deq_valid", false,-1);
    tracep->declBit(c+368,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+367,"full", false,-1);
    tracep->declBit(c+368,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+369,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+370,"io_enq_ready", false,-1);
    tracep->declBit(c+578,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+579,"io_deq_ready", false,-1);
    tracep->declBit(c+371,"io_deq_valid", false,-1);
    tracep->declBit(c+372,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+371,"full", false,-1);
    tracep->declBit(c+372,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+373,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+374,"io_enq_ready", false,-1);
    tracep->declBit(c+580,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+581,"io_deq_ready", false,-1);
    tracep->declBit(c+375,"io_deq_valid", false,-1);
    tracep->declBit(c+376,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+375,"full", false,-1);
    tracep->declBit(c+376,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+377,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+378,"io_enq_ready", false,-1);
    tracep->declBit(c+582,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+583,"io_deq_ready", false,-1);
    tracep->declBit(c+379,"io_deq_valid", false,-1);
    tracep->declBit(c+380,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+379,"full", false,-1);
    tracep->declBit(c+380,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+381,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+382,"io_enq_ready", false,-1);
    tracep->declBit(c+584,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+585,"io_deq_ready", false,-1);
    tracep->declBit(c+383,"io_deq_valid", false,-1);
    tracep->declBit(c+384,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+383,"full", false,-1);
    tracep->declBit(c+384,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+385,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+386,"io_enq_ready", false,-1);
    tracep->declBit(c+586,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+587,"io_deq_ready", false,-1);
    tracep->declBit(c+387,"io_deq_valid", false,-1);
    tracep->declBit(c+388,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+387,"full", false,-1);
    tracep->declBit(c+388,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+389,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+390,"io_enq_ready", false,-1);
    tracep->declBit(c+588,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+589,"io_deq_ready", false,-1);
    tracep->declBit(c+391,"io_deq_valid", false,-1);
    tracep->declBit(c+392,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+391,"full", false,-1);
    tracep->declBit(c+392,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+393,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+394,"io_enq_ready", false,-1);
    tracep->declBit(c+590,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+591,"io_deq_ready", false,-1);
    tracep->declBit(c+395,"io_deq_valid", false,-1);
    tracep->declBit(c+396,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+395,"full", false,-1);
    tracep->declBit(c+396,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+397,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+398,"io_enq_ready", false,-1);
    tracep->declBit(c+592,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+593,"io_deq_ready", false,-1);
    tracep->declBit(c+399,"io_deq_valid", false,-1);
    tracep->declBit(c+400,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+399,"full", false,-1);
    tracep->declBit(c+400,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+401,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+402,"io_enq_ready", false,-1);
    tracep->declBit(c+594,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+595,"io_deq_ready", false,-1);
    tracep->declBit(c+403,"io_deq_valid", false,-1);
    tracep->declBit(c+404,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+403,"full", false,-1);
    tracep->declBit(c+404,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+405,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+406,"io_enq_ready", false,-1);
    tracep->declBit(c+596,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+597,"io_deq_ready", false,-1);
    tracep->declBit(c+407,"io_deq_valid", false,-1);
    tracep->declBit(c+408,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+407,"full", false,-1);
    tracep->declBit(c+408,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+409,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+410,"io_enq_ready", false,-1);
    tracep->declBit(c+598,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+599,"io_deq_ready", false,-1);
    tracep->declBit(c+411,"io_deq_valid", false,-1);
    tracep->declBit(c+412,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+411,"full", false,-1);
    tracep->declBit(c+412,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+413,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+414,"io_enq_ready", false,-1);
    tracep->declBit(c+600,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+601,"io_deq_ready", false,-1);
    tracep->declBit(c+415,"io_deq_valid", false,-1);
    tracep->declBit(c+416,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+415,"full", false,-1);
    tracep->declBit(c+416,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+417,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+418,"io_enq_ready", false,-1);
    tracep->declBit(c+602,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+603,"io_deq_ready", false,-1);
    tracep->declBit(c+419,"io_deq_valid", false,-1);
    tracep->declBit(c+420,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+419,"full", false,-1);
    tracep->declBit(c+420,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+421,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+422,"io_enq_ready", false,-1);
    tracep->declBit(c+604,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+605,"io_deq_ready", false,-1);
    tracep->declBit(c+423,"io_deq_valid", false,-1);
    tracep->declBit(c+424,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+423,"full", false,-1);
    tracep->declBit(c+424,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+425,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+426,"io_enq_ready", false,-1);
    tracep->declBit(c+606,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+607,"io_deq_ready", false,-1);
    tracep->declBit(c+427,"io_deq_valid", false,-1);
    tracep->declBit(c+428,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+427,"full", false,-1);
    tracep->declBit(c+428,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+429,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+430,"io_enq_ready", false,-1);
    tracep->declBit(c+608,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+609,"io_deq_ready", false,-1);
    tracep->declBit(c+431,"io_deq_valid", false,-1);
    tracep->declBit(c+432,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+431,"full", false,-1);
    tracep->declBit(c+432,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+433,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+434,"io_enq_ready", false,-1);
    tracep->declBit(c+610,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+611,"io_deq_ready", false,-1);
    tracep->declBit(c+435,"io_deq_valid", false,-1);
    tracep->declBit(c+436,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+435,"full", false,-1);
    tracep->declBit(c+436,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+437,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+438,"io_enq_ready", false,-1);
    tracep->declBit(c+612,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+613,"io_deq_ready", false,-1);
    tracep->declBit(c+439,"io_deq_valid", false,-1);
    tracep->declBit(c+440,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+439,"full", false,-1);
    tracep->declBit(c+440,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+441,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+442,"io_enq_ready", false,-1);
    tracep->declBit(c+614,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+615,"io_deq_ready", false,-1);
    tracep->declBit(c+443,"io_deq_valid", false,-1);
    tracep->declBit(c+444,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+443,"full", false,-1);
    tracep->declBit(c+444,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+445,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+446,"io_enq_ready", false,-1);
    tracep->declBit(c+616,"io_enq_valid", false,-1);
    tracep->declBit(c+158,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+617,"io_deq_ready", false,-1);
    tracep->declBit(c+447,"io_deq_valid", false,-1);
    tracep->declBit(c+448,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+447,"full", false,-1);
    tracep->declBit(c+448,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+449,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+450,"io_enq_ready", false,-1);
    tracep->declBit(c+618,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+619,"io_deq_ready", false,-1);
    tracep->declBit(c+451,"io_deq_valid", false,-1);
    tracep->declBit(c+452,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+451,"full", false,-1);
    tracep->declBit(c+452,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+453,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+454,"io_enq_ready", false,-1);
    tracep->declBit(c+620,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+621,"io_deq_ready", false,-1);
    tracep->declBit(c+455,"io_deq_valid", false,-1);
    tracep->declBit(c+456,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+455,"full", false,-1);
    tracep->declBit(c+456,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+457,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+458,"io_enq_ready", false,-1);
    tracep->declBit(c+622,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+623,"io_deq_ready", false,-1);
    tracep->declBit(c+459,"io_deq_valid", false,-1);
    tracep->declBit(c+460,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+459,"full", false,-1);
    tracep->declBit(c+460,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+461,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+462,"io_enq_ready", false,-1);
    tracep->declBit(c+624,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+625,"io_deq_ready", false,-1);
    tracep->declBit(c+463,"io_deq_valid", false,-1);
    tracep->declBit(c+464,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+463,"full", false,-1);
    tracep->declBit(c+464,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+465,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+466,"io_enq_ready", false,-1);
    tracep->declBit(c+626,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+627,"io_deq_ready", false,-1);
    tracep->declBit(c+467,"io_deq_valid", false,-1);
    tracep->declBit(c+468,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+467,"full", false,-1);
    tracep->declBit(c+468,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+469,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+470,"io_enq_ready", false,-1);
    tracep->declBit(c+628,"io_enq_valid", false,-1);
    tracep->declBit(c+1633,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+629,"io_deq_ready", false,-1);
    tracep->declBit(c+471,"io_deq_valid", false,-1);
    tracep->declBit(c+472,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+471,"full", false,-1);
    tracep->declBit(c+472,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+473,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBit(c+1704,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1527,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1836,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1521,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1831,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1792,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1528,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1524,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1529,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1483,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1484,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+1793,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1705,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1530,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1836,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1517,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1518,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1531,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1485,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1486,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1794,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1795,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1487,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBit(c+1834,"io_interrupt", false,-1);
    tracep->declBit(c+1704,"io_master_awready", false,-1);
    tracep->declBit(c+1527,"io_master_awvalid", false,-1);
    tracep->declBus(c+1521,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+1792,"io_master_wready", false,-1);
    tracep->declBit(c+1528,"io_master_wvalid", false,-1);
    tracep->declBus(c+1524,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"io_master_wlast", false,-1);
    tracep->declBit(c+1529,"io_master_bready", false,-1);
    tracep->declBit(c+1483,"io_master_bvalid", false,-1);
    tracep->declBus(c+1793,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1484,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+1705,"io_master_arready", false,-1);
    tracep->declBit(c+1530,"io_master_arvalid", false,-1);
    tracep->declBus(c+1517,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1518,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1531,"io_master_rready", false,-1);
    tracep->declBit(c+1485,"io_master_rvalid", false,-1);
    tracep->declBus(c+1795,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1794,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1487,"io_master_rlast", false,-1);
    tracep->declBus(c+1486,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1834,"io_slave_awready", false,-1);
    tracep->declBit(c+1834,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1873,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1874,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1837,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1834,"io_slave_wready", false,-1);
    tracep->declBit(c+1834,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1873,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1836,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1834,"io_slave_wlast", false,-1);
    tracep->declBit(c+1834,"io_slave_bready", false,-1);
    tracep->declBit(c+1834,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1837,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1836,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1834,"io_slave_arready", false,-1);
    tracep->declBit(c+1834,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1873,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1831,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1874,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1837,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1834,"io_slave_rready", false,-1);
    tracep->declBit(c+1834,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1837,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1873,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1834,"io_slave_rlast", false,-1);
    tracep->declBus(c+1836,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1876,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1877,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1840,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1878,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+1879,"NOP_INST", false,-1, 31,0);
    tracep->declBus(c+1837,"WB_ALU", false,-1, 1,0);
    tracep->declBus(c+1880,"WB_MEM", false,-1, 1,0);
    tracep->declBus(c+1881,"WB_PC4", false,-1, 1,0);
    tracep->declBus(c+1882,"WB_CSR", false,-1, 1,0);
    tracep->declBus(c+1883,"EXC_ILLEGAL_INST", false,-1, 4,0);
    tracep->declBus(c+1884,"EXC_ECALL_M", false,-1, 4,0);
    tracep->declBus(c+1885,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+642,"fetch_pc", false,-1, 31,0);
    tracep->declBus(c+643,"redirect_pc", false,-1, 31,0);
    tracep->declBit(c+644,"ctrl_flush", false,-1);
    tracep->declBit(c+645,"fencei_flush", false,-1);
    tracep->declBit(c+646,"trap_flush", false,-1);
    tracep->declBit(c+647,"mret_flush", false,-1);
    tracep->declBit(c+648,"global_flush", false,-1);
    tracep->declBit(c+649,"ifu_cpu_arvalid", false,-1);
    tracep->declBit(c+650,"ifu_cpu_arready", false,-1);
    tracep->declBus(c+651,"ifu_cpu_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"ifu_cpu_arid", false,-1, 3,0);
    tracep->declBus(c+1831,"ifu_cpu_arlen", false,-1, 7,0);
    tracep->declBus(c+1886,"ifu_cpu_arsize", false,-1, 2,0);
    tracep->declBus(c+1880,"ifu_cpu_arburst", false,-1, 1,0);
    tracep->declBit(c+1832,"ifu_cpu_rready", false,-1);
    tracep->declBit(c+652,"ifu_cpu_rvalid", false,-1);
    tracep->declBus(c+653,"ifu_cpu_rdata", false,-1, 31,0);
    tracep->declBit(c+1832,"ifu_cpu_rlast", false,-1);
    tracep->declBit(c+654,"ifu_id_ready", false,-1);
    tracep->declBit(c+655,"ifu_id_valid", false,-1);
    tracep->declBus(c+656,"ifu_id_pc", false,-1, 31,0);
    tracep->declBus(c+657,"ifu_inst", false,-1, 31,0);
    tracep->declBit(c+658,"ifu_take", false,-1);
    tracep->declBit(c+659,"ifu_fetch_allow", false,-1);
    tracep->declBit(c+660,"ic_mem_arvalid", false,-1);
    tracep->declBit(c+1553,"ic_mem_arready", false,-1);
    tracep->declBus(c+661,"ic_mem_araddr", false,-1, 31,0);
    tracep->declBus(c+1887,"ic_mem_arlen", false,-1, 7,0);
    tracep->declBus(c+1886,"ic_mem_arsize", false,-1, 2,0);
    tracep->declBus(c+1880,"ic_mem_arburst", false,-1, 1,0);
    tracep->declBit(c+662,"ic_mem_rready", false,-1);
    tracep->declBit(c+1554,"ic_mem_rvalid", false,-1);
    tracep->declBus(c+1718,"ic_mem_rdata", false,-1, 31,0);
    tracep->declBit(c+1719,"ic_mem_rlast", false,-1);
    tracep->declBit(c+663,"id_valid", false,-1);
    tracep->declBus(c+664,"id_pc", false,-1, 31,0);
    tracep->declBus(c+665,"id_inst", false,-1, 31,0);
    tracep->declBus(c+666,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+667,"id_rs2", false,-1, 4,0);
    tracep->declBus(c+668,"id_rd", false,-1, 4,0);
    tracep->declBus(c+669,"id_imm", false,-1, 31,0);
    tracep->declBus(c+670,"id_opcode", false,-1, 6,0);
    tracep->declBus(c+671,"id_funct3", false,-1, 2,0);
    tracep->declBus(c+672,"id_funct7", false,-1, 6,0);
    tracep->declBit(c+673,"id_use_rs1", false,-1);
    tracep->declBit(c+674,"id_use_rs2", false,-1);
    tracep->declBit(c+675,"id_reg_wen", false,-1);
    tracep->declBit(c+676,"id_mem_read", false,-1);
    tracep->declBit(c+677,"id_mem_write", false,-1);
    tracep->declBit(c+678,"id_branch", false,-1);
    tracep->declBit(c+679,"id_jump", false,-1);
    tracep->declBit(c+680,"id_is_csr", false,-1);
    tracep->declBit(c+681,"id_ecall", false,-1);
    tracep->declBit(c+682,"id_ebreak", false,-1);
    tracep->declBit(c+683,"id_mret", false,-1);
    tracep->declBit(c+684,"id_fencei", false,-1);
    tracep->declBit(c+685,"id_csr_imm_sel", false,-1);
    tracep->declBus(c+686,"id_csr_zimm", false,-1, 31,0);
    tracep->declBus(c+687,"id_wb_sel", false,-1, 1,0);
    tracep->declBit(c+688,"id_illegal_inst", false,-1);
    tracep->declBus(c+1676,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+1798,"rf_rdata2", false,-1, 31,0);
    tracep->declBit(c+689,"rf_wen", false,-1);
    tracep->declBus(c+690,"rf_waddr", false,-1, 4,0);
    tracep->declBus(c+691,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+1799,"id_csr_src1", false,-1, 31,0);
    tracep->declBit(c+692,"ex_valid", false,-1);
    tracep->declBus(c+693,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+694,"ex_inst", false,-1, 31,0);
    tracep->declBus(c+695,"ex_rs1_data", false,-1, 31,0);
    tracep->declBus(c+696,"ex_rs2_data", false,-1, 31,0);
    tracep->declBus(c+697,"ex_csr_src1", false,-1, 31,0);
    tracep->declBus(c+698,"ex_imm", false,-1, 31,0);
    tracep->declBus(c+699,"ex_rs1", false,-1, 4,0);
    tracep->declBus(c+700,"ex_rs2", false,-1, 4,0);
    tracep->declBus(c+701,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+702,"ex_opcode", false,-1, 6,0);
    tracep->declBus(c+703,"ex_funct3", false,-1, 2,0);
    tracep->declBus(c+704,"ex_funct7", false,-1, 6,0);
    tracep->declBit(c+705,"ex_reg_wen", false,-1);
    tracep->declBit(c+706,"ex_mem_read", false,-1);
    tracep->declBit(c+707,"ex_mem_write", false,-1);
    tracep->declBus(c+708,"ex_wb_sel", false,-1, 1,0);
    tracep->declBit(c+709,"ex_is_csr", false,-1);
    tracep->declBit(c+710,"ex_ecall", false,-1);
    tracep->declBit(c+711,"ex_ebreak", false,-1);
    tracep->declBit(c+712,"ex_mret", false,-1);
    tracep->declBit(c+713,"ex_fencei", false,-1);
    tracep->declBit(c+714,"ex_exc_valid", false,-1);
    tracep->declBus(c+715,"ex_exc_code", false,-1, 4,0);
    tracep->declBus(c+716,"ex_exc_tval", false,-1, 31,0);
    tracep->declBus(c+643,"alu_dnpc", false,-1, 31,0);
    tracep->declBus(c+717,"alu_w_data", false,-1, 31,0);
    tracep->declBit(c+718,"alu_redirect_valid", false,-1);
    tracep->declBit(c+719,"alu_finish_sim", false,-1);
    tracep->declBit(c+720,"alu_fencei_flush", false,-1);
    tracep->declBit(c+721,"mem_valid", false,-1);
    tracep->declBus(c+722,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+723,"mem_inst", false,-1, 31,0);
    tracep->declBus(c+724,"mem_alu_result", false,-1, 31,0);
    tracep->declBus(c+725,"mem_store_data", false,-1, 31,0);
    tracep->declBus(c+726,"mem_csr_src1", false,-1, 31,0);
    tracep->declBus(c+727,"mem_imm", false,-1, 31,0);
    tracep->declBus(c+728,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+729,"mem_opcode", false,-1, 6,0);
    tracep->declBus(c+730,"mem_funct3", false,-1, 2,0);
    tracep->declBit(c+731,"mem_reg_wen", false,-1);
    tracep->declBit(c+732,"mem_mem_read", false,-1);
    tracep->declBit(c+733,"mem_mem_write", false,-1);
    tracep->declBus(c+734,"mem_wb_sel", false,-1, 1,0);
    tracep->declBit(c+735,"mem_is_csr", false,-1);
    tracep->declBit(c+736,"mem_ebreak", false,-1);
    tracep->declBit(c+737,"mem_exc_valid", false,-1);
    tracep->declBus(c+738,"mem_exc_code", false,-1, 4,0);
    tracep->declBus(c+739,"mem_exc_tval", false,-1, 31,0);
    tracep->declBit(c+740,"mem_finish_sim", false,-1);
    tracep->declBit(c+741,"lsu_mem_done", false,-1);
    tracep->declBus(c+742,"lsu_load_data", false,-1, 31,0);
    tracep->declBit(c+743,"lsu_busy", false,-1);
    tracep->declBus(c+744,"lsu_wmask", false,-1, 7,0);
    tracep->declBit(c+745,"lsu_exc_valid", false,-1);
    tracep->declBus(c+746,"lsu_exc_code", false,-1, 4,0);
    tracep->declBus(c+747,"lsu_exc_tval", false,-1, 31,0);
    tracep->declBit(c+748,"lsu_arvalid", false,-1);
    tracep->declBit(c+1555,"lsu_arready", false,-1);
    tracep->declBus(c+749,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1831,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1886,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1880,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+750,"lsu_rready", false,-1);
    tracep->declBit(c+1556,"lsu_rvalid", false,-1);
    tracep->declBus(c+1718,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1720,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1719,"lsu_rlast", false,-1);
    tracep->declBus(c+1800,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+751,"lsu_awvalid", false,-1);
    tracep->declBit(c+1557,"lsu_awready", false,-1);
    tracep->declBus(c+749,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1886,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1880,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+752,"lsu_wvalid", false,-1);
    tracep->declBit(c+1558,"lsu_wready", false,-1);
    tracep->declBus(c+753,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+754,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1832,"lsu_wlast", false,-1);
    tracep->declBit(c+755,"lsu_bready", false,-1);
    tracep->declBit(c+1559,"lsu_bvalid", false,-1);
    tracep->declBus(c+1721,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1801,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+756,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+757,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+758,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+759,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+760,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+761,"csr_mtval", false,-1, 31,0);
    tracep->declBit(c+646,"trap_commit", false,-1);
    tracep->declBus(c+722,"trap_mepc", false,-1, 31,0);
    tracep->declBus(c+762,"trap_mcause", false,-1, 4,0);
    tracep->declBus(c+763,"trap_mtval", false,-1, 31,0);
    tracep->declBit(c+764,"wb_valid", false,-1);
    tracep->declBus(c+765,"wb_pc", false,-1, 31,0);
    tracep->declBus(c+766,"wb_inst", false,-1, 31,0);
    tracep->declBus(c+691,"wb_wdata", false,-1, 31,0);
    tracep->declBus(c+690,"wb_rd", false,-1, 4,0);
    tracep->declBit(c+767,"wb_reg_wen", false,-1);
    tracep->declBit(c+768,"wb_finish_sim", false,-1);
    tracep->declBit(c+1832,"wb_allowin", false,-1);
    tracep->declBit(c+769,"mem_ready_go", false,-1);
    tracep->declBit(c+770,"mem_allowin", false,-1);
    tracep->declBit(c+1832,"ex_ready_go", false,-1);
    tracep->declBit(c+771,"ex_allowin", false,-1);
    tracep->declBit(c+772,"id_ready_go", false,-1);
    tracep->declBit(c+654,"id_allowin", false,-1);
    tracep->declBit(c+773,"id_fire", false,-1);
    tracep->declBit(c+774,"ex_fire", false,-1);
    tracep->declBit(c+775,"mem_fire", false,-1);
    tracep->declBit(c+776,"raw_hazard_rs1", false,-1);
    tracep->declBit(c+777,"raw_hazard_rs2", false,-1);
    tracep->declBit(c+778,"raw_hazard", false,-1);
    tracep->declBit(c+779,"mem_effective_exc_valid", false,-1);
    tracep->declBus(c+762,"mem_effective_exc_code", false,-1, 4,0);
    tracep->declBus(c+763,"mem_effective_exc_tval", false,-1, 31,0);
    tracep->declBus(c+780,"mem_final_wdata", false,-1, 31,0);
    tracep->declBit(c+1537,"xb_arvalid", false,-1);
    tracep->declBit(c+1722,"xb_arready", false,-1);
    tracep->declBus(c+1517,"xb_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"xb_arid", false,-1, 3,0);
    tracep->declBus(c+1518,"xb_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"xb_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"xb_arburst", false,-1, 1,0);
    tracep->declBit(c+1538,"xb_rready", false,-1);
    tracep->declBit(c+1723,"xb_rvalid", false,-1);
    tracep->declBus(c+1718,"xb_rdata", false,-1, 31,0);
    tracep->declBus(c+1720,"xb_rresp", false,-1, 1,0);
    tracep->declBit(c+1719,"xb_rlast", false,-1);
    tracep->declBus(c+1800,"xb_rid", false,-1, 3,0);
    tracep->declBit(c+1539,"xb_awvalid", false,-1);
    tracep->declBit(c+1724,"xb_awready", false,-1);
    tracep->declBus(c+1521,"xb_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"xb_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"xb_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"xb_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"xb_awburst", false,-1, 1,0);
    tracep->declBit(c+1540,"xb_wvalid", false,-1);
    tracep->declBit(c+1725,"xb_wready", false,-1);
    tracep->declBus(c+1524,"xb_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"xb_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"xb_wlast", false,-1);
    tracep->declBit(c+1541,"xb_bready", false,-1);
    tracep->declBit(c+1726,"xb_bvalid", false,-1);
    tracep->declBus(c+1721,"xb_bresp", false,-1, 1,0);
    tracep->declBus(c+1801,"xb_bid", false,-1, 3,0);
    tracep->declBit(c+1530,"soc_arvalid", false,-1);
    tracep->declBit(c+1705,"soc_arready", false,-1);
    tracep->declBus(c+1517,"soc_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+1518,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+1531,"soc_rready", false,-1);
    tracep->declBit(c+1485,"soc_rvalid", false,-1);
    tracep->declBus(c+1794,"soc_rdata", false,-1, 31,0);
    tracep->declBus(c+1795,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+1487,"soc_rlast", false,-1);
    tracep->declBus(c+1486,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1527,"soc_awvalid", false,-1);
    tracep->declBit(c+1704,"soc_awready", false,-1);
    tracep->declBus(c+1521,"soc_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+1528,"soc_wvalid", false,-1);
    tracep->declBit(c+1792,"soc_wready", false,-1);
    tracep->declBus(c+1524,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"soc_wlast", false,-1);
    tracep->declBit(c+1529,"soc_bready", false,-1);
    tracep->declBit(c+1483,"soc_bvalid", false,-1);
    tracep->declBus(c+1793,"soc_bresp", false,-1, 1,0);
    tracep->declBus(c+1484,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+1542,"clint_arvalid", false,-1);
    tracep->declBit(c+781,"clint_arready", false,-1);
    tracep->declBus(c+1517,"clint_araddr_axi", false,-1, 31,0);
    tracep->declBus(c+1836,"clint_arid_axi", false,-1, 3,0);
    tracep->declBus(c+1518,"clint_arlen_axi", false,-1, 7,0);
    tracep->declBus(c+1519,"clint_arsize_axi", false,-1, 2,0);
    tracep->declBus(c+1520,"clint_arburst_axi", false,-1, 1,0);
    tracep->declBit(c+1802,"clint_rready_axi", false,-1);
    tracep->declBit(c+782,"clint_rvalid_axi", false,-1);
    tracep->declBus(c+783,"clint_rdata_axi", false,-1, 31,0);
    tracep->declBus(c+1837,"clint_rresp_axi", false,-1, 1,0);
    tracep->declBit(c+1832,"clint_rlast_axi", false,-1);
    tracep->declBus(c+784,"clint_rid_axi", false,-1, 3,0);
    tracep->declBit(c+1543,"clint_awvalid", false,-1);
    tracep->declBit(c+1834,"clint_awready", false,-1);
    tracep->declBus(c+1521,"clint_awaddr_axi", false,-1, 31,0);
    tracep->declBus(c+1836,"clint_awid_axi", false,-1, 3,0);
    tracep->declBus(c+1831,"clint_awlen_axi", false,-1, 7,0);
    tracep->declBus(c+1522,"clint_awsize_axi", false,-1, 2,0);
    tracep->declBus(c+1523,"clint_awburst_axi", false,-1, 1,0);
    tracep->declBit(c+1803,"clint_wvalid", false,-1);
    tracep->declBit(c+1834,"clint_wready", false,-1);
    tracep->declBus(c+1524,"clint_wdata_axi", false,-1, 31,0);
    tracep->declBus(c+1525,"clint_wstrb_axi", false,-1, 3,0);
    tracep->declBit(c+1526,"clint_wlast_axi", false,-1);
    tracep->declBit(c+1804,"clint_bready_axi", false,-1);
    tracep->declBit(c+1834,"clint_bvalid_axi", false,-1);
    tracep->declBus(c+1837,"clint_bresp_axi", false,-1, 1,0);
    tracep->declBus(c+1836,"clint_bid_axi", false,-1, 3,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1876,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1877,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1840,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBus(c+701,"w_addr", false,-1, 4,0);
    tracep->declBus(c+693,"pc", false,-1, 31,0);
    tracep->declBus(c+695,"src1", false,-1, 31,0);
    tracep->declBus(c+696,"src2", false,-1, 31,0);
    tracep->declBus(c+698,"imm", false,-1, 31,0);
    tracep->declBus(c+702,"opcode", false,-1, 6,0);
    tracep->declBus(c+703,"fun", false,-1, 2,0);
    tracep->declBit(c+713,"i_fencei", false,-1);
    tracep->declBit(c+714,"i_dec_has_exc", false,-1);
    tracep->declBus(c+643,"dnpc", false,-1, 31,0);
    tracep->declBus(c+717,"w_data", false,-1, 31,0);
    tracep->declBit(c+718,"o_redirect_valid", false,-1);
    tracep->declBit(c+719,"w_finish_sim", false,-1);
    tracep->declBit(c+720,"o_fencei_flush", false,-1);
    tracep->declBus(c+1888,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1889,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+1890,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+1885,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1891,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+1892,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+1893,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1894,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+1895,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+1896,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+1897,"FUNCT7_NORMAL", false,-1, 6,0);
    tracep->declBus(c+1898,"FUNCT7_SUBSRA", false,-1, 6,0);
    tracep->declBus(c+1899,"FUNCT7_MULDIV", false,-1, 6,0);
    tracep->declBus(c+785,"snpc", false,-1, 31,0);
    tracep->declQuad(c+786,"mul_low__Vstatic__p", false,-1, 63,0);
    tracep->declQuad(c+788,"mulh_ss__Vstatic__p", false,-1, 63,0);
    tracep->declQuad(c+790,"mulh_uu__Vstatic__p", false,-1, 63,0);
    tracep->declQuad(c+792,"mulh_su__Vstatic__a_ext", false,-1, 63,0);
    tracep->declQuad(c+794,"mulh_su__Vstatic__b_ext", false,-1, 63,0);
    tracep->declArray(c+796,"mulh_su__Vstatic__p", false,-1, 127,0);
    tracep->declBit(c+800,"branch_taken", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBit(c+660,"ifu_arvalid", false,-1);
    tracep->declBit(c+1553,"ifu_arready", false,-1);
    tracep->declBus(c+661,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1887,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1886,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1880,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1554,"ifu_rvalid", false,-1);
    tracep->declBit(c+662,"ifu_rready", false,-1);
    tracep->declBus(c+1718,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1720,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1719,"ifu_rlast", false,-1);
    tracep->declBus(c+1800,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+748,"lsu_arvalid", false,-1);
    tracep->declBit(c+1555,"lsu_arready", false,-1);
    tracep->declBus(c+749,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1831,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1886,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1880,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1556,"lsu_rvalid", false,-1);
    tracep->declBit(c+750,"lsu_rready", false,-1);
    tracep->declBus(c+1718,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1720,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1719,"lsu_rlast", false,-1);
    tracep->declBus(c+1800,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+751,"lsu_awvalid", false,-1);
    tracep->declBit(c+1557,"lsu_awready", false,-1);
    tracep->declBus(c+749,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1886,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1880,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+752,"lsu_wvalid", false,-1);
    tracep->declBit(c+1558,"lsu_wready", false,-1);
    tracep->declBus(c+753,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+754,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1832,"lsu_wlast", false,-1);
    tracep->declBit(c+755,"lsu_bready", false,-1);
    tracep->declBit(c+1559,"lsu_bvalid", false,-1);
    tracep->declBus(c+1721,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1801,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+1537,"m_arvalid", false,-1);
    tracep->declBit(c+1722,"m_arready", false,-1);
    tracep->declBus(c+1517,"m_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"m_arid", false,-1, 3,0);
    tracep->declBus(c+1518,"m_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"m_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"m_arburst", false,-1, 1,0);
    tracep->declBit(c+1723,"m_rvalid", false,-1);
    tracep->declBit(c+1538,"m_rready", false,-1);
    tracep->declBus(c+1718,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+1720,"m_rresp", false,-1, 1,0);
    tracep->declBit(c+1719,"m_rlast", false,-1);
    tracep->declBus(c+1800,"m_rid", false,-1, 3,0);
    tracep->declBit(c+1539,"m_awvalid", false,-1);
    tracep->declBit(c+1724,"m_awready", false,-1);
    tracep->declBus(c+1521,"m_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"m_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"m_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"m_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"m_awburst", false,-1, 1,0);
    tracep->declBit(c+1540,"m_wvalid", false,-1);
    tracep->declBit(c+1725,"m_wready", false,-1);
    tracep->declBus(c+1524,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"m_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"m_wlast", false,-1);
    tracep->declBit(c+1541,"m_bready", false,-1);
    tracep->declBit(c+1726,"m_bvalid", false,-1);
    tracep->declBus(c+1721,"m_bresp", false,-1, 1,0);
    tracep->declBus(c+1801,"m_bid", false,-1, 3,0);
    tracep->declBus(c+1874,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1833,"S_IFU_AR", false,-1, 2,0);
    tracep->declBus(c+1886,"S_IFU_R", false,-1, 2,0);
    tracep->declBus(c+1900,"S_LSU_AR", false,-1, 2,0);
    tracep->declBus(c+1901,"S_LSU_R", false,-1, 2,0);
    tracep->declBus(c+1902,"S_LSU_W", false,-1, 2,0);
    tracep->declBus(c+1903,"S_LSU_B", false,-1, 2,0);
    tracep->declBus(c+1544,"state", false,-1, 2,0);
    tracep->declBus(c+1805,"state_next", false,-1, 2,0);
    tracep->declBit(c+801,"aw_done_r", false,-1);
    tracep->declBit(c+802,"w_done_r", false,-1);
    tracep->declBit(c+1727,"m_ar_fire", false,-1);
    tracep->declBit(c+1728,"m_r_fire", false,-1);
    tracep->declBit(c+1729,"m_aw_fire", false,-1);
    tracep->declBit(c+1730,"m_w_fire", false,-1);
    tracep->declBit(c+1731,"m_b_fire", false,-1);
    tracep->declBit(c+1806,"aw_done_next", false,-1);
    tracep->declBit(c+1807,"w_done_next", false,-1);
    tracep->declBit(c+1545,"sel_ifu_ar", false,-1);
    tracep->declBit(c+1546,"sel_ifu_r", false,-1);
    tracep->declBit(c+1547,"sel_lsu_ar", false,-1);
    tracep->declBit(c+1548,"sel_lsu_r", false,-1);
    tracep->declBit(c+1526,"sel_lsu_w", false,-1);
    tracep->declBit(c+1549,"sel_lsu_b", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBit(c+1542,"s_arvalid", false,-1);
    tracep->declBit(c+781,"s_arready", false,-1);
    tracep->declBus(c+1517,"s_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"s_arid", false,-1, 3,0);
    tracep->declBus(c+1518,"s_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"s_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"s_arburst", false,-1, 1,0);
    tracep->declBit(c+782,"s_rvalid", false,-1);
    tracep->declBit(c+1802,"s_rready", false,-1);
    tracep->declBus(c+783,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1837,"s_rresp", false,-1, 1,0);
    tracep->declBit(c+1832,"s_rlast", false,-1);
    tracep->declBus(c+784,"s_rid", false,-1, 3,0);
    tracep->declBit(c+1543,"s_awvalid", false,-1);
    tracep->declBit(c+1834,"s_awready", false,-1);
    tracep->declBus(c+1521,"s_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"s_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"s_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"s_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"s_awburst", false,-1, 1,0);
    tracep->declBit(c+1803,"s_wvalid", false,-1);
    tracep->declBit(c+1834,"s_wready", false,-1);
    tracep->declBus(c+1524,"s_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"s_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"s_wlast", false,-1);
    tracep->declBit(c+1834,"s_bvalid", false,-1);
    tracep->declBit(c+1804,"s_bready", false,-1);
    tracep->declBus(c+1837,"s_bresp", false,-1, 1,0);
    tracep->declBus(c+1836,"s_bid", false,-1, 3,0);
    tracep->declBus(c+1837,"CLINT_IDLE", false,-1, 1,0);
    tracep->declBus(c+1880,"CLINT_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+1904,"RTC_MMIO_LOW", false,-1, 31,0);
    tracep->declBus(c+1905,"RTC_MMIO_HI", false,-1, 31,0);
    tracep->declBus(c+803,"clint_state", false,-1, 1,0);
    tracep->declBit(c+1550,"clint_ar_fire", false,-1);
    tracep->declBit(c+1808,"clint_r_fire", false,-1);
    tracep->declBus(c+804,"mtime_hi", false,-1, 31,0);
    tracep->declBus(c+805,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+783,"r_clint_rdata", false,-1, 31,0);
    tracep->declBus(c+784,"r_rid", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_csr ");
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBit(c+806,"i_csr_valid", false,-1);
    tracep->declBus(c+726,"i_src1", false,-1, 31,0);
    tracep->declBus(c+727,"i_imm", false,-1, 31,0);
    tracep->declBus(c+729,"i_opcode", false,-1, 6,0);
    tracep->declBus(c+730,"i_funct3", false,-1, 2,0);
    tracep->declBit(c+646,"i_trap_commit", false,-1);
    tracep->declBus(c+722,"i_trap_mepc", false,-1, 31,0);
    tracep->declBus(c+762,"i_trap_mcause", false,-1, 4,0);
    tracep->declBus(c+763,"i_trap_mtval", false,-1, 31,0);
    tracep->declBus(c+756,"o_csr_data", false,-1, 31,0);
    tracep->declBus(c+757,"o_mtvec", false,-1, 31,0);
    tracep->declBus(c+758,"o_mepc", false,-1, 31,0);
    tracep->declBus(c+759,"o_mstatus", false,-1, 31,0);
    tracep->declBus(c+760,"o_mcause", false,-1, 31,0);
    tracep->declBus(c+761,"o_mtval", false,-1, 31,0);
    tracep->declBus(c+1906,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1907,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+1908,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+1909,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1910,"CSR_MTVAL", false,-1, 11,0);
    tracep->declBus(c+1911,"CSR_MVENDORID", false,-1, 11,0);
    tracep->declBus(c+1912,"CSR_MARCHID", false,-1, 11,0);
    tracep->declBus(c+1885,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1913,"MVENDORID", false,-1, 31,0);
    tracep->declBus(c+1914,"MARCHID", false,-1, 31,0);
    tracep->declBus(c+807,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+759,"m_status", false,-1, 31,0);
    tracep->declBus(c+757,"m_tvec", false,-1, 31,0);
    tracep->declBus(c+758,"m_epc", false,-1, 31,0);
    tracep->declBus(c+760,"m_cause", false,-1, 31,0);
    tracep->declBus(c+761,"m_tval", false,-1, 31,0);
    tracep->declBit(c+808,"csr_inst", false,-1);
    tracep->declBit(c+809,"csr_wen", false,-1);
    tracep->declBus(c+810,"csr_wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_decoder ");
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1877,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1876,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1840,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+665,"inst", false,-1, 31,0);
    tracep->declBus(c+666,"rs1", false,-1, 4,0);
    tracep->declBus(c+667,"rs2", false,-1, 4,0);
    tracep->declBus(c+668,"rd", false,-1, 4,0);
    tracep->declBus(c+669,"imm", false,-1, 31,0);
    tracep->declBus(c+670,"opcode", false,-1, 6,0);
    tracep->declBus(c+671,"funct3", false,-1, 2,0);
    tracep->declBus(c+672,"funct7", false,-1, 6,0);
    tracep->declBit(c+673,"use_rs1", false,-1);
    tracep->declBit(c+674,"use_rs2", false,-1);
    tracep->declBit(c+675,"reg_wen", false,-1);
    tracep->declBit(c+676,"mem_read", false,-1);
    tracep->declBit(c+677,"mem_write", false,-1);
    tracep->declBit(c+678,"branch", false,-1);
    tracep->declBit(c+679,"jump", false,-1);
    tracep->declBit(c+680,"csr", false,-1);
    tracep->declBit(c+681,"ecall", false,-1);
    tracep->declBit(c+682,"ebreak", false,-1);
    tracep->declBit(c+683,"mret", false,-1);
    tracep->declBit(c+684,"fencei", false,-1);
    tracep->declBit(c+685,"csr_imm_sel", false,-1);
    tracep->declBus(c+686,"csr_zimm", false,-1, 31,0);
    tracep->declBus(c+687,"wb_sel", false,-1, 1,0);
    tracep->declBit(c+688,"illegal_inst", false,-1);
    tracep->declBus(c+1888,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1889,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+1890,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+1885,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1891,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+1892,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+1893,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1894,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+1895,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+1896,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+1915,"CSR_ECALL", false,-1, 11,0);
    tracep->declBus(c+1916,"CSR_EBREAK", false,-1, 11,0);
    tracep->declBus(c+1917,"CSR_MRET", false,-1, 11,0);
    tracep->declBus(c+1837,"WB_ALU", false,-1, 1,0);
    tracep->declBus(c+1880,"WB_MEM", false,-1, 1,0);
    tracep->declBus(c+1881,"WB_PC4", false,-1, 1,0);
    tracep->declBus(c+1882,"WB_CSR", false,-1, 1,0);
    tracep->declBus(c+811,"csr_addr", false,-1, 11,0);
    tracep->declBit(c+676,"is_load", false,-1);
    tracep->declBit(c+677,"is_store", false,-1);
    tracep->declBit(c+812,"is_opimm", false,-1);
    tracep->declBit(c+813,"is_op", false,-1);
    tracep->declBit(c+678,"is_branch", false,-1);
    tracep->declBit(c+814,"is_jal", false,-1);
    tracep->declBit(c+815,"is_jalr", false,-1);
    tracep->declBit(c+816,"is_lui", false,-1);
    tracep->declBit(c+817,"is_auipc", false,-1);
    tracep->declBit(c+818,"is_system", false,-1);
    tracep->declBit(c+680,"is_csr_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_icache ");
    tracep->declBus(c+1875,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1839,"LINE_BYTES", false,-1, 31,0);
    tracep->declBus(c+1918,"SET_NUM", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1809,"rst_n", false,-1);
    tracep->declBit(c+648,"flush_i", false,-1);
    tracep->declBit(c+649,"cpu_ar_valid", false,-1);
    tracep->declBus(c+651,"cpu_ar_addr", false,-1, 31,0);
    tracep->declBit(c+650,"cpu_ar_ready", false,-1);
    tracep->declBit(c+1832,"cpu_inst_rready", false,-1);
    tracep->declBit(c+652,"cpu_inst_rvalid", false,-1);
    tracep->declBus(c+653,"cpu_inst_rdata", false,-1, 31,0);
    tracep->declBit(c+660,"mem_ar_valid", false,-1);
    tracep->declBus(c+661,"mem_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1887,"mem_ar_len", false,-1, 7,0);
    tracep->declBus(c+1886,"mem_ar_size", false,-1, 2,0);
    tracep->declBus(c+1880,"mem_ar_burst", false,-1, 1,0);
    tracep->declBit(c+1553,"mem_ar_ready", false,-1);
    tracep->declBit(c+1554,"mem_rvalid", false,-1);
    tracep->declBit(c+662,"mem_rready", false,-1);
    tracep->declBus(c+1718,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+1719,"mem_rlast", false,-1);
    tracep->declBus(c+1919,"LINE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1876,"SET_IDX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1840,"INLINE_BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1920,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1837,"S_IDLE", false,-1, 1,0);
    tracep->declBus(c+1880,"S_RD_MEM", false,-1, 1,0);
    tracep->declBus(c+1881,"S_UPDATE_CACHE", false,-1, 1,0);
    tracep->declArray(c+819,"cache_valid0", false,-1, 127,0);
    tracep->declArray(c+823,"cache_valid1", false,-1, 127,0);
    tracep->declBus(c+827,"addr_q", false,-1, 31,0);
    tracep->declBus(c+828,"tag_q", false,-1, 21,0);
    tracep->declBus(c+829,"set_q", false,-1, 6,0);
    tracep->declBus(c+830,"offset_q", false,-1, 2,0);
    tracep->declBus(c+831,"cur_tag", false,-1, 21,0);
    tracep->declBus(c+832,"cur_set", false,-1, 6,0);
    tracep->declBus(c+833,"cur_offset", false,-1, 2,0);
    tracep->declBit(c+834,"hit0", false,-1);
    tracep->declBit(c+835,"hit1", false,-1);
    tracep->declBit(c+836,"hit", false,-1);
    tracep->declArray(c+837,"lru_bit", false,-1, 127,0);
    tracep->declBit(c+841,"replace_way_q", false,-1);
    tracep->declBit(c+652,"resp_valid", false,-1);
    tracep->declBus(c+653,"resp_data", false,-1, 31,0);
    tracep->declBit(c+652,"cpu_r_fire", false,-1);
    tracep->declBit(c+842,"cpu_ar_fire", false,-1);
    tracep->declBit(c+843,"mem_beat_cnt", false,-1);
    tracep->declBus(c+844,"mem_data_buf", false,-1, 31,0);
    tracep->declBit(c+1732,"mem_r_fire", false,-1);
    tracep->declBit(c+1733,"mem_ar_fire", false,-1);
    tracep->declBit(c+845,"refill_drop_q", false,-1);
    tracep->declQuad(c+846,"ic_req_cnt", false,-1, 63,0);
    tracep->declQuad(c+848,"ic_hit_cnt", false,-1, 63,0);
    tracep->declQuad(c+850,"ic_miss_cnt", false,-1, 63,0);
    tracep->declQuad(c+852,"ic_total_access_cycles", false,-1, 63,0);
    tracep->declQuad(c+854,"ic_miss_penalty_cycles", false,-1, 63,0);
    tracep->declQuad(c+1921,"req_cycle_cnt", false,-1, 63,0);
    tracep->declBit(c+856,"ic_access_busy", false,-1);
    tracep->declBit(c+857,"ic_miss_busy", false,-1);
    tracep->declBus(c+858,"state", false,-1, 1,0);
    tracep->declBus(c+1923,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ifu ");
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBit(c+659,"i_fetch_allow", false,-1);
    tracep->declBit(c+654,"i_id_ready", false,-1);
    tracep->declBus(c+642,"i_fetch_pc", false,-1, 31,0);
    tracep->declBit(c+648,"i_flush", false,-1);
    tracep->declBit(c+655,"o_inst_valid", false,-1);
    tracep->declBus(c+657,"o_inst", false,-1, 31,0);
    tracep->declBus(c+656,"o_inst_pc", false,-1, 31,0);
    tracep->declBit(c+649,"o_ifu_arvalid", false,-1);
    tracep->declBit(c+650,"i_ifu_arready", false,-1);
    tracep->declBus(c+651,"o_ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"o_ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1831,"o_ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1886,"o_ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1880,"o_ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1832,"o_ifu_rready", false,-1);
    tracep->declBit(c+652,"i_ifu_rvalid", false,-1);
    tracep->declBus(c+653,"i_ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+1832,"i_ifu_rlast", false,-1);
    tracep->declBit(c+859,"arvalid_r", false,-1);
    tracep->declBus(c+651,"araddr_r", false,-1, 31,0);
    tracep->declBit(c+860,"req_outstanding", false,-1);
    tracep->declBus(c+861,"req_pc", false,-1, 31,0);
    tracep->declBit(c+655,"buf_valid", false,-1);
    tracep->declBus(c+657,"buf_inst", false,-1, 31,0);
    tracep->declBus(c+656,"buf_pc", false,-1, 31,0);
    tracep->declBit(c+842,"ar_fire", false,-1);
    tracep->declBit(c+652,"r_fire", false,-1);
    tracep->declBit(c+658,"id_fire", false,-1);
    tracep->declBit(c+862,"start_fetch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_lsu ");
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBit(c+721,"i_mem_valid", false,-1);
    tracep->declBit(c+1832,"i_mem_ready", false,-1);
    tracep->declBit(c+732,"i_mem_read", false,-1);
    tracep->declBit(c+733,"i_mem_write", false,-1);
    tracep->declBus(c+724,"i_mem_addr", false,-1, 31,0);
    tracep->declBus(c+725,"i_store_data", false,-1, 31,0);
    tracep->declBus(c+730,"i_funct3", false,-1, 2,0);
    tracep->declBit(c+741,"o_mem_done", false,-1);
    tracep->declBus(c+742,"o_load_data", false,-1, 31,0);
    tracep->declBit(c+743,"o_lsu_busy", false,-1);
    tracep->declBus(c+744,"o_lsu_wmask", false,-1, 7,0);
    tracep->declBit(c+745,"o_lsu_exc_valid", false,-1);
    tracep->declBus(c+746,"o_lsu_exc_code", false,-1, 4,0);
    tracep->declBus(c+747,"o_lsu_exc_tval", false,-1, 31,0);
    tracep->declBit(c+748,"o_lsu_arvalid", false,-1);
    tracep->declBit(c+1555,"i_lsu_arready", false,-1);
    tracep->declBus(c+749,"o_lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"o_lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1831,"o_lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1886,"o_lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1880,"o_lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+750,"o_lsu_rready", false,-1);
    tracep->declBit(c+1556,"i_lsu_rvalid", false,-1);
    tracep->declBus(c+1718,"i_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1720,"i_lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1719,"i_lsu_rlast", false,-1);
    tracep->declBus(c+1800,"i_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+751,"o_lsu_awvalid", false,-1);
    tracep->declBit(c+1557,"i_lsu_awready", false,-1);
    tracep->declBus(c+749,"o_lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"o_lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"o_lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1886,"o_lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1880,"o_lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+752,"o_lsu_wvalid", false,-1);
    tracep->declBit(c+1558,"i_lsu_wready", false,-1);
    tracep->declBus(c+753,"o_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+754,"o_lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1832,"o_lsu_wlast", false,-1);
    tracep->declBit(c+755,"o_lsu_bready", false,-1);
    tracep->declBit(c+1559,"i_lsu_bvalid", false,-1);
    tracep->declBus(c+1721,"i_lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1801,"i_lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1924,"EXC_LOAD_MISALIGN", false,-1, 4,0);
    tracep->declBus(c+1925,"EXC_LOAD_ACCESS", false,-1, 4,0);
    tracep->declBus(c+1926,"EXC_STORE_MISALIGN", false,-1, 4,0);
    tracep->declBus(c+1927,"EXC_STORE_ACCESS", false,-1, 4,0);
    tracep->declBus(c+1874,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+1833,"S_LOAD_AR", false,-1, 2,0);
    tracep->declBus(c+1886,"S_LOAD_R", false,-1, 2,0);
    tracep->declBus(c+1900,"S_STORE_AW_W", false,-1, 2,0);
    tracep->declBus(c+1901,"S_STORE_B", false,-1, 2,0);
    tracep->declBus(c+1902,"S_DONE", false,-1, 2,0);
    tracep->declBus(c+863,"state", false,-1, 2,0);
    tracep->declBus(c+1734,"state_next", false,-1, 2,0);
    tracep->declBus(c+864,"addr_r", false,-1, 31,0);
    tracep->declBus(c+753,"store_data_r", false,-1, 31,0);
    tracep->declBus(c+865,"funct3_r", false,-1, 2,0);
    tracep->declBus(c+866,"offset_r", false,-1, 1,0);
    tracep->declBus(c+742,"load_data_r", false,-1, 31,0);
    tracep->declBit(c+867,"aw_done_r", false,-1);
    tracep->declBit(c+868,"w_done_r", false,-1);
    tracep->declBit(c+745,"exc_valid_r", false,-1);
    tracep->declBus(c+746,"exc_code_r", false,-1, 4,0);
    tracep->declBus(c+747,"exc_tval_r", false,-1, 31,0);
    tracep->declBit(c+869,"start_load", false,-1);
    tracep->declBit(c+870,"start_store", false,-1);
    tracep->declBus(c+871,"mem_offset", false,-1, 1,0);
    tracep->declBit(c+872,"is_half_access", false,-1);
    tracep->declBit(c+873,"is_word_access", false,-1);
    tracep->declBit(c+874,"addr_misalign", false,-1);
    tracep->declBit(c+875,"load_misalign", false,-1);
    tracep->declBit(c+876,"store_misalign", false,-1);
    tracep->declBit(c+877,"capture_req", false,-1);
    tracep->declBit(c+1810,"ar_fire", false,-1);
    tracep->declBit(c+1735,"r_fire", false,-1);
    tracep->declBit(c+1736,"aw_fire", false,-1);
    tracep->declBit(c+1737,"w_fire", false,-1);
    tracep->declBit(c+1738,"b_fire", false,-1);
    tracep->declBit(c+1811,"aw_done_next", false,-1);
    tracep->declBit(c+1812,"w_done_next", false,-1);
    tracep->declBus(c+878,"gen_load_data__Vstatic__shifted", false,-1, 31,0);
    tracep->declBus(c+879,"gen_load_data__Vstatic__load_byte", false,-1, 7,0);
    tracep->declBus(c+880,"gen_load_data__Vstatic__load_half", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rf ");
    tracep->declBus(c+1877,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+689,"wen", false,-1);
    tracep->declBus(c+691,"w_data", false,-1, 31,0);
    tracep->declBus(c+690,"w_addr", false,-1, 4,0);
    tracep->declBus(c+666,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+667,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+1676,"r_data1", false,-1, 31,0);
    tracep->declBus(c+1798,"r_data2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1395+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1904,"CLINT_ADDR_LEFT", false,-1, 31,0);
    tracep->declBus(c+1905,"CLINT_ADDR_RIGHT", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1797,"reset", false,-1);
    tracep->declBit(c+1537,"xb_ar_valid", false,-1);
    tracep->declBit(c+1722,"xb_ar_ready", false,-1);
    tracep->declBus(c+1517,"xb_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1836,"xb_ar_id", false,-1, 3,0);
    tracep->declBus(c+1518,"xb_ar_len", false,-1, 7,0);
    tracep->declBus(c+1519,"xb_ar_size", false,-1, 2,0);
    tracep->declBus(c+1520,"xb_ar_burst", false,-1, 1,0);
    tracep->declBit(c+1723,"xb_r_valid", false,-1);
    tracep->declBit(c+1538,"xb_r_ready", false,-1);
    tracep->declBus(c+1718,"xb_r_data", false,-1, 31,0);
    tracep->declBus(c+1720,"xb_r_resp", false,-1, 1,0);
    tracep->declBit(c+1719,"xb_r_last", false,-1);
    tracep->declBus(c+1800,"xb_r_id", false,-1, 3,0);
    tracep->declBit(c+1539,"xb_aw_valid", false,-1);
    tracep->declBit(c+1724,"xb_aw_ready", false,-1);
    tracep->declBus(c+1521,"xb_aw_addr", false,-1, 31,0);
    tracep->declBus(c+1836,"xb_aw_id", false,-1, 3,0);
    tracep->declBus(c+1831,"xb_aw_len", false,-1, 7,0);
    tracep->declBus(c+1522,"xb_aw_size", false,-1, 2,0);
    tracep->declBus(c+1523,"xb_aw_burst", false,-1, 1,0);
    tracep->declBit(c+1540,"xb_w_valid", false,-1);
    tracep->declBit(c+1725,"xb_w_ready", false,-1);
    tracep->declBus(c+1524,"xb_w_data", false,-1, 31,0);
    tracep->declBus(c+1525,"xb_w_strb", false,-1, 3,0);
    tracep->declBit(c+1526,"xb_w_last", false,-1);
    tracep->declBit(c+1726,"xb_b_valid", false,-1);
    tracep->declBit(c+1541,"xb_b_ready", false,-1);
    tracep->declBus(c+1721,"xb_b_resp", false,-1, 1,0);
    tracep->declBus(c+1801,"xb_b_id", false,-1, 3,0);
    tracep->declBit(c+1530,"soc_arvalid", false,-1);
    tracep->declBit(c+1705,"soc_arready", false,-1);
    tracep->declBus(c+1517,"soc_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+1518,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+1485,"soc_rvalid", false,-1);
    tracep->declBit(c+1531,"soc_rready", false,-1);
    tracep->declBus(c+1794,"soc_rdata", false,-1, 31,0);
    tracep->declBus(c+1795,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+1487,"soc_rlast", false,-1);
    tracep->declBus(c+1486,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1527,"soc_awvalid", false,-1);
    tracep->declBit(c+1704,"soc_awready", false,-1);
    tracep->declBus(c+1521,"soc_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+1528,"soc_wvalid", false,-1);
    tracep->declBit(c+1792,"soc_wready", false,-1);
    tracep->declBus(c+1524,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"soc_wlast", false,-1);
    tracep->declBit(c+1483,"soc_bvalid", false,-1);
    tracep->declBit(c+1529,"soc_bready", false,-1);
    tracep->declBus(c+1793,"soc_bresp", false,-1, 1,0);
    tracep->declBus(c+1484,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+1542,"clint_arvalid", false,-1);
    tracep->declBit(c+781,"clint_arready", false,-1);
    tracep->declBus(c+1517,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+1836,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1518,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1519,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1520,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+782,"clint_rvalid", false,-1);
    tracep->declBit(c+1802,"clint_rready", false,-1);
    tracep->declBus(c+783,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1837,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1832,"clint_rlast", false,-1);
    tracep->declBus(c+784,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+1543,"clint_awvalid", false,-1);
    tracep->declBit(c+1834,"clint_awready", false,-1);
    tracep->declBus(c+1521,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1836,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1831,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1522,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1523,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1803,"clint_wvalid", false,-1);
    tracep->declBit(c+1834,"clint_wready", false,-1);
    tracep->declBus(c+1524,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1525,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1526,"clint_wlast", false,-1);
    tracep->declBit(c+1834,"clint_bvalid", false,-1);
    tracep->declBit(c+1804,"clint_bready", false,-1);
    tracep->declBus(c+1837,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1836,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1551,"ar_to_clint", false,-1);
    tracep->declBit(c+1552,"aw_to_clint", false,-1);
    tracep->declBit(c+881,"rd_sel_clint", false,-1);
    tracep->declBit(c+882,"wr_sel_clint", false,-1);
    tracep->declBit(c+1727,"ar_hs", false,-1);
    tracep->declBit(c+1729,"aw_hs", false,-1);
    tracep->declBit(c+1728,"r_done", false,-1);
    tracep->declBit(c+1731,"b_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"io_d", false,-1);
    tracep->declBit(c+474,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"io_d", false,-1);
    tracep->declBit(c+474,"io_q", false,-1);
    tracep->declBit(c+474,"sync_0", false,-1);
    tracep->declBit(c+475,"sync_1", false,-1);
    tracep->declBit(c+476,"sync_2", false,-1);
    tracep->declBit(c+477,"sync_3", false,-1);
    tracep->declBit(c+478,"sync_4", false,-1);
    tracep->declBit(c+479,"sync_5", false,-1);
    tracep->declBit(c+480,"sync_6", false,-1);
    tracep->declBit(c+481,"sync_7", false,-1);
    tracep->declBit(c+482,"sync_8", false,-1);
    tracep->declBit(c+483,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1375,"auto_in_psel", false,-1);
    tracep->declBit(c+1376,"auto_in_penable", false,-1);
    tracep->declBit(c+11,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1833,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1377,"auto_in_pready", false,-1);
    tracep->declBit(c+1378,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1776,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1752,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1753,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1754,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1755,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1756,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1757,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1758,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1759,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1760,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1761,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+1427,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1375,"in_psel", false,-1);
    tracep->declBit(c+1376,"in_penable", false,-1);
    tracep->declBus(c+1833,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+11,"in_pwrite", false,-1);
    tracep->declBus(c+1366,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1377,"in_pready", false,-1);
    tracep->declBus(c+1776,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1378,"in_pslverr", false,-1);
    tracep->declBus(c+1752,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1753,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1754,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1755,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1756,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1757,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1758,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1759,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1760,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1761,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+1831,"LED_CTRL_ADDR", false,-1, 7,0);
    tracep->declBus(c+1928,"DIP_STATE_ADDR", false,-1, 7,0);
    tracep->declBus(c+1929,"SEG7_ADDR", false,-1, 7,0);
    tracep->declBus(c+1930,"RESERVE_ADDR", false,-1, 7,0);
    tracep->declBus(c+1931,"LED_NUM", false,-1, 31,0);
    tracep->declBus(c+1875,"SEG_CTRL_W", false,-1, 31,0);
    tracep->declBus(c+1875,"GPIO_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+950,"led_ctrl", false,-1, 15,0);
    tracep->declBus(c+951,"dip_state", false,-1, 15,0);
    tracep->declBus(c+952,"seg7_ctrl", false,-1, 31,0);
    tracep->declBit(c+953,"reserve", false,-1);
    tracep->declBit(c+1428,"addr_valid", false,-1);
    tracep->declBit(c+1429,"apb_setup", false,-1);
    tracep->declBit(c+1377,"apb_access", false,-1);
    tracep->declBit(c+1430,"apb_wr", false,-1);
    tracep->declBit(c+558,"apb_rd", false,-1);
    tracep->declBus(c+1431,"apb_addr", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1372,"auto_in_psel", false,-1);
    tracep->declBit(c+1373,"auto_in_penable", false,-1);
    tracep->declBit(c+11,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1833,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+889,"auto_in_pready", false,-1);
    tracep->declBit(c+1834,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1775,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1762,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1763,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+1427,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1372,"in_psel", false,-1);
    tracep->declBit(c+1373,"in_penable", false,-1);
    tracep->declBus(c+1833,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+11,"in_pwrite", false,-1);
    tracep->declBus(c+1366,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+889,"in_pready", false,-1);
    tracep->declBus(c+1775,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1834,"in_pslverr", false,-1);
    tracep->declBit(c+1762,"ps2_clk", false,-1);
    tracep->declBit(c+1763,"ps2_data", false,-1);
    tracep->declBus(c+1836,"PS_DATA_ADDR", false,-1, 3,0);
    tracep->declBus(c+1932,"PS_STATUS_ADDR", false,-1, 3,0);
    tracep->declBit(c+1432,"apb_setup", false,-1);
    tracep->declBit(c+1433,"apb_access", false,-1);
    tracep->declBit(c+559,"ps2_write", false,-1);
    tracep->declBit(c+1434,"ps2_read", false,-1);
    tracep->declBus(c+954,"ps2_data_buf", false,-1, 10,0);
    tracep->declBus(c+955,"bit_cnt", false,-1, 3,0);
    tracep->declBit(c+956,"ps2_clk_syn0", false,-1);
    tracep->declBit(c+957,"ps2_clk_syn1", false,-1);
    tracep->declBit(c+958,"ps2_syn1_dly", false,-1);
    tracep->declBit(c+959,"ps2_pulse", false,-1);
    tracep->declBit(c+1813,"key_valid", false,-1);
    tracep->declBit(c+1814,"fifo_wen", false,-1);
    tracep->declBit(c+1506,"fifo_ren", false,-1);
    tracep->declBit(c+1435,"status_rd", false,-1);
    tracep->declBus(c+960,"fifo_wdata", false,-1, 7,0);
    tracep->declBus(c+1815,"fifo_rdata", false,-1, 7,0);
    tracep->declBit(c+961,"fifo_empty", false,-1);
    tracep->declBit(c+962,"fifo_full", false,-1);
    tracep->declBus(c+963,"kbd_status", false,-1, 31,0);
    tracep->pushNamePrefix("u_ps2_fifo ");
    tracep->declBus(c+1839,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+960,"i_data", false,-1, 7,0);
    tracep->declBit(c+1814,"wen", false,-1);
    tracep->declBit(c+1506,"ren", false,-1);
    tracep->declBus(c+1815,"o_data", false,-1, 7,0);
    tracep->declBit(c+961,"o_empty", false,-1);
    tracep->declBit(c+962,"o_full", false,-1);
    tracep->declBus(c+1877,"PTR_W", false,-1, 31,0);
    tracep->declBus(c+1933,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+484+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+964,"w_ptr", false,-1, 4,0);
    tracep->declBus(c+965,"r_ptr", false,-1, 4,0);
    tracep->declBus(c+966,"count", false,-1, 5,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1660,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1661,"auto_in_wvalid", false,-1);
    tracep->declBit(c+268,"auto_in_arready", false,-1);
    tracep->declBit(c+1662,"auto_in_arvalid", false,-1);
    tracep->declBus(c+47,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1663,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+565,"auto_in_rready", false,-1);
    tracep->declBit(c+269,"auto_in_rvalid", false,-1);
    tracep->declBus(c+270,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+271,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+269,"state", false,-1);
    tracep->declBus(c+271,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+270,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1677,"raddr", false,-1, 31,0);
    tracep->declBit(c+1678,"ren", false,-1);
    tracep->declBus(c+1679,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1379,"auto_in_psel", false,-1);
    tracep->declBit(c+555,"auto_in_penable", false,-1);
    tracep->declBit(c+11,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1365,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1833,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1777,"auto_in_pready", false,-1);
    tracep->declBit(c+1834,"auto_in_pslverr", false,-1);
    tracep->declBus(c+12,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1473,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1474,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1773,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+1365,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1379,"in_psel", false,-1);
    tracep->declBit(c+555,"in_penable", false,-1);
    tracep->declBus(c+1833,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+11,"in_pwrite", false,-1);
    tracep->declBus(c+1366,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1777,"in_pready", false,-1);
    tracep->declBus(c+12,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1834,"in_pslverr", false,-1);
    tracep->declBit(c+1473,"qspi_sck", false,-1);
    tracep->declBit(c+1474,"qspi_ce_n", false,-1);
    tracep->declBus(c+1773,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1773,"din", false,-1, 3,0);
    tracep->declBus(c+1507,"dout", false,-1, 3,0);
    tracep->declBus(c+1508,"douten", false,-1, 3,0);
    tracep->declBit(c+1816,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1750,"clk_i", false,-1);
    tracep->declBit(c+1751,"rst_i", false,-1);
    tracep->declBus(c+1365,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1366,"dat_i", false,-1, 31,0);
    tracep->declBus(c+12,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1367,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1379,"cyc_i", false,-1);
    tracep->declBit(c+1379,"stb_i", false,-1);
    tracep->declBit(c+1816,"ack_o", false,-1);
    tracep->declBit(c+11,"we_i", false,-1);
    tracep->declBit(c+1473,"sck", false,-1);
    tracep->declBit(c+1474,"ce_n", false,-1);
    tracep->declBus(c+1773,"din", false,-1, 3,0);
    tracep->declBus(c+1507,"dout", false,-1, 3,0);
    tracep->declBus(c+1508,"douten", false,-1, 3,0);
    tracep->declBus(c+1837,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1880,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1881,"ST_INIT", false,-1, 1,0);
    tracep->declBit(c+967,"mi_sck", false,-1);
    tracep->declBit(c+968,"mi_ce_n", false,-1);
    tracep->declBus(c+969,"mi_dout", false,-1, 3,0);
    tracep->declBit(c+970,"mi_doe", false,-1);
    tracep->declBit(c+971,"mr_sck", false,-1);
    tracep->declBit(c+972,"mr_ce_n", false,-1);
    tracep->declBus(c+1773,"mr_din", false,-1, 3,0);
    tracep->declBus(c+973,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+974,"mr_doe", false,-1);
    tracep->declBit(c+975,"mw_sck", false,-1);
    tracep->declBit(c+976,"mw_ce_n", false,-1);
    tracep->declBus(c+1773,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1509,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+977,"mw_doe", false,-1);
    tracep->declBit(c+1934,"mi_init", false,-1);
    tracep->declBit(c+978,"mi_done", false,-1);
    tracep->declBit(c+1510,"mr_rd", false,-1);
    tracep->declBit(c+979,"mr_done", false,-1);
    tracep->declBit(c+1511,"mw_wr", false,-1);
    tracep->declBit(c+1512,"mw_done", false,-1);
    tracep->declBit(c+1379,"wb_valid", false,-1);
    tracep->declBit(c+1436,"wb_we", false,-1);
    tracep->declBit(c+560,"wb_re", false,-1);
    tracep->declBus(c+980,"state", false,-1, 1,0);
    tracep->declBus(c+1817,"nstate", false,-1, 1,0);
    tracep->declBit(c+981,"qpi_ready", false,-1);
    tracep->declBus(c+1437,"size", false,-1, 2,0);
    tracep->declBus(c+1438,"byte0", false,-1, 7,0);
    tracep->declBus(c+1439,"byte1", false,-1, 7,0);
    tracep->declBus(c+1440,"byte2", false,-1, 7,0);
    tracep->declBus(c+1441,"byte3", false,-1, 7,0);
    tracep->declBus(c+1442,"wdata", false,-1, 31,0);
    tracep->declBus(c+561,"waddr", false,-1, 1,0);
    tracep->pushNamePrefix("MI ");
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1818,"rst_n", false,-1);
    tracep->declBit(c+982,"start", false,-1);
    tracep->declBit(c+978,"done", false,-1);
    tracep->declBit(c+967,"sck", false,-1);
    tracep->declBit(c+968,"ce_n", false,-1);
    tracep->declBus(c+969,"dout", false,-1, 3,0);
    tracep->declBit(c+970,"douten", false,-1);
    tracep->declBus(c+1837,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1880,"SEND", false,-1, 1,0);
    tracep->declBus(c+1881,"INIT_DONE", false,-1, 1,0);
    tracep->declBus(c+983,"state", false,-1, 1,0);
    tracep->declBus(c+984,"nstate", false,-1, 1,0);
    tracep->declBus(c+985,"counter", false,-1, 3,0);
    tracep->declBus(c+1935,"CMD_35H", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1818,"rst_n", false,-1);
    tracep->declBus(c+1443,"addr", false,-1, 23,0);
    tracep->declBit(c+1510,"rd", false,-1);
    tracep->declBus(c+1901,"size", false,-1, 2,0);
    tracep->declBit(c+1832,"qpi_mode", false,-1);
    tracep->declBit(c+979,"done", false,-1);
    tracep->declBus(c+12,"line", false,-1, 31,0);
    tracep->declBit(c+971,"sck", false,-1);
    tracep->declBit(c+972,"ce_n", false,-1);
    tracep->declBus(c+1773,"din", false,-1, 3,0);
    tracep->declBus(c+973,"dout", false,-1, 3,0);
    tracep->declBit(c+974,"douten", false,-1);
    tracep->declBus(c+1936,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1937,"READ", false,-1, 0,0);
    tracep->declBus(c+1938,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1939,"QPI_FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+986,"state", false,-1);
    tracep->declBit(c+1513,"nstate", false,-1);
    tracep->declBus(c+987,"counter", false,-1, 7,0);
    tracep->declBus(c+988,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+516+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1940,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+989,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1818,"rst_n", false,-1);
    tracep->declBus(c+1443,"addr", false,-1, 23,0);
    tracep->declBus(c+1442,"line", false,-1, 31,0);
    tracep->declBus(c+1437,"size", false,-1, 2,0);
    tracep->declBit(c+1511,"wr", false,-1);
    tracep->declBit(c+1832,"qpi_mode", false,-1);
    tracep->declBit(c+1512,"done", false,-1);
    tracep->declBit(c+975,"sck", false,-1);
    tracep->declBit(c+976,"ce_n", false,-1);
    tracep->declBus(c+1773,"din", false,-1, 3,0);
    tracep->declBus(c+1509,"dout", false,-1, 3,0);
    tracep->declBit(c+977,"douten", false,-1);
    tracep->declBus(c+1936,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1937,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1444,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1445,"QPI_FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+990,"state", false,-1);
    tracep->declBit(c+1514,"nstate", false,-1);
    tracep->declBus(c+991,"counter", false,-1, 7,0);
    tracep->declBus(c+992,"saddr", false,-1, 23,0);
    tracep->declBus(c+1941,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_axi ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1564,"auto_in_awready", false,-1);
    tracep->declBit(c+907,"auto_in_awvalid", false,-1);
    tracep->declBus(c+908,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+909,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+910,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+911,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+912,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1565,"auto_in_wready", false,-1);
    tracep->declBit(c+913,"auto_in_wvalid", false,-1);
    tracep->declBus(c+914,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+916,"auto_in_wlast", false,-1);
    tracep->declBit(c+917,"auto_in_bready", false,-1);
    tracep->declBit(c+918,"auto_in_bvalid", false,-1);
    tracep->declBus(c+904,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1837,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1563,"auto_in_arready", false,-1);
    tracep->declBit(c+896,"auto_in_arvalid", false,-1);
    tracep->declBus(c+897,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+898,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+899,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+900,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+901,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"auto_in_rready", false,-1);
    tracep->declBit(c+903,"auto_in_rvalid", false,-1);
    tracep->declBus(c+904,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+905,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1837,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+906,"auto_in_rlast", false,-1);
    tracep->declBit(c+1774,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1560,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+885,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+886,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+887,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+888,"sdram_bundle_we", false,-1);
    tracep->declBus(c+1232,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1561,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1562,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1739,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1564,"in_awready", false,-1);
    tracep->declBus(c+909,"in_awaddr", false,-1, 31,0);
    tracep->declBit(c+907,"in_awvalid", false,-1);
    tracep->declBus(c+908,"in_awid", false,-1, 3,0);
    tracep->declBus(c+910,"in_awlen", false,-1, 7,0);
    tracep->declBus(c+911,"in_awsize", false,-1, 2,0);
    tracep->declBus(c+912,"in_awburst", false,-1, 1,0);
    tracep->declBit(c+1565,"in_wready", false,-1);
    tracep->declBit(c+913,"in_wvalid", false,-1);
    tracep->declBus(c+914,"in_wdata", false,-1, 31,0);
    tracep->declBus(c+915,"in_wstrb", false,-1, 3,0);
    tracep->declBit(c+916,"in_wlast", false,-1);
    tracep->declBit(c+917,"in_bready", false,-1);
    tracep->declBit(c+918,"in_bvalid", false,-1);
    tracep->declBus(c+1837,"in_bresp", false,-1, 1,0);
    tracep->declBus(c+904,"in_bid", false,-1, 3,0);
    tracep->declBit(c+1563,"in_arready", false,-1);
    tracep->declBit(c+896,"in_arvalid", false,-1);
    tracep->declBus(c+898,"in_araddr", false,-1, 31,0);
    tracep->declBus(c+897,"in_arid", false,-1, 3,0);
    tracep->declBus(c+899,"in_arlen", false,-1, 7,0);
    tracep->declBus(c+900,"in_arsize", false,-1, 2,0);
    tracep->declBus(c+901,"in_arburst", false,-1, 1,0);
    tracep->declBit(c+902,"in_rready", false,-1);
    tracep->declBit(c+903,"in_rvalid", false,-1);
    tracep->declBus(c+1837,"in_rresp", false,-1, 1,0);
    tracep->declBus(c+905,"in_rdata", false,-1, 31,0);
    tracep->declBit(c+906,"in_rlast", false,-1);
    tracep->declBus(c+904,"in_rid", false,-1, 3,0);
    tracep->declBit(c+1774,"sdram_clk", false,-1);
    tracep->declBit(c+1560,"sdram_cke", false,-1);
    tracep->declBit(c+885,"sdram_cs", false,-1);
    tracep->declBit(c+886,"sdram_ras", false,-1);
    tracep->declBit(c+887,"sdram_cas", false,-1);
    tracep->declBit(c+888,"sdram_we", false,-1);
    tracep->declBus(c+1232,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1561,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1562,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1739,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+993,"sdram_dout_en", false,-1);
    tracep->declBus(c+994,"sdram_dout", false,-1, 31,0);
    tracep->pushNamePrefix("u_sdram_axi ");
    tracep->declBit(c+1750,"clk_i", false,-1);
    tracep->declBit(c+1751,"rst_i", false,-1);
    tracep->declBit(c+907,"inport_awvalid_i", false,-1);
    tracep->declBus(c+909,"inport_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+908,"inport_awid_i", false,-1, 3,0);
    tracep->declBus(c+910,"inport_awlen_i", false,-1, 7,0);
    tracep->declBus(c+912,"inport_awburst_i", false,-1, 1,0);
    tracep->declBit(c+913,"inport_wvalid_i", false,-1);
    tracep->declBus(c+914,"inport_wdata_i", false,-1, 31,0);
    tracep->declBus(c+915,"inport_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+916,"inport_wlast_i", false,-1);
    tracep->declBit(c+917,"inport_bready_i", false,-1);
    tracep->declBit(c+896,"inport_arvalid_i", false,-1);
    tracep->declBus(c+898,"inport_araddr_i", false,-1, 31,0);
    tracep->declBus(c+897,"inport_arid_i", false,-1, 3,0);
    tracep->declBus(c+899,"inport_arlen_i", false,-1, 7,0);
    tracep->declBus(c+901,"inport_arburst_i", false,-1, 1,0);
    tracep->declBit(c+902,"inport_rready_i", false,-1);
    tracep->declBus(c+1739,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1564,"inport_awready_o", false,-1);
    tracep->declBit(c+1565,"inport_wready_o", false,-1);
    tracep->declBit(c+918,"inport_bvalid_o", false,-1);
    tracep->declBus(c+1837,"inport_bresp_o", false,-1, 1,0);
    tracep->declBus(c+904,"inport_bid_o", false,-1, 3,0);
    tracep->declBit(c+1563,"inport_arready_o", false,-1);
    tracep->declBit(c+903,"inport_rvalid_o", false,-1);
    tracep->declBus(c+905,"inport_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1837,"inport_rresp_o", false,-1, 1,0);
    tracep->declBus(c+904,"inport_rid_o", false,-1, 3,0);
    tracep->declBit(c+906,"inport_rlast_o", false,-1);
    tracep->declBit(c+1774,"sdram_clk_o", false,-1);
    tracep->declBit(c+1560,"sdram_cke_o", false,-1);
    tracep->declBit(c+885,"sdram_cs_o", false,-1);
    tracep->declBit(c+886,"sdram_ras_o", false,-1);
    tracep->declBit(c+887,"sdram_cas_o", false,-1);
    tracep->declBit(c+888,"sdram_we_o", false,-1);
    tracep->declBus(c+1562,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1232,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1561,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+994,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+993,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1942,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1943,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1944,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1566,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1567,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+995,"ram_rd_w", false,-1);
    tracep->declBit(c+1568,"ram_accept_w", false,-1);
    tracep->declBus(c+914,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+996,"ram_read_data_w", false,-1, 31,0);
    tracep->declBus(c+997,"ram_len_w", false,-1, 7,0);
    tracep->declBit(c+998,"ram_ack_w", false,-1);
    tracep->declBit(c+1834,"ram_error_w", false,-1);
    tracep->pushNamePrefix("u_axi ");
    tracep->declBit(c+1750,"clk_i", false,-1);
    tracep->declBit(c+1751,"rst_i", false,-1);
    tracep->declBit(c+907,"axi_awvalid_i", false,-1);
    tracep->declBus(c+909,"axi_awaddr_i", false,-1, 31,0);
    tracep->declBus(c+908,"axi_awid_i", false,-1, 3,0);
    tracep->declBus(c+910,"axi_awlen_i", false,-1, 7,0);
    tracep->declBus(c+912,"axi_awburst_i", false,-1, 1,0);
    tracep->declBit(c+913,"axi_wvalid_i", false,-1);
    tracep->declBus(c+914,"axi_wdata_i", false,-1, 31,0);
    tracep->declBus(c+915,"axi_wstrb_i", false,-1, 3,0);
    tracep->declBit(c+916,"axi_wlast_i", false,-1);
    tracep->declBit(c+917,"axi_bready_i", false,-1);
    tracep->declBit(c+896,"axi_arvalid_i", false,-1);
    tracep->declBus(c+898,"axi_araddr_i", false,-1, 31,0);
    tracep->declBus(c+897,"axi_arid_i", false,-1, 3,0);
    tracep->declBus(c+899,"axi_arlen_i", false,-1, 7,0);
    tracep->declBus(c+901,"axi_arburst_i", false,-1, 1,0);
    tracep->declBit(c+902,"axi_rready_i", false,-1);
    tracep->declBit(c+1568,"ram_accept_i", false,-1);
    tracep->declBit(c+998,"ram_ack_i", false,-1);
    tracep->declBit(c+1834,"ram_error_i", false,-1);
    tracep->declBus(c+996,"ram_read_data_i", false,-1, 31,0);
    tracep->declBit(c+1564,"axi_awready_o", false,-1);
    tracep->declBit(c+1565,"axi_wready_o", false,-1);
    tracep->declBit(c+918,"axi_bvalid_o", false,-1);
    tracep->declBus(c+1837,"axi_bresp_o", false,-1, 1,0);
    tracep->declBus(c+904,"axi_bid_o", false,-1, 3,0);
    tracep->declBit(c+1563,"axi_arready_o", false,-1);
    tracep->declBit(c+903,"axi_rvalid_o", false,-1);
    tracep->declBus(c+905,"axi_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1837,"axi_rresp_o", false,-1, 1,0);
    tracep->declBus(c+904,"axi_rid_o", false,-1, 3,0);
    tracep->declBit(c+906,"axi_rlast_o", false,-1);
    tracep->declBus(c+1567,"ram_wr_o", false,-1, 3,0);
    tracep->declBit(c+995,"ram_rd_o", false,-1);
    tracep->declBus(c+997,"ram_len_o", false,-1, 7,0);
    tracep->declBus(c+1566,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+914,"ram_write_data_o", false,-1, 31,0);
    tracep->declBus(c+999,"calculate_addr_next__Vstatic__mask", false,-1, 31,0);
    tracep->declBus(c+1000,"req_len_q", false,-1, 7,0);
    tracep->declBus(c+1001,"req_addr_q", false,-1, 31,0);
    tracep->declBit(c+1002,"req_rd_q", false,-1);
    tracep->declBit(c+1003,"req_wr_q", false,-1);
    tracep->declBus(c+1004,"req_id_q", false,-1, 3,0);
    tracep->declBus(c+1005,"req_axburst_q", false,-1, 1,0);
    tracep->declBus(c+1006,"req_axlen_q", false,-1, 7,0);
    tracep->declBit(c+1007,"req_prio_q", false,-1);
    tracep->declBit(c+1008,"req_hold_rd_q", false,-1);
    tracep->declBit(c+1009,"req_hold_wr_q", false,-1);
    tracep->declBit(c+1010,"req_fifo_accept_w", false,-1);
    tracep->declBit(c+1569,"req_push_w", false,-1);
    tracep->declBus(c+1236,"req_in_r", false,-1, 5,0);
    tracep->declBit(c+1011,"req_out_valid_w", false,-1);
    tracep->declBus(c+1012,"req_out_w", false,-1, 5,0);
    tracep->declBit(c+1013,"resp_accept_w", false,-1);
    tracep->declBit(c+1014,"resp_is_write_w", false,-1);
    tracep->declBit(c+1015,"resp_is_read_w", false,-1);
    tracep->declBit(c+906,"resp_is_last_w", false,-1);
    tracep->declBus(c+904,"resp_id_w", false,-1, 3,0);
    tracep->declBit(c+1016,"resp_valid_w", false,-1);
    tracep->declBit(c+1017,"write_prio_w", false,-1);
    tracep->declBit(c+1018,"read_prio_w", false,-1);
    tracep->declBit(c+1019,"write_active_w", false,-1);
    tracep->declBit(c+995,"read_active_w", false,-1);
    tracep->declBus(c+1566,"addr_w", false,-1, 31,0);
    tracep->declBit(c+1020,"wr_w", false,-1);
    tracep->declBit(c+995,"rd_w", false,-1);
    tracep->pushNamePrefix("u_requests ");
    tracep->declBus(c+1933,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1841,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1945,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1750,"clk_i", false,-1);
    tracep->declBit(c+1751,"rst_i", false,-1);
    tracep->declBus(c+1236,"data_in_i", false,-1, 5,0);
    tracep->declBit(c+1569,"push_i", false,-1);
    tracep->declBit(c+1013,"pop_i", false,-1);
    tracep->declBus(c+1012,"data_out_o", false,-1, 5,0);
    tracep->declBit(c+1010,"accept_o", false,-1);
    tracep->declBit(c+1011,"valid_o", false,-1);
    tracep->declBus(c+1840,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1021+i*1,"ram", true,(i+0), 5,0);
    }
    tracep->declBus(c+1025,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1026,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1027,"count", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_response ");
    tracep->declBus(c+1875,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1841,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+1945,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+1750,"clk_i", false,-1);
    tracep->declBit(c+1751,"rst_i", false,-1);
    tracep->declBus(c+996,"data_in_i", false,-1, 31,0);
    tracep->declBit(c+998,"push_i", false,-1);
    tracep->declBit(c+1013,"pop_i", false,-1);
    tracep->declBus(c+905,"data_out_o", false,-1, 31,0);
    tracep->declBit(c+1028,"accept_o", false,-1);
    tracep->declBit(c+1016,"valid_o", false,-1);
    tracep->declBus(c+1840,"COUNT_W", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1029+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->declBus(c+1033,"rd_ptr", false,-1, 1,0);
    tracep->declBus(c+1034,"wr_ptr", false,-1, 1,0);
    tracep->declBus(c+1035,"count", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_core ");
    tracep->declBit(c+1750,"clk_i", false,-1);
    tracep->declBit(c+1751,"rst_i", false,-1);
    tracep->declBus(c+1567,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+995,"inport_rd_i", false,-1);
    tracep->declBus(c+997,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1566,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+914,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1739,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1568,"inport_accept_o", false,-1);
    tracep->declBit(c+998,"inport_ack_o", false,-1);
    tracep->declBit(c+1834,"inport_error_o", false,-1);
    tracep->declBus(c+996,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1774,"sdram_clk_o", false,-1);
    tracep->declBit(c+1560,"sdram_cke_o", false,-1);
    tracep->declBit(c+885,"sdram_cs_o", false,-1);
    tracep->declBit(c+886,"sdram_ras_o", false,-1);
    tracep->declBit(c+887,"sdram_cas_o", false,-1);
    tracep->declBit(c+888,"sdram_we_o", false,-1);
    tracep->declBus(c+1562,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+1232,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1561,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+994,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+993,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1942,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1943,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1944,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1841,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1841,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1946,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1947,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1948,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1949,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1875,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_RANKS", false,-1, 31,0);
    tracep->declBus(c+1950,"SDRAM_RANK_W", false,-1, 31,0);
    tracep->declBus(c+1951,"SDRAM_RANK_SEL_BIT", false,-1, 31,0);
    tracep->declBus(c+1841,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1952,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1953,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1954,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1932,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1955,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1957,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1836,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1958,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1841,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1836,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1957,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1956,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1953,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1932,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1954,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1955,"STATE_WRITE", false,-1, 3,0);
    tracep->declBus(c+1952,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1959,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1960,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1960,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1960,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1945,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1933,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1566,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1567,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+995,"ram_rd_w", false,-1);
    tracep->declBit(c+1568,"ram_accept_w", false,-1);
    tracep->declBus(c+914,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+996,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+998,"ram_ack_w", false,-1);
    tracep->declBit(c+1570,"ram_req_w", false,-1);
    tracep->declBus(c+1036,"command_q", false,-1, 3,0);
    tracep->declBus(c+1571,"addr_q", false,-1, 12,0);
    tracep->declBus(c+994,"data_q", false,-1, 31,0);
    tracep->declBit(c+1037,"data_rd_en_q", false,-1);
    tracep->declBus(c+1562,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1560,"cke_q", false,-1);
    tracep->declBus(c+1561,"bank_q", false,-1, 1,0);
    tracep->declBit(c+1038,"rank_q", false,-1);
    tracep->declBus(c+1739,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+1039,"refresh_q", false,-1);
    tracep->declBit(c+1040,"refresh_rank_q", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1041+i*1,"row_open_q", true,(i+0), 3,0);
    }
    tracep->pushNamePrefix("active_row_q");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+1043,"[0]", false,-1, 12,0);
    tracep->declBus(c+1044,"[1]", false,-1, 12,0);
    tracep->declBus(c+1045,"[2]", false,-1, 12,0);
    tracep->declBus(c+1046,"[3]", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+1047,"[0]", false,-1, 12,0);
    tracep->declBus(c+1048,"[1]", false,-1, 12,0);
    tracep->declBus(c+1049,"[2]", false,-1, 12,0);
    tracep->declBus(c+1050,"[3]", false,-1, 12,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1572,"state_q", false,-1, 3,0);
    tracep->declBus(c+1573,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1574,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+1575,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+1051,"delay_state_q", false,-1, 3,0);
    tracep->declBit(c+1052,"req_rank_q", false,-1);
    tracep->declBus(c+1576,"req_bank_q", false,-1, 1,0);
    tracep->declBus(c+1577,"req_row_q", false,-1, 12,0);
    tracep->declBus(c+1578,"req_col_q", false,-1, 12,0);
    tracep->declBus(c+1579,"req_wr_q", false,-1, 3,0);
    tracep->declBit(c+1053,"req_rd_q", false,-1);
    tracep->declBus(c+1054,"req_write_data_q", false,-1, 31,0);
    tracep->declBit(c+1580,"addr_rank_w", false,-1);
    tracep->declBus(c+1581,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1582,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1583,"addr_row_w", false,-1, 12,0);
    tracep->declBit(c+1237,"current_row_hit_w", false,-1);
    tracep->declBit(c+1238,"current_bank_open_w", false,-1);
    tracep->declBit(c+1055,"refresh_rank_open_w", false,-1);
    tracep->declBit(c+1568,"capture_req_w", false,-1);
    tracep->declBus(c+1841,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+1056,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1584,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1961,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1585,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+1057,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+996,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+1058,"idx", false,-1, 31,0);
    tracep->declBus(c+1059,"ridx", false,-1, 31,0);
    tracep->declBus(c+1060,"rd_q", false,-1, 3,0);
    tracep->declBit(c+998,"ack_q", false,-1);
    tracep->declArray(c+1586,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1383,"auto_in_psel", false,-1);
    tracep->declBit(c+1384,"auto_in_penable", false,-1);
    tracep->declBit(c+11,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1371,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1833,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1385,"auto_in_pready", false,-1);
    tracep->declBit(c+1386,"auto_in_pslverr", false,-1);
    tracep->declBus(c+556,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1831,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1832,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1772,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1962,"spi_reg_start", false,-1, 31,0);
    tracep->declBus(c+1963,"spi_reg_end", false,-1, 31,0);
    tracep->declBus(c+1878,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1964,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1839,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+1446,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1383,"in_psel", false,-1);
    tracep->declBit(c+1384,"in_penable", false,-1);
    tracep->declBus(c+1833,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+11,"in_pwrite", false,-1);
    tracep->declBus(c+1366,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1385,"in_pready", false,-1);
    tracep->declBus(c+556,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1386,"in_pslverr", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+1831,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1832,"spi_mosi", false,-1);
    tracep->declBit(c+1772,"spi_miso", false,-1);
    tracep->declBit(c+1834,"spi_irq_out", false,-1);
    tracep->declBit(c+1447,"apb_setup", false,-1);
    tracep->declBit(c+1448,"apb_access", false,-1);
    tracep->declBit(c+1449,"apb_rd", false,-1);
    tracep->declBit(c+1450,"apb_wr", false,-1);
    tracep->declBit(c+1451,"addr_in_flash", false,-1);
    tracep->declBit(c+1452,"addr_in_spi_reg", false,-1);
    tracep->declBit(c+562,"xip_setup_flash", false,-1);
    tracep->declBit(c+1453,"xip_flash_rd", false,-1);
    tracep->declBit(c+1454,"xip_spi_reg_rd", false,-1);
    tracep->declBit(c+1455,"xip_spi_wr", false,-1);
    tracep->declBit(c+1456,"xip_bad_wr", false,-1);
    tracep->declBit(c+1457,"xip_invalid_req", false,-1);
    tracep->declBus(c+520,"data", false,-1, 31,0);
    tracep->declBus(c+1458,"flash_offset", false,-1, 31,0);
    tracep->declBit(c+1386,"xip_flash_err", false,-1);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+562,"valid", false,-1);
    tracep->declBus(c+1965,"cmd", false,-1, 7,0);
    tracep->declBus(c+1459,"addr", false,-1, 31,0);
    tracep->declBus(c+520,"data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1380,"auto_in_psel", false,-1);
    tracep->declBit(c+1381,"auto_in_penable", false,-1);
    tracep->declBit(c+11,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1374,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1833,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1382,"auto_in_pready", false,-1);
    tracep->declBit(c+1834,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1778,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1770,"uart_rx", false,-1);
    tracep->declBit(c+1771,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1380,"in_psel", false,-1);
    tracep->declBit(c+1381,"in_penable", false,-1);
    tracep->declBus(c+1833,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1382,"in_pready", false,-1);
    tracep->declBit(c+1834,"in_pslverr", false,-1);
    tracep->declBus(c+1427,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+11,"in_pwrite", false,-1);
    tracep->declBus(c+1778,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1366,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1770,"uart_rx", false,-1);
    tracep->declBit(c+1771,"uart_tx", false,-1);
    tracep->declBit(c+1061,"rtsn", false,-1);
    tracep->declBit(c+1834,"ctsn", false,-1);
    tracep->declBit(c+1062,"dtr_pad_o", false,-1);
    tracep->declBit(c+1834,"dsr_pad_i", false,-1);
    tracep->declBit(c+1834,"ri_pad_i", false,-1);
    tracep->declBit(c+1834,"dcd_pad_i", false,-1);
    tracep->declBit(c+1063,"interrupt", false,-1);
    tracep->declBit(c+1819,"reg_we", false,-1);
    tracep->declBit(c+1820,"reg_re", false,-1);
    tracep->declBus(c+1460,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1461,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+521,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1515,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+1064,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1751,"wb_rst_i", false,-1);
    tracep->declBus(c+1460,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1462,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1515,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1819,"wb_we_i", false,-1);
    tracep->declBit(c+1820,"wb_re_i", false,-1);
    tracep->declBit(c+1771,"stx_pad_o", false,-1);
    tracep->declBit(c+1770,"srx_pad_i", false,-1);
    tracep->declBus(c+1959,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+1064,"rts_pad_o", false,-1);
    tracep->declBit(c+1062,"dtr_pad_o", false,-1);
    tracep->declBit(c+1063,"int_o", false,-1);
    tracep->declBit(c+1065,"enable", false,-1);
    tracep->declBit(c+1066,"srx_pad", false,-1);
    tracep->declBus(c+1067,"ier", false,-1, 3,0);
    tracep->declBus(c+1068,"iir", false,-1, 3,0);
    tracep->declBus(c+1069,"fcr", false,-1, 1,0);
    tracep->declBus(c+1070,"mcr", false,-1, 4,0);
    tracep->declBus(c+1071,"lcr", false,-1, 7,0);
    tracep->declBus(c+1072,"msr", false,-1, 7,0);
    tracep->declBus(c+1073,"dl", false,-1, 15,0);
    tracep->declBus(c+1074,"scratch", false,-1, 7,0);
    tracep->declBit(c+1075,"start_dlc", false,-1);
    tracep->declBit(c+1076,"lsr_mask_d", false,-1);
    tracep->declBit(c+1077,"msi_reset", false,-1);
    tracep->declBus(c+1078,"dlc", false,-1, 15,0);
    tracep->declBus(c+1079,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+1080,"rx_reset", false,-1);
    tracep->declBit(c+1081,"tx_reset", false,-1);
    tracep->declBit(c+1082,"dlab", false,-1);
    tracep->declBit(c+1832,"cts_pad_i", false,-1);
    tracep->declBit(c+1834,"dsr_pad_i", false,-1);
    tracep->declBit(c+1834,"ri_pad_i", false,-1);
    tracep->declBit(c+1834,"dcd_pad_i", false,-1);
    tracep->declBit(c+1083,"loopback", false,-1);
    tracep->declBit(c+1834,"cts", false,-1);
    tracep->declBit(c+1832,"dsr", false,-1);
    tracep->declBit(c+1832,"ri", false,-1);
    tracep->declBit(c+1832,"dcd", false,-1);
    tracep->declBit(c+1084,"cts_c", false,-1);
    tracep->declBit(c+1085,"dsr_c", false,-1);
    tracep->declBit(c+1086,"ri_c", false,-1);
    tracep->declBit(c+1087,"dcd_c", false,-1);
    tracep->declBus(c+1088,"lsr", false,-1, 7,0);
    tracep->declBit(c+1089,"lsr0", false,-1);
    tracep->declBit(c+1090,"lsr1", false,-1);
    tracep->declBit(c+1091,"lsr2", false,-1);
    tracep->declBit(c+1092,"lsr3", false,-1);
    tracep->declBit(c+1093,"lsr4", false,-1);
    tracep->declBit(c+1094,"lsr5", false,-1);
    tracep->declBit(c+1095,"lsr6", false,-1);
    tracep->declBit(c+1096,"lsr7", false,-1);
    tracep->declBit(c+1097,"lsr0r", false,-1);
    tracep->declBit(c+1098,"lsr1r", false,-1);
    tracep->declBit(c+1099,"lsr2r", false,-1);
    tracep->declBit(c+1100,"lsr3r", false,-1);
    tracep->declBit(c+1101,"lsr4r", false,-1);
    tracep->declBit(c+1102,"lsr5r", false,-1);
    tracep->declBit(c+1103,"lsr6r", false,-1);
    tracep->declBit(c+1104,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+1105,"rls_int", false,-1);
    tracep->declBit(c+1106,"rda_int", false,-1);
    tracep->declBit(c+1107,"ti_int", false,-1);
    tracep->declBit(c+1108,"thre_int", false,-1);
    tracep->declBit(c+1109,"ms_int", false,-1);
    tracep->declBit(c+1110,"tf_push", false,-1);
    tracep->declBit(c+1111,"rf_pop", false,-1);
    tracep->declBus(c+1821,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1112,"rf_error_bit", false,-1);
    tracep->declBit(c+1090,"rf_overrun", false,-1);
    tracep->declBit(c+1113,"rf_push_pulse", false,-1);
    tracep->declBus(c+1114,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1115,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1116,"tstate", false,-1, 2,0);
    tracep->declBus(c+1117,"rstate", false,-1, 3,0);
    tracep->declBus(c+1118,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1119,"thre_set_en", false,-1);
    tracep->declBus(c+1120,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1121,"block_value", false,-1, 7,0);
    tracep->declBit(c+1122,"serial_out", false,-1);
    tracep->declBit(c+1123,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+1124,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1125,"lsr0_d", false,-1);
    tracep->declBit(c+1126,"lsr1_d", false,-1);
    tracep->declBit(c+1127,"lsr2_d", false,-1);
    tracep->declBit(c+1128,"lsr3_d", false,-1);
    tracep->declBit(c+1129,"lsr4_d", false,-1);
    tracep->declBit(c+1130,"lsr5_d", false,-1);
    tracep->declBit(c+1131,"lsr6_d", false,-1);
    tracep->declBit(c+1132,"lsr7_d", false,-1);
    tracep->declBit(c+1133,"rls_int_d", false,-1);
    tracep->declBit(c+1134,"thre_int_d", false,-1);
    tracep->declBit(c+1135,"ms_int_d", false,-1);
    tracep->declBit(c+1136,"ti_int_d", false,-1);
    tracep->declBit(c+1137,"rda_int_d", false,-1);
    tracep->declBit(c+1138,"rls_int_rise", false,-1);
    tracep->declBit(c+1139,"thre_int_rise", false,-1);
    tracep->declBit(c+1140,"ms_int_rise", false,-1);
    tracep->declBit(c+1141,"ti_int_rise", false,-1);
    tracep->declBit(c+1142,"rda_int_rise", false,-1);
    tracep->declBit(c+1143,"rls_int_pnd", false,-1);
    tracep->declBit(c+1144,"rda_int_pnd", false,-1);
    tracep->declBit(c+1145,"thre_int_pnd", false,-1);
    tracep->declBit(c+1146,"ms_int_pnd", false,-1);
    tracep->declBit(c+1147,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1950,"Tp", false,-1, 31,0);
    tracep->declBus(c+1950,"width", false,-1, 31,0);
    tracep->declBus(c+1937,"init_value", false,-1, 0,0);
    tracep->declBit(c+1751,"rst_i", false,-1);
    tracep->declBit(c+1750,"clk_i", false,-1);
    tracep->declBit(c+1834,"stage1_rst_i", false,-1);
    tracep->declBit(c+1832,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1770,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+1066,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1148,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1751,"wb_rst_i", false,-1);
    tracep->declBus(c+1071,"lcr", false,-1, 7,0);
    tracep->declBit(c+1111,"rf_pop", false,-1);
    tracep->declBit(c+1123,"srx_pad_i", false,-1);
    tracep->declBit(c+1065,"enable", false,-1);
    tracep->declBit(c+1080,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+1118,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1114,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1821,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1090,"rf_overrun", false,-1);
    tracep->declBit(c+1112,"rf_error_bit", false,-1);
    tracep->declBus(c+1117,"rstate", false,-1, 3,0);
    tracep->declBit(c+1113,"rf_push_pulse", false,-1);
    tracep->declBus(c+1149,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1150,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1151,"rshift", false,-1, 7,0);
    tracep->declBit(c+1152,"rparity", false,-1);
    tracep->declBit(c+1153,"rparity_error", false,-1);
    tracep->declBit(c+1154,"rframing_error", false,-1);
    tracep->declBit(c+1155,"rbit_in", false,-1);
    tracep->declBit(c+1156,"rparity_xor", false,-1);
    tracep->declBus(c+1157,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1158,"rf_push_q", false,-1);
    tracep->declBus(c+1159,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1160,"rf_push", false,-1);
    tracep->declBit(c+1161,"break_error", false,-1);
    tracep->declBit(c+1162,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1163,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1164,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1165,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1836,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1957,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1956,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1953,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1932,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1954,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1955,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1952,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1959,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1966,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1967,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1166,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1167,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1968,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1931,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1841,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1877,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1751,"wb_rst_i", false,-1);
    tracep->declBit(c+1113,"push", false,-1);
    tracep->declBit(c+1111,"pop", false,-1);
    tracep->declBus(c+1159,"data_in", false,-1, 10,0);
    tracep->declBit(c+1080,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1821,"data_out", false,-1, 10,0);
    tracep->declBit(c+1090,"overrun", false,-1);
    tracep->declBus(c+1114,"count", false,-1, 4,0);
    tracep->declBit(c+1112,"error_bit", false,-1);
    tracep->declBus(c+1822,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1168+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1184,"top", false,-1, 3,0);
    tracep->declBus(c+1185,"bottom", false,-1, 3,0);
    tracep->declBus(c+1186,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1187,"word0", false,-1, 2,0);
    tracep->declBus(c+1188,"word1", false,-1, 2,0);
    tracep->declBus(c+1189,"word2", false,-1, 2,0);
    tracep->declBus(c+1190,"word3", false,-1, 2,0);
    tracep->declBus(c+1191,"word4", false,-1, 2,0);
    tracep->declBus(c+1192,"word5", false,-1, 2,0);
    tracep->declBus(c+1193,"word6", false,-1, 2,0);
    tracep->declBus(c+1194,"word7", false,-1, 2,0);
    tracep->declBus(c+1195,"word8", false,-1, 2,0);
    tracep->declBus(c+1196,"word9", false,-1, 2,0);
    tracep->declBus(c+1197,"word10", false,-1, 2,0);
    tracep->declBus(c+1198,"word11", false,-1, 2,0);
    tracep->declBus(c+1199,"word12", false,-1, 2,0);
    tracep->declBus(c+1200,"word13", false,-1, 2,0);
    tracep->declBus(c+1201,"word14", false,-1, 2,0);
    tracep->declBus(c+1202,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1841,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1839,"data_width", false,-1, 31,0);
    tracep->declBus(c+1931,"depth", false,-1, 31,0);
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1113,"we", false,-1);
    tracep->declBus(c+1184,"a", false,-1, 3,0);
    tracep->declBus(c+1185,"dpra", false,-1, 3,0);
    tracep->declBus(c+1203,"di", false,-1, 7,0);
    tracep->declBus(c+1822,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+522+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1751,"wb_rst_i", false,-1);
    tracep->declBus(c+1071,"lcr", false,-1, 7,0);
    tracep->declBit(c+1110,"tf_push", false,-1);
    tracep->declBus(c+1462,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+1065,"enable", false,-1);
    tracep->declBit(c+1081,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+1122,"stx_pad_o", false,-1);
    tracep->declBus(c+1116,"tstate", false,-1, 2,0);
    tracep->declBus(c+1115,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1204,"counter", false,-1, 4,0);
    tracep->declBus(c+1205,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1206,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1207,"stx_o_tmp", false,-1);
    tracep->declBit(c+1208,"parity_xor", false,-1);
    tracep->declBit(c+1209,"tf_pop", false,-1);
    tracep->declBit(c+1210,"bit_out", false,-1);
    tracep->declBus(c+1462,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1516,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1211,"tf_overrun", false,-1);
    tracep->declBus(c+1874,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1833,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1886,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1900,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1901,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1902,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1839,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1931,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1841,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1877,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1751,"wb_rst_i", false,-1);
    tracep->declBit(c+1110,"push", false,-1);
    tracep->declBit(c+1209,"pop", false,-1);
    tracep->declBus(c+1462,"data_in", false,-1, 7,0);
    tracep->declBit(c+1081,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1516,"data_out", false,-1, 7,0);
    tracep->declBit(c+1211,"overrun", false,-1);
    tracep->declBus(c+1115,"count", false,-1, 4,0);
    tracep->declBus(c+1212,"top", false,-1, 3,0);
    tracep->declBus(c+1213,"bottom", false,-1, 3,0);
    tracep->declBus(c+1214,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1841,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1839,"data_width", false,-1, 31,0);
    tracep->declBus(c+1931,"depth", false,-1, 31,0);
    tracep->declBit(c+1750,"clk", false,-1);
    tracep->declBit(c+1110,"we", false,-1);
    tracep->declBus(c+1212,"a", false,-1, 3,0);
    tracep->declBus(c+1213,"dpra", false,-1, 3,0);
    tracep->declBus(c+1462,"di", false,-1, 7,0);
    tracep->declBus(c+1516,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+538+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBit(c+1369,"auto_in_psel", false,-1);
    tracep->declBit(c+1370,"auto_in_penable", false,-1);
    tracep->declBit(c+11,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1371,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1833,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1366,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1832,"auto_in_pready", false,-1);
    tracep->declBit(c+1834,"auto_in_pslverr", false,-1);
    tracep->declBus(c+554,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1764,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1765,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1766,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1767,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1768,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1769,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1750,"clock", false,-1);
    tracep->declBit(c+1751,"reset", false,-1);
    tracep->declBus(c+1446,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1369,"in_psel", false,-1);
    tracep->declBit(c+1370,"in_penable", false,-1);
    tracep->declBus(c+1833,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+11,"in_pwrite", false,-1);
    tracep->declBus(c+1366,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1367,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1832,"in_pready", false,-1);
    tracep->declBus(c+554,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1834,"in_pslverr", false,-1);
    tracep->declBus(c+1764,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1765,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1766,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1767,"vga_hsync", false,-1);
    tracep->declBit(c+1768,"vga_vsync", false,-1);
    tracep->declBit(c+1769,"vga_valid", false,-1);
    tracep->declBus(c+1969,"VGA_XLEN", false,-1, 15,0);
    tracep->declBus(c+1970,"VGA_YLEN", false,-1, 15,0);
    tracep->declBus(c+1971,"CTRL_ADDR", false,-1, 31,0);
    tracep->declBus(c+1972,"SYNC_ADDR", false,-1, 31,0);
    tracep->declBus(c+1973,"FB_BASE", false,-1, 31,0);
    tracep->declBus(c+1974,"FB_WORDS", false,-1, 31,0);
    tracep->declBus(c+1975,"FB_BYTES", false,-1, 31,0);
    tracep->declBus(c+1976,"H_FRONTPORCH", false,-1, 31,0);
    tracep->declBus(c+1977,"H_ACTIVE", false,-1, 31,0);
    tracep->declBus(c+1978,"H_BACKPORCH", false,-1, 31,0);
    tracep->declBus(c+1979,"H_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1945,"V_FRONTPORCH", false,-1, 31,0);
    tracep->declBus(c+1980,"V_ACTIVE", false,-1, 31,0);
    tracep->declBus(c+1981,"V_BACKPORCH", false,-1, 31,0);
    tracep->declBus(c+1982,"V_TOTAL", false,-1, 31,0);
    tracep->declBus(c+1215,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+1216,"y_cnt", false,-1, 9,0);
    tracep->declBit(c+1463,"apb_setup", false,-1);
    tracep->declBit(c+1464,"apb_access", false,-1);
    tracep->declBit(c+1465,"apb_wr", false,-1);
    tracep->declBit(c+1466,"apb_rd", false,-1);
    tracep->declBit(c+1467,"rd_ctrl", false,-1);
    tracep->declBit(c+1468,"sync_wr", false,-1);
    tracep->declBit(c+1469,"fb_wr", false,-1);
    tracep->declBit(c+1470,"fb_rd", false,-1);
    tracep->declBus(c+1471,"addr_offset", false,-1, 31,0);
    tracep->declBus(c+1472,"frame_waddr", false,-1, 18,0);
    tracep->declBus(c+1217,"sync", false,-1, 31,0);
    tracep->declBus(c+1218,"fb_addr", false,-1, 18,0);
    tracep->declBit(c+1219,"vga_hvalid", false,-1);
    tracep->declBit(c+1220,"vga_vvalid", false,-1);
    tracep->declBus(c+1221,"h_addr", false,-1, 9,0);
    tracep->declBus(c+1222,"v_addr", false,-1, 9,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+2,"ss", false,-1);
    tracep->declBit(c+1832,"mosi", false,-1);
    tracep->declBit(c+639,"miso", false,-1);
    tracep->declBus(c+1355,"rx_shift", false,-1, 7,0);
    tracep->declBus(c+1823,"rx_bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1356,"rx_done", false,-1);
    tracep->declBus(c+640,"tx_bit_cnt", false,-1, 3,0);
    tracep->declBit(c+641,"r_miso", false,-1);
    tracep->declBit(c+1357,"rx_en", false,-1);
    tracep->declBit(c+1358,"rx_last_bit", false,-1);
    tracep->declBit(c+1824,"tx_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+2,"ss", false,-1);
    tracep->declBit(c+1832,"mosi", false,-1);
    tracep->declBit(c+1825,"miso", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+1359,"state", false,-1, 2,0);
    tracep->declBus(c+1360,"counter", false,-1, 7,0);
    tracep->declBus(c+1361,"cmd", false,-1, 7,0);
    tracep->declBus(c+1362,"addr", false,-1, 23,0);
    tracep->declBus(c+1826,"data", false,-1, 31,0);
    tracep->declBit(c+1363,"ren", false,-1);
    tracep->declBus(c+1827,"rdata", false,-1, 31,0);
    tracep->declBus(c+1364,"raddr", false,-1, 31,0);
    tracep->declBus(c+1828,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+1363,"valid", false,-1);
    tracep->declBus(c+1361,"cmd", false,-1, 7,0);
    tracep->declBus(c+1364,"addr", false,-1, 31,0);
    tracep->declBus(c+1827,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1473,"sck", false,-1);
    tracep->declBit(c+1474,"ce_n", false,-1);
    tracep->declBus(c+1773,"dio", false,-1, 3,0);
    tracep->declBus(c+1983,"PSRAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+1943,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1839,"CMD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1875,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1839,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1940,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+1941,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+1935,"CMD_QPIMODE", false,-1, 7,0);
    tracep->declBus(c+1933,"RD_DELAY", false,-1, 31,0);
    tracep->declBus(c+1836,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1957,"STATE_CMD", false,-1, 3,0);
    tracep->declBus(c+1956,"STATE_ADDR", false,-1, 3,0);
    tracep->declBus(c+1953,"STATE_RD_DELAY", false,-1, 3,0);
    tracep->declBus(c+1932,"STATE_WR", false,-1, 3,0);
    tracep->declBus(c+1954,"STATE_RD", false,-1, 3,0);
    tracep->declBus(c+1955,"STATE_RESP", false,-1, 3,0);
    tracep->declBus(c+1952,"STATE_QPIINIT", false,-1, 3,0);
    tracep->declBus(c+1605,"state", false,-1, 3,0);
    tracep->declBus(c+630,"cmd", false,-1, 7,0);
    tracep->declBus(c+1606,"addr", false,-1, 23,0);
    tracep->declBus(c+631,"wr_byte", false,-1, 7,0);
    tracep->declBit(c+632,"qpi_mode", false,-1);
    tracep->declBus(c+633,"cmd_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+634,"addr_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+635,"rd_delay_cnt", false,-1, 31,0);
    tracep->declBus(c+1607,"data_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+1829,"dio_out_r", false,-1, 3,0);
    tracep->declBus(c+1830,"dio_oe_r", false,-1, 3,0);
    tracep->declBus(c+1773,"dio_in", false,-1, 3,0);
    tracep->declBit(c+636,"cmd_done", false,-1);
    tracep->declBit(c+637,"addr_done", false,-1);
    tracep->declBit(c+1608,"data_done", false,-1);
    tracep->declBit(c+638,"rd_delay_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1_1 ");
    tracep->declBit(c+1774,"clk", false,-1);
    tracep->declBit(c+1560,"cke", false,-1);
    tracep->declBit(c+883,"cs", false,-1);
    tracep->declBit(c+886,"ras", false,-1);
    tracep->declBit(c+887,"cas", false,-1);
    tracep->declBit(c+888,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1561,"ba", false,-1, 1,0);
    tracep->declBus(c+1589,"dqm", false,-1, 1,0);
    tracep->declBus(c+1740,"dq", false,-1, 15,0);
    tracep->declBus(c+1947,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+1984,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1931,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1952,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1953,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1954,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1932,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1955,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1957,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1836,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1958,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1223,"cmd", false,-1, 3,0);
    tracep->declBus(c+1239,"mode", false,-1, 12,0);
    tracep->declBus(c+1240,"row_open", false,-1, 3,0);
    tracep->declBus(c+1241,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1242,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1243,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1244,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1245,"rd_pending", false,-1);
    tracep->declBit(c+1246,"rd_burst", false,-1);
    tracep->declBus(c+1247,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1248,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1249,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1250,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1251,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1252,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1253,"wr_burst", false,-1);
    tracep->declBus(c+1254,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1255,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1256,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1257,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1258,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1259,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1260,"dq_oe", false,-1);
    tracep->declBus(c+1740,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1590,"active_fire", false,-1);
    tracep->declBit(c+1591,"read_fire", false,-1);
    tracep->declBit(c+1592,"write_fire", false,-1);
    tracep->declBit(c+1593,"bst_fire", false,-1);
    tracep->declBit(c+1594,"precharge_fire", false,-1);
    tracep->declBit(c+1595,"refresh_fire", false,-1);
    tracep->declBit(c+1596,"lmr_fire", false,-1);
    tracep->declBus(c+1261,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1262,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1741,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1742,"bank_is_open", false,-1);
    tracep->declBus(c+1263,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1264,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1265,"rd_first_beat", false,-1);
    tracep->declBit(c+1246,"rd_next_beat", false,-1);
    tracep->declBit(c+1260,"rd_data_valid", false,-1);
    tracep->declBus(c+1266,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1267,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram1_2 ");
    tracep->declBit(c+1774,"clk", false,-1);
    tracep->declBit(c+1560,"cke", false,-1);
    tracep->declBit(c+883,"cs", false,-1);
    tracep->declBit(c+886,"ras", false,-1);
    tracep->declBit(c+887,"cas", false,-1);
    tracep->declBit(c+888,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1561,"ba", false,-1, 1,0);
    tracep->declBus(c+1597,"dqm", false,-1, 1,0);
    tracep->declBus(c+1743,"dq", false,-1, 15,0);
    tracep->declBus(c+1947,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+1984,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1931,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1952,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1953,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1954,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1932,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1955,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1957,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1836,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1958,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1223,"cmd", false,-1, 3,0);
    tracep->declBus(c+1268,"mode", false,-1, 12,0);
    tracep->declBus(c+1269,"row_open", false,-1, 3,0);
    tracep->declBus(c+1270,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1271,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1272,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1273,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1274,"rd_pending", false,-1);
    tracep->declBit(c+1275,"rd_burst", false,-1);
    tracep->declBus(c+1276,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1277,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1278,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1279,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1280,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1281,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1282,"wr_burst", false,-1);
    tracep->declBus(c+1283,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1284,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1285,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1286,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1287,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1288,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1289,"dq_oe", false,-1);
    tracep->declBus(c+1743,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1590,"active_fire", false,-1);
    tracep->declBit(c+1591,"read_fire", false,-1);
    tracep->declBit(c+1592,"write_fire", false,-1);
    tracep->declBit(c+1593,"bst_fire", false,-1);
    tracep->declBit(c+1594,"precharge_fire", false,-1);
    tracep->declBit(c+1595,"refresh_fire", false,-1);
    tracep->declBit(c+1596,"lmr_fire", false,-1);
    tracep->declBus(c+1290,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1291,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1744,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1745,"bank_is_open", false,-1);
    tracep->declBus(c+1292,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1293,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1294,"rd_first_beat", false,-1);
    tracep->declBit(c+1275,"rd_next_beat", false,-1);
    tracep->declBit(c+1289,"rd_data_valid", false,-1);
    tracep->declBus(c+1295,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1296,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2_1 ");
    tracep->declBit(c+1774,"clk", false,-1);
    tracep->declBit(c+1560,"cke", false,-1);
    tracep->declBit(c+884,"cs", false,-1);
    tracep->declBit(c+886,"ras", false,-1);
    tracep->declBit(c+887,"cas", false,-1);
    tracep->declBit(c+888,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1561,"ba", false,-1, 1,0);
    tracep->declBus(c+1589,"dqm", false,-1, 1,0);
    tracep->declBus(c+1740,"dq", false,-1, 15,0);
    tracep->declBus(c+1947,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+1984,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1931,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1952,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1953,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1954,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1932,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1955,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1957,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1836,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1958,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1224,"cmd", false,-1, 3,0);
    tracep->declBus(c+1297,"mode", false,-1, 12,0);
    tracep->declBus(c+1298,"row_open", false,-1, 3,0);
    tracep->declBus(c+1299,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1300,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1301,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1302,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1303,"rd_pending", false,-1);
    tracep->declBit(c+1304,"rd_burst", false,-1);
    tracep->declBus(c+1305,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1306,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1307,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1308,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1309,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1310,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1311,"wr_burst", false,-1);
    tracep->declBus(c+1312,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1313,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1314,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1315,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1316,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1317,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1318,"dq_oe", false,-1);
    tracep->declBus(c+1740,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1598,"active_fire", false,-1);
    tracep->declBit(c+1599,"read_fire", false,-1);
    tracep->declBit(c+1600,"write_fire", false,-1);
    tracep->declBit(c+1601,"bst_fire", false,-1);
    tracep->declBit(c+1602,"precharge_fire", false,-1);
    tracep->declBit(c+1603,"refresh_fire", false,-1);
    tracep->declBit(c+1604,"lmr_fire", false,-1);
    tracep->declBus(c+1319,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1320,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1746,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1747,"bank_is_open", false,-1);
    tracep->declBus(c+1321,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1322,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1323,"rd_first_beat", false,-1);
    tracep->declBit(c+1304,"rd_next_beat", false,-1);
    tracep->declBit(c+1318,"rd_data_valid", false,-1);
    tracep->declBus(c+1324,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1325,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram2_2 ");
    tracep->declBit(c+1774,"clk", false,-1);
    tracep->declBit(c+1560,"cke", false,-1);
    tracep->declBit(c+884,"cs", false,-1);
    tracep->declBit(c+886,"ras", false,-1);
    tracep->declBit(c+887,"cas", false,-1);
    tracep->declBit(c+888,"we", false,-1);
    tracep->declBus(c+1571,"a", false,-1, 12,0);
    tracep->declBus(c+1561,"ba", false,-1, 1,0);
    tracep->declBus(c+1597,"dqm", false,-1, 1,0);
    tracep->declBus(c+1743,"dq", false,-1, 15,0);
    tracep->declBus(c+1947,"BANK_ROW", false,-1, 31,0);
    tracep->declBus(c+1984,"BANK_COL", false,-1, 31,0);
    tracep->declBus(c+1931,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1952,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1953,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1954,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1932,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1955,"CMD_BST", false,-1, 3,0);
    tracep->declBus(c+1956,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1957,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1836,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1958,"MODE_RESET", false,-1, 12,0);
    tracep->declBus(c+1224,"cmd", false,-1, 3,0);
    tracep->declBus(c+1326,"mode", false,-1, 12,0);
    tracep->declBus(c+1327,"row_open", false,-1, 3,0);
    tracep->declBus(c+1328,"active_row0", false,-1, 12,0);
    tracep->declBus(c+1329,"active_row1", false,-1, 12,0);
    tracep->declBus(c+1330,"active_row2", false,-1, 12,0);
    tracep->declBus(c+1331,"active_row3", false,-1, 12,0);
    tracep->declBit(c+1332,"rd_pending", false,-1);
    tracep->declBit(c+1333,"rd_burst", false,-1);
    tracep->declBus(c+1334,"rd_lat_cnt", false,-1, 2,0);
    tracep->declBus(c+1335,"rd_bank", false,-1, 1,0);
    tracep->declBus(c+1336,"rd_row", false,-1, 12,0);
    tracep->declBus(c+1337,"rd_base_col", false,-1, 8,0);
    tracep->declBus(c+1338,"rd_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1339,"rd_remain", false,-1, 9,0);
    tracep->declBit(c+1340,"wr_burst", false,-1);
    tracep->declBus(c+1341,"wr_bank", false,-1, 1,0);
    tracep->declBus(c+1342,"wr_row", false,-1, 12,0);
    tracep->declBus(c+1343,"wr_base_col", false,-1, 8,0);
    tracep->declBus(c+1344,"wr_beat_idx", false,-1, 9,0);
    tracep->declBus(c+1345,"wr_remain", false,-1, 9,0);
    tracep->declBus(c+1346,"dq_out", false,-1, 15,0);
    tracep->declBit(c+1347,"dq_oe", false,-1);
    tracep->declBus(c+1743,"dq_in", false,-1, 15,0);
    tracep->declBit(c+1598,"active_fire", false,-1);
    tracep->declBit(c+1599,"read_fire", false,-1);
    tracep->declBit(c+1600,"write_fire", false,-1);
    tracep->declBit(c+1601,"bst_fire", false,-1);
    tracep->declBit(c+1602,"precharge_fire", false,-1);
    tracep->declBit(c+1603,"refresh_fire", false,-1);
    tracep->declBit(c+1604,"lmr_fire", false,-1);
    tracep->declBus(c+1348,"burst_len", false,-1, 9,0);
    tracep->declBus(c+1349,"cas_lat", false,-1, 2,0);
    tracep->declBus(c+1748,"active_row_sel", false,-1, 12,0);
    tracep->declBit(c+1749,"bank_is_open", false,-1);
    tracep->declBus(c+1350,"rd_cur_col", false,-1, 8,0);
    tracep->declBus(c+1351,"wr_cur_col", false,-1, 8,0);
    tracep->declBit(c+1352,"rd_first_beat", false,-1);
    tracep->declBit(c+1333,"rd_next_beat", false,-1);
    tracep->declBit(c+1347,"rd_data_valid", false,-1);
    tracep->declBus(c+1353,"rd_word", false,-1, 15,0);
    tracep->declBus(c+1354,"f_burst_col__Vstatic__tmp", false,-1, 8,0);
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
    VlWide<4>/*127:0*/ __Vtemp_h91274247__0;
    VlWide<4>/*127:0*/ __Vtemp_h5c06b5fc__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+10,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+12,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+14,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+15,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+16,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+17,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+18,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+19,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+20,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+21,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+26,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+27,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+28,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+29,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+30,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
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
    bufp->fullQData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+202,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+205,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+206,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullCData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullCData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullCData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullCData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+268,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+272,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+273,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+274,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+275,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+336,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+346,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+350,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+354,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+358,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+362,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+366,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+370,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+374,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+378,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+386,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+390,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+398,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+402,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+406,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+410,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+414,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+418,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+422,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+430,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+434,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+438,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+442,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+446,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+450,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+458,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+462,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+466,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+470,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[0]),8);
    bufp->fullCData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[1]),8);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[2]),8);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[3]),8);
    bufp->fullCData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[4]),8);
    bufp->fullCData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[5]),8);
    bufp->fullCData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[6]),8);
    bufp->fullCData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[7]),8);
    bufp->fullCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[8]),8);
    bufp->fullCData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[9]),8);
    bufp->fullCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[10]),8);
    bufp->fullCData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[11]),8);
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[12]),8);
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[13]),8);
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[14]),8);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[15]),8);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[16]),8);
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[17]),8);
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[18]),8);
    bufp->fullCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[19]),8);
    bufp->fullCData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[20]),8);
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[21]),8);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[22]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[23]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[24]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[25]),8);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[26]),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[27]),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[28]),8);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[29]),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[30]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo[31]),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),32);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullIData(oldp+554,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                                & (0x21000000U == (0x3fffffffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                                ? 0x28001e0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))
                                                 ? 
                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__frame_buf
                                                [(0x7ffffU 
                                                  & (((0x3fffffffU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                                      - (IData)(0x21000008U)) 
                                                     >> 2U))]
                                                 : 0U))),32);
    bufp->fullBit(oldp+555,((IData)(((0U == (0x30000000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                     & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))))));
    bufp->fullIData(oldp+556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_rd)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data
                                : 0U)),32);
    bufp->fullCData(oldp+557,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullBit(oldp+558,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access))));
    bufp->fullBit(oldp+559,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_access) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write))));
    bufp->fullBit(oldp+560,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullCData(oldp+561,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h116777fd__0))
                                ? 0U : (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1164a660__0))
                                         ? 1U : (((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0))
                                                  ? 2U
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1134853a__0))
                                                   ? 3U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____VdfgTmp_h1138d757__0))
                                                    ? 2U
                                                    : 0U)))))),2);
    bufp->fullBit(oldp+562,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)))));
    bufp->fullBit(oldp+563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+564,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullBit(oldp+565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+566,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+567,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+568,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+569,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+570,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+571,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+572,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+573,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+574,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+575,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+576,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+577,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+578,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+579,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+580,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+581,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+582,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+584,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+585,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+586,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+587,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+588,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+589,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+590,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+591,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+592,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+593,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+594,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+595,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+596,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+597,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+598,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+599,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+600,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+601,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+602,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+603,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+604,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+605,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+606,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+607,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+608,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+609,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+610,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+611,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+612,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+613,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+614,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+615,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+616,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+618,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+619,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+620,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+621,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+622,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+623,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+624,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+625,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+626,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+627,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+628,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+629,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullCData(oldp+630,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullCData(oldp+631,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte),8);
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode));
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt),32);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt),32);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt),32);
    bufp->fullBit(oldp+636,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode)
                              ? (1U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt)
                              : (7U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt))));
    bufp->fullBit(oldp+637,((0x14U == vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt)));
    bufp->fullBit(oldp+638,((5U == vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt)));
    bufp->fullBit(oldp+639,(((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss))));
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt),4);
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso));
    bufp->fullIData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc),32);
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_dnpc),32);
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_flush));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_flush));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush));
    bufp->fullBit(oldp+649,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__arvalid_r))));
    bufp->fullBit(oldp+650,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid)) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)))));
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r),32);
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid));
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_data),32);
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_id_ready));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid));
    bufp->fullIData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_pc),32);
    bufp->fullIData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_inst),32);
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__id_fire));
    bufp->fullBit(oldp+659,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)))));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_arvalid));
    bufp->fullIData(oldp+661,((0xfffffff8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__addr_q)),32);
    bufp->fullBit(oldp+662,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state))));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid));
    bufp->fullIData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_pc),32);
    bufp->fullIData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst),32);
    bufp->fullCData(oldp+666,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+667,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+668,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_imm),32);
    bufp->fullCData(oldp+670,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)),7);
    bufp->fullCData(oldp+671,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+672,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_hdc74ce69__0) 
                             | ((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst))))));
    bufp->fullBit(oldp+674,(((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_ha70c323c__0))));
    bufp->fullBit(oldp+675,(((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                             | ((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                | ((0x33U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                   | ((0x37U == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                      | ((0x17U == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                         | ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                            | ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst))))))))));
    bufp->fullBit(oldp+676,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+677,((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+678,((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+679,(((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                             | (0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)))));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ecall));
    bufp->fullBit(oldp+682,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_haf50de25__0) 
                             & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+683,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_haf50de25__0) 
                             & (0x302U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fencei));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel));
    bufp->fullIData(oldp+686,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                        >> 0xfU))),32);
    bufp->fullCData(oldp+687,(((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))
                                ? 1U : (((0x6fU == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                         | (0x67U == 
                                            (0x7fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)))
                                         ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst)
                                                  ? 3U
                                                  : 0U)))),2);
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_illegal_inst));
    bufp->fullBit(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd)))));
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd),5);
    bufp->fullIData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_wdata),32);
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc),32);
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst),32);
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data),32);
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data),32);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_csr_src1),32);
    bufp->fullIData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm),32);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1),5);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2),5);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd),5);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode),7);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3),3);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct7),7);
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_reg_wen));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_read));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_write));
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wb_sel),2);
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_csr));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ecall));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ebreak));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mret));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fencei));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid));
    bufp->fullCData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_code),5);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_tval),32);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data),32);
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_redirect_valid));
    bufp->fullBit(oldp+719,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid)) 
                             & ((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode)) 
                                & ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm) 
                                   & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3)))))));
    bufp->fullBit(oldp+720,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fencei))));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid));
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_pc),32);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_inst),32);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result),32);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_store_data),32);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_csr_src1),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm),32);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd),5);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_opcode),7);
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3),3);
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_reg_wen));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_read));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_write));
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel),2);
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_is_csr));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ebreak));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid));
    bufp->fullCData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_code),5);
    bufp->fullIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_tval),32);
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_finish_sim));
    bufp->fullBit(oldp+741,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state))));
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_data_r),32);
    bufp->fullBit(oldp+743,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)) 
                             & (5U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)))));
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wmask),8);
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_valid_r));
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r),5);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r),32);
    bufp->fullBit(oldp+748,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state))));
    bufp->fullIData(oldp+749,((0xfffffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_r)),32);
    bufp->fullBit(oldp+750,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state))));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid));
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_data_r),32);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+755,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state))));
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata),32);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tvec),32);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_epc),32);
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_status),32);
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_cause),32);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tval),32);
    bufp->fullCData(oldp+762,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_code)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r))),5);
    bufp->fullIData(oldp+763,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_tval
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r)),32);
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid));
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_pc),32);
    bufp->fullIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_inst),32);
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_reg_wen));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_finish_sim));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready_go));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin));
    bufp->fullBit(oldp+772,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) 
                                      & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_hdc74ce69__0) 
                                           | ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst)))) 
                                          & ((0U != 
                                              (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                  >> 0xfU))) 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                        >> 0xfU)))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0) 
                                                    & ((0x1fU 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd))) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                                                      & ((0x1fU 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd))))))) 
                                         | (((0x23U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_ha70c323c__0)) 
                                            & ((0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                    >> 0x14U))) 
                                               & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                          >> 0x14U)))) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0) 
                                                      & ((0x1fU 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd))) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                                                        & ((0x1fU 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                               >> 0x14U)) 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd)))))))))))));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire));
    bufp->fullBit(oldp+776,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) 
                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_hdc74ce69__0) 
                                 | ((0x67U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel)) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst)))) 
                                & ((0U != (0x1fU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                            >> 0xfU))) 
                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd) 
                                          == (0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0xfU)))) 
                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0) 
                                          & ((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd))) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                                            & ((0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                   >> 0xfU)) 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd))))))))));
    bufp->fullBit(oldp+777,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) 
                             & (((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_ha70c323c__0)) 
                                & ((0U != (0x1fU & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                            >> 0x14U))) 
                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd) 
                                          == (0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0x14U)))) 
                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0) 
                                          & ((0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd))) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                                            & ((0x1fU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd))))))))));
    bufp->fullBit(oldp+778,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) 
                             & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_hdc74ce69__0) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                     | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel)) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst)))) 
                                 & ((0U != (0x1fU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                             >> 0xfU))) 
                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0) 
                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd) 
                                           == (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                  >> 0xfU)))) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0) 
                                           & ((0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd))) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                                             & ((0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                    >> 0xfU)) 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd))))))) 
                                | (((0x23U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_ha70c323c__0)) 
                                   & ((0U != (0x1fU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0x14U))) 
                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd) 
                                             == (0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                    >> 0x14U)))) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0) 
                                             & ((0x1fU 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd))) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                                               & ((0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd)))))))))));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_effective_exc_valid));
    bufp->fullIData(oldp+780,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result)
                                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_data_r
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result))),32);
    bufp->fullBit(oldp+781,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state))));
    bufp->fullBit(oldp+782,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state))));
    bufp->fullIData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata),32);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid),4);
    bufp->fullIData(oldp+785,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc)),32);
    bufp->fullQData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__Vstatic__p),64);
    bufp->fullQData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__Vstatic__p),64);
    bufp->fullQData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__Vstatic__p),64);
    bufp->fullQData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__a_ext),64);
    bufp->fullQData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__b_ext),64);
    bufp->fullWData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__p),128);
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__branch_taken));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__aw_done_r));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__w_done_r));
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state),2);
    bufp->fullIData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi),32);
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low),32);
    bufp->fullBit(oldp+806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_effective_exc_valid)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_is_csr)))));
    bufp->fullSData(oldp+807,((0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm)),12);
    bufp->fullBit(oldp+808,((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_opcode))));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wen));
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wdata),32);
    bufp->fullSData(oldp+811,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+812,((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+813,((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+814,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+815,((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+816,((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+817,((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullBit(oldp+818,((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))));
    bufp->fullWData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0),128);
    bufp->fullWData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1),128);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__addr_q),32);
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q),22);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q),7);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__offset_q),3);
    bufp->fullIData(oldp+831,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                               >> 0xaU)),22);
    bufp->fullCData(oldp+832,((0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                        >> 3U))),7);
    bufp->fullCData(oldp+833,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r)),3);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit0));
    bufp->fullBit(oldp+835,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[
                              (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                     >> 8U))] >> (0x1fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                                     >> 3U))) 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1
                                [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                           >> 3U))] 
                                == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit));
    bufp->fullWData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit),128);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt));
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_data_buf),32);
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_drop_q));
    bufp->fullQData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt),64);
    bufp->fullQData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt),64);
    bufp->fullQData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt),64);
    bufp->fullQData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles),64);
    bufp->fullQData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles),64);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy));
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state),2);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__arvalid_r));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_outstanding));
    bufp->fullIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_pc),32);
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__start_fetch));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state),3);
    bufp->fullIData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_r),32);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__funct3_r),3);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__offset_r),2);
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_done_r));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_done_r));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_load));
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_store));
    bufp->fullCData(oldp+871,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result)),2);
    bufp->fullBit(oldp+872,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)))));
    bufp->fullBit(oldp+873,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3))));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_misalign));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_misalign));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_misalign));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__capture_req));
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__shifted),32);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_byte),8);
    bufp->fullSData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_half),16);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint));
    bufp->fullBit(oldp+883,((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q)))));
    bufp->fullBit(oldp+884,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q)) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                      >> 3U)))));
    bufp->fullBit(oldp+885,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+886,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+887,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+888,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullBit(oldp+889,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
    bufp->fullBit(oldp+890,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy)))));
    bufp->fullBit(oldp+891,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy)))));
    bufp->fullBit(oldp+892,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy)))));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid));
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_q),4);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q),2);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid));
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q),4);
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q),32);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q),8);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize_q),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q),2);
    bufp->fullBit(oldp+902,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy) 
                             & ((8U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent)))));
    bufp->fullBit(oldp+903,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
                             & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 5U)))));
    bufp->fullCData(oldp+904,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr]),32);
    bufp->fullBit(oldp+906,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                   >> 4U))));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid));
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q),4);
    bufp->fullIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q),32);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q),8);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awsize_q),3);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q),2);
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid));
    bufp->fullIData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q),32);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstrb_q),4);
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q));
    bufp->fullBit(oldp+917,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent)))));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid));
    bufp->fullQData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt),64);
    bufp->fullQData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc),64);
    bufp->fullBit(oldp+923,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))));
    bufp->fullBit(oldp+924,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire));
    bufp->fullQData(oldp+928,((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                               + (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                  - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc))),64);
    bufp->fullQData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt),64);
    bufp->fullQData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc),64);
    bufp->fullQData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc),64);
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bready_q));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_b_fire));
    __Vtemp_h91274247__0[0U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr] 
                                 << 7U) | ((0x78U & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                             << 3U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                               >> 4U))));
    __Vtemp_h91274247__0[1U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr] 
                                 >> 0x19U) | ((IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                                                       + 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                                        - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc))) 
                                              << 7U));
    __Vtemp_h91274247__0[2U] = (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                                          + (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                             - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc))) 
                                 >> 0x19U) | ((IData)(
                                                      ((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                                                        + 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                                         - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc)) 
                                                       >> 0x20U)) 
                                              << 7U));
    __Vtemp_h91274247__0[3U] = ((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                                          + (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
                                             - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc)) 
                                         >> 0x20U)) 
                                >> 0x19U);
    bufp->fullWData(oldp+943,(__Vtemp_h91274247__0),103);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr),3);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count),4);
    bufp->fullSData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl),16);
    bufp->fullSData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state),16);
    bufp->fullIData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl),32);
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve));
    bufp->fullSData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf),11);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt),4);
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn0));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn1));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_syn1_dly));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_pulse));
    bufp->fullCData(oldp+960,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                        >> 2U))),8);
    bufp->fullBit(oldp+961,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
    bufp->fullBit(oldp+962,((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
    bufp->fullIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status),32);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr),5);
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr),5);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count),6);
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_sck));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_ce_n));
    bufp->fullCData(oldp+969,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+970,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+973,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+974,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+977,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+978,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))));
    bufp->fullBit(oldp+979,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ready));
    bufp->fullBit(oldp+982,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state),2);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__nstate),2);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter),4);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+989,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+993,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w));
    bufp->fullIData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullCData(oldp+997,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q)
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q)
                                    : 0U))),8);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+1010,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+1011,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+1014,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1015,(((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1016,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+1017,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+1018,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+1020,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid))));
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+1028,((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q));
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[0]),4);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[1]),4);
    bufp->fullSData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                               [0U][0U]),13);
    bufp->fullSData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                               [0U][1U]),13);
    bufp->fullSData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                               [0U][2U]),13);
    bufp->fullSData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                               [0U][3U]),13);
    bufp->fullSData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                               [1U][0U]),13);
    bufp->fullSData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                               [1U][1U]),13);
    bufp->fullSData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                               [1U][2U]),13);
    bufp->fullSData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q
                               [1U][3U]),13);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rd_q));
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q),32);
    bufp->fullBit(oldp+1055,((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q])));
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullIData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ridx),32);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),4);
    bufp->fullBit(oldp+1061,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1062,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1064,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1082,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1083,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1084,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1085,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1086,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1087,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1088,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
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
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1091,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1092,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1093,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1112,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1119,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1138,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1139,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1140,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1141,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1142,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1161,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1162,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1163,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1164,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1165,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1167,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1186,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1203,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1214,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullIData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync),32);
    bufp->fullIData(oldp+1218,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_hvalid)
                                   ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                                - (IData)(0x90U)))
                                   : 0U) << 9U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_vvalid)
                                                    ? 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                                       - (IData)(0x23U)))
                                                    : 0U))),19);
    bufp->fullBit(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_hvalid));
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_vvalid));
    bufp->fullSData(oldp+1221,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_hvalid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt) 
                                              - (IData)(0x90U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_vvalid)
                                 ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt) 
                                              - (IData)(0x23U)))
                                 : 0U)),10);
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cmd),4);
    bufp->fullCData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cmd),4);
    bufp->fullCData(oldp+1225,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                                 ? 0U : (0xfU & (vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                                 >> 3U)))),4);
    bufp->fullIData(oldp+1226,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                                 ? 0U : ((vlSelf->__VdfgTmp_hb5d34fc7__0[1U] 
                                          << 0x19U) 
                                         | (vlSelf->__VdfgTmp_hb5d34fc7__0[0U] 
                                            >> 7U)))),32);
    bufp->fullCData(oldp+1227,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
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
    bufp->fullWData(oldp+1228,(__Vtemp_h5c06b5fc__0),103);
    bufp->fullSData(oldp+1232,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q) 
                                 << 0xdU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))),14);
    bufp->fullBit(oldp+1233,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))));
    bufp->fullBit(oldp+1234,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))));
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))));
    bufp->fullCData(oldp+1236,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
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
    bufp->fullBit(oldp+1237,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
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
    bufp->fullBit(oldp+1238,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
                                    [(1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                            >> 0x19U))] 
                                    >> (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                              >> 0xbU))))));
    bufp->fullSData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode),13);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open),4);
    bufp->fullSData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0),13);
    bufp->fullSData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1),13);
    bufp->fullSData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2),13);
    bufp->fullSData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3),13);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending));
    bufp->fullBit(oldp+1246,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst));
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_bank),2);
    bufp->fullSData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_row),13);
    bufp->fullSData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain),10);
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst));
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank),2);
    bufp->fullSData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row),13);
    bufp->fullSData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain),10);
    bufp->fullSData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_out),16);
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_oe));
    bufp->fullSData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len),10);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cas_lat),3);
    bufp->fullSData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1265,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_word),16);
    bufp->fullSData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullSData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode),13);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open),4);
    bufp->fullSData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0),13);
    bufp->fullSData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1),13);
    bufp->fullSData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2),13);
    bufp->fullSData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3),13);
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst));
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_bank),2);
    bufp->fullSData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_row),13);
    bufp->fullSData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain),10);
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst));
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank),2);
    bufp->fullSData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row),13);
    bufp->fullSData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1287,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain),10);
    bufp->fullSData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_out),16);
    bufp->fullBit(oldp+1289,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_oe));
    bufp->fullSData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len),10);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__cas_lat),3);
    bufp->fullSData(oldp+1292,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1294,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_word),16);
    bufp->fullSData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullSData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode),13);
    bufp->fullCData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open),4);
    bufp->fullSData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0),13);
    bufp->fullSData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1),13);
    bufp->fullSData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2),13);
    bufp->fullSData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3),13);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst));
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_bank),2);
    bufp->fullSData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_row),13);
    bufp->fullSData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain),10);
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst));
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank),2);
    bufp->fullSData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row),13);
    bufp->fullSData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain),10);
    bufp->fullSData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_out),16);
    bufp->fullBit(oldp+1318,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_oe));
    bufp->fullSData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len),10);
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cas_lat),3);
    bufp->fullSData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1323,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_word),16);
    bufp->fullSData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullSData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode),13);
    bufp->fullCData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open),4);
    bufp->fullSData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0),13);
    bufp->fullSData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1),13);
    bufp->fullSData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2),13);
    bufp->fullSData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3),13);
    bufp->fullBit(oldp+1332,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending));
    bufp->fullBit(oldp+1333,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst));
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt),3);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_bank),2);
    bufp->fullSData(oldp+1336,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_row),13);
    bufp->fullSData(oldp+1337,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_base_col),9);
    bufp->fullSData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx),10);
    bufp->fullSData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain),10);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst));
    bufp->fullCData(oldp+1341,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank),2);
    bufp->fullSData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row),13);
    bufp->fullSData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_base_col),9);
    bufp->fullSData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx),10);
    bufp->fullSData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain),10);
    bufp->fullSData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_out),16);
    bufp->fullBit(oldp+1347,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_oe));
    bufp->fullSData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len),10);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__cas_lat),3);
    bufp->fullSData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col),9);
    bufp->fullSData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col),9);
    bufp->fullBit(oldp+1352,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt)))));
    bufp->fullSData(oldp+1353,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_word),16);
    bufp->fullSData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp),9);
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_shift),8);
    bufp->fullBit(oldp+1356,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_done));
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_en));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_last_bit));
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullBit(oldp+1363,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1364,((1U | (0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                   << 1U)))),32);
    bufp->fullIData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullIData(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable));
    bufp->fullIData(oldp+1371,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel));
    bufp->fullBit(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable));
    bufp->fullIData(oldp+1374,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+1375,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+1376,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+1377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access));
    bufp->fullBit(oldp+1378,(((~ ((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                  | ((4U == (0xffU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                     | ((8U == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                        | (0xcU == 
                                           (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access))));
    bufp->fullBit(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1382,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+1385,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_rd) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_err))));
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_err));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1389,((0U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1392,((2U == (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                           >> 0x1cU)))));
    bufp->fullCData(oldp+1393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+1394,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0]),32);
    bufp->fullIData(oldp+1396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[1]),32);
    bufp->fullIData(oldp+1397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[2]),32);
    bufp->fullIData(oldp+1398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[3]),32);
    bufp->fullIData(oldp+1399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[4]),32);
    bufp->fullIData(oldp+1400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[5]),32);
    bufp->fullIData(oldp+1401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[6]),32);
    bufp->fullIData(oldp+1402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[7]),32);
    bufp->fullIData(oldp+1403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[8]),32);
    bufp->fullIData(oldp+1404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[9]),32);
    bufp->fullIData(oldp+1405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[10]),32);
    bufp->fullIData(oldp+1406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[11]),32);
    bufp->fullIData(oldp+1407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[12]),32);
    bufp->fullIData(oldp+1408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[13]),32);
    bufp->fullIData(oldp+1409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[14]),32);
    bufp->fullIData(oldp+1410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[15]),32);
    bufp->fullIData(oldp+1411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[16]),32);
    bufp->fullIData(oldp+1412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[17]),32);
    bufp->fullIData(oldp+1413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[18]),32);
    bufp->fullIData(oldp+1414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[19]),32);
    bufp->fullIData(oldp+1415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[20]),32);
    bufp->fullIData(oldp+1416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[21]),32);
    bufp->fullIData(oldp+1417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[22]),32);
    bufp->fullIData(oldp+1418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[23]),32);
    bufp->fullIData(oldp+1419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[24]),32);
    bufp->fullIData(oldp+1420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[25]),32);
    bufp->fullIData(oldp+1421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[26]),32);
    bufp->fullIData(oldp+1422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[27]),32);
    bufp->fullIData(oldp+1423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[28]),32);
    bufp->fullIData(oldp+1424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[29]),32);
    bufp->fullIData(oldp+1425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[30]),32);
    bufp->fullIData(oldp+1426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[31]),32);
    bufp->fullIData(oldp+1427,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1428,(((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                              | ((4U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                 | ((8U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                                    | (0xcU == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))))));
    bufp->fullBit(oldp+1429,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel))));
    bufp->fullBit(oldp+1430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr));
    bufp->fullCData(oldp+1431,((0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),8);
    bufp->fullBit(oldp+1432,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_4_psel))));
    bufp->fullBit(oldp+1433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__apb_access));
    bufp->fullBit(oldp+1434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_read));
    bufp->fullBit(oldp+1435,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_read) 
                              & (4U == (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullCData(oldp+1437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1440,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1441,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1442,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__addr),24);
    bufp->fullCData(oldp+1444,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullCData(oldp+1445,((0xffU & ((IData)(7U) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullIData(oldp+1446,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+1447,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel))));
    bufp->fullBit(oldp+1448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_access));
    bufp->fullBit(oldp+1449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_rd));
    bufp->fullBit(oldp+1450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_wr));
    bufp->fullBit(oldp+1451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash));
    bufp->fullBit(oldp+1452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg));
    bufp->fullBit(oldp+1453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_flash_rd));
    bufp->fullBit(oldp+1454,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_rd) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg))));
    bufp->fullBit(oldp+1455,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_wr) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg))));
    bufp->fullBit(oldp+1456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_wr) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash))));
    bufp->fullBit(oldp+1457,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_access))));
    bufp->fullIData(oldp+1458,(((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                - (IData)(0x30000000U))),32);
    bufp->fullIData(oldp+1459,((0xfffffcU & ((0x3fffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                             - (IData)(0x30000000U)))),32);
    bufp->fullCData(oldp+1460,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                      >> 2U))),3);
    bufp->fullCData(oldp+1461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+1463,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_5_psel))));
    bufp->fullBit(oldp+1464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_access));
    bufp->fullBit(oldp+1465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr));
    bufp->fullBit(oldp+1466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd));
    bufp->fullBit(oldp+1467,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                              & (0x21000000U == (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1468,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr) 
                              & (0x21000004U == (0x3fffffffU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    bufp->fullBit(oldp+1469,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))));
    bufp->fullBit(oldp+1470,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))));
    bufp->fullIData(oldp+1471,(((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                - (IData)(0x21000008U))),32);
    bufp->fullIData(oldp+1472,((0x7ffffU & (((0x3fffffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr) 
                                             - (IData)(0x21000008U)) 
                                            >> 2U))),19);
    bufp->fullBit(oldp+1473,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1474,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1475,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1476,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1481,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rvalid));
    bufp->fullBit(oldp+1482,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast));
    bufp->fullBit(oldp+1483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid));
    bufp->fullCData(oldp+1484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid),4);
    bufp->fullBit(oldp+1485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rvalid));
    bufp->fullCData(oldp+1486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid),4);
    bufp->fullBit(oldp+1487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rlast));
    bufp->fullSData(oldp+1488,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)))),16);
    bufp->fullSData(oldp+1489,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)))),16);
    bufp->fullBit(oldp+1490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_1));
    bufp->fullBit(oldp+1506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren));
    bufp->fullCData(oldp+1507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+1516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_araddr),32);
    bufp->fullCData(oldp+1518,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                 ? 1U : 0U)),8);
    bufp->fullCData(oldp+1519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arsize),3);
    bufp->fullCData(oldp+1520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arburst),2);
    bufp->fullIData(oldp+1521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awaddr),32);
    bufp->fullCData(oldp+1522,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                 ? 2U : 0U)),3);
    bufp->fullCData(oldp+1523,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                 ? 1U : 0U)),2);
    bufp->fullIData(oldp+1524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wdata),32);
    bufp->fullCData(oldp+1525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wstrb),4);
    bufp->fullBit(oldp+1526,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+1527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awvalid));
    bufp->fullBit(oldp+1528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_wvalid));
    bufp->fullBit(oldp+1529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready));
    bufp->fullBit(oldp+1530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_arvalid));
    bufp->fullBit(oldp+1531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready));
    bufp->fullBit(oldp+1532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullCData(oldp+1536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_enq_bits),2);
    bufp->fullBit(oldp+1537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid));
    bufp->fullBit(oldp+1538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready));
    bufp->fullBit(oldp+1539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid));
    bufp->fullBit(oldp+1540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wvalid));
    bufp->fullBit(oldp+1541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_bready));
    bufp->fullBit(oldp+1542,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint))));
    bufp->fullBit(oldp+1543,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint))));
    bufp->fullCData(oldp+1544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state),3);
    bufp->fullBit(oldp+1545,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+1546,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+1547,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+1548,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+1549,((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+1550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_ar_fire));
    bufp->fullBit(oldp+1551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint));
    bufp->fullBit(oldp+1552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint));
    bufp->fullBit(oldp+1553,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready))));
    bufp->fullBit(oldp+1554,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rvalid))));
    bufp->fullBit(oldp+1555,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready))));
    bufp->fullBit(oldp+1556,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rvalid))));
    bufp->fullBit(oldp+1557,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT____VdfgTmp_hbb1cbb0c__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready))));
    bufp->fullBit(oldp+1558,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT____VdfgTmp_hdbfce646__0) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wready))));
    bufp->fullBit(oldp+1559,(((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_bvalid))));
    bufp->fullBit(oldp+1560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),2);
    bufp->fullCData(oldp+1562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullBit(oldp+1563,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready));
    bufp->fullBit(oldp+1564,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready));
    bufp->fullBit(oldp+1565,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready));
    bufp->fullIData(oldp+1566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w),32);
    bufp->fullCData(oldp+1567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w),4);
    bufp->fullBit(oldp+1568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w));
    bufp->fullBit(oldp+1569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+1570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullSData(oldp+1571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullCData(oldp+1573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+1574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullCData(oldp+1575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_bank_q),2);
    bufp->fullSData(oldp+1577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_row_q),13);
    bufp->fullSData(oldp+1578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_col_q),13);
    bufp->fullCData(oldp+1579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_wr_q),4);
    bufp->fullBit(oldp+1580,((1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                    >> 0x19U))));
    bufp->fullCData(oldp+1581,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                      >> 0xbU))),2);
    bufp->fullSData(oldp+1582,((0x1ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 2U))),13);
    bufp->fullSData(oldp+1583,((0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                                          >> 0xdU))),13);
    bufp->fullCData(oldp+1584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullIData(oldp+1585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullCData(oldp+1589,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullBit(oldp+1590,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_fire));
    bufp->fullBit(oldp+1591,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__read_fire));
    bufp->fullBit(oldp+1592,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire));
    bufp->fullBit(oldp+1593,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bst_fire));
    bufp->fullBit(oldp+1594,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__precharge_fire));
    bufp->fullBit(oldp+1595,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__refresh_fire));
    bufp->fullBit(oldp+1596,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__lmr_fire));
    bufp->fullCData(oldp+1597,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1598,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_fire));
    bufp->fullBit(oldp+1599,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__read_fire));
    bufp->fullBit(oldp+1600,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire));
    bufp->fullBit(oldp+1601,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bst_fire));
    bufp->fullBit(oldp+1602,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__precharge_fire));
    bufp->fullBit(oldp+1603,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__refresh_fire));
    bufp->fullBit(oldp+1604,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__lmr_fire));
    bufp->fullCData(oldp+1605,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+1606,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullIData(oldp+1607,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt),32);
    bufp->fullBit(oldp+1608,((0x1cU == vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)));
    bufp->fullBit(oldp+1609,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1610,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+1612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1614,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1615,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1616,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1617,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1618,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1624,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1626,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1627,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+1628,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+1629,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+1630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1633,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullCData(oldp+1634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+1635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullIData(oldp+1639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+1640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullBit(oldp+1641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1644,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1645,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1646,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1647,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1648,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1649,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullSData(oldp+1650,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1651,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+1653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+1656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awIn_0_io_deq_bits),2);
    bufp->fullBit(oldp+1658,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1659,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1660,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((6U & (4U ^ 
                                               (0x1eU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1bU)))) 
                                        | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x18U)))))));
    bufp->fullBit(oldp+1661,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1662,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1663,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1668,((0U == ((6U & (4U ^ (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1bU)))) 
                                     | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+1669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+1676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_rdata1),32);
    bufp->fullIData(oldp+1677,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1680,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready));
    bufp->fullBit(oldp+1681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire));
    bufp->fullBit(oldp+1682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire));
    bufp->fullBit(oldp+1683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire));
    bufp->fullBit(oldp+1684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_w_fire));
    bufp->fullBit(oldp+1685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire));
    bufp->fullBit(oldp+1686,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+1687,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1688,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1690,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1699,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1701,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awready));
    bufp->fullBit(oldp+1705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_arready));
    bufp->fullBit(oldp+1706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+1707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+1708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullIData(oldp+1718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata),32);
    bufp->fullBit(oldp+1719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast));
    bufp->fullCData(oldp+1720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_rresp),2);
    bufp->fullCData(oldp+1721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullBit(oldp+1722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready));
    bufp->fullBit(oldp+1723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rvalid));
    bufp->fullBit(oldp+1724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready));
    bufp->fullBit(oldp+1725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wready));
    bufp->fullBit(oldp+1726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_bvalid));
    bufp->fullBit(oldp+1727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_ar_fire));
    bufp->fullBit(oldp+1728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire));
    bufp->fullBit(oldp+1729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_aw_fire));
    bufp->fullBit(oldp+1730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_w_fire));
    bufp->fullBit(oldp+1731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_b_fire));
    bufp->fullBit(oldp+1732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire));
    bufp->fullBit(oldp+1733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_ar_fire));
    bufp->fullCData(oldp+1734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state_next),3);
    bufp->fullBit(oldp+1735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_fire));
    bufp->fullBit(oldp+1736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_fire));
    bufp->fullBit(oldp+1737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_fire));
    bufp->fullBit(oldp+1738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__b_fire));
    bufp->fullIData(oldp+1739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1740,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1741,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1742,(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open));
    bufp->fullSData(oldp+1743,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullSData(oldp+1744,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1745,(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open));
    bufp->fullSData(oldp+1746,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1747,(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open));
    bufp->fullSData(oldp+1748,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row_sel),13);
    bufp->fullBit(oldp+1749,(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open));
    bufp->fullBit(oldp+1750,(vlSelf->clock));
    bufp->fullBit(oldp+1751,(vlSelf->reset));
    bufp->fullSData(oldp+1752,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1753,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1754,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1755,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1756,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1757,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1758,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1759,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1760,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1761,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1762,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1763,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1764,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1765,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1766,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1767,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1768,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1769,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1770,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1771,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1772,((((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                << 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   >> 8U)) 
                                               | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                  >> 0x18U))))
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1774,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1775,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)
                                 ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                     ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr])
                                 : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_read) 
                                     & (4U == (0xfU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status
                                     : 0U))),32);
    bufp->fullIData(oldp+1776,(((0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl)
                                 : ((4U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state)
                                     : ((8U == (0xffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl
                                         : ((0xcU == 
                                             (0xffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve)
                                             : 0U))))),32);
    bufp->fullBit(oldp+1777,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1778,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1779,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullQData(oldp+1780,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
                                 << 0x23U) | (((QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r))) 
                                               << 3U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold) 
                                                                    << 1U))))))),39);
    bufp->fullQData(oldp+1782,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+1784,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                 << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                               << 0xbU) 
                                              | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+1786,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1))));
    bufp->fullBit(oldp+1787,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_2)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_2_1)))));
    bufp->fullBit(oldp+1788,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1))));
    bufp->fullBit(oldp+1789,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_readys_1)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+1790,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))))));
    bufp->fullBit(oldp+1791,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1792,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid_0))));
    bufp->fullCData(oldp+1793,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_3_0)
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
    bufp->fullIData(oldp+1794,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullCData(oldp+1795,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
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
    bufp->fullBit(oldp+1796,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1)))));
    bufp->fullBit(oldp+1797,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullIData(oldp+1798,(((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0x14U)))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf
                                [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                           >> 0x14U))]
                                 : 0U)),32);
    bufp->fullIData(oldp+1799,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel)
                                 ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                             >> 0xfU))
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_rdata1)),32);
    bufp->fullCData(oldp+1800,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid))),4);
    bufp->fullCData(oldp+1801,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)
                                 ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid))),4);
    bufp->fullBit(oldp+1802,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready))));
    bufp->fullBit(oldp+1803,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wvalid))));
    bufp->fullBit(oldp+1804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_bready))));
    bufp->fullCData(oldp+1805,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                 ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                         ? 0U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_b_fire)
                                                  ? 0U
                                                  : 6U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                         ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__aw_done_r) 
                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_aw_fire)) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__w_done_r) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_w_fire)))
                                             ? 6U : 
                                            ((1U & 
                                              ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid))) 
                                                & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__aw_done_r))) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__w_done_r))))
                                              ? 0U : 5U))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire)
                                             ? 0U : 4U)))
                                 : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                     ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_ar_fire)
                                             ? 4U : 
                                            ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state))
                                              ? 3U : 0U))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire)
                                             ? 0U : 2U))
                                     : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_ar_fire)
                                             ? 2U : 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_arvalid)
                                              ? 1U : 0U))
                                         : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid) 
                                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid))
                                             ? 5U : 
                                            ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state))
                                              ? 3U : 
                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_arvalid)
                                               ? 1U
                                               : 0U))))))),3);
    bufp->fullBit(oldp+1806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__aw_done_r) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_aw_fire))));
    bufp->fullBit(oldp+1807,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__w_done_r) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_w_fire))));
    bufp->fullBit(oldp+1808,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready)))));
    bufp->fullBit(oldp+1809,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))));
    bufp->fullBit(oldp+1810,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)) 
                              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready)))));
    bufp->fullBit(oldp+1811,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_done_r) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_fire))));
    bufp->fullBit(oldp+1812,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_done_r) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_fire))));
    bufp->fullBit(oldp+1813,(((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)) 
                              & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                     >> 1U)) & ((IData)(vlSelf->externalPins_ps2_data) 
                                                & VL_REDXOR_32(
                                                               (0x1ffU 
                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                                                   >> 2U))))))));
    bufp->fullBit(oldp+1814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen));
    bufp->fullCData(oldp+1815,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                 ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr])),8);
    bufp->fullBit(oldp+1816,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1817,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))
                                     ? 0U : 2U) : (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))),2);
    bufp->fullBit(oldp+1818,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1821,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1823,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt),3);
    bufp->fullBit(oldp+1824,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_en));
    bufp->fullBit(oldp+1825,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   << 8U)) 
                                               | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))))
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1826,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullIData(oldp+1827,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1828,(((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                    >> 0x18U))))),32);
    bufp->fullCData(oldp+1829,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out_r),4);
    bufp->fullCData(oldp+1830,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe_r),4);
    bufp->fullCData(oldp+1831,(0U),8);
    bufp->fullBit(oldp+1832,(1U));
    bufp->fullCData(oldp+1833,(1U),3);
    bufp->fullBit(oldp+1834,(0U));
    bufp->fullIData(oldp+1835,(1U),32);
    bufp->fullCData(oldp+1836,(0U),4);
    bufp->fullCData(oldp+1837,(0U),2);
    bufp->fullIData(oldp+1838,(0x67U),32);
    bufp->fullIData(oldp+1839,(8U),32);
    bufp->fullIData(oldp+1840,(3U),32);
    bufp->fullIData(oldp+1841,(4U),32);
    bufp->fullSData(oldp+1842,(1U),16);
    bufp->fullBit(oldp+1843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+1844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullBit(oldp+1845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+1846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullBit(oldp+1847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+1848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullBit(oldp+1849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+1850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullBit(oldp+1851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+1852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullBit(oldp+1853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+1854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullBit(oldp+1855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+1856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullBit(oldp+1857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+1858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullBit(oldp+1859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+1860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullBit(oldp+1861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+1862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullBit(oldp+1863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+1864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullBit(oldp+1865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+1866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullBit(oldp+1867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+1868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullBit(oldp+1869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+1870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullBit(oldp+1871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullBit(oldp+1872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullIData(oldp+1873,(0U),32);
    bufp->fullCData(oldp+1874,(0U),3);
    bufp->fullIData(oldp+1875,(0x20U),32);
    bufp->fullIData(oldp+1876,(7U),32);
    bufp->fullIData(oldp+1877,(5U),32);
    bufp->fullIData(oldp+1878,(0x30000000U),32);
    bufp->fullIData(oldp+1879,(0x13U),32);
    bufp->fullCData(oldp+1880,(1U),2);
    bufp->fullCData(oldp+1881,(2U),2);
    bufp->fullCData(oldp+1882,(3U),2);
    bufp->fullCData(oldp+1883,(2U),5);
    bufp->fullCData(oldp+1884,(0xbU),5);
    bufp->fullCData(oldp+1885,(0x73U),7);
    bufp->fullCData(oldp+1886,(2U),3);
    bufp->fullCData(oldp+1887,(1U),8);
    bufp->fullCData(oldp+1888,(3U),7);
    bufp->fullCData(oldp+1889,(0x13U),7);
    bufp->fullCData(oldp+1890,(0x67U),7);
    bufp->fullCData(oldp+1891,(0x63U),7);
    bufp->fullCData(oldp+1892,(0x6fU),7);
    bufp->fullCData(oldp+1893,(0x23U),7);
    bufp->fullCData(oldp+1894,(0x37U),7);
    bufp->fullCData(oldp+1895,(0x17U),7);
    bufp->fullCData(oldp+1896,(0x33U),7);
    bufp->fullCData(oldp+1897,(0U),7);
    bufp->fullCData(oldp+1898,(0x20U),7);
    bufp->fullCData(oldp+1899,(1U),7);
    bufp->fullCData(oldp+1900,(3U),3);
    bufp->fullCData(oldp+1901,(4U),3);
    bufp->fullCData(oldp+1902,(5U),3);
    bufp->fullCData(oldp+1903,(6U),3);
    bufp->fullIData(oldp+1904,(0x2000000U),32);
    bufp->fullIData(oldp+1905,(0x2000004U),32);
    bufp->fullSData(oldp+1906,(0x300U),12);
    bufp->fullSData(oldp+1907,(0x305U),12);
    bufp->fullSData(oldp+1908,(0x341U),12);
    bufp->fullSData(oldp+1909,(0x342U),12);
    bufp->fullSData(oldp+1910,(0x343U),12);
    bufp->fullSData(oldp+1911,(0xf11U),12);
    bufp->fullSData(oldp+1912,(0xf12U),12);
    bufp->fullIData(oldp+1913,(0x79737978U),32);
    bufp->fullIData(oldp+1914,(0x16fe3b5U),32);
    bufp->fullSData(oldp+1915,(0U),12);
    bufp->fullSData(oldp+1916,(1U),12);
    bufp->fullSData(oldp+1917,(0x302U),12);
    bufp->fullIData(oldp+1918,(0x80U),32);
    bufp->fullIData(oldp+1919,(0x40U),32);
    bufp->fullIData(oldp+1920,(0x16U),32);
    bufp->fullQData(oldp+1921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__req_cycle_cnt),64);
    bufp->fullIData(oldp+1923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__i),32);
    bufp->fullCData(oldp+1924,(4U),5);
    bufp->fullCData(oldp+1925,(5U),5);
    bufp->fullCData(oldp+1926,(6U),5);
    bufp->fullCData(oldp+1927,(7U),5);
    bufp->fullCData(oldp+1928,(4U),8);
    bufp->fullCData(oldp+1929,(8U),8);
    bufp->fullCData(oldp+1930,(0xcU),8);
    bufp->fullIData(oldp+1931,(0x10U),32);
    bufp->fullCData(oldp+1932,(4U),4);
    bufp->fullIData(oldp+1933,(6U),32);
    bufp->fullBit(oldp+1934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_init));
    bufp->fullCData(oldp+1935,(0x35U),8);
    bufp->fullBit(oldp+1936,(0U));
    bufp->fullBit(oldp+1937,(1U));
    bufp->fullCData(oldp+1938,(0x1bU),8);
    bufp->fullCData(oldp+1939,(0x15U),8);
    bufp->fullCData(oldp+1940,(0xebU),8);
    bufp->fullCData(oldp+1941,(0x38U),8);
    bufp->fullIData(oldp+1942,(0x64U),32);
    bufp->fullIData(oldp+1943,(0x18U),32);
    bufp->fullIData(oldp+1944,(9U),32);
    bufp->fullIData(oldp+1945,(2U),32);
    bufp->fullIData(oldp+1946,(0xdU),32);
    bufp->fullIData(oldp+1947,(0x2000U),32);
    bufp->fullIData(oldp+1948,(0x2710U),32);
    bufp->fullIData(oldp+1949,(0x30cU),32);
    bufp->fullIData(oldp+1950,(1U),32);
    bufp->fullIData(oldp+1951,(0x19U),32);
    bufp->fullCData(oldp+1952,(7U),4);
    bufp->fullCData(oldp+1953,(3U),4);
    bufp->fullCData(oldp+1954,(5U),4);
    bufp->fullCData(oldp+1955,(6U),4);
    bufp->fullCData(oldp+1956,(2U),4);
    bufp->fullCData(oldp+1957,(1U),4);
    bufp->fullSData(oldp+1958,(0x20U),13);
    bufp->fullCData(oldp+1959,(8U),4);
    bufp->fullIData(oldp+1960,(0xaU),32);
    bufp->fullIData(oldp+1961,(0x11U),32);
    bufp->fullIData(oldp+1962,(0x10001000U),32);
    bufp->fullIData(oldp+1963,(0x10001fffU),32);
    bufp->fullIData(oldp+1964,(0x3fffffffU),32);
    bufp->fullCData(oldp+1965,(3U),8);
    bufp->fullCData(oldp+1966,(9U),4);
    bufp->fullCData(oldp+1967,(0xaU),4);
    bufp->fullIData(oldp+1968,(0xbU),32);
    bufp->fullSData(oldp+1969,(0x280U),16);
    bufp->fullSData(oldp+1970,(0x1e0U),16);
    bufp->fullIData(oldp+1971,(0x21000000U),32);
    bufp->fullIData(oldp+1972,(0x21000004U),32);
    bufp->fullIData(oldp+1973,(0x21000008U),32);
    bufp->fullIData(oldp+1974,(0x80000U),32);
    bufp->fullIData(oldp+1975,(0x200000U),32);
    bufp->fullIData(oldp+1976,(0x60U),32);
    bufp->fullIData(oldp+1977,(0x90U),32);
    bufp->fullIData(oldp+1978,(0x310U),32);
    bufp->fullIData(oldp+1979,(0x320U),32);
    bufp->fullIData(oldp+1980,(0x23U),32);
    bufp->fullIData(oldp+1981,(0x203U),32);
    bufp->fullIData(oldp+1982,(0x20dU),32);
    bufp->fullIData(oldp+1983,(0x400000U),32);
    bufp->fullIData(oldp+1984,(0x200U),32);
}
