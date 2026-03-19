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
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+1186,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1187,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1188,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1189,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1190,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1191,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1192,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1193,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1194,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1195,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1196,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1197,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1198,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1199,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1200,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1201,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1202,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1203,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1204,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1205,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+1186,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1187,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1188,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1189,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1190,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1191,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1192,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1193,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1194,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1195,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1196,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1197,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1198,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1199,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1200,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1201,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1202,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1203,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1204,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1205,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+625,"spi_sck", false,-1);
    tracep->declBus(c+626,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1206,"spi_mosi", false,-1);
    tracep->declBit(c+1207,"spi_miso", false,-1);
    tracep->declBit(c+1204,"uart_rx", false,-1);
    tracep->declBit(c+1205,"uart_tx", false,-1);
    tracep->declBit(c+1150,"psram_sck", false,-1);
    tracep->declBit(c+1151,"psram_ce_n", false,-1);
    tracep->declBus(c+1208,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1209,"sdram_clk", false,-1);
    tracep->declBit(c+627,"sdram_cke", false,-1);
    tracep->declBit(c+628,"sdram_cs", false,-1);
    tracep->declBit(c+629,"sdram_ras", false,-1);
    tracep->declBit(c+630,"sdram_cas", false,-1);
    tracep->declBit(c+631,"sdram_we", false,-1);
    tracep->declBus(c+632,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+633,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+634,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+635,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1186,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1187,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1188,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1189,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1190,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1191,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1192,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1193,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1194,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1195,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1196,"ps2_clk", false,-1);
    tracep->declBit(c+1197,"ps2_data", false,-1);
    tracep->declBus(c+1198,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1199,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1200,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1201,"vga_hsync", false,-1);
    tracep->declBit(c+1202,"vga_vsync", false,-1);
    tracep->declBit(c+1203,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+983,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+53,"in_psel", false,-1);
    tracep->declBit(c+54,"in_penable", false,-1);
    tracep->declBus(c+1257,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+55,"in_pwrite", false,-1);
    tracep->declBus(c+984,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"in_pready", false,-1);
    tracep->declBus(c+1153,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1154,"in_pslverr", false,-1);
    tracep->declBus(c+983,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+53,"out_psel", false,-1);
    tracep->declBit(c+54,"out_penable", false,-1);
    tracep->declBus(c+1257,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+55,"out_pwrite", false,-1);
    tracep->declBus(c+984,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"out_pready", false,-1);
    tracep->declBus(c+1153,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1154,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+53,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+54,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+55,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+983,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+1154,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1153,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+546,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+547,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+55,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+983,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+636,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1258,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+637,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+548,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+549,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+55,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+985,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1257,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1259,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1260,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1261,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+550,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+551,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+55,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+986,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1257,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1262,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1263,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1264,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+552,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+553,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+55,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+986,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1257,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1265,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1266,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1267,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+987,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+554,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+55,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+983,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1210,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1258,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+57,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+988,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+989,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+55,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+986,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1257,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+990,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1258,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1211,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+991,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+992,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+55,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+985,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1257,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1213,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1214,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+993,"sel_0", false,-1);
    tracep->declBit(c+994,"sel_1", false,-1);
    tracep->declBit(c+995,"sel_2", false,-1);
    tracep->declBit(c+996,"sel_3", false,-1);
    tracep->declBit(c+997,"sel_4", false,-1);
    tracep->declBit(c+998,"sel_5", false,-1);
    tracep->declBit(c+999,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+58,"auto_in_awready", false,-1);
    tracep->declBit(c+59,"auto_in_awvalid", false,-1);
    tracep->declBus(c+60,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+62,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+63,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+58,"auto_in_wready", false,-1);
    tracep->declBit(c+64,"auto_in_wvalid", false,-1);
    tracep->declBus(c+65,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+66,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_in_bready", false,-1);
    tracep->declBit(c+1155,"auto_in_bvalid", false,-1);
    tracep->declBus(c+68,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1156,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+69,"auto_in_arready", false,-1);
    tracep->declBit(c+70,"auto_in_arvalid", false,-1);
    tracep->declBus(c+71,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+72,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+73,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+74,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+75,"auto_in_rready", false,-1);
    tracep->declBit(c+1157,"auto_in_rvalid", false,-1);
    tracep->declBus(c+76,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1215,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+53,"auto_out_psel", false,-1);
    tracep->declBit(c+54,"auto_out_penable", false,-1);
    tracep->declBit(c+55,"auto_out_pwrite", false,-1);
    tracep->declBus(c+983,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+984,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1152,"auto_out_pready", false,-1);
    tracep->declBit(c+1154,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1153,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+54,"nodeOut_penable", false,-1);
    tracep->declBus(c+77,"state", false,-1, 1,0);
    tracep->declBit(c+69,"accept_read", false,-1);
    tracep->declBit(c+58,"accept_write", false,-1);
    tracep->declBit(c+78,"is_write_r", false,-1);
    tracep->declBit(c+55,"is_write", false,-1);
    tracep->declBus(c+76,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+68,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+79,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+80,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+81,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+82,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1158,"resp", false,-1, 1,0);
    tracep->declBus(c+83,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+1156,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1157,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+84,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1155,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4buf ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+85,"auto_in_awready", false,-1);
    tracep->declBit(c+1043,"auto_in_awvalid", false,-1);
    tracep->declBus(c+86,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1046,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+87,"auto_in_wready", false,-1);
    tracep->declBit(c+1047,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1048,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"auto_in_wlast", false,-1);
    tracep->declBit(c+556,"auto_in_bready", false,-1);
    tracep->declBit(c+88,"auto_in_bvalid", false,-1);
    tracep->declBus(c+89,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+90,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+91,"auto_in_arready", false,-1);
    tracep->declBit(c+1051,"auto_in_arvalid", false,-1);
    tracep->declBus(c+92,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1054,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1216,"auto_in_rready", false,-1);
    tracep->declBit(c+93,"auto_in_rvalid", false,-1);
    tracep->declBus(c+94,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+95,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+97,"auto_in_rlast", false,-1);
    tracep->declBit(c+58,"auto_out_awready", false,-1);
    tracep->declBit(c+59,"auto_out_awvalid", false,-1);
    tracep->declBus(c+60,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+62,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+63,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+58,"auto_out_wready", false,-1);
    tracep->declBit(c+64,"auto_out_wvalid", false,-1);
    tracep->declBus(c+65,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+66,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_out_bready", false,-1);
    tracep->declBit(c+1155,"auto_out_bvalid", false,-1);
    tracep->declBus(c+68,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1156,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+69,"auto_out_arready", false,-1);
    tracep->declBit(c+70,"auto_out_arvalid", false,-1);
    tracep->declBus(c+71,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+72,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+73,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+74,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+75,"auto_out_rready", false,-1);
    tracep->declBit(c+1157,"auto_out_rvalid", false,-1);
    tracep->declBus(c+76,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1215,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1156,"auto_out_rresp", false,-1, 1,0);
    tracep->pushNamePrefix("nodeIn_bdeq_q ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+67,"io_enq_ready", false,-1);
    tracep->declBit(c+1155,"io_enq_valid", false,-1);
    tracep->declBus(c+68,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1156,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+556,"io_deq_ready", false,-1);
    tracep->declBit(c+88,"io_deq_valid", false,-1);
    tracep->declBus(c+89,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+90,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+98,"wrap", false,-1);
    tracep->declBit(c+99,"wrap_1", false,-1);
    tracep->declBit(c+100,"maybe_full", false,-1);
    tracep->declBit(c+101,"ptr_match", false,-1);
    tracep->declBit(c+102,"empty", false,-1);
    tracep->declBit(c+103,"full", false,-1);
    tracep->declBit(c+1159,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+99,"R0_addr", false,-1);
    tracep->declBit(c+1268,"R0_en", false,-1);
    tracep->declBit(c+1184,"R0_clk", false,-1);
    tracep->declBus(c+104,"R0_data", false,-1, 5,0);
    tracep->declBit(c+98,"W0_addr", false,-1);
    tracep->declBit(c+1159,"W0_en", false,-1);
    tracep->declBit(c+1184,"W0_clk", false,-1);
    tracep->declBus(c+1217,"W0_data", false,-1, 5,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+105+i*1,"Memory", true,(i+0), 5,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+107,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeIn_rdeq_q ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+75,"io_enq_ready", false,-1);
    tracep->declBit(c+1157,"io_enq_valid", false,-1);
    tracep->declBus(c+76,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1215,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1156,"io_enq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+1216,"io_deq_ready", false,-1);
    tracep->declBit(c+93,"io_deq_valid", false,-1);
    tracep->declBus(c+94,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+95,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+96,"io_deq_bits_resp", false,-1, 1,0);
    tracep->declBit(c+97,"io_deq_bits_last", false,-1);
    tracep->declBit(c+108,"wrap", false,-1);
    tracep->declBit(c+109,"wrap_1", false,-1);
    tracep->declBit(c+110,"maybe_full", false,-1);
    tracep->declBit(c+111,"ptr_match", false,-1);
    tracep->declBit(c+112,"empty", false,-1);
    tracep->declBit(c+113,"full", false,-1);
    tracep->declBit(c+1160,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+109,"R0_addr", false,-1);
    tracep->declBit(c+1268,"R0_en", false,-1);
    tracep->declBit(c+1184,"R0_clk", false,-1);
    tracep->declQuad(c+114,"R0_data", false,-1, 38,0);
    tracep->declBit(c+108,"W0_addr", false,-1);
    tracep->declBit(c+1160,"W0_en", false,-1);
    tracep->declBit(c+1184,"W0_clk", false,-1);
    tracep->declQuad(c+1218,"W0_data", false,-1, 38,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+116+i*2,"Memory", true,(i+0), 38,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+120,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_ardeq_q ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+91,"io_enq_ready", false,-1);
    tracep->declBit(c+1051,"io_enq_valid", false,-1);
    tracep->declBus(c+92,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1052,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1053,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1054,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+69,"io_deq_ready", false,-1);
    tracep->declBit(c+70,"io_deq_valid", false,-1);
    tracep->declBus(c+71,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+72,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+73,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+74,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+121,"wrap", false,-1);
    tracep->declBit(c+122,"wrap_1", false,-1);
    tracep->declBit(c+123,"maybe_full", false,-1);
    tracep->declBit(c+124,"ptr_match", false,-1);
    tracep->declBit(c+125,"empty", false,-1);
    tracep->declBit(c+126,"full", false,-1);
    tracep->declBit(c+1055,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+122,"R0_addr", false,-1);
    tracep->declBit(c+1268,"R0_en", false,-1);
    tracep->declBit(c+1184,"R0_clk", false,-1);
    tracep->declQuad(c+127,"R0_data", false,-1, 46,0);
    tracep->declBit(c+121,"W0_addr", false,-1);
    tracep->declBit(c+1055,"W0_en", false,-1);
    tracep->declBit(c+1184,"W0_clk", false,-1);
    tracep->declQuad(c+557,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+129+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+133,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_awdeq_q ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+85,"io_enq_ready", false,-1);
    tracep->declBit(c+1043,"io_enq_valid", false,-1);
    tracep->declBus(c+86,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1044,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1045,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1046,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+58,"io_deq_ready", false,-1);
    tracep->declBit(c+59,"io_deq_valid", false,-1);
    tracep->declBus(c+60,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+61,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+62,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+63,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBit(c+134,"wrap", false,-1);
    tracep->declBit(c+135,"wrap_1", false,-1);
    tracep->declBit(c+136,"maybe_full", false,-1);
    tracep->declBit(c+137,"ptr_match", false,-1);
    tracep->declBit(c+138,"empty", false,-1);
    tracep->declBit(c+139,"full", false,-1);
    tracep->declBit(c+1056,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+135,"R0_addr", false,-1);
    tracep->declBit(c+1268,"R0_en", false,-1);
    tracep->declBit(c+1184,"R0_clk", false,-1);
    tracep->declQuad(c+140,"R0_data", false,-1, 46,0);
    tracep->declBit(c+134,"W0_addr", false,-1);
    tracep->declBit(c+1056,"W0_en", false,-1);
    tracep->declBit(c+1184,"W0_clk", false,-1);
    tracep->declQuad(c+559,"W0_data", false,-1, 46,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+142+i*2,"Memory", true,(i+0), 46,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+146,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("nodeOut_wdeq_q ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+87,"io_enq_ready", false,-1);
    tracep->declBit(c+1047,"io_enq_valid", false,-1);
    tracep->declBus(c+1048,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1049,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1050,"io_enq_bits_last", false,-1);
    tracep->declBit(c+58,"io_deq_ready", false,-1);
    tracep->declBit(c+64,"io_deq_valid", false,-1);
    tracep->declBus(c+65,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+66,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+147,"wrap", false,-1);
    tracep->declBit(c+148,"wrap_1", false,-1);
    tracep->declBit(c+149,"maybe_full", false,-1);
    tracep->declBit(c+150,"ptr_match", false,-1);
    tracep->declBit(c+151,"empty", false,-1);
    tracep->declBit(c+152,"full", false,-1);
    tracep->declBit(c+1057,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+148,"R0_addr", false,-1);
    tracep->declBit(c+1268,"R0_en", false,-1);
    tracep->declBit(c+1184,"R0_clk", false,-1);
    tracep->declQuad(c+153,"R0_data", false,-1, 35,0);
    tracep->declBit(c+147,"W0_addr", false,-1);
    tracep->declBit(c+1057,"W0_en", false,-1);
    tracep->declBit(c+1184,"W0_clk", false,-1);
    tracep->declQuad(c+1058,"W0_data", false,-1, 35,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+155+i*2,"Memory", true,(i+0), 35,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+159,"do_deq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+160,"auto_in_awready", false,-1);
    tracep->declBit(c+1060,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1269,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1270,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+161,"auto_in_wready", false,-1);
    tracep->declBit(c+884,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1062,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"auto_in_wlast", false,-1);
    tracep->declBit(c+886,"auto_in_bready", false,-1);
    tracep->declBit(c+162,"auto_in_bvalid", false,-1);
    tracep->declBus(c+163,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+164,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+165,"auto_in_arready", false,-1);
    tracep->declBit(c+1064,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1269,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1065,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1270,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"auto_in_rready", false,-1);
    tracep->declBit(c+166,"auto_in_rvalid", false,-1);
    tracep->declBus(c+167,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+170,"auto_in_rlast", false,-1);
    tracep->declBit(c+1066,"auto_out_awready", false,-1);
    tracep->declBit(c+1067,"auto_out_awvalid", false,-1);
    tracep->declBus(c+86,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1046,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+171,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1068,"auto_out_wready", false,-1);
    tracep->declBit(c+1069,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1048,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"auto_out_wlast", false,-1);
    tracep->declBit(c+1070,"auto_out_bready", false,-1);
    tracep->declBit(c+172,"auto_out_bvalid", false,-1);
    tracep->declBus(c+163,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+174,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1071,"auto_out_arready", false,-1);
    tracep->declBit(c+1072,"auto_out_arvalid", false,-1);
    tracep->declBus(c+92,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1054,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+175,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+889,"auto_out_rready", false,-1);
    tracep->declBit(c+166,"auto_out_rvalid", false,-1);
    tracep->declBus(c+167,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+176,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+177,"auto_out_rlast", false,-1);
    tracep->declBit(c+1069,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+178,"w_idle", false,-1);
    tracep->declBit(c+1073,"in_awready", false,-1);
    tracep->declBit(c+179,"busy", false,-1);
    tracep->declBus(c+180,"r_addr", false,-1, 31,0);
    tracep->declBus(c+181,"r_len", false,-1, 7,0);
    tracep->declBus(c+182,"len", false,-1, 7,0);
    tracep->declBus(c+1074,"addr", false,-1, 31,0);
    tracep->declBit(c+183,"busy_1", false,-1);
    tracep->declBus(c+184,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+185,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+186,"len_1", false,-1, 7,0);
    tracep->declBus(c+1075,"addr_1", false,-1, 31,0);
    tracep->declBit(c+187,"wbeats_latched", false,-1);
    tracep->declBit(c+1067,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+1076,"wbeats_valid", false,-1);
    tracep->declBus(c+188,"w_counter", false,-1, 8,0);
    tracep->declBus(c+1077,"w_todo", false,-1, 8,0);
    tracep->declBit(c+1050,"w_last", false,-1);
    tracep->declBit(c+1070,"nodeOut_bready", false,-1);
    tracep->declBus(c+189,"error_0", false,-1, 1,0);
    tracep->declBus(c+190,"error_1", false,-1, 1,0);
    tracep->declBus(c+191,"error_2", false,-1, 1,0);
    tracep->declBus(c+192,"error_3", false,-1, 1,0);
    tracep->declBus(c+193,"error_4", false,-1, 1,0);
    tracep->declBus(c+194,"error_5", false,-1, 1,0);
    tracep->declBus(c+195,"error_6", false,-1, 1,0);
    tracep->declBus(c+196,"error_7", false,-1, 1,0);
    tracep->declBus(c+197,"error_8", false,-1, 1,0);
    tracep->declBus(c+198,"error_9", false,-1, 1,0);
    tracep->declBus(c+199,"error_10", false,-1, 1,0);
    tracep->declBus(c+200,"error_11", false,-1, 1,0);
    tracep->declBus(c+201,"error_12", false,-1, 1,0);
    tracep->declBus(c+202,"error_13", false,-1, 1,0);
    tracep->declBus(c+203,"error_14", false,-1, 1,0);
    tracep->declBus(c+204,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+165,"io_enq_ready", false,-1);
    tracep->declBit(c+1064,"io_enq_valid", false,-1);
    tracep->declBus(c+1269,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1065,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1270,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+887,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+888,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1078,"io_deq_ready", false,-1);
    tracep->declBit(c+1072,"io_deq_valid", false,-1);
    tracep->declBus(c+92,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1079,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+205,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1053,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1054,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+206,"ram", false,-1, 48,0);
    tracep->declBit(c+208,"full", false,-1);
    tracep->declBit(c+1072,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1080,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+160,"io_enq_ready", false,-1);
    tracep->declBit(c+1060,"io_enq_valid", false,-1);
    tracep->declBus(c+1269,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1061,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1270,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+882,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+883,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1081,"io_deq_ready", false,-1);
    tracep->declBit(c+1082,"io_deq_valid", false,-1);
    tracep->declBus(c+86,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1083,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+209,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1045,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1046,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+210,"ram", false,-1, 48,0);
    tracep->declBit(c+212,"full", false,-1);
    tracep->declBit(c+1082,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1084,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+161,"io_enq_ready", false,-1);
    tracep->declBit(c+884,"io_enq_valid", false,-1);
    tracep->declBus(c+1062,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1063,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+885,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1085,"io_deq_ready", false,-1);
    tracep->declBit(c+1086,"io_deq_valid", false,-1);
    tracep->declBus(c+1048,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1049,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1220,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+213,"ram", false,-1, 36,0);
    tracep->declBit(c+215,"full", false,-1);
    tracep->declBit(c+1086,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1087,"do_enq", false,-1);
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
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+1088,"auto_in_awready", false,-1);
    tracep->declBit(c+1089,"auto_in_awvalid", false,-1);
    tracep->declBus(c+86,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1090,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1091,"auto_in_wready", false,-1);
    tracep->declBit(c+1092,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1048,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1093,"auto_in_bready", false,-1);
    tracep->declBit(c+216,"auto_in_bvalid", false,-1);
    tracep->declBus(c+217,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+218,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1094,"auto_in_arready", false,-1);
    tracep->declBit(c+1095,"auto_in_arvalid", false,-1);
    tracep->declBus(c+92,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1096,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1097,"auto_in_rready", false,-1);
    tracep->declBit(c+219,"auto_in_rvalid", false,-1);
    tracep->declBus(c+220,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+222,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1094,"nodeIn_arready", false,-1);
    tracep->declBit(c+1088,"nodeIn_awready", false,-1);
    tracep->declBit(c+1098,"w_sel0", false,-1);
    tracep->declBit(c+216,"w_full", false,-1);
    tracep->declBus(c+217,"w_id", false,-1, 3,0);
    tracep->declBit(c+223,"r_sel1", false,-1);
    tracep->declBit(c+224,"w_sel1", false,-1);
    tracep->declBit(c+219,"r_full", false,-1);
    tracep->declBus(c+220,"r_id", false,-1, 3,0);
    tracep->declBit(c+1099,"ren", false,-1);
    tracep->declBit(c+225,"rdata_REG", false,-1);
    tracep->declBus(c+226,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+227,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+228,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+229,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+1100,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1099,"R0_en", false,-1);
    tracep->declBit(c+1184,"R0_clk", false,-1);
    tracep->declBus(c+230,"R0_data", false,-1, 31,0);
    tracep->declBus(c+1101,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1102,"W0_en", false,-1);
    tracep->declBit(c+1184,"W0_clk", false,-1);
    tracep->declBus(c+1048,"W0_data", false,-1, 31,0);
    tracep->declBus(c+1049,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+160,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1060,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1269,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1270,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+161,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+884,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1062,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+886,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+162,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+163,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+164,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+165,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1064,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1269,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1065,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1270,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+166,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+167,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+170,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+160,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+1060,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1269,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1270,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+161,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+884,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+1062,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+886,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+162,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+163,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+164,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+165,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+1064,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1269,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+1065,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1270,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+166,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+167,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+170,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+1103,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+1104,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+86,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1046,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+1068,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+1069,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+1048,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+1070,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+172,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+163,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1105,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+1106,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+92,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1054,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+166,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+167,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+177,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+1088,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+1089,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+86,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+1090,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1091,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+1092,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+1048,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1093,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+216,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+217,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+218,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1094,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+1095,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+92,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+1096,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1097,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+219,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+220,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+221,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+222,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+1107,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+1108,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+231,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+1109,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+92,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+1110,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1221,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+232,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+233,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+234,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+85,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+1043,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+86,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBus(c+1046,"auto_anon_out_0_awburst", false,-1, 1,0);
    tracep->declBit(c+87,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+1047,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+1048,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"auto_anon_out_0_wlast", false,-1);
    tracep->declBit(c+556,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+88,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+89,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+90,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+91,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+1051,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+92,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBus(c+1054,"auto_anon_out_0_arburst", false,-1, 1,0);
    tracep->declBit(c+1216,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+93,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+94,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+95,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+97,"auto_anon_out_0_rlast", false,-1);
    tracep->declBit(c+172,"in_0_bvalid", false,-1);
    tracep->declBit(c+166,"in_0_rvalid", false,-1);
    tracep->declBit(c+1111,"in_0_wready", false,-1);
    tracep->declBit(c+1112,"in_0_awready", false,-1);
    tracep->declBit(c+1105,"in_0_arready", false,-1);
    tracep->declBit(c+1103,"anonIn_awready", false,-1);
    tracep->declBit(c+1113,"requestARIO_0_0", false,-1);
    tracep->declBit(c+1114,"requestARIO_0_1", false,-1);
    tracep->declBit(c+1115,"requestARIO_0_2", false,-1);
    tracep->declBit(c+1116,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+1117,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+1118,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+235,"arSel", false,-1, 15,0);
    tracep->declBus(c+236,"awSel", false,-1, 15,0);
    tracep->declBus(c+237,"rSel", false,-1, 15,0);
    tracep->declBus(c+238,"bSel", false,-1, 15,0);
    tracep->declBit(c+239,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+240,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+241,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+242,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+243,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+244,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+245,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+246,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+247,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+248,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+249,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+250,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+251,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+252,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+253,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+254,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+255,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+256,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+257,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+258,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+259,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+260,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+261,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+262,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+263,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+264,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+265,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+266,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+267,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+268,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+269,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+270,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+271,"latched", false,-1);
    tracep->declBit(c+1119,"in_0_awvalid", false,-1);
    tracep->declBit(c+1120,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+1121,"in_0_wvalid", false,-1);
    tracep->declBit(c+272,"idle_3", false,-1);
    tracep->declBit(c+273,"anyValid", false,-1);
    tracep->declBus(c+274,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+275,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+276,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+277,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+278,"prefixOR_1", false,-1);
    tracep->declBit(c+279,"winner_3_1", false,-1);
    tracep->declBit(c+280,"winner_3_2", false,-1);
    tracep->declBit(c+281,"state_3_0", false,-1);
    tracep->declBit(c+282,"state_3_1", false,-1);
    tracep->declBit(c+283,"state_3_2", false,-1);
    tracep->declBit(c+284,"muxState_3_0", false,-1);
    tracep->declBit(c+285,"muxState_3_1", false,-1);
    tracep->declBit(c+286,"muxState_3_2", false,-1);
    tracep->declBit(c+287,"idle_4", false,-1);
    tracep->declBit(c+288,"anyValid_1", false,-1);
    tracep->declBus(c+289,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+290,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+291,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+292,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+293,"winner_4_0", false,-1);
    tracep->declBit(c+294,"winner_4_2", false,-1);
    tracep->declBit(c+295,"state_4_0", false,-1);
    tracep->declBit(c+296,"state_4_2", false,-1);
    tracep->declBit(c+297,"muxState_4_0", false,-1);
    tracep->declBit(c+298,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+1120,"io_enq_valid", false,-1);
    tracep->declBus(c+1122,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1123,"io_deq_ready", false,-1);
    tracep->declBit(c+1124,"io_deq_valid", false,-1);
    tracep->declBus(c+1125,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+300,"wrap", false,-1);
    tracep->declBit(c+301,"wrap_1", false,-1);
    tracep->declBit(c+302,"maybe_full", false,-1);
    tracep->declBit(c+303,"ptr_match", false,-1);
    tracep->declBit(c+304,"empty", false,-1);
    tracep->declBit(c+305,"full", false,-1);
    tracep->declBit(c+1124,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1126,"do_deq", false,-1);
    tracep->declBit(c+1127,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+301,"R0_addr", false,-1);
    tracep->declBit(c+1268,"R0_en", false,-1);
    tracep->declBit(c+1184,"R0_clk", false,-1);
    tracep->declBus(c+306,"R0_data", false,-1, 2,0);
    tracep->declBit(c+300,"W0_addr", false,-1);
    tracep->declBit(c+1127,"W0_en", false,-1);
    tracep->declBit(c+1184,"W0_clk", false,-1);
    tracep->declBus(c+1122,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+307+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+1066,"auto_in_awready", false,-1);
    tracep->declBit(c+1067,"auto_in_awvalid", false,-1);
    tracep->declBus(c+86,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1046,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+171,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1068,"auto_in_wready", false,-1);
    tracep->declBit(c+1069,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1048,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"auto_in_wlast", false,-1);
    tracep->declBit(c+1070,"auto_in_bready", false,-1);
    tracep->declBit(c+172,"auto_in_bvalid", false,-1);
    tracep->declBus(c+163,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+174,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1071,"auto_in_arready", false,-1);
    tracep->declBit(c+1072,"auto_in_arvalid", false,-1);
    tracep->declBus(c+92,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1054,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+175,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+889,"auto_in_rready", false,-1);
    tracep->declBit(c+166,"auto_in_rvalid", false,-1);
    tracep->declBus(c+167,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+176,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+177,"auto_in_rlast", false,-1);
    tracep->declBit(c+1103,"auto_out_awready", false,-1);
    tracep->declBit(c+1104,"auto_out_awvalid", false,-1);
    tracep->declBus(c+86,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1044,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1045,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1046,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+1068,"auto_out_wready", false,-1);
    tracep->declBit(c+1069,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1048,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1049,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1050,"auto_out_wlast", false,-1);
    tracep->declBit(c+1070,"auto_out_bready", false,-1);
    tracep->declBit(c+172,"auto_out_bvalid", false,-1);
    tracep->declBus(c+163,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+173,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1105,"auto_out_arready", false,-1);
    tracep->declBit(c+1106,"auto_out_arvalid", false,-1);
    tracep->declBus(c+92,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1052,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1053,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1054,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"auto_out_rready", false,-1);
    tracep->declBit(c+166,"auto_out_rvalid", false,-1);
    tracep->declBus(c+167,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+177,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+561,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+562,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBit(c+311,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+310,"full", false,-1);
    tracep->declBit(c+311,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+312,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+563,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+564,"io_deq_ready", false,-1);
    tracep->declBit(c+314,"io_deq_valid", false,-1);
    tracep->declBit(c+315,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+314,"full", false,-1);
    tracep->declBit(c+315,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+565,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+566,"io_deq_ready", false,-1);
    tracep->declBit(c+318,"io_deq_valid", false,-1);
    tracep->declBit(c+319,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+318,"full", false,-1);
    tracep->declBit(c+319,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+567,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+568,"io_deq_ready", false,-1);
    tracep->declBit(c+322,"io_deq_valid", false,-1);
    tracep->declBit(c+323,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->declBit(c+323,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+324,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+569,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+570,"io_deq_ready", false,-1);
    tracep->declBit(c+326,"io_deq_valid", false,-1);
    tracep->declBit(c+327,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->declBit(c+327,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+571,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+572,"io_deq_ready", false,-1);
    tracep->declBit(c+330,"io_deq_valid", false,-1);
    tracep->declBit(c+331,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+330,"full", false,-1);
    tracep->declBit(c+331,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+573,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+574,"io_deq_ready", false,-1);
    tracep->declBit(c+334,"io_deq_valid", false,-1);
    tracep->declBit(c+335,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->declBit(c+335,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+575,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+576,"io_deq_ready", false,-1);
    tracep->declBit(c+338,"io_deq_valid", false,-1);
    tracep->declBit(c+339,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+338,"full", false,-1);
    tracep->declBit(c+339,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+341,"io_enq_ready", false,-1);
    tracep->declBit(c+577,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+578,"io_deq_ready", false,-1);
    tracep->declBit(c+342,"io_deq_valid", false,-1);
    tracep->declBit(c+343,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+342,"full", false,-1);
    tracep->declBit(c+343,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+344,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+345,"io_enq_ready", false,-1);
    tracep->declBit(c+579,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+580,"io_deq_ready", false,-1);
    tracep->declBit(c+346,"io_deq_valid", false,-1);
    tracep->declBit(c+347,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+346,"full", false,-1);
    tracep->declBit(c+347,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+348,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+349,"io_enq_ready", false,-1);
    tracep->declBit(c+581,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+582,"io_deq_ready", false,-1);
    tracep->declBit(c+350,"io_deq_valid", false,-1);
    tracep->declBit(c+351,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+350,"full", false,-1);
    tracep->declBit(c+351,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+352,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+353,"io_enq_ready", false,-1);
    tracep->declBit(c+583,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+584,"io_deq_ready", false,-1);
    tracep->declBit(c+354,"io_deq_valid", false,-1);
    tracep->declBit(c+355,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+354,"full", false,-1);
    tracep->declBit(c+355,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+356,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+357,"io_enq_ready", false,-1);
    tracep->declBit(c+585,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+586,"io_deq_ready", false,-1);
    tracep->declBit(c+358,"io_deq_valid", false,-1);
    tracep->declBit(c+359,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+358,"full", false,-1);
    tracep->declBit(c+359,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+360,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+361,"io_enq_ready", false,-1);
    tracep->declBit(c+587,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+588,"io_deq_ready", false,-1);
    tracep->declBit(c+362,"io_deq_valid", false,-1);
    tracep->declBit(c+363,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+362,"full", false,-1);
    tracep->declBit(c+363,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+364,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+365,"io_enq_ready", false,-1);
    tracep->declBit(c+589,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+590,"io_deq_ready", false,-1);
    tracep->declBit(c+366,"io_deq_valid", false,-1);
    tracep->declBit(c+367,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+366,"full", false,-1);
    tracep->declBit(c+367,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+368,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+369,"io_enq_ready", false,-1);
    tracep->declBit(c+591,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+592,"io_deq_ready", false,-1);
    tracep->declBit(c+370,"io_deq_valid", false,-1);
    tracep->declBit(c+371,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+370,"full", false,-1);
    tracep->declBit(c+371,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+372,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+373,"io_enq_ready", false,-1);
    tracep->declBit(c+593,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+594,"io_deq_ready", false,-1);
    tracep->declBit(c+374,"io_deq_valid", false,-1);
    tracep->declBit(c+375,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+374,"full", false,-1);
    tracep->declBit(c+375,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+376,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+377,"io_enq_ready", false,-1);
    tracep->declBit(c+595,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+596,"io_deq_ready", false,-1);
    tracep->declBit(c+378,"io_deq_valid", false,-1);
    tracep->declBit(c+379,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+378,"full", false,-1);
    tracep->declBit(c+379,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+380,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+381,"io_enq_ready", false,-1);
    tracep->declBit(c+597,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+598,"io_deq_ready", false,-1);
    tracep->declBit(c+382,"io_deq_valid", false,-1);
    tracep->declBit(c+383,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+382,"full", false,-1);
    tracep->declBit(c+383,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+384,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+385,"io_enq_ready", false,-1);
    tracep->declBit(c+599,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+600,"io_deq_ready", false,-1);
    tracep->declBit(c+386,"io_deq_valid", false,-1);
    tracep->declBit(c+387,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+386,"full", false,-1);
    tracep->declBit(c+387,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+388,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+389,"io_enq_ready", false,-1);
    tracep->declBit(c+601,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+602,"io_deq_ready", false,-1);
    tracep->declBit(c+390,"io_deq_valid", false,-1);
    tracep->declBit(c+391,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+390,"full", false,-1);
    tracep->declBit(c+391,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+392,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+393,"io_enq_ready", false,-1);
    tracep->declBit(c+603,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+604,"io_deq_ready", false,-1);
    tracep->declBit(c+394,"io_deq_valid", false,-1);
    tracep->declBit(c+395,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+394,"full", false,-1);
    tracep->declBit(c+395,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+396,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+397,"io_enq_ready", false,-1);
    tracep->declBit(c+605,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+606,"io_deq_ready", false,-1);
    tracep->declBit(c+398,"io_deq_valid", false,-1);
    tracep->declBit(c+399,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+398,"full", false,-1);
    tracep->declBit(c+399,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+400,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+401,"io_enq_ready", false,-1);
    tracep->declBit(c+607,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+608,"io_deq_ready", false,-1);
    tracep->declBit(c+402,"io_deq_valid", false,-1);
    tracep->declBit(c+403,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+402,"full", false,-1);
    tracep->declBit(c+403,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+404,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+405,"io_enq_ready", false,-1);
    tracep->declBit(c+609,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+610,"io_deq_ready", false,-1);
    tracep->declBit(c+406,"io_deq_valid", false,-1);
    tracep->declBit(c+407,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+406,"full", false,-1);
    tracep->declBit(c+407,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+408,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+409,"io_enq_ready", false,-1);
    tracep->declBit(c+611,"io_enq_valid", false,-1);
    tracep->declBit(c+171,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+612,"io_deq_ready", false,-1);
    tracep->declBit(c+410,"io_deq_valid", false,-1);
    tracep->declBit(c+411,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+410,"full", false,-1);
    tracep->declBit(c+411,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+412,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+413,"io_enq_ready", false,-1);
    tracep->declBit(c+613,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+614,"io_deq_ready", false,-1);
    tracep->declBit(c+414,"io_deq_valid", false,-1);
    tracep->declBit(c+415,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+414,"full", false,-1);
    tracep->declBit(c+415,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+416,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+417,"io_enq_ready", false,-1);
    tracep->declBit(c+615,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+616,"io_deq_ready", false,-1);
    tracep->declBit(c+418,"io_deq_valid", false,-1);
    tracep->declBit(c+419,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+418,"full", false,-1);
    tracep->declBit(c+419,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+420,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+421,"io_enq_ready", false,-1);
    tracep->declBit(c+617,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+618,"io_deq_ready", false,-1);
    tracep->declBit(c+422,"io_deq_valid", false,-1);
    tracep->declBit(c+423,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+422,"full", false,-1);
    tracep->declBit(c+423,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+424,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+425,"io_enq_ready", false,-1);
    tracep->declBit(c+619,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+620,"io_deq_ready", false,-1);
    tracep->declBit(c+426,"io_deq_valid", false,-1);
    tracep->declBit(c+427,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+426,"full", false,-1);
    tracep->declBit(c+427,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+428,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+429,"io_enq_ready", false,-1);
    tracep->declBit(c+621,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+622,"io_deq_ready", false,-1);
    tracep->declBit(c+430,"io_deq_valid", false,-1);
    tracep->declBit(c+431,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+430,"full", false,-1);
    tracep->declBit(c+431,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+432,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+433,"io_enq_ready", false,-1);
    tracep->declBit(c+623,"io_enq_valid", false,-1);
    tracep->declBit(c+175,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+624,"io_deq_ready", false,-1);
    tracep->declBit(c+434,"io_deq_valid", false,-1);
    tracep->declBit(c+435,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+434,"full", false,-1);
    tracep->declBit(c+435,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+436,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBit(c+160,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1060,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1269,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1061,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1270,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+161,"auto_master_out_wready", false,-1);
    tracep->declBit(c+884,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1062,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+886,"auto_master_out_bready", false,-1);
    tracep->declBit(c+162,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+163,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+164,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+165,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1064,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1269,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1065,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1270,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"auto_master_out_rready", false,-1);
    tracep->declBit(c+166,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+167,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+168,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+170,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBit(c+1258,"io_interrupt", false,-1);
    tracep->declBit(c+160,"io_master_awready", false,-1);
    tracep->declBit(c+1060,"io_master_awvalid", false,-1);
    tracep->declBus(c+1061,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+161,"io_master_wready", false,-1);
    tracep->declBit(c+884,"io_master_wvalid", false,-1);
    tracep->declBus(c+1062,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"io_master_wlast", false,-1);
    tracep->declBit(c+886,"io_master_bready", false,-1);
    tracep->declBit(c+162,"io_master_bvalid", false,-1);
    tracep->declBus(c+164,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+163,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+165,"io_master_arready", false,-1);
    tracep->declBit(c+1064,"io_master_arvalid", false,-1);
    tracep->declBus(c+1065,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"io_master_rready", false,-1);
    tracep->declBit(c+166,"io_master_rvalid", false,-1);
    tracep->declBus(c+169,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+168,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+170,"io_master_rlast", false,-1);
    tracep->declBus(c+167,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1258,"io_slave_awready", false,-1);
    tracep->declBit(c+1258,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1271,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1272,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1273,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1258,"io_slave_wready", false,-1);
    tracep->declBit(c+1258,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1271,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1269,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1258,"io_slave_wlast", false,-1);
    tracep->declBit(c+1258,"io_slave_bready", false,-1);
    tracep->declBit(c+1258,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1273,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1269,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1258,"io_slave_arready", false,-1);
    tracep->declBit(c+1258,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1271,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1272,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1273,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1258,"io_slave_rready", false,-1);
    tracep->declBit(c+1258,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1273,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1271,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1258,"io_slave_rlast", false,-1);
    tracep->declBus(c+1269,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1274,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1275,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1276,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1277,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1278,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+890,"pc", false,-1, 31,0);
    tracep->declBus(c+437,"dnpc", false,-1, 31,0);
    tracep->declBus(c+891,"current_inst", false,-1, 31,0);
    tracep->declBit(c+25,"fetch_dec_valid", false,-1);
    tracep->declBit(c+892,"fetch_dec_ready", false,-1);
    tracep->declBit(c+893,"dec_exc_valid", false,-1);
    tracep->declBit(c+894,"dec_exc_ready", false,-1);
    tracep->declBit(c+895,"exc_wb_valid", false,-1);
    tracep->declBit(c+26,"exc_wb_ready", false,-1);
    tracep->declBit(c+27,"wb_bresp", false,-1);
    tracep->declBit(c+1223,"bresp", false,-1);
    tracep->declBit(c+1128,"all_bresp", false,-1);
    tracep->declBit(c+438,"w_finish_sim", false,-1);
    tracep->declBus(c+439,"exit_code", false,-1, 31,0);
    tracep->declBit(c+28,"ifu_arvalid", false,-1);
    tracep->declBit(c+1129,"ifu_arready", false,-1);
    tracep->declBus(c+890,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1279,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1280,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+892,"ifu_rready", false,-1);
    tracep->declBit(c+1130,"ifu_rvalid", false,-1);
    tracep->declBus(c+879,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+48,"ifu_rlast", false,-1);
    tracep->declBus(c+49,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+896,"lsu_wmask", false,-1, 7,0);
    tracep->declBit(c+897,"lsu_arvalid", false,-1);
    tracep->declBit(c+1131,"lsu_arready", false,-1);
    tracep->declBus(c+1132,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1279,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1280,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+898,"lsu_rready", false,-1);
    tracep->declBit(c+1133,"lsu_rvalid", false,-1);
    tracep->declBus(c+879,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+48,"lsu_rlast", false,-1);
    tracep->declBus(c+49,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+899,"lsu_awvalid", false,-1);
    tracep->declBit(c+1134,"lsu_awready", false,-1);
    tracep->declBus(c+1132,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1279,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1280,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+899,"lsu_wvalid", false,-1);
    tracep->declBit(c+1135,"lsu_wready", false,-1);
    tracep->declBus(c+1224,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+969,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"lsu_wlast", false,-1);
    tracep->declBit(c+1268,"lsu_bready", false,-1);
    tracep->declBit(c+1225,"lsu_bvalid", false,-1);
    tracep->declBus(c+50,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+51,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+900,"fun", false,-1, 2,0);
    tracep->declBus(c+901,"opcode", false,-1, 6,0);
    tracep->declBus(c+902,"waddr", false,-1, 4,0);
    tracep->declBus(c+903,"raddr1", false,-1, 4,0);
    tracep->declBus(c+904,"raddr2", false,-1, 4,0);
    tracep->declBus(c+905,"imm", false,-1, 31,0);
    tracep->declBus(c+440,"src1", false,-1, 31,0);
    tracep->declBus(c+441,"src2", false,-1, 31,0);
    tracep->declBus(c+442,"w_data", false,-1, 31,0);
    tracep->declBit(c+443,"wen_ret_and_j", false,-1);
    tracep->declBit(c+1136,"wen", false,-1);
    tracep->declBus(c+1281,"fun_ex", false,-1, 2,0);
    tracep->declBus(c+1282,"opcode_ex", false,-1, 6,0);
    tracep->declBus(c+1283,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+1284,"src1_ex", false,-1, 31,0);
    tracep->declBus(c+1285,"src2_ex", false,-1, 31,0);
    tracep->declBus(c+906,"lsu_ex_rdata", false,-1, 31,0);
    tracep->declBit(c+1133,"lsu_ex_r_valid", false,-1);
    tracep->declBit(c+899,"lsu_ex_w_valid", false,-1);
    tracep->declBit(c+1137,"lsu_ex_w_ready", false,-1);
    tracep->declBit(c+897,"lsu_dec_ar_valid", false,-1);
    tracep->declBit(c+1131,"lsu_dec_ar_ready", false,-1);
    tracep->declBit(c+907,"xb_arvalid", false,-1);
    tracep->declBit(c+1138,"xb_arready", false,-1);
    tracep->declBus(c+1065,"xb_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"xb_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"xb_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"xb_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"xb_arburst", false,-1, 1,0);
    tracep->declBit(c+908,"xb_rready", false,-1);
    tracep->declBit(c+880,"xb_rvalid", false,-1);
    tracep->declBus(c+879,"xb_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"xb_rresp", false,-1, 1,0);
    tracep->declBit(c+48,"xb_rlast", false,-1);
    tracep->declBus(c+49,"xb_rid", false,-1, 3,0);
    tracep->declBit(c+909,"xb_awvalid", false,-1);
    tracep->declBit(c+1139,"xb_awready", false,-1);
    tracep->declBus(c+1061,"xb_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"xb_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"xb_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"xb_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"xb_awburst", false,-1, 1,0);
    tracep->declBit(c+909,"xb_wvalid", false,-1);
    tracep->declBit(c+881,"xb_wready", false,-1);
    tracep->declBus(c+1062,"xb_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"xb_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"xb_wlast", false,-1);
    tracep->declBit(c+885,"xb_bready", false,-1);
    tracep->declBit(c+52,"xb_bvalid", false,-1);
    tracep->declBus(c+50,"xb_bresp", false,-1, 1,0);
    tracep->declBus(c+51,"xb_bid", false,-1, 3,0);
    tracep->declBit(c+1064,"soc_arvalid", false,-1);
    tracep->declBit(c+165,"soc_arready", false,-1);
    tracep->declBus(c+1065,"soc_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+889,"soc_rready", false,-1);
    tracep->declBit(c+166,"soc_rvalid", false,-1);
    tracep->declBus(c+168,"soc_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+170,"soc_rlast", false,-1);
    tracep->declBus(c+167,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1060,"soc_awvalid", false,-1);
    tracep->declBit(c+160,"soc_awready", false,-1);
    tracep->declBus(c+1061,"soc_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+884,"soc_wvalid", false,-1);
    tracep->declBit(c+161,"soc_wready", false,-1);
    tracep->declBus(c+1062,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"soc_wlast", false,-1);
    tracep->declBit(c+886,"soc_bready", false,-1);
    tracep->declBit(c+162,"soc_bvalid", false,-1);
    tracep->declBus(c+164,"soc_bresp", false,-1, 1,0);
    tracep->declBus(c+163,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+970,"clint_arvalid", false,-1);
    tracep->declBit(c+29,"clint_arready", false,-1);
    tracep->declBus(c+1065,"clint_araddr_axi", false,-1, 31,0);
    tracep->declBus(c+1269,"clint_arid_axi", false,-1, 3,0);
    tracep->declBus(c+1270,"clint_arlen_axi", false,-1, 7,0);
    tracep->declBus(c+887,"clint_arsize_axi", false,-1, 2,0);
    tracep->declBus(c+888,"clint_arburst_axi", false,-1, 1,0);
    tracep->declBit(c+1226,"clint_rready_axi", false,-1);
    tracep->declBit(c+30,"clint_rvalid_axi", false,-1);
    tracep->declBus(c+31,"clint_rdata_axi", false,-1, 31,0);
    tracep->declBus(c+1273,"clint_rresp_axi", false,-1, 1,0);
    tracep->declBit(c+1268,"clint_rlast_axi", false,-1);
    tracep->declBus(c+32,"clint_rid_axi", false,-1, 3,0);
    tracep->declBit(c+971,"clint_awvalid", false,-1);
    tracep->declBit(c+1258,"clint_awready", false,-1);
    tracep->declBus(c+1061,"clint_awaddr_axi", false,-1, 31,0);
    tracep->declBus(c+1269,"clint_awid_axi", false,-1, 3,0);
    tracep->declBus(c+1270,"clint_awlen_axi", false,-1, 7,0);
    tracep->declBus(c+882,"clint_awsize_axi", false,-1, 2,0);
    tracep->declBus(c+883,"clint_awburst_axi", false,-1, 1,0);
    tracep->declBit(c+1227,"clint_wvalid", false,-1);
    tracep->declBit(c+1258,"clint_wready", false,-1);
    tracep->declBus(c+1062,"clint_wdata_axi", false,-1, 31,0);
    tracep->declBus(c+1063,"clint_wstrb_axi", false,-1, 3,0);
    tracep->declBit(c+885,"clint_wlast_axi", false,-1);
    tracep->declBit(c+1228,"clint_bready_axi", false,-1);
    tracep->declBit(c+1258,"clint_bvalid_axi", false,-1);
    tracep->declBus(c+1273,"clint_bresp_axi", false,-1, 1,0);
    tracep->declBus(c+1269,"clint_bid_axi", false,-1, 3,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1275,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1276,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1277,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBit(c+893,"dec_exc_valid", false,-1);
    tracep->declBit(c+894,"dec_exc_ready", false,-1);
    tracep->declBus(c+902,"w_addr", false,-1, 4,0);
    tracep->declBus(c+890,"pc", false,-1, 31,0);
    tracep->declBus(c+440,"src1", false,-1, 31,0);
    tracep->declBus(c+441,"src2", false,-1, 31,0);
    tracep->declBus(c+905,"imm", false,-1, 31,0);
    tracep->declBus(c+901,"opcode", false,-1, 6,0);
    tracep->declBus(c+900,"fun", false,-1, 2,0);
    tracep->declBus(c+437,"dnpc", false,-1, 31,0);
    tracep->declBus(c+442,"w_data", false,-1, 31,0);
    tracep->declBit(c+443,"wen", false,-1);
    tracep->declBit(c+1133,"lsu_ex_r_valid", false,-1);
    tracep->declBus(c+906,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+899,"lsu_ex_w_valid", false,-1);
    tracep->declBit(c+1137,"lsu_ex_w_ready", false,-1);
    tracep->declBit(c+1223,"bresp", false,-1);
    tracep->declBit(c+895,"exc_wb_valid", false,-1);
    tracep->declBit(c+26,"exc_wb_ready", false,-1);
    tracep->declBit(c+438,"w_finish_sim", false,-1);
    tracep->declBus(c+444,"w_addr_ex", false,-1, 4,0);
    tracep->declBus(c+445,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+446,"src1_ex", false,-1, 31,0);
    tracep->declBus(c+447,"src2_ex", false,-1, 31,0);
    tracep->declBus(c+448,"opcode_ex", false,-1, 6,0);
    tracep->declBus(c+449,"fun_ex", false,-1, 2,0);
    tracep->declBus(c+450,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+451,"snpc", false,-1, 31,0);
    tracep->declBus(c+1286,"MVENDORID", false,-1, 31,0);
    tracep->declBus(c+1287,"MARCHID", false,-1, 31,0);
    tracep->declBus(c+1288,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1289,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+1290,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+1291,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1292,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+1293,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+1294,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1295,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+1296,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+1297,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+1298,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1299,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+1300,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+1301,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1302,"CSR_ECALL", false,-1, 11,0);
    tracep->declBus(c+1303,"CSR_MRET", false,-1, 11,0);
    tracep->declBus(c+1304,"CSR_MVENDORID", false,-1, 11,0);
    tracep->declBus(c+1305,"CSR_MARCHID", false,-1, 11,0);
    tracep->declBus(c+1306,"YIELD", false,-1, 31,0);
    tracep->declBus(c+1272,"STATE_REC", false,-1, 2,0);
    tracep->declBus(c+1257,"STATE_EX", false,-1, 2,0);
    tracep->declBus(c+1279,"STATE_MDU", false,-1, 2,0);
    tracep->declBus(c+1307,"STATE_OUTPUT_WB", false,-1, 2,0);
    tracep->declBus(c+1308,"STATE_STORE", false,-1, 2,0);
    tracep->declBus(c+1309,"STATE_LOAD", false,-1, 2,0);
    tracep->declQuad(c+452,"signed_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declQuad(c+454,"unsigned_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declBus(c+910,"ex_state", false,-1, 2,0);
    tracep->declBit(c+911,"mdu_ready", false,-1);
    tracep->declBit(c+912,"mdu_valid", false,-1);
    tracep->declBus(c+437,"dnpc_reg", false,-1, 31,0);
    tracep->declBus(c+456,"mulh", false,-1, 31,0);
    tracep->declBus(c+457,"mul_unsigned", false,-1, 31,0);
    tracep->declBit(c+913,"is_div", false,-1);
    tracep->declBit(c+914,"is_divu", false,-1);
    tracep->declBit(c+915,"is_rem", false,-1);
    tracep->declBit(c+916,"is_remu", false,-1);
    tracep->declBus(c+917,"mdu_op", false,-1, 1,0);
    tracep->declBit(c+918,"is_div_op", false,-1);
    tracep->declBus(c+1310,"o_result", false,-1, 31,0);
    tracep->declBus(c+442,"w_data_reg", false,-1, 31,0);
    tracep->declBus(c+458,"csr_data", false,-1, 31,0);
    tracep->declBit(c+1140,"csr_wen", false,-1);
    tracep->declBus(c+459,"m_status", false,-1, 31,0);
    tracep->declBus(c+460,"m_cause", false,-1, 31,0);
    tracep->declBus(c+461,"m_tvec", false,-1, 31,0);
    tracep->declBus(c+462,"m_epc", false,-1, 31,0);
    tracep->pushNamePrefix("MDU_inst ");
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBus(c+446,"i_devidend", false,-1, 31,0);
    tracep->declBus(c+447,"i_devisor", false,-1, 31,0);
    tracep->declBus(c+917,"i_mdu_op", false,-1, 1,0);
    tracep->declBus(c+1310,"o_result", false,-1, 31,0);
    tracep->declBit(c+911,"i_mdu_ready", false,-1);
    tracep->declBit(c+912,"o_mdu_valid", false,-1);
    tracep->declBus(c+1273,"MDU_IDLE", false,-1, 1,0);
    tracep->declBus(c+1280,"MDU_CAL", false,-1, 1,0);
    tracep->declBus(c+1311,"MDU_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+919,"mdu_state", false,-1, 1,0);
    tracep->declBus(c+33,"r_devidend", false,-1, 31,0);
    tracep->declBus(c+34,"r_devisor", false,-1, 31,0);
    tracep->declQuad(c+35,"r_rem", false,-1, 32,0);
    tracep->declBit(c+37,"rem_sign", false,-1);
    tracep->declBus(c+38,"r_quotient", false,-1, 31,0);
    tracep->declBit(c+39,"cal_done", false,-1);
    tracep->declBus(c+1312,"d", false,-1, 31,0);
    tracep->declBus(c+40,"iter_cnt", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_arbiter ");
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1274,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBit(c+28,"ifu_arvalid", false,-1);
    tracep->declBit(c+1129,"ifu_arready", false,-1);
    tracep->declBus(c+890,"ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1279,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1280,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+1130,"ifu_rvalid", false,-1);
    tracep->declBit(c+892,"ifu_rready", false,-1);
    tracep->declBus(c+879,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+48,"ifu_rlast", false,-1);
    tracep->declBus(c+49,"ifu_rid", false,-1, 3,0);
    tracep->declBit(c+897,"lsu_arvalid", false,-1);
    tracep->declBit(c+1131,"lsu_arready", false,-1);
    tracep->declBus(c+1132,"lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1279,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1280,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+1133,"lsu_rvalid", false,-1);
    tracep->declBit(c+898,"lsu_rready", false,-1);
    tracep->declBus(c+879,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+48,"lsu_rlast", false,-1);
    tracep->declBus(c+49,"lsu_rid", false,-1, 3,0);
    tracep->declBit(c+899,"lsu_awvalid", false,-1);
    tracep->declBit(c+1134,"lsu_awready", false,-1);
    tracep->declBus(c+1132,"lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1279,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1280,"lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+899,"lsu_wvalid", false,-1);
    tracep->declBit(c+1135,"lsu_wready", false,-1);
    tracep->declBus(c+1224,"lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+969,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"lsu_wlast", false,-1);
    tracep->declBit(c+1268,"lsu_bready", false,-1);
    tracep->declBit(c+1225,"lsu_bvalid", false,-1);
    tracep->declBus(c+50,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+51,"lsu_bid", false,-1, 3,0);
    tracep->declBit(c+907,"m_arvalid", false,-1);
    tracep->declBit(c+1138,"m_arready", false,-1);
    tracep->declBus(c+1065,"m_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"m_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"m_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"m_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"m_arburst", false,-1, 1,0);
    tracep->declBit(c+880,"m_rvalid", false,-1);
    tracep->declBit(c+908,"m_rready", false,-1);
    tracep->declBus(c+879,"m_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"m_rresp", false,-1, 1,0);
    tracep->declBit(c+48,"m_rlast", false,-1);
    tracep->declBus(c+49,"m_rid", false,-1, 3,0);
    tracep->declBit(c+909,"m_awvalid", false,-1);
    tracep->declBit(c+1139,"m_awready", false,-1);
    tracep->declBus(c+1061,"m_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"m_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"m_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"m_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"m_awburst", false,-1, 1,0);
    tracep->declBit(c+909,"m_wvalid", false,-1);
    tracep->declBit(c+881,"m_wready", false,-1);
    tracep->declBus(c+1062,"m_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"m_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"m_wlast", false,-1);
    tracep->declBit(c+885,"m_bready", false,-1);
    tracep->declBit(c+52,"m_bvalid", false,-1);
    tracep->declBus(c+50,"m_bresp", false,-1, 1,0);
    tracep->declBus(c+51,"m_bid", false,-1, 3,0);
    tracep->declBus(c+1273,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1280,"S_IFU", false,-1, 1,0);
    tracep->declBus(c+1311,"S_LSU_R", false,-1, 1,0);
    tracep->declBus(c+1313,"S_LSU_W", false,-1, 1,0);
    tracep->declBus(c+920,"state", false,-1, 1,0);
    tracep->declBit(c+1229,"ifu_ar_fire", false,-1);
    tracep->declBit(c+972,"lsu_ar_fire", false,-1);
    tracep->declBit(c+973,"lsu_aw_fire", false,-1);
    tracep->declBit(c+974,"lsu_w_fire", false,-1);
    tracep->declBit(c+1225,"lsu_b_fire", false,-1);
    tracep->declBit(c+975,"m_ar_fire", false,-1);
    tracep->declBit(c+1141,"m_r_fire", false,-1);
    tracep->declBit(c+976,"m_aw_fire", false,-1);
    tracep->declBit(c+1230,"m_w_fire", false,-1);
    tracep->declBit(c+1142,"m_b_fire", false,-1);
    tracep->declBit(c+921,"sel_ifu", false,-1);
    tracep->declBit(c+922,"sel_lsu_r", false,-1);
    tracep->declBit(c+885,"sel_lsu_w", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_clint ");
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1274,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBit(c+970,"s_arvalid", false,-1);
    tracep->declBit(c+29,"s_arready", false,-1);
    tracep->declBus(c+1065,"s_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"s_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"s_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"s_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"s_arburst", false,-1, 1,0);
    tracep->declBit(c+30,"s_rvalid", false,-1);
    tracep->declBit(c+1226,"s_rready", false,-1);
    tracep->declBus(c+31,"s_rdata", false,-1, 31,0);
    tracep->declBus(c+1273,"s_rresp", false,-1, 1,0);
    tracep->declBit(c+1268,"s_rlast", false,-1);
    tracep->declBus(c+32,"s_rid", false,-1, 3,0);
    tracep->declBit(c+971,"s_awvalid", false,-1);
    tracep->declBit(c+1258,"s_awready", false,-1);
    tracep->declBus(c+1061,"s_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"s_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"s_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"s_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"s_awburst", false,-1, 1,0);
    tracep->declBit(c+1227,"s_wvalid", false,-1);
    tracep->declBit(c+1258,"s_wready", false,-1);
    tracep->declBus(c+1062,"s_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"s_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"s_wlast", false,-1);
    tracep->declBit(c+1258,"s_bvalid", false,-1);
    tracep->declBit(c+1228,"s_bready", false,-1);
    tracep->declBus(c+1273,"s_bresp", false,-1, 1,0);
    tracep->declBus(c+1269,"s_bid", false,-1, 3,0);
    tracep->declBus(c+1273,"CLINT_IDLE", false,-1, 1,0);
    tracep->declBus(c+1280,"CLINT_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+1314,"RTC_MMIO_LOW", false,-1, 31,0);
    tracep->declBus(c+1315,"RTC_MMIO_HI", false,-1, 31,0);
    tracep->declBus(c+41,"clint_state", false,-1, 1,0);
    tracep->declBit(c+1143,"clint_ar_fire", false,-1);
    tracep->declBit(c+1231,"clint_r_fire", false,-1);
    tracep->declBus(c+42,"mtime_hi", false,-1, 31,0);
    tracep->declBus(c+43,"mtime_low", false,-1, 31,0);
    tracep->declBus(c+31,"r_clint_rdata", false,-1, 31,0);
    tracep->declBus(c+32,"r_rid", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_decoder ");
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1276,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1275,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1277,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBus(c+891,"inst", false,-1, 31,0);
    tracep->declBit(c+25,"fetch_dec_valid", false,-1);
    tracep->declBit(c+892,"fetch_dec_ready", false,-1);
    tracep->declBus(c+903,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+904,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+902,"dec_exc_waddr", false,-1, 4,0);
    tracep->declBus(c+905,"dec_exc_imm", false,-1, 31,0);
    tracep->declBus(c+900,"dec_exc_fun", false,-1, 2,0);
    tracep->declBus(c+901,"dec_exc_opcode", false,-1, 6,0);
    tracep->declBit(c+897,"mem_ar_valid", false,-1);
    tracep->declBit(c+1131,"mem_ar_ready", false,-1);
    tracep->declBit(c+893,"dec_exc_valid", false,-1);
    tracep->declBit(c+894,"dec_exc_ready", false,-1);
    tracep->declBus(c+1316,"TYPE_NUM", false,-1, 31,0);
    tracep->declBus(c+1275,"TYPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1288,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1289,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+1291,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+1292,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+1293,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+1294,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+1295,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+1296,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+1297,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+1280,"STATE_ID", false,-1, 1,0);
    tracep->declBus(c+1311,"STATE_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+1313,"STATE_LOAD_DATA", false,-1, 1,0);
    tracep->declBus(c+900,"r_fun", false,-1, 2,0);
    tracep->declBus(c+901,"r_opcode", false,-1, 6,0);
    tracep->declBus(c+902,"r_waddr", false,-1, 4,0);
    tracep->declBus(c+905,"r_imm", false,-1, 31,0);
    tracep->declBus(c+923,"fun", false,-1, 2,0);
    tracep->declBus(c+924,"opcode", false,-1, 6,0);
    tracep->declBus(c+925,"w_addr", false,-1, 4,0);
    tracep->declBus(c+926,"imm", false,-1, 31,0);
    tracep->declBit(c+927,"mem_load_en", false,-1);
    tracep->declBus(c+928,"id_state", false,-1, 1,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+1316,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1274,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+926,"out", false,-1, 31,0);
    tracep->declBus(c+924,"key", false,-1, 6,0);
    tracep->declBus(c+1271,"default_out", false,-1, 31,0);
    tracep->declArray(c+929,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1316,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1275,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1274,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1317,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+926,"out", false,-1, 31,0);
    tracep->declBus(c+924,"key", false,-1, 6,0);
    tracep->declBus(c+1271,"default_out", false,-1, 31,0);
    tracep->declArray(c+929,"lut", false,-1, 350,0);
    tracep->declBus(c+1318,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+940+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+958+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+967,"lut_out", false,-1, 31,0);
    tracep->declBit(c+968,"hit", false,-1);
    tracep->declBus(c+1319,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_ifu ");
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1274,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBus(c+890,"i_pc", false,-1, 31,0);
    tracep->declBit(c+892,"i_ifu_dec_ready", false,-1);
    tracep->declBit(c+1128,"if_bresp", false,-1);
    tracep->declBus(c+891,"o_current_inst", false,-1, 31,0);
    tracep->declBit(c+25,"o_ifu_dec_r_valid", false,-1);
    tracep->declBit(c+28,"o_ifu_arvalid", false,-1);
    tracep->declBit(c+1129,"i_ifu_arready", false,-1);
    tracep->declBus(c+890,"o_ifu_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"o_ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"o_ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1279,"o_ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1280,"o_ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+892,"o_ifu_rready", false,-1);
    tracep->declBit(c+1130,"i_ifu_rvalid", false,-1);
    tracep->declBus(c+879,"i_ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"i_ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+48,"i_ifu_rlast", false,-1);
    tracep->declBus(c+49,"i_ifu_rid", false,-1, 3,0);
    tracep->declBit(c+28,"r_ifu_ar_valid", false,-1);
    tracep->declBus(c+891,"r_cur_inst", false,-1, 31,0);
    tracep->declBit(c+25,"r_ifu_dec_rvalid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_lsu ");
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1274,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBus(c+440,"i_src1", false,-1, 31,0);
    tracep->declBus(c+441,"i_src2", false,-1, 31,0);
    tracep->declBus(c+905,"i_imm", false,-1, 31,0);
    tracep->declBus(c+900,"i_fun", false,-1, 2,0);
    tracep->declBus(c+901,"i_opcode", false,-1, 6,0);
    tracep->declBit(c+897,"i_lsu_dec_ar_valid", false,-1);
    tracep->declBit(c+26,"i_exc_wb_ready", false,-1);
    tracep->declBit(c+899,"i_lsu_ex_w_valid", false,-1);
    tracep->declBit(c+897,"o_lsu_arvalid", false,-1);
    tracep->declBit(c+1131,"i_lsu_arready", false,-1);
    tracep->declBus(c+1132,"o_lsu_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"o_lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"o_lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1279,"o_lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1280,"o_lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+898,"o_lsu_rready", false,-1);
    tracep->declBit(c+1133,"i_lsu_rvalid", false,-1);
    tracep->declBus(c+879,"i_lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+47,"i_lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+48,"i_lsu_rlast", false,-1);
    tracep->declBus(c+49,"i_lsu_rid", false,-1, 3,0);
    tracep->declBit(c+899,"o_lsu_awvalid", false,-1);
    tracep->declBit(c+1134,"i_lsu_awready", false,-1);
    tracep->declBus(c+1132,"o_lsu_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"o_lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"o_lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1279,"o_lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1280,"o_lsu_awburst", false,-1, 1,0);
    tracep->declBit(c+899,"o_lsu_wvalid", false,-1);
    tracep->declBit(c+1135,"i_lsu_wready", false,-1);
    tracep->declBus(c+1224,"o_lsu_wdata", false,-1, 31,0);
    tracep->declBus(c+969,"o_lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1268,"o_lsu_wlast", false,-1);
    tracep->declBit(c+1268,"o_lsu_bready", false,-1);
    tracep->declBit(c+1225,"i_lsu_bvalid", false,-1);
    tracep->declBus(c+50,"i_lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+51,"i_lsu_bid", false,-1, 3,0);
    tracep->declBus(c+906,"o_r_data", false,-1, 31,0);
    tracep->declBit(c+1133,"o_lsu_rvalid", false,-1);
    tracep->declBit(c+1131,"o_lsu_dec_ar_ready", false,-1);
    tracep->declBit(c+1137,"o_lsu_ex_w_ready", false,-1);
    tracep->declBus(c+896,"o_lsu_wmask", false,-1, 7,0);
    tracep->declBus(c+1288,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+1132,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+1144,"mem_offset", false,-1, 1,0);
    tracep->declBus(c+906,"r_lsu_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rf ");
    tracep->declBus(c+1276,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBit(c+1136,"wen", false,-1);
    tracep->declBus(c+442,"w_data", false,-1, 31,0);
    tracep->declBus(c+902,"w_addr", false,-1, 4,0);
    tracep->declBus(c+903,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+904,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+440,"r_data1", false,-1, 31,0);
    tracep->declBus(c+441,"r_data2", false,-1, 31,0);
    tracep->declBit(c+895,"exc_wb_valid", false,-1);
    tracep->declBit(c+26,"exc_wb_ready", false,-1);
    tracep->declBit(c+27,"wb_bresp", false,-1);
    tracep->declBus(c+439,"exit_code", false,-1, 31,0);
    tracep->declBus(c+1280,"STATE_REC", false,-1, 1,0);
    tracep->declBus(c+1311,"STATE_WB", false,-1, 1,0);
    tracep->declBus(c+44,"wb_state", false,-1, 1,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+463+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_xbar ");
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1274,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1314,"CLINT_ADDR_LEFT", false,-1, 31,0);
    tracep->declBus(c+1315,"CLINT_ADDR_RIGHT", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1222,"reset", false,-1);
    tracep->declBit(c+907,"xb_ar_valid", false,-1);
    tracep->declBit(c+1138,"xb_ar_ready", false,-1);
    tracep->declBus(c+1065,"xb_ar_addr", false,-1, 31,0);
    tracep->declBus(c+1269,"xb_ar_id", false,-1, 3,0);
    tracep->declBus(c+1270,"xb_ar_len", false,-1, 7,0);
    tracep->declBus(c+887,"xb_ar_size", false,-1, 2,0);
    tracep->declBus(c+888,"xb_ar_burst", false,-1, 1,0);
    tracep->declBit(c+880,"xb_r_valid", false,-1);
    tracep->declBit(c+908,"xb_r_ready", false,-1);
    tracep->declBus(c+879,"xb_r_data", false,-1, 31,0);
    tracep->declBus(c+47,"xb_r_resp", false,-1, 1,0);
    tracep->declBit(c+48,"xb_r_last", false,-1);
    tracep->declBus(c+49,"xb_r_id", false,-1, 3,0);
    tracep->declBit(c+909,"xb_aw_valid", false,-1);
    tracep->declBit(c+1139,"xb_aw_ready", false,-1);
    tracep->declBus(c+1061,"xb_aw_addr", false,-1, 31,0);
    tracep->declBus(c+1269,"xb_aw_id", false,-1, 3,0);
    tracep->declBus(c+1270,"xb_aw_len", false,-1, 7,0);
    tracep->declBus(c+882,"xb_aw_size", false,-1, 2,0);
    tracep->declBus(c+883,"xb_aw_burst", false,-1, 1,0);
    tracep->declBit(c+909,"xb_w_valid", false,-1);
    tracep->declBit(c+881,"xb_w_ready", false,-1);
    tracep->declBus(c+1062,"xb_w_data", false,-1, 31,0);
    tracep->declBus(c+1063,"xb_w_strb", false,-1, 3,0);
    tracep->declBit(c+885,"xb_w_last", false,-1);
    tracep->declBit(c+52,"xb_b_valid", false,-1);
    tracep->declBit(c+885,"xb_b_ready", false,-1);
    tracep->declBus(c+50,"xb_b_resp", false,-1, 1,0);
    tracep->declBus(c+51,"xb_b_id", false,-1, 3,0);
    tracep->declBit(c+1064,"soc_arvalid", false,-1);
    tracep->declBit(c+165,"soc_arready", false,-1);
    tracep->declBus(c+1065,"soc_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"soc_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"soc_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"soc_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"soc_arburst", false,-1, 1,0);
    tracep->declBit(c+166,"soc_rvalid", false,-1);
    tracep->declBit(c+889,"soc_rready", false,-1);
    tracep->declBus(c+168,"soc_rdata", false,-1, 31,0);
    tracep->declBus(c+169,"soc_rresp", false,-1, 1,0);
    tracep->declBit(c+170,"soc_rlast", false,-1);
    tracep->declBus(c+167,"soc_rid", false,-1, 3,0);
    tracep->declBit(c+1060,"soc_awvalid", false,-1);
    tracep->declBit(c+160,"soc_awready", false,-1);
    tracep->declBus(c+1061,"soc_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"soc_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"soc_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"soc_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"soc_awburst", false,-1, 1,0);
    tracep->declBit(c+884,"soc_wvalid", false,-1);
    tracep->declBit(c+161,"soc_wready", false,-1);
    tracep->declBus(c+1062,"soc_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"soc_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"soc_wlast", false,-1);
    tracep->declBit(c+162,"soc_bvalid", false,-1);
    tracep->declBit(c+886,"soc_bready", false,-1);
    tracep->declBus(c+164,"soc_bresp", false,-1, 1,0);
    tracep->declBus(c+163,"soc_bid", false,-1, 3,0);
    tracep->declBit(c+970,"clint_arvalid", false,-1);
    tracep->declBit(c+29,"clint_arready", false,-1);
    tracep->declBus(c+1065,"clint_araddr", false,-1, 31,0);
    tracep->declBus(c+1269,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1270,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+887,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+888,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+30,"clint_rvalid", false,-1);
    tracep->declBit(c+1226,"clint_rready", false,-1);
    tracep->declBus(c+31,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1273,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1268,"clint_rlast", false,-1);
    tracep->declBus(c+32,"clint_rid", false,-1, 3,0);
    tracep->declBit(c+971,"clint_awvalid", false,-1);
    tracep->declBit(c+1258,"clint_awready", false,-1);
    tracep->declBus(c+1061,"clint_awaddr", false,-1, 31,0);
    tracep->declBus(c+1269,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1270,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+882,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+883,"clint_awburst", false,-1, 1,0);
    tracep->declBit(c+1227,"clint_wvalid", false,-1);
    tracep->declBit(c+1258,"clint_wready", false,-1);
    tracep->declBus(c+1062,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+1063,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+885,"clint_wlast", false,-1);
    tracep->declBit(c+1258,"clint_bvalid", false,-1);
    tracep->declBit(c+1228,"clint_bready", false,-1);
    tracep->declBus(c+1273,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1269,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+1145,"ar_to_clint", false,-1);
    tracep->declBit(c+1146,"aw_to_clint", false,-1);
    tracep->declBit(c+45,"rd_sel_clint", false,-1);
    tracep->declBit(c+46,"wr_sel_clint", false,-1);
    tracep->declBit(c+975,"ar_hs", false,-1);
    tracep->declBit(c+976,"aw_hs", false,-1);
    tracep->declBit(c+1141,"r_done", false,-1);
    tracep->declBit(c+1142,"b_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"io_d", false,-1);
    tracep->declBit(c+495,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"io_d", false,-1);
    tracep->declBit(c+495,"io_q", false,-1);
    tracep->declBit(c+495,"sync_0", false,-1);
    tracep->declBit(c+496,"sync_1", false,-1);
    tracep->declBit(c+497,"sync_2", false,-1);
    tracep->declBit(c+498,"sync_3", false,-1);
    tracep->declBit(c+499,"sync_4", false,-1);
    tracep->declBit(c+500,"sync_5", false,-1);
    tracep->declBit(c+501,"sync_6", false,-1);
    tracep->declBit(c+502,"sync_7", false,-1);
    tracep->declBit(c+503,"sync_8", false,-1);
    tracep->declBit(c+504,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+552,"auto_in_psel", false,-1);
    tracep->declBit(c+553,"auto_in_penable", false,-1);
    tracep->declBit(c+55,"auto_in_pwrite", false,-1);
    tracep->declBus(c+986,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1257,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1265,"auto_in_pready", false,-1);
    tracep->declBit(c+1266,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1267,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1186,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1187,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1188,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1189,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1190,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1191,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1192,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1193,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1194,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1195,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+1000,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+552,"in_psel", false,-1);
    tracep->declBit(c+553,"in_penable", false,-1);
    tracep->declBus(c+1257,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+55,"in_pwrite", false,-1);
    tracep->declBus(c+984,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1265,"in_pready", false,-1);
    tracep->declBus(c+1267,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1266,"in_pslverr", false,-1);
    tracep->declBus(c+1186,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1187,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1188,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1189,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1190,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1191,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1192,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1193,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1194,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1195,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+550,"auto_in_psel", false,-1);
    tracep->declBit(c+551,"auto_in_penable", false,-1);
    tracep->declBit(c+55,"auto_in_pwrite", false,-1);
    tracep->declBus(c+986,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1257,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1262,"auto_in_pready", false,-1);
    tracep->declBit(c+1263,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1264,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1196,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1197,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+1000,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+550,"in_psel", false,-1);
    tracep->declBit(c+551,"in_penable", false,-1);
    tracep->declBus(c+1257,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+55,"in_pwrite", false,-1);
    tracep->declBus(c+984,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1262,"in_pready", false,-1);
    tracep->declBus(c+1264,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1263,"in_pslverr", false,-1);
    tracep->declBit(c+1196,"ps2_clk", false,-1);
    tracep->declBit(c+1197,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+1107,"auto_in_awvalid", false,-1);
    tracep->declBit(c+1108,"auto_in_wvalid", false,-1);
    tracep->declBit(c+231,"auto_in_arready", false,-1);
    tracep->declBit(c+1109,"auto_in_arvalid", false,-1);
    tracep->declBus(c+92,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1110,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1221,"auto_in_rready", false,-1);
    tracep->declBit(c+232,"auto_in_rvalid", false,-1);
    tracep->declBus(c+233,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+234,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+232,"state", false,-1);
    tracep->declBus(c+234,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+233,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+1147,"raddr", false,-1, 31,0);
    tracep->declBit(c+1148,"ren", false,-1);
    tracep->declBus(c+1149,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+987,"auto_in_psel", false,-1);
    tracep->declBit(c+554,"auto_in_penable", false,-1);
    tracep->declBit(c+55,"auto_in_pwrite", false,-1);
    tracep->declBus(c+983,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1210,"auto_in_pready", false,-1);
    tracep->declBit(c+1258,"auto_in_pslverr", false,-1);
    tracep->declBus(c+57,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1150,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1151,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1208,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+983,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+987,"in_psel", false,-1);
    tracep->declBit(c+554,"in_penable", false,-1);
    tracep->declBus(c+1257,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+55,"in_pwrite", false,-1);
    tracep->declBus(c+984,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1210,"in_pready", false,-1);
    tracep->declBus(c+57,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1258,"in_pslverr", false,-1);
    tracep->declBit(c+1150,"qspi_sck", false,-1);
    tracep->declBit(c+1151,"qspi_ce_n", false,-1);
    tracep->declBus(c+1208,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1208,"din", false,-1, 3,0);
    tracep->declBus(c+1161,"dout", false,-1, 3,0);
    tracep->declBus(c+1162,"douten", false,-1, 3,0);
    tracep->declBit(c+1232,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1184,"clk_i", false,-1);
    tracep->declBit(c+1185,"rst_i", false,-1);
    tracep->declBus(c+983,"adr_i", false,-1, 31,0);
    tracep->declBus(c+984,"dat_i", false,-1, 31,0);
    tracep->declBus(c+57,"dat_o", false,-1, 31,0);
    tracep->declBus(c+56,"sel_i", false,-1, 3,0);
    tracep->declBit(c+987,"cyc_i", false,-1);
    tracep->declBit(c+987,"stb_i", false,-1);
    tracep->declBit(c+1232,"ack_o", false,-1);
    tracep->declBit(c+55,"we_i", false,-1);
    tracep->declBit(c+1150,"sck", false,-1);
    tracep->declBit(c+1151,"ce_n", false,-1);
    tracep->declBus(c+1208,"din", false,-1, 3,0);
    tracep->declBus(c+1161,"dout", false,-1, 3,0);
    tracep->declBus(c+1162,"douten", false,-1, 3,0);
    tracep->declBus(c+1273,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1280,"ST_WAIT", false,-1, 1,0);
    tracep->declBus(c+1311,"ST_INIT", false,-1, 1,0);
    tracep->declBit(c+638,"mi_sck", false,-1);
    tracep->declBit(c+639,"mi_ce_n", false,-1);
    tracep->declBus(c+640,"mi_dout", false,-1, 3,0);
    tracep->declBit(c+641,"mi_doe", false,-1);
    tracep->declBit(c+642,"mr_sck", false,-1);
    tracep->declBit(c+643,"mr_ce_n", false,-1);
    tracep->declBus(c+1208,"mr_din", false,-1, 3,0);
    tracep->declBus(c+644,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+645,"mr_doe", false,-1);
    tracep->declBit(c+646,"mw_sck", false,-1);
    tracep->declBit(c+647,"mw_ce_n", false,-1);
    tracep->declBus(c+1208,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1163,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+648,"mw_doe", false,-1);
    tracep->declBit(c+1320,"mi_init", false,-1);
    tracep->declBit(c+649,"mi_done", false,-1);
    tracep->declBit(c+1164,"mr_rd", false,-1);
    tracep->declBit(c+650,"mr_done", false,-1);
    tracep->declBit(c+1165,"mw_wr", false,-1);
    tracep->declBit(c+1233,"mw_done", false,-1);
    tracep->declBit(c+987,"wb_valid", false,-1);
    tracep->declBit(c+1001,"wb_we", false,-1);
    tracep->declBit(c+555,"wb_re", false,-1);
    tracep->declBus(c+651,"state", false,-1, 1,0);
    tracep->declBus(c+1234,"nstate", false,-1, 1,0);
    tracep->declBit(c+652,"qpi_ready", false,-1);
    tracep->declBus(c+505,"size", false,-1, 2,0);
    tracep->declBus(c+1002,"byte0", false,-1, 7,0);
    tracep->declBus(c+1003,"byte1", false,-1, 7,0);
    tracep->declBus(c+1004,"byte2", false,-1, 7,0);
    tracep->declBus(c+1005,"byte3", false,-1, 7,0);
    tracep->declBus(c+1006,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MI ");
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1235,"rst_n", false,-1);
    tracep->declBit(c+653,"start", false,-1);
    tracep->declBit(c+649,"done", false,-1);
    tracep->declBit(c+638,"sck", false,-1);
    tracep->declBit(c+639,"ce_n", false,-1);
    tracep->declBus(c+640,"dout", false,-1, 3,0);
    tracep->declBit(c+641,"douten", false,-1);
    tracep->declBus(c+1273,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1280,"SEND", false,-1, 1,0);
    tracep->declBus(c+1311,"INIT_DONE", false,-1, 1,0);
    tracep->declBus(c+654,"state", false,-1, 1,0);
    tracep->declBus(c+655,"nstate", false,-1, 1,0);
    tracep->declBus(c+656,"counter", false,-1, 3,0);
    tracep->declBus(c+1321,"CMD_35H", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1235,"rst_n", false,-1);
    tracep->declBus(c+1007,"addr", false,-1, 23,0);
    tracep->declBit(c+1164,"rd", false,-1);
    tracep->declBus(c+1308,"size", false,-1, 2,0);
    tracep->declBit(c+1268,"qpi_mode", false,-1);
    tracep->declBit(c+650,"done", false,-1);
    tracep->declBus(c+57,"line", false,-1, 31,0);
    tracep->declBit(c+642,"sck", false,-1);
    tracep->declBit(c+643,"ce_n", false,-1);
    tracep->declBus(c+1208,"din", false,-1, 3,0);
    tracep->declBus(c+644,"dout", false,-1, 3,0);
    tracep->declBit(c+645,"douten", false,-1);
    tracep->declBus(c+1322,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1323,"READ", false,-1, 0,0);
    tracep->declBus(c+1324,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+1325,"QPI_FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+657,"state", false,-1);
    tracep->declBit(c+1166,"nstate", false,-1);
    tracep->declBus(c+658,"counter", false,-1, 7,0);
    tracep->declBus(c+659,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+506+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1326,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+660,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1235,"rst_n", false,-1);
    tracep->declBus(c+1008,"addr", false,-1, 23,0);
    tracep->declBus(c+1006,"line", false,-1, 31,0);
    tracep->declBus(c+505,"size", false,-1, 2,0);
    tracep->declBit(c+1165,"wr", false,-1);
    tracep->declBit(c+1268,"qpi_mode", false,-1);
    tracep->declBit(c+1233,"done", false,-1);
    tracep->declBit(c+646,"sck", false,-1);
    tracep->declBit(c+647,"ce_n", false,-1);
    tracep->declBus(c+1208,"din", false,-1, 3,0);
    tracep->declBus(c+1163,"dout", false,-1, 3,0);
    tracep->declBit(c+648,"douten", false,-1);
    tracep->declBus(c+1322,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1323,"WRITE", false,-1, 0,0);
    tracep->declBus(c+510,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBus(c+511,"QPI_FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+661,"state", false,-1);
    tracep->declBit(c+1167,"nstate", false,-1);
    tracep->declBus(c+662,"counter", false,-1, 7,0);
    tracep->declBus(c+663,"saddr", false,-1, 23,0);
    tracep->declBus(c+1327,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+546,"auto_in_psel", false,-1);
    tracep->declBit(c+547,"auto_in_penable", false,-1);
    tracep->declBit(c+55,"auto_in_pwrite", false,-1);
    tracep->declBus(c+983,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1257,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+636,"auto_in_pready", false,-1);
    tracep->declBit(c+1258,"auto_in_pslverr", false,-1);
    tracep->declBus(c+637,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1209,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+627,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+628,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+629,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+630,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+631,"sdram_bundle_we", false,-1);
    tracep->declBus(c+632,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+633,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+634,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+635,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+983,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+546,"in_psel", false,-1);
    tracep->declBit(c+547,"in_penable", false,-1);
    tracep->declBus(c+1257,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+55,"in_pwrite", false,-1);
    tracep->declBus(c+984,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+636,"in_pready", false,-1);
    tracep->declBus(c+637,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1258,"in_pslverr", false,-1);
    tracep->declBit(c+1209,"sdram_clk", false,-1);
    tracep->declBit(c+627,"sdram_cke", false,-1);
    tracep->declBit(c+628,"sdram_cs", false,-1);
    tracep->declBit(c+629,"sdram_ras", false,-1);
    tracep->declBit(c+630,"sdram_cas", false,-1);
    tracep->declBit(c+631,"sdram_we", false,-1);
    tracep->declBus(c+632,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+633,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+634,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+635,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+664,"sdram_dout_en", false,-1);
    tracep->declBus(c+665,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+512,"state", false,-1, 1,0);
    tracep->declBit(c+666,"req_accept", false,-1);
    tracep->declBit(c+1009,"is_read", false,-1);
    tracep->declBit(c+1010,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1184,"clk_i", false,-1);
    tracep->declBit(c+1185,"rst_i", false,-1);
    tracep->declBus(c+1011,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1009,"inport_rd_i", false,-1);
    tracep->declBus(c+1270,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+983,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+984,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+635,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+666,"inport_accept_o", false,-1);
    tracep->declBit(c+636,"inport_ack_o", false,-1);
    tracep->declBit(c+1258,"inport_error_o", false,-1);
    tracep->declBus(c+637,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1209,"sdram_clk_o", false,-1);
    tracep->declBit(c+627,"sdram_cke_o", false,-1);
    tracep->declBit(c+628,"sdram_cs_o", false,-1);
    tracep->declBit(c+629,"sdram_ras_o", false,-1);
    tracep->declBit(c+630,"sdram_cas_o", false,-1);
    tracep->declBit(c+631,"sdram_we_o", false,-1);
    tracep->declBus(c+634,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+632,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+633,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+665,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+664,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1328,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1329,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1316,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1330,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1330,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1330,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1331,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1332,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1333,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1334,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1335,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1331,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1336,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1337,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1338,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1339,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1340,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1341,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1342,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1269,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1343,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1331,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1269,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1342,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1341,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1337,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1339,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1338,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1340,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1336,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1344,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1345,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1346,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1346,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1347,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1346,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1330,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1330,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1348,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+983,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1011,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1009,"ram_rd_w", false,-1);
    tracep->declBit(c+666,"ram_accept_w", false,-1);
    tracep->declBus(c+984,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+637,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+636,"ram_ack_w", false,-1);
    tracep->declBit(c+1012,"ram_req_w", false,-1);
    tracep->declBus(c+667,"command_q", false,-1, 3,0);
    tracep->declBus(c+632,"addr_q", false,-1, 12,0);
    tracep->declBus(c+665,"data_q", false,-1, 15,0);
    tracep->declBit(c+668,"data_rd_en_q", false,-1);
    tracep->declBus(c+634,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+627,"cke_q", false,-1);
    tracep->declBus(c+633,"bank_q", false,-1, 1,0);
    tracep->declBus(c+669,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+670,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+635,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+671,"refresh_q", false,-1);
    tracep->declBus(c+672,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+673+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+677,"state_q", false,-1, 3,0);
    tracep->declBus(c+1168,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1169,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+678,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+679,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1013,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1014,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1015,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1331,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+680,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1170,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1349,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+681,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+682,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+683,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+684,"idx", false,-1, 31,0);
    tracep->declBus(c+685,"rd_q", false,-1, 3,0);
    tracep->declBit(c+636,"ack_q", false,-1);
    tracep->declArray(c+686,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+991,"auto_in_psel", false,-1);
    tracep->declBit(c+992,"auto_in_penable", false,-1);
    tracep->declBit(c+55,"auto_in_pwrite", false,-1);
    tracep->declBus(c+985,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1257,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"auto_in_pready", false,-1);
    tracep->declBit(c+1213,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1214,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+625,"spi_bundle_sck", false,-1);
    tracep->declBus(c+626,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1206,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1207,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1350,"spi_reg_start", false,-1, 31,0);
    tracep->declBus(c+1351,"spi_reg_end", false,-1, 31,0);
    tracep->declBus(c+1278,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1352,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1353,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+1016,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+991,"in_psel", false,-1);
    tracep->declBit(c+992,"in_penable", false,-1);
    tracep->declBus(c+1257,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+55,"in_pwrite", false,-1);
    tracep->declBus(c+984,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1212,"in_pready", false,-1);
    tracep->declBus(c+1214,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1213,"in_pslverr", false,-1);
    tracep->declBit(c+625,"spi_sck", false,-1);
    tracep->declBus(c+626,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1206,"spi_mosi", false,-1);
    tracep->declBit(c+1207,"spi_miso", false,-1);
    tracep->declBit(c+689,"spi_irq_out", false,-1);
    tracep->declBit(c+1017,"apb_setup", false,-1);
    tracep->declBit(c+1018,"apb_access", false,-1);
    tracep->declBit(c+1019,"hit_spi_reg", false,-1);
    tracep->declBit(c+1020,"hit_flash_xip", false,-1);
    tracep->declBus(c+1354,"SPI_TX_RX0", false,-1, 4,0);
    tracep->declBus(c+1355,"SPI_TX_RX1", false,-1, 4,0);
    tracep->declBus(c+1356,"SPI_TX_RX2", false,-1, 4,0);
    tracep->declBus(c+1357,"SPI_TX_RX3", false,-1, 4,0);
    tracep->declBus(c+1358,"SPI_CTRL", false,-1, 4,0);
    tracep->declBus(c+1359,"SPI_DIV", false,-1, 4,0);
    tracep->declBus(c+1360,"SPI_SS", false,-1, 4,0);
    tracep->declBus(c+1361,"CTRL_GO_BSY_BIT", false,-1, 31,0);
    tracep->declBus(c+1319,"CTRL_RX_NEG_BIT", false,-1, 31,0);
    tracep->declBus(c+1362,"CTRL_TX_NEG_BIT", false,-1, 31,0);
    tracep->declBus(c+1363,"CTRL_LSB_BIT", false,-1, 31,0);
    tracep->declBus(c+1364,"CTRL_IE_BIT", false,-1, 31,0);
    tracep->declBus(c+1365,"CTRL_ASS_BIT", false,-1, 31,0);
    tracep->declBus(c+1366,"XIP_DIVIDE", false,-1, 31,0);
    tracep->declBus(c+1367,"XIP_SS_SEL", false,-1, 31,0);
    tracep->declBus(c+1368,"XIP_CHAR_LEN", false,-1, 31,0);
    tracep->declBus(c+1369,"XIP_CTRL", false,-1, 31,0);
    tracep->declBus(c+1269,"XIP_IDLE", false,-1, 3,0);
    tracep->declBus(c+1342,"XIP_W_RTX0", false,-1, 3,0);
    tracep->declBus(c+1341,"XIP_W_RTX1", false,-1, 3,0);
    tracep->declBus(c+1337,"XIP_R_RTX0", false,-1, 3,0);
    tracep->declBus(c+1339,"XIP_W_DIVIDE", false,-1, 3,0);
    tracep->declBus(c+1338,"XIP_W_SS", false,-1, 3,0);
    tracep->declBus(c+1340,"XIP_W_CTRL", false,-1, 3,0);
    tracep->declBus(c+1336,"XIP_R_GO_BUSY", false,-1, 3,0);
    tracep->declBus(c+1344,"XIP_RESP", false,-1, 3,0);
    tracep->declBus(c+690,"xip_state", false,-1, 3,0);
    tracep->declBit(c+691,"xip_busy", false,-1);
    tracep->declBus(c+692,"xip_addr_latched", false,-1, 31,0);
    tracep->declBus(c+693,"xip_rdata", false,-1, 31,0);
    tracep->declBit(c+694,"xip_resp_valid", false,-1);
    tracep->declBit(c+695,"xip_resp_err", false,-1);
    tracep->declBus(c+1171,"wb_adr_i_r", false,-1, 4,0);
    tracep->declBus(c+1172,"wb_dat_i_r", false,-1, 31,0);
    tracep->declBus(c+1173,"wb_sel_i_r", false,-1, 3,0);
    tracep->declBit(c+1174,"wb_we_i_r", false,-1);
    tracep->declBit(c+1175,"wb_stb_i_r", false,-1);
    tracep->declBit(c+1176,"wb_cyc_i_r", false,-1);
    tracep->declBus(c+696,"wb_dat_o_w", false,-1, 31,0);
    tracep->declBit(c+697,"wb_ack_o_w", false,-1);
    tracep->declBit(c+1258,"wb_err_o_w", false,-1);
    tracep->declBit(c+1021,"hit_xip_rd_setup", false,-1);
    tracep->declBit(c+1022,"hit_xip_bad_acc", false,-1);
    tracep->declBit(c+1023,"hit_invalid_acc", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1317,"Tp", false,-1, 31,0);
    tracep->declBit(c+1184,"wb_clk_i", false,-1);
    tracep->declBit(c+1185,"wb_rst_i", false,-1);
    tracep->declBus(c+1171,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1172,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+696,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1173,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1174,"wb_we_i", false,-1);
    tracep->declBit(c+1175,"wb_stb_i", false,-1);
    tracep->declBit(c+1176,"wb_cyc_i", false,-1);
    tracep->declBit(c+697,"wb_ack_o", false,-1);
    tracep->declBit(c+1258,"wb_err_o", false,-1);
    tracep->declBit(c+689,"wb_int_o", false,-1);
    tracep->declBus(c+626,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+625,"sclk_pad_o", false,-1);
    tracep->declBit(c+1206,"mosi_pad_o", false,-1);
    tracep->declBit(c+1207,"miso_pad_i", false,-1);
    tracep->declBus(c+698,"divider", false,-1, 15,0);
    tracep->declBus(c+699,"ctrl", false,-1, 13,0);
    tracep->declBus(c+700,"ss", false,-1, 7,0);
    tracep->declBus(c+1177,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+701,"rx", false,-1, 127,0);
    tracep->declBit(c+705,"rx_negedge", false,-1);
    tracep->declBit(c+706,"tx_negedge", false,-1);
    tracep->declBus(c+707,"char_len", false,-1, 6,0);
    tracep->declBit(c+708,"go", false,-1);
    tracep->declBit(c+709,"lsb", false,-1);
    tracep->declBit(c+710,"ie", false,-1);
    tracep->declBit(c+711,"ass", false,-1);
    tracep->declBit(c+1178,"spi_divider_sel", false,-1);
    tracep->declBit(c+1179,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1180,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1181,"spi_ss_sel", false,-1);
    tracep->declBit(c+712,"tip", false,-1);
    tracep->declBit(c+713,"pos_edge", false,-1);
    tracep->declBit(c+714,"neg_edge", false,-1);
    tracep->declBit(c+715,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1317,"Tp", false,-1, 31,0);
    tracep->declBit(c+1184,"clk_in", false,-1);
    tracep->declBit(c+1185,"rst", false,-1);
    tracep->declBit(c+712,"enable", false,-1);
    tracep->declBit(c+708,"go", false,-1);
    tracep->declBit(c+715,"last_clk", false,-1);
    tracep->declBus(c+698,"divider", false,-1, 15,0);
    tracep->declBit(c+625,"clk_out", false,-1);
    tracep->declBit(c+713,"pos_edge", false,-1);
    tracep->declBit(c+714,"neg_edge", false,-1);
    tracep->declBus(c+716,"cnt", false,-1, 15,0);
    tracep->declBit(c+717,"cnt_zero", false,-1);
    tracep->declBit(c+718,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1317,"Tp", false,-1, 31,0);
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1185,"rst", false,-1);
    tracep->declBus(c+1182,"latch", false,-1, 3,0);
    tracep->declBus(c+1173,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+707,"len", false,-1, 6,0);
    tracep->declBit(c+709,"lsb", false,-1);
    tracep->declBit(c+708,"go", false,-1);
    tracep->declBit(c+713,"pos_edge", false,-1);
    tracep->declBit(c+714,"neg_edge", false,-1);
    tracep->declBit(c+705,"rx_negedge", false,-1);
    tracep->declBit(c+706,"tx_negedge", false,-1);
    tracep->declBit(c+712,"tip", false,-1);
    tracep->declBit(c+715,"last", false,-1);
    tracep->declBus(c+1172,"p_in", false,-1, 31,0);
    tracep->declArray(c+701,"p_out", false,-1, 127,0);
    tracep->declBit(c+625,"s_clk", false,-1);
    tracep->declBit(c+1207,"s_in", false,-1);
    tracep->declBit(c+1206,"s_out", false,-1);
    tracep->declBus(c+719,"cnt", false,-1, 7,0);
    tracep->declArray(c+701,"data", false,-1, 127,0);
    tracep->declBus(c+720,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+721,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+722,"rx_clk", false,-1);
    tracep->declBit(c+723,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+988,"auto_in_psel", false,-1);
    tracep->declBit(c+989,"auto_in_penable", false,-1);
    tracep->declBit(c+55,"auto_in_pwrite", false,-1);
    tracep->declBus(c+986,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1257,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+990,"auto_in_pready", false,-1);
    tracep->declBit(c+1258,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1211,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1204,"uart_rx", false,-1);
    tracep->declBit(c+1205,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+988,"in_psel", false,-1);
    tracep->declBit(c+989,"in_penable", false,-1);
    tracep->declBus(c+1257,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+990,"in_pready", false,-1);
    tracep->declBit(c+1258,"in_pslverr", false,-1);
    tracep->declBus(c+1000,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+55,"in_pwrite", false,-1);
    tracep->declBus(c+1211,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+984,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1204,"uart_rx", false,-1);
    tracep->declBit(c+1205,"uart_tx", false,-1);
    tracep->declBit(c+724,"rtsn", false,-1);
    tracep->declBit(c+1258,"ctsn", false,-1);
    tracep->declBit(c+725,"dtr_pad_o", false,-1);
    tracep->declBit(c+1258,"dsr_pad_i", false,-1);
    tracep->declBit(c+1258,"ri_pad_i", false,-1);
    tracep->declBit(c+1258,"dcd_pad_i", false,-1);
    tracep->declBit(c+726,"interrupt", false,-1);
    tracep->declBit(c+1236,"reg_we", false,-1);
    tracep->declBit(c+1237,"reg_re", false,-1);
    tracep->declBus(c+1024,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1025,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+513,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1183,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+727,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1185,"wb_rst_i", false,-1);
    tracep->declBus(c+1024,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1026,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1183,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1236,"wb_we_i", false,-1);
    tracep->declBit(c+1237,"wb_re_i", false,-1);
    tracep->declBit(c+1205,"stx_pad_o", false,-1);
    tracep->declBit(c+1204,"srx_pad_i", false,-1);
    tracep->declBus(c+1344,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+727,"rts_pad_o", false,-1);
    tracep->declBit(c+725,"dtr_pad_o", false,-1);
    tracep->declBit(c+726,"int_o", false,-1);
    tracep->declBit(c+728,"enable", false,-1);
    tracep->declBit(c+729,"srx_pad", false,-1);
    tracep->declBus(c+730,"ier", false,-1, 3,0);
    tracep->declBus(c+731,"iir", false,-1, 3,0);
    tracep->declBus(c+732,"fcr", false,-1, 1,0);
    tracep->declBus(c+733,"mcr", false,-1, 4,0);
    tracep->declBus(c+734,"lcr", false,-1, 7,0);
    tracep->declBus(c+735,"msr", false,-1, 7,0);
    tracep->declBus(c+736,"dl", false,-1, 15,0);
    tracep->declBus(c+737,"scratch", false,-1, 7,0);
    tracep->declBit(c+738,"start_dlc", false,-1);
    tracep->declBit(c+739,"lsr_mask_d", false,-1);
    tracep->declBit(c+740,"msi_reset", false,-1);
    tracep->declBus(c+741,"dlc", false,-1, 15,0);
    tracep->declBus(c+742,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+743,"rx_reset", false,-1);
    tracep->declBit(c+744,"tx_reset", false,-1);
    tracep->declBit(c+745,"dlab", false,-1);
    tracep->declBit(c+1268,"cts_pad_i", false,-1);
    tracep->declBit(c+1258,"dsr_pad_i", false,-1);
    tracep->declBit(c+1258,"ri_pad_i", false,-1);
    tracep->declBit(c+1258,"dcd_pad_i", false,-1);
    tracep->declBit(c+746,"loopback", false,-1);
    tracep->declBit(c+1258,"cts", false,-1);
    tracep->declBit(c+1268,"dsr", false,-1);
    tracep->declBit(c+1268,"ri", false,-1);
    tracep->declBit(c+1268,"dcd", false,-1);
    tracep->declBit(c+747,"cts_c", false,-1);
    tracep->declBit(c+748,"dsr_c", false,-1);
    tracep->declBit(c+749,"ri_c", false,-1);
    tracep->declBit(c+750,"dcd_c", false,-1);
    tracep->declBus(c+751,"lsr", false,-1, 7,0);
    tracep->declBit(c+752,"lsr0", false,-1);
    tracep->declBit(c+753,"lsr1", false,-1);
    tracep->declBit(c+754,"lsr2", false,-1);
    tracep->declBit(c+755,"lsr3", false,-1);
    tracep->declBit(c+756,"lsr4", false,-1);
    tracep->declBit(c+757,"lsr5", false,-1);
    tracep->declBit(c+758,"lsr6", false,-1);
    tracep->declBit(c+759,"lsr7", false,-1);
    tracep->declBit(c+760,"lsr0r", false,-1);
    tracep->declBit(c+761,"lsr1r", false,-1);
    tracep->declBit(c+762,"lsr2r", false,-1);
    tracep->declBit(c+763,"lsr3r", false,-1);
    tracep->declBit(c+764,"lsr4r", false,-1);
    tracep->declBit(c+765,"lsr5r", false,-1);
    tracep->declBit(c+766,"lsr6r", false,-1);
    tracep->declBit(c+767,"lsr7r", false,-1);
    tracep->declBit(c+10,"lsr_mask", false,-1);
    tracep->declBit(c+768,"rls_int", false,-1);
    tracep->declBit(c+769,"rda_int", false,-1);
    tracep->declBit(c+770,"ti_int", false,-1);
    tracep->declBit(c+771,"thre_int", false,-1);
    tracep->declBit(c+772,"ms_int", false,-1);
    tracep->declBit(c+773,"tf_push", false,-1);
    tracep->declBit(c+774,"rf_pop", false,-1);
    tracep->declBus(c+1238,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+775,"rf_error_bit", false,-1);
    tracep->declBit(c+753,"rf_overrun", false,-1);
    tracep->declBit(c+776,"rf_push_pulse", false,-1);
    tracep->declBus(c+777,"rf_count", false,-1, 4,0);
    tracep->declBus(c+778,"tf_count", false,-1, 4,0);
    tracep->declBus(c+779,"tstate", false,-1, 2,0);
    tracep->declBus(c+780,"rstate", false,-1, 3,0);
    tracep->declBus(c+781,"counter_t", false,-1, 9,0);
    tracep->declBit(c+782,"thre_set_en", false,-1);
    tracep->declBus(c+783,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+784,"block_value", false,-1, 7,0);
    tracep->declBit(c+785,"serial_out", false,-1);
    tracep->declBit(c+786,"serial_in", false,-1);
    tracep->declBit(c+11,"lsr_mask_condition", false,-1);
    tracep->declBit(c+12,"iir_read", false,-1);
    tracep->declBit(c+13,"msr_read", false,-1);
    tracep->declBit(c+14,"fifo_read", false,-1);
    tracep->declBit(c+15,"fifo_write", false,-1);
    tracep->declBus(c+787,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+788,"lsr0_d", false,-1);
    tracep->declBit(c+789,"lsr1_d", false,-1);
    tracep->declBit(c+790,"lsr2_d", false,-1);
    tracep->declBit(c+791,"lsr3_d", false,-1);
    tracep->declBit(c+792,"lsr4_d", false,-1);
    tracep->declBit(c+793,"lsr5_d", false,-1);
    tracep->declBit(c+794,"lsr6_d", false,-1);
    tracep->declBit(c+795,"lsr7_d", false,-1);
    tracep->declBit(c+796,"rls_int_d", false,-1);
    tracep->declBit(c+797,"thre_int_d", false,-1);
    tracep->declBit(c+798,"ms_int_d", false,-1);
    tracep->declBit(c+799,"ti_int_d", false,-1);
    tracep->declBit(c+800,"rda_int_d", false,-1);
    tracep->declBit(c+801,"rls_int_rise", false,-1);
    tracep->declBit(c+802,"thre_int_rise", false,-1);
    tracep->declBit(c+803,"ms_int_rise", false,-1);
    tracep->declBit(c+804,"ti_int_rise", false,-1);
    tracep->declBit(c+805,"rda_int_rise", false,-1);
    tracep->declBit(c+806,"rls_int_pnd", false,-1);
    tracep->declBit(c+807,"rda_int_pnd", false,-1);
    tracep->declBit(c+808,"thre_int_pnd", false,-1);
    tracep->declBit(c+809,"ms_int_pnd", false,-1);
    tracep->declBit(c+810,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1317,"Tp", false,-1, 31,0);
    tracep->declBus(c+1317,"width", false,-1, 31,0);
    tracep->declBus(c+1323,"init_value", false,-1, 0,0);
    tracep->declBit(c+1185,"rst_i", false,-1);
    tracep->declBit(c+1184,"clk_i", false,-1);
    tracep->declBit(c+1258,"stage1_rst_i", false,-1);
    tracep->declBit(c+1268,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1204,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+729,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+811,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1185,"wb_rst_i", false,-1);
    tracep->declBus(c+734,"lcr", false,-1, 7,0);
    tracep->declBit(c+774,"rf_pop", false,-1);
    tracep->declBit(c+786,"srx_pad_i", false,-1);
    tracep->declBit(c+728,"enable", false,-1);
    tracep->declBit(c+743,"rx_reset", false,-1);
    tracep->declBit(c+10,"lsr_mask", false,-1);
    tracep->declBus(c+781,"counter_t", false,-1, 9,0);
    tracep->declBus(c+777,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1238,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+753,"rf_overrun", false,-1);
    tracep->declBit(c+775,"rf_error_bit", false,-1);
    tracep->declBus(c+780,"rstate", false,-1, 3,0);
    tracep->declBit(c+776,"rf_push_pulse", false,-1);
    tracep->declBus(c+812,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+813,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+814,"rshift", false,-1, 7,0);
    tracep->declBit(c+815,"rparity", false,-1);
    tracep->declBit(c+816,"rparity_error", false,-1);
    tracep->declBit(c+817,"rframing_error", false,-1);
    tracep->declBit(c+818,"rbit_in", false,-1);
    tracep->declBit(c+819,"rparity_xor", false,-1);
    tracep->declBus(c+820,"counter_b", false,-1, 7,0);
    tracep->declBit(c+821,"rf_push_q", false,-1);
    tracep->declBus(c+822,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+823,"rf_push", false,-1);
    tracep->declBit(c+824,"break_error", false,-1);
    tracep->declBit(c+825,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+826,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+827,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+828,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1269,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1342,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1341,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1337,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1339,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1338,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1340,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1336,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1344,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1345,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1370,"sr_push", false,-1, 3,0);
    tracep->declBus(c+829,"toc_value", false,-1, 9,0);
    tracep->declBus(c+830,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1306,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1347,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1331,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1276,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1185,"wb_rst_i", false,-1);
    tracep->declBit(c+776,"push", false,-1);
    tracep->declBit(c+774,"pop", false,-1);
    tracep->declBus(c+822,"data_in", false,-1, 10,0);
    tracep->declBit(c+743,"fifo_reset", false,-1);
    tracep->declBit(c+10,"reset_status", false,-1);
    tracep->declBus(c+1238,"data_out", false,-1, 10,0);
    tracep->declBit(c+753,"overrun", false,-1);
    tracep->declBus(c+777,"count", false,-1, 4,0);
    tracep->declBit(c+775,"error_bit", false,-1);
    tracep->declBus(c+1239,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+831+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+847,"top", false,-1, 3,0);
    tracep->declBus(c+848,"bottom", false,-1, 3,0);
    tracep->declBus(c+849,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+850,"word0", false,-1, 2,0);
    tracep->declBus(c+851,"word1", false,-1, 2,0);
    tracep->declBus(c+852,"word2", false,-1, 2,0);
    tracep->declBus(c+853,"word3", false,-1, 2,0);
    tracep->declBus(c+854,"word4", false,-1, 2,0);
    tracep->declBus(c+855,"word5", false,-1, 2,0);
    tracep->declBus(c+856,"word6", false,-1, 2,0);
    tracep->declBus(c+857,"word7", false,-1, 2,0);
    tracep->declBus(c+858,"word8", false,-1, 2,0);
    tracep->declBus(c+859,"word9", false,-1, 2,0);
    tracep->declBus(c+860,"word10", false,-1, 2,0);
    tracep->declBus(c+861,"word11", false,-1, 2,0);
    tracep->declBus(c+862,"word12", false,-1, 2,0);
    tracep->declBus(c+863,"word13", false,-1, 2,0);
    tracep->declBus(c+864,"word14", false,-1, 2,0);
    tracep->declBus(c+865,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1331,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1353,"data_width", false,-1, 31,0);
    tracep->declBus(c+1347,"depth", false,-1, 31,0);
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+776,"we", false,-1);
    tracep->declBus(c+847,"a", false,-1, 3,0);
    tracep->declBus(c+848,"dpra", false,-1, 3,0);
    tracep->declBus(c+866,"di", false,-1, 7,0);
    tracep->declBus(c+1239,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+514+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1185,"wb_rst_i", false,-1);
    tracep->declBus(c+734,"lcr", false,-1, 7,0);
    tracep->declBit(c+773,"tf_push", false,-1);
    tracep->declBus(c+1026,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+728,"enable", false,-1);
    tracep->declBit(c+744,"tx_reset", false,-1);
    tracep->declBit(c+10,"lsr_mask", false,-1);
    tracep->declBit(c+785,"stx_pad_o", false,-1);
    tracep->declBus(c+779,"tstate", false,-1, 2,0);
    tracep->declBus(c+778,"tf_count", false,-1, 4,0);
    tracep->declBus(c+867,"counter", false,-1, 4,0);
    tracep->declBus(c+868,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+869,"shift_out", false,-1, 6,0);
    tracep->declBit(c+870,"stx_o_tmp", false,-1);
    tracep->declBit(c+871,"parity_xor", false,-1);
    tracep->declBit(c+872,"tf_pop", false,-1);
    tracep->declBit(c+873,"bit_out", false,-1);
    tracep->declBus(c+1026,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1240,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+874,"tf_overrun", false,-1);
    tracep->declBus(c+1272,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1257,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1279,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1307,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1308,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1309,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1353,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1347,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1331,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1276,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+1185,"wb_rst_i", false,-1);
    tracep->declBit(c+773,"push", false,-1);
    tracep->declBit(c+872,"pop", false,-1);
    tracep->declBus(c+1026,"data_in", false,-1, 7,0);
    tracep->declBit(c+744,"fifo_reset", false,-1);
    tracep->declBit(c+10,"reset_status", false,-1);
    tracep->declBus(c+1240,"data_out", false,-1, 7,0);
    tracep->declBit(c+874,"overrun", false,-1);
    tracep->declBus(c+778,"count", false,-1, 4,0);
    tracep->declBus(c+875,"top", false,-1, 3,0);
    tracep->declBus(c+876,"bottom", false,-1, 3,0);
    tracep->declBus(c+877,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1331,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1353,"data_width", false,-1, 31,0);
    tracep->declBus(c+1347,"depth", false,-1, 31,0);
    tracep->declBit(c+1184,"clk", false,-1);
    tracep->declBit(c+773,"we", false,-1);
    tracep->declBus(c+875,"a", false,-1, 3,0);
    tracep->declBus(c+876,"dpra", false,-1, 3,0);
    tracep->declBus(c+1026,"di", false,-1, 7,0);
    tracep->declBus(c+1240,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+530+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBit(c+548,"auto_in_psel", false,-1);
    tracep->declBit(c+549,"auto_in_penable", false,-1);
    tracep->declBit(c+55,"auto_in_pwrite", false,-1);
    tracep->declBus(c+985,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1257,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+984,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1259,"auto_in_pready", false,-1);
    tracep->declBit(c+1260,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1261,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1198,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1199,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1200,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1201,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1202,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1203,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1184,"clock", false,-1);
    tracep->declBit(c+1185,"reset", false,-1);
    tracep->declBus(c+1016,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+548,"in_psel", false,-1);
    tracep->declBit(c+549,"in_penable", false,-1);
    tracep->declBus(c+1257,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+55,"in_pwrite", false,-1);
    tracep->declBus(c+984,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+56,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1259,"in_pready", false,-1);
    tracep->declBus(c+1261,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1260,"in_pslverr", false,-1);
    tracep->declBus(c+1198,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1199,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1200,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1201,"vga_hsync", false,-1);
    tracep->declBit(c+1202,"vga_vsync", false,-1);
    tracep->declBit(c+1203,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+625,"sck", false,-1);
    tracep->declBit(c+1241,"ss", false,-1);
    tracep->declBit(c+1206,"mosi", false,-1);
    tracep->declBit(c+1242,"miso", false,-1);
    tracep->declBus(c+1243,"rx_shift", false,-1, 7,0);
    tracep->declBus(c+1244,"rx_bit_cnt", false,-1, 2,0);
    tracep->declBit(c+1245,"rx_done", false,-1);
    tracep->declBus(c+1246,"tx_bit_cnt", false,-1, 3,0);
    tracep->declBit(c+1247,"r_miso", false,-1);
    tracep->declBit(c+1248,"rx_en", false,-1);
    tracep->declBit(c+1249,"rx_last_bit", false,-1);
    tracep->declBit(c+1250,"tx_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+625,"sck", false,-1);
    tracep->declBit(c+878,"ss", false,-1);
    tracep->declBit(c+1206,"mosi", false,-1);
    tracep->declBit(c+1251,"miso", false,-1);
    tracep->declBit(c+878,"reset", false,-1);
    tracep->declBus(c+977,"state", false,-1, 2,0);
    tracep->declBus(c+978,"counter", false,-1, 7,0);
    tracep->declBus(c+979,"cmd", false,-1, 7,0);
    tracep->declBus(c+980,"addr", false,-1, 23,0);
    tracep->declBus(c+981,"data", false,-1, 31,0);
    tracep->declBit(c+982,"ren", false,-1);
    tracep->declBus(c+1252,"rdata", false,-1, 31,0);
    tracep->declBus(c+1253,"raddr", false,-1, 31,0);
    tracep->declBus(c+1254,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+625,"clock", false,-1);
    tracep->declBit(c+982,"valid", false,-1);
    tracep->declBus(c+979,"cmd", false,-1, 7,0);
    tracep->declBus(c+1253,"addr", false,-1, 31,0);
    tracep->declBus(c+1252,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1150,"sck", false,-1);
    tracep->declBit(c+1151,"ce_n", false,-1);
    tracep->declBus(c+1208,"dio", false,-1, 3,0);
    tracep->declBus(c+1371,"PSRAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+1329,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1353,"CMD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1274,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1353,"BYTE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1326,"CMD_READ", false,-1, 7,0);
    tracep->declBus(c+1327,"CMD_WRITE", false,-1, 7,0);
    tracep->declBus(c+1321,"CMD_QPIMODE", false,-1, 7,0);
    tracep->declBus(c+1348,"RD_DELAY", false,-1, 31,0);
    tracep->declBus(c+1269,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1342,"STATE_CMD", false,-1, 3,0);
    tracep->declBus(c+1341,"STATE_ADDR", false,-1, 3,0);
    tracep->declBus(c+1337,"STATE_RD_DELAY", false,-1, 3,0);
    tracep->declBus(c+1339,"STATE_WR", false,-1, 3,0);
    tracep->declBus(c+1338,"STATE_RD", false,-1, 3,0);
    tracep->declBus(c+1340,"STATE_RESP", false,-1, 3,0);
    tracep->declBus(c+1336,"STATE_QPIINIT", false,-1, 3,0);
    tracep->declBus(c+1027,"state", false,-1, 3,0);
    tracep->declBus(c+16,"cmd", false,-1, 7,0);
    tracep->declBus(c+1028,"addr", false,-1, 23,0);
    tracep->declBus(c+17,"wr_byte", false,-1, 7,0);
    tracep->declBit(c+18,"qpi_mode", false,-1);
    tracep->declBus(c+19,"cmd_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+20,"addr_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+21,"rd_delay_cnt", false,-1, 31,0);
    tracep->declBus(c+1029,"data_bit_cnt", false,-1, 31,0);
    tracep->declBus(c+1255,"dio_out_r", false,-1, 3,0);
    tracep->declBus(c+1256,"dio_oe_r", false,-1, 3,0);
    tracep->declBus(c+1208,"dio_in", false,-1, 3,0);
    tracep->declBit(c+22,"cmd_done", false,-1);
    tracep->declBit(c+23,"addr_done", false,-1);
    tracep->declBit(c+1030,"data_done", false,-1);
    tracep->declBit(c+24,"rd_delay_done", false,-1);
    tracep->declBus(c+1031,"mem0", false,-1, 7,0);
    tracep->declBus(c+1032,"mem1", false,-1, 7,0);
    tracep->declBus(c+1033,"mem2", false,-1, 7,0);
    tracep->declBus(c+1034,"mem3", false,-1, 7,0);
    tracep->declBus(c+1035,"mem4", false,-1, 7,0);
    tracep->declBus(c+1036,"mem5", false,-1, 7,0);
    tracep->declBus(c+1037,"mem6", false,-1, 7,0);
    tracep->declBus(c+1038,"mem7", false,-1, 7,0);
    tracep->declBus(c+1039,"mem8", false,-1, 7,0);
    tracep->declBus(c+1040,"mem9", false,-1, 7,0);
    tracep->declBus(c+1041,"mem10", false,-1, 7,0);
    tracep->declBus(c+1042,"mem11", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1209,"clk", false,-1);
    tracep->declBit(c+627,"cke", false,-1);
    tracep->declBit(c+628,"cs", false,-1);
    tracep->declBit(c+629,"ras", false,-1);
    tracep->declBit(c+630,"cas", false,-1);
    tracep->declBit(c+631,"we", false,-1);
    tracep->declBus(c+632,"a", false,-1, 12,0);
    tracep->declBus(c+633,"ba", false,-1, 1,0);
    tracep->declBus(c+634,"dqm", false,-1, 1,0);
    tracep->declBus(c+635,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte),8);
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode));
    bufp->fullIData(oldp+19,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt),32);
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode)
                             ? (1U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt)
                             : (7U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt))));
    bufp->fullBit(oldp+23,((0x14U == vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt)));
    bufp->fullBit(oldp+24,((5U == vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt)));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_ifu_dec_rvalid));
    bufp->fullBit(oldp+26,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__wb_state))));
    bufp->fullBit(oldp+27,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__wb_state))));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_ifu_ar_valid));
    bufp->fullBit(oldp+29,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state))));
    bufp->fullBit(oldp+30,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state))));
    bufp->fullIData(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata),32);
    bufp->fullCData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid),4);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devisor),32);
    bufp->fullQData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem),33);
    bufp->fullBit(oldp+37,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
                                          >> 0x20U)))));
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient),32);
    bufp->fullBit(oldp+39,((0x20U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt)));
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state),2);
    bufp->fullIData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low),32);
    bufp->fullCData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__wb_state),2);
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint));
    bufp->fullCData(oldp+47,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint)
                               ? 0U : (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                               ? (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                          >> 1U))
                                               : 0U) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U))))),2);
    bufp->fullBit(oldp+48,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                            | (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
                                >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullCData(oldp+49,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid))),4);
    bufp->fullCData(oldp+50,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)
                               ? 0U : (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid) 
                                                    << 1U))))))),2);
    bufp->fullCData(oldp+51,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)
                               ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid))),4);
    bufp->fullBit(oldp+52,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid))));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+54,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+57,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+59,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+60,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+61,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+62,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+63,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+64,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+65,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data 
                                      >> 4U))),32);
    bufp->fullCData(oldp+66,((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data))),4);
    bufp->fullBit(oldp+67,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full)))));
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+70,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+71,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                              >> 0x2bU)))),4);
    bufp->fullIData(oldp+72,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                      >> 0xbU))),32);
    bufp->fullCData(oldp+73,((0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data 
                                               >> 3U)))),8);
    bufp->fullCData(oldp+74,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data))),3);
    bufp->fullBit(oldp+75,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full)))));
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+85,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullBit(oldp+87,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+88,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+89,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data) 
                                      >> 2U))),4);
    bufp->fullCData(oldp+90,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data))),2);
    bufp->fullBit(oldp+91,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullBit(oldp+93,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+94,((0xfU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                              >> 0x23U)))),4);
    bufp->fullIData(oldp+95,((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                      >> 3U))),32);
    bufp->fullCData(oldp+96,((3U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                            >> 1U)))),2);
    bufp->fullBit(oldp+97,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data))));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__full));
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT___ram_ext_R0_data),6);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__full));
    bufp->fullQData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data),39);
    bufp->fullQData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullQData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullQData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT___ram_ext_R0_data),47);
    bufp->fullQData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullQData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT___ram_ext_R0_data),36);
    bufp->fullQData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__unnamedblk1__DOT__do_deq));
    bufp->fullBit(oldp+160,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+161,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid));
    bufp->fullCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid),4);
    bufp->fullCData(oldp+164,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rvalid));
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid),4);
    bufp->fullIData(oldp+168,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
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
    bufp->fullCData(oldp+169,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT___ram_ext_R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+170,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+171,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+175,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+176,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)))));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+178,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullQData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullQData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+218,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+221,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+222,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+235,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+236,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullSData(oldp+237,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)))),16);
    bufp->fullSData(oldp+238,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)))),16);
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+341,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+345,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+349,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+353,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+357,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+361,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+365,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+369,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+373,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+377,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+381,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+385,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+389,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+393,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+397,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+401,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+405,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+413,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+417,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+421,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+425,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+429,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+433,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__dnpc_reg),32);
    bufp->fullBit(oldp+438,(((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                             & ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fun_ex))))));
    bufp->fullIData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf
                              [0xaU]),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_data_reg),32);
    bufp->fullBit(oldp+443,(((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
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
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_addr_ex),5);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__pc_ex),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src1_ex),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src2_ex),32);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex),7);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fun_ex),3);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex),32);
    bufp->fullIData(oldp+451,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__pc_ex)),32);
    bufp->fullQData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__signed_mulh__Vstatic__mul_result),64);
    bufp->fullQData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__unsigned_mulh__Vstatic__mul_result),64);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh),32);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_unsigned),32);
    bufp->fullIData(oldp+458,(((0x300U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_status
                                : ((0x305U == (0xfffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_tvec
                                    : ((0x341U == (0xfffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
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
                                                : (
                                                   (0xf12U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__imm_ex))
                                                    ? 0x16fe3b5U
                                                    : 0xffffffffU))))))),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_status),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_cause),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_tvec),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_epc),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0]),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[1]),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[2]),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[3]),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[4]),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[5]),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[6]),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[7]),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[8]),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[9]),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[10]),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[11]),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[12]),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[13]),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[14]),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[15]),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[16]),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[17]),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[18]),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[19]),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[20]),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[21]),32);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[22]),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[23]),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[24]),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[25]),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[26]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[27]),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[28]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[29]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[30]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[31]),32);
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+510,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+511,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+546,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+547,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+548,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+549,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+553,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+555,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+556,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullQData(oldp+557,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size))))),47);
    bufp->fullQData(oldp+559,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                << 0x2bU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)) 
                                              << 0xbU) 
                                             | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size))))),47);
    bufp->fullBit(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+563,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+564,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+565,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+566,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+567,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+568,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+569,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+570,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+571,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+572,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+573,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+574,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+575,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+576,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+577,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+578,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)))));
    bufp->fullBit(oldp+579,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+580,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+581,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+582,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+583,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+584,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+585,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+586,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+587,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+588,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+589,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+590,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+591,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+592,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+593,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+594,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+595,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+596,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+597,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+598,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+599,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+600,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+601,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+602,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+603,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+604,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+605,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+606,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+607,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+608,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+609,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+610,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+611,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+613,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+614,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+615,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+616,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+617,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+618,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+619,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+620,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+621,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+622,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+623,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+624,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rid)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+628,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+629,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+630,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+631,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+635,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+637,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_sck));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_ce_n));
    bufp->fullCData(oldp+640,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+641,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+644,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+645,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+648,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+649,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))));
    bufp->fullBit(oldp+650,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ready));
    bufp->fullBit(oldp+653,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state),2);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__nstate),2);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter),4);
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+660,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+664,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+666,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state),4);
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy));
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr_latched),32);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata),32);
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err));
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o_w),32);
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o_w));
    bufp->fullSData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+705,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+706,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+707,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+708,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+709,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+710,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+711,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+715,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+717,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+718,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+720,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+724,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+725,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+727,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+745,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+746,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+747,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+748,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+749,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+750,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+751,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+754,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+755,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+756,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+775,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+782,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+801,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+802,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+803,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+804,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+805,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+824,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+825,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+826,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+827,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+828,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+830,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+849,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+866,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+877,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rvalid));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wready));
    bufp->fullCData(oldp+882,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                ? 2U : 0U)),3);
    bufp->fullCData(oldp+883,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                                ? 1U : 0U)),2);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_wvalid));
    bufp->fullBit(oldp+885,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready));
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arsize),3);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arburst),2);
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready));
    bufp->fullIData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst),32);
    bufp->fullBit(oldp+892,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state))));
    bufp->fullBit(oldp+893,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state))));
    bufp->fullBit(oldp+894,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullBit(oldp+895,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullCData(oldp+896,(((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun))
                                ? 3U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun))
                                         ? 0xfU : 1U))),8);
    bufp->fullBit(oldp+897,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state))));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready));
    bufp->fullBit(oldp+899,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun),3);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_opcode),7);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_waddr),5);
    bufp->fullCData(oldp+903,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+904,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_imm),32);
    bufp->fullIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_lsu_data),32);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid));
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state),3);
    bufp->fullBit(oldp+911,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))));
    bufp->fullBit(oldp+912,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state))));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_div));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_divu));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_rem));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_remu));
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mdu_op),2);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_div_op));
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state),2);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state),2);
    bufp->fullBit(oldp+921,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullBit(oldp+922,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))));
    bufp->fullCData(oldp+923,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+924,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst)),7);
    bufp->fullCData(oldp+925,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm),32);
    bufp->fullBit(oldp+927,((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_cur_inst))));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state),2);
    bufp->fullWData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____Vcellinp__imm_mux__lut),351);
    bufp->fullQData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+969,((0xfU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun))
                                        ? ((IData)(3U) 
                                           << (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr))
                                        : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun))
                                            ? ((IData)(0xfU) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr))
                                            : ((IData)(1U) 
                                               << (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr)))))),4);
    bufp->fullBit(oldp+970,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint))));
    bufp->fullBit(oldp+971,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint))));
    bufp->fullBit(oldp+972,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__id_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready))));
    bufp->fullBit(oldp+973,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready))));
    bufp->fullBit(oldp+974,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready))));
    bufp->fullBit(oldp+975,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready))));
    bufp->fullBit(oldp+976,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready))));
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+980,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+981,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+982,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullIData(oldp+985,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+986,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+990,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullIData(oldp+1000,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1004,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1005,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1006,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1007,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1008,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1013,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1014,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1015,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1016,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1017,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel))));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__apb_access));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_rd_setup));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_bad_acc));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_invalid_acc));
    bufp->fullCData(oldp+1024,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 2U))),3);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt),32);
    bufp->fullBit(oldp+1030,((0x1cU == vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)));
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [0U]),8);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [1U]),8);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [2U]),8);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [3U]),8);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [4U]),8);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [5U]),8);
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [6U]),8);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [7U]),8);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [8U]),8);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [9U]),8);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [0xaU]),8);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__psram__DOT__mem
                               [0xbU]),8);
    bufp->fullBit(oldp+1043,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits))));
    bufp->fullIData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+1050,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+1051,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_enq));
    bufp->fullQData(oldp+1058,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata)) 
                                 << 4U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb)))),36);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_awvalid));
    bufp->fullIData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awaddr),32);
    bufp->fullIData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wdata),32);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wstrb),4);
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_arvalid));
    bufp->fullIData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_araddr),32);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+1090,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+1091,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1092,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 2U))));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+1096,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+1098,((0x7800U == (0x7fffU & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+1100,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                          >> 2U))),11);
    bufp->fullSData(oldp+1101,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+1107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                              & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x1bU)) 
                                        | ((0xcU & 
                                            (8U ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                           | ((2U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                              | (1U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0xcU)))))))));
    bufp->fullBit(oldp+1108,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                 >> 1U))));
    bufp->fullBit(oldp+1109,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+1110,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+1117,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x1bU)) 
                                     | ((0xcU & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                        | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0x17U)) 
                                           | (1U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xcU))))))));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__all_bresp));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr),32);
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wen));
    bufp->fullBit(oldp+1137,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready))));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready));
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__csr_wen));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_b_fire));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_ar_fire));
    bufp->fullCData(oldp+1144,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr)),2);
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint));
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint));
    bufp->fullIData(oldp+1147,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+1150,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+1151,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullCData(oldp+1158,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_enq));
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i_r),5);
    bufp->fullIData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_i_r),32);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_i_r),4);
    bufp->fullBit(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_i_r));
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_i_r));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_i_r));
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1178,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i_r))))));
    bufp->fullBit(oldp+1179,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i_r))))));
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1181,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_i_r))))));
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1184,(vlSelf->clock));
    bufp->fullBit(oldp+1185,(vlSelf->reset));
    bufp->fullSData(oldp+1186,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1187,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1188,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1189,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1190,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1191,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1192,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1193,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1194,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1195,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1196,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1197,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1198,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1199,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1200,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1201,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1202,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1203,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1204,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1205,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1207,((((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1209,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1210,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1212,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_o_w)
                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
                                   ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_bad_acc) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid))
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_invalid_acc)))));
    bufp->fullBit(oldp+1213,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_xip_bad_acc) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err))
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_invalid_acc)))));
    bufp->fullIData(oldp+1214,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_spi_reg)
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_o_w
                                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__hit_flash_xip)
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                     : 0U))),32);
    bufp->fullIData(oldp+1215,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullBit(oldp+1216,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullCData(oldp+1217,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold))),6);
    bufp->fullQData(oldp+1218,((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)) 
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
    bufp->fullBit(oldp+1220,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))))));
    bufp->fullBit(oldp+1221,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1223,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready))));
    bufp->fullIData(oldp+1224,(((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun))
                                 ? ((0x1fU >= (0x18U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr 
                                                  << 3U)))
                                     ? ((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2) 
                                        << (0x18U & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr 
                                             << 3U)))
                                     : 0U) : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__r_fun))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2
                                               : ((0x1fU 
                                                   >= 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr 
                                                       << 3U)))
                                                   ? 
                                                  ((0xffU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2) 
                                                   << 
                                                   (0x18U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__mem_addr 
                                                       << 3U)))
                                                   : 0U)))),32);
    bufp->fullBit(oldp+1225,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bvalid)))));
    bufp->fullBit(oldp+1226,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready))));
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid))));
    bufp->fullBit(oldp+1228,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint) 
                              & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)))));
    bufp->fullBit(oldp+1229,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__r_ifu_ar_valid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready))));
    bufp->fullBit(oldp+1230,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wready) 
                                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))))));
    bufp->fullBit(oldp+1231,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_rready)))));
    bufp->fullBit(oldp+1232,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+1234,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                 ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))
                                     ? 0U : 2U) : (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))),2);
    bufp->fullBit(oldp+1235,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1238,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss));
    bufp->fullBit(oldp+1242,(((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss))));
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_shift),8);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt),3);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_done));
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt),4);
    bufp->fullBit(oldp+1247,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_en));
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_last_bit));
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_en));
    bufp->fullBit(oldp+1251,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1253,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_out_r),4);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__psram__DOT__dio_oe_r),4);
    bufp->fullCData(oldp+1257,(1U),3);
    bufp->fullBit(oldp+1258,(0U));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1268,(1U));
    bufp->fullCData(oldp+1269,(0U),4);
    bufp->fullCData(oldp+1270,(0U),8);
    bufp->fullIData(oldp+1271,(0U),32);
    bufp->fullCData(oldp+1272,(0U),3);
    bufp->fullCData(oldp+1273,(0U),2);
    bufp->fullIData(oldp+1274,(0x20U),32);
    bufp->fullIData(oldp+1275,(7U),32);
    bufp->fullIData(oldp+1276,(5U),32);
    bufp->fullIData(oldp+1277,(3U),32);
    bufp->fullIData(oldp+1278,(0x30000000U),32);
    bufp->fullCData(oldp+1279,(2U),3);
    bufp->fullCData(oldp+1280,(1U),2);
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fun_ex),3);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__opcode_ex),7);
    bufp->fullIData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_ex),32);
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1_ex),32);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2_ex),32);
    bufp->fullIData(oldp+1286,(0x79737978U),32);
    bufp->fullIData(oldp+1287,(0x16fe3b5U),32);
    bufp->fullCData(oldp+1288,(3U),7);
    bufp->fullCData(oldp+1289,(0x13U),7);
    bufp->fullCData(oldp+1290,(0x67U),7);
    bufp->fullCData(oldp+1291,(0x73U),7);
    bufp->fullCData(oldp+1292,(0x63U),7);
    bufp->fullCData(oldp+1293,(0x6fU),7);
    bufp->fullCData(oldp+1294,(0x23U),7);
    bufp->fullCData(oldp+1295,(0x37U),7);
    bufp->fullCData(oldp+1296,(0x17U),7);
    bufp->fullCData(oldp+1297,(0x33U),7);
    bufp->fullSData(oldp+1298,(0x300U),12);
    bufp->fullSData(oldp+1299,(0x305U),12);
    bufp->fullSData(oldp+1300,(0x341U),12);
    bufp->fullSData(oldp+1301,(0x342U),12);
    bufp->fullSData(oldp+1302,(0U),12);
    bufp->fullSData(oldp+1303,(0x302U),12);
    bufp->fullSData(oldp+1304,(0xf11U),12);
    bufp->fullSData(oldp+1305,(0xf12U),12);
    bufp->fullIData(oldp+1306,(0xbU),32);
    bufp->fullCData(oldp+1307,(3U),3);
    bufp->fullCData(oldp+1308,(4U),3);
    bufp->fullCData(oldp+1309,(5U),3);
    bufp->fullIData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__o_result),32);
    bufp->fullCData(oldp+1311,(2U),2);
    bufp->fullIData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__d),32);
    bufp->fullCData(oldp+1313,(3U),2);
    bufp->fullIData(oldp+1314,(0xa0000048U),32);
    bufp->fullIData(oldp+1315,(0xa000004cU),32);
    bufp->fullIData(oldp+1316,(9U),32);
    bufp->fullIData(oldp+1317,(1U),32);
    bufp->fullIData(oldp+1318,(0x27U),32);
    bufp->fullIData(oldp+1319,(9U),32);
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_init));
    bufp->fullCData(oldp+1321,(0x35U),8);
    bufp->fullBit(oldp+1322,(0U));
    bufp->fullBit(oldp+1323,(1U));
    bufp->fullCData(oldp+1324,(0x1bU),8);
    bufp->fullCData(oldp+1325,(0x15U),8);
    bufp->fullCData(oldp+1326,(0xebU),8);
    bufp->fullCData(oldp+1327,(0x38U),8);
    bufp->fullIData(oldp+1328,(0x64U),32);
    bufp->fullIData(oldp+1329,(0x18U),32);
    bufp->fullIData(oldp+1330,(2U),32);
    bufp->fullIData(oldp+1331,(4U),32);
    bufp->fullIData(oldp+1332,(0xdU),32);
    bufp->fullIData(oldp+1333,(0x2000U),32);
    bufp->fullIData(oldp+1334,(0x2710U),32);
    bufp->fullIData(oldp+1335,(0x30cU),32);
    bufp->fullCData(oldp+1336,(7U),4);
    bufp->fullCData(oldp+1337,(3U),4);
    bufp->fullCData(oldp+1338,(5U),4);
    bufp->fullCData(oldp+1339,(4U),4);
    bufp->fullCData(oldp+1340,(6U),4);
    bufp->fullCData(oldp+1341,(2U),4);
    bufp->fullCData(oldp+1342,(1U),4);
    bufp->fullSData(oldp+1343,(0x21U),13);
    bufp->fullCData(oldp+1344,(8U),4);
    bufp->fullCData(oldp+1345,(9U),4);
    bufp->fullIData(oldp+1346,(0xaU),32);
    bufp->fullIData(oldp+1347,(0x10U),32);
    bufp->fullIData(oldp+1348,(6U),32);
    bufp->fullIData(oldp+1349,(0x11U),32);
    bufp->fullIData(oldp+1350,(0x10001000U),32);
    bufp->fullIData(oldp+1351,(0x10001fffU),32);
    bufp->fullIData(oldp+1352,(0x3fffffffU),32);
    bufp->fullIData(oldp+1353,(8U),32);
    bufp->fullCData(oldp+1354,(0U),5);
    bufp->fullCData(oldp+1355,(4U),5);
    bufp->fullCData(oldp+1356,(8U),5);
    bufp->fullCData(oldp+1357,(0xcU),5);
    bufp->fullCData(oldp+1358,(0x10U),5);
    bufp->fullCData(oldp+1359,(0x14U),5);
    bufp->fullCData(oldp+1360,(0x18U),5);
    bufp->fullIData(oldp+1361,(8U),32);
    bufp->fullIData(oldp+1362,(0xaU),32);
    bufp->fullIData(oldp+1363,(0xbU),32);
    bufp->fullIData(oldp+1364,(0xcU),32);
    bufp->fullIData(oldp+1365,(0xdU),32);
    bufp->fullIData(oldp+1366,(4U),32);
    bufp->fullIData(oldp+1367,(1U),32);
    bufp->fullIData(oldp+1368,(0x40U),32);
    bufp->fullIData(oldp+1369,(0x2140U),32);
    bufp->fullCData(oldp+1370,(0xaU),4);
    bufp->fullIData(oldp+1371,(0x400000U),32);
}
