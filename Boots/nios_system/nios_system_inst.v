	nios_system u0 (
		.system_pll_ref_clk_clk     (<connected-to-system_pll_ref_clk_clk>),     //   system_pll_ref_clk.clk
		.system_pll_ref_reset_reset (<connected-to-system_pll_ref_reset_reset>), // system_pll_ref_reset.reset
		.sdram_clk_clk              (<connected-to-sdram_clk_clk>),              //            sdram_clk.clk
		.sdram_addr                 (<connected-to-sdram_addr>),                 //                sdram.addr
		.sdram_ba                   (<connected-to-sdram_ba>),                   //                     .ba
		.sdram_cas_n                (<connected-to-sdram_cas_n>),                //                     .cas_n
		.sdram_cke                  (<connected-to-sdram_cke>),                  //                     .cke
		.sdram_cs_n                 (<connected-to-sdram_cs_n>),                 //                     .cs_n
		.sdram_dq                   (<connected-to-sdram_dq>),                   //                     .dq
		.sdram_dqm                  (<connected-to-sdram_dqm>),                  //                     .dqm
		.sdram_ras_n                (<connected-to-sdram_ras_n>),                //                     .ras_n
		.sdram_we_n                 (<connected-to-sdram_we_n>),                 //                     .we_n
		.green_leds_export          (<connected-to-green_leds_export>),          //           green_leds.export
		.dip_switches_export        (<connected-to-dip_switches_export>),        //         dip_switches.export
		.pushbuttons_export         (<connected-to-pushbuttons_export>),         //          pushbuttons.export
		.expansion_jp1_export       (<connected-to-expansion_jp1_export>),       //        expansion_jp1.export
		.expansion_jp2_export       (<connected-to-expansion_jp2_export>),       //        expansion_jp2.export
		.expansion_jp3_export       (<connected-to-expansion_jp3_export>),       //        expansion_jp3.export
		.expansion_jp3_in_export    (<connected-to-expansion_jp3_in_export>)     //     expansion_jp3_in.export
	);

