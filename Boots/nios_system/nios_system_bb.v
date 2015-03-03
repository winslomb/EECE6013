
module nios_system (
	system_pll_ref_clk_clk,
	system_pll_ref_reset_reset,
	sdram_clk_clk,
	sdram_addr,
	sdram_ba,
	sdram_cas_n,
	sdram_cke,
	sdram_cs_n,
	sdram_dq,
	sdram_dqm,
	sdram_ras_n,
	sdram_we_n,
	green_leds_export,
	dip_switches_export,
	pushbuttons_export,
	expansion_jp1_export,
	expansion_jp2_export,
	expansion_jp3_export,
	expansion_jp3_in_export);	

	input		system_pll_ref_clk_clk;
	input		system_pll_ref_reset_reset;
	output		sdram_clk_clk;
	output	[12:0]	sdram_addr;
	output	[1:0]	sdram_ba;
	output		sdram_cas_n;
	output		sdram_cke;
	output		sdram_cs_n;
	inout	[15:0]	sdram_dq;
	output	[1:0]	sdram_dqm;
	output		sdram_ras_n;
	output		sdram_we_n;
	output	[7:0]	green_leds_export;
	input	[3:0]	dip_switches_export;
	input	[1:0]	pushbuttons_export;
	inout	[31:0]	expansion_jp1_export;
	inout	[31:0]	expansion_jp2_export;
	inout	[12:0]	expansion_jp3_export;
	input	[2:0]	expansion_jp3_in_export;
endmodule
