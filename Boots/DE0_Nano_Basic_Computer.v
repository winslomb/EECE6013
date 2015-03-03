
module DE0_Nano_Basic_Computer (
	// Inputs
	CLOCK_50,
	KEY,
	SW,

/*****************************************************************************/
	// Bidirectionals
	GPIO_0,
	GPIO_1,
	GPIO_2,
	GPIO_2_IN,

	//  Memory (SDRAM)
	DRAM_DQ,

/*****************************************************************************/
	// Outputs
	// 	Simple
	LEDG,

	//  Memory (SDRAM)
	DRAM_ADDR,
	
	DRAM_BA,
	DRAM_CLK,
	DRAM_CKE,
	DRAM_CS_N,
	DRAM_CAS_N,
	DRAM_RAS_N,
	DRAM_WE_N,
	DRAM_DQM
);

/*****************************************************************************
 *                           Parameter Declarations                          *
 *****************************************************************************/


/*****************************************************************************
 *                             Port Declarations                             *
 *****************************************************************************/
// Inputs
input				CLOCK_50;
input		[ 1: 0]	KEY;
input		[ 3: 0]	SW;

// Bidirectionals
inout		[31: 0]	GPIO_0;
inout		[31: 0]	GPIO_1;
inout		[12: 0]	GPIO_2;
input		[ 2: 0]	GPIO_2_IN;

//  Memory (SDRAM)
inout		[15: 0]	DRAM_DQ;

// Outputs
// 	Simple
output		[ 7: 0]	LEDG;

//  Memory (SDRAM)
output		[12: 0]	DRAM_ADDR;

output		[ 1: 0]	DRAM_BA;
output				DRAM_CLK;
output				DRAM_CKE;
output				DRAM_CS_N;
output				DRAM_CAS_N;
output				DRAM_RAS_N;
output				DRAM_WE_N;
output		[ 1: 0]	DRAM_DQM;

/*****************************************************************************
 *                 Internal Wires and Registers Declarations                 *
 *****************************************************************************/
// Internal Wires
// Used to connect the Nios 2 system clock to the non-shifted output of the PLL
wire				system_clock;

// Internal Registers

// State Machine Registers

/*****************************************************************************
 *                         Finite State Machine(s)                           *
 *****************************************************************************/


/*****************************************************************************
 *                             Sequential Logic                              *
 *****************************************************************************/


/*****************************************************************************
 *                            Combinational Logic                            *
 *****************************************************************************/

// Output Assignments

/*****************************************************************************
 *                              Internal Modules                             *
 *****************************************************************************/
nios_system NiosII (
	// Global signals
	.system_pll_ref_clk_clk			(CLOCK_50),
	.system_pll_ref_reset_reset	(~KEY[0]),

	// SDRAM
	.sdram_clk_clk						(DRAM_CLK),
   .sdram_addr							(DRAM_ADDR),
	.sdram_ba							(DRAM_BA),
	.sdram_cas_n						(DRAM_CAS_N),
	.sdram_cke							(DRAM_CKE),
	.sdram_cs_n							(DRAM_CS_N),
	.sdram_dq							(DRAM_DQ),
	.sdram_dqm							(DRAM_DQM),
	.sdram_ras_n						(DRAM_RAS_N),
	.sdram_we_n							(DRAM_WE_N),

	// Green LEDs
	.green_leds_export				(LEDG),

	// Dip Switches
	.dip_switches_export				(SW),
		
	// Pushbuttons
	.pushbuttons_export				(KEY[1:0]),

	// Expansion JP1
	.expansion_jp1_export			(GPIO_0),

	// Expansion JP2
	.expansion_jp2_export			(GPIO_1),

	// Expansion JP3
	.expansion_jp3_export			(GPIO_2),

	// Expansion JP3 In
	.expansion_jp3_in_export		(GPIO_2_IN)
);

endmodule
