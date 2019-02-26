
-- VHDL Instantiation Created from source file ad9240.vhd -- 10:33:24 09/13/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT ad9240
	PORT(
		clkad : IN std_logic;
		otr : IN std_logic;
		din : IN std_logic_vector(13 downto 0);          
		ad9240clk : OUT std_logic;
		adout : OUT std_logic_vector(13 downto 0)
		);
	END COMPONENT;

	Inst_ad9240: ad9240 PORT MAP(
		clkad => ,
		otr => ,
		din => ,
		ad9240clk => ,
		adout => 
	);


