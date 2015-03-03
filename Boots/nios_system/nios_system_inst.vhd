	component nios_system is
		port (
			system_pll_ref_clk_clk     : in    std_logic                     := 'X';             -- clk
			system_pll_ref_reset_reset : in    std_logic                     := 'X';             -- reset
			sdram_clk_clk              : out   std_logic;                                        -- clk
			sdram_addr                 : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_ba                   : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_cas_n                : out   std_logic;                                        -- cas_n
			sdram_cke                  : out   std_logic;                                        -- cke
			sdram_cs_n                 : out   std_logic;                                        -- cs_n
			sdram_dq                   : inout std_logic_vector(15 downto 0) := (others => 'X'); -- dq
			sdram_dqm                  : out   std_logic_vector(1 downto 0);                     -- dqm
			sdram_ras_n                : out   std_logic;                                        -- ras_n
			sdram_we_n                 : out   std_logic;                                        -- we_n
			green_leds_export          : out   std_logic_vector(7 downto 0);                     -- export
			dip_switches_export        : in    std_logic_vector(3 downto 0)  := (others => 'X'); -- export
			pushbuttons_export         : in    std_logic_vector(1 downto 0)  := (others => 'X'); -- export
			expansion_jp1_export       : inout std_logic_vector(31 downto 0) := (others => 'X'); -- export
			expansion_jp2_export       : inout std_logic_vector(31 downto 0) := (others => 'X'); -- export
			expansion_jp3_export       : inout std_logic_vector(12 downto 0) := (others => 'X'); -- export
			expansion_jp3_in_export    : in    std_logic_vector(2 downto 0)  := (others => 'X')  -- export
		);
	end component nios_system;

	u0 : component nios_system
		port map (
			system_pll_ref_clk_clk     => CONNECTED_TO_system_pll_ref_clk_clk,     --   system_pll_ref_clk.clk
			system_pll_ref_reset_reset => CONNECTED_TO_system_pll_ref_reset_reset, -- system_pll_ref_reset.reset
			sdram_clk_clk              => CONNECTED_TO_sdram_clk_clk,              --            sdram_clk.clk
			sdram_addr                 => CONNECTED_TO_sdram_addr,                 --                sdram.addr
			sdram_ba                   => CONNECTED_TO_sdram_ba,                   --                     .ba
			sdram_cas_n                => CONNECTED_TO_sdram_cas_n,                --                     .cas_n
			sdram_cke                  => CONNECTED_TO_sdram_cke,                  --                     .cke
			sdram_cs_n                 => CONNECTED_TO_sdram_cs_n,                 --                     .cs_n
			sdram_dq                   => CONNECTED_TO_sdram_dq,                   --                     .dq
			sdram_dqm                  => CONNECTED_TO_sdram_dqm,                  --                     .dqm
			sdram_ras_n                => CONNECTED_TO_sdram_ras_n,                --                     .ras_n
			sdram_we_n                 => CONNECTED_TO_sdram_we_n,                 --                     .we_n
			green_leds_export          => CONNECTED_TO_green_leds_export,          --           green_leds.export
			dip_switches_export        => CONNECTED_TO_dip_switches_export,        --         dip_switches.export
			pushbuttons_export         => CONNECTED_TO_pushbuttons_export,         --          pushbuttons.export
			expansion_jp1_export       => CONNECTED_TO_expansion_jp1_export,       --        expansion_jp1.export
			expansion_jp2_export       => CONNECTED_TO_expansion_jp2_export,       --        expansion_jp2.export
			expansion_jp3_export       => CONNECTED_TO_expansion_jp3_export,       --        expansion_jp3.export
			expansion_jp3_in_export    => CONNECTED_TO_expansion_jp3_in_export     --     expansion_jp3_in.export
		);

