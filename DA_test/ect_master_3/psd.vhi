
-- VHDL Instantiation Created from source file psd.vhd -- 15:32:59 11/01/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT psd
	PORT(
		clk : IN std_logic;
		start : IN std_logic;
		otr : IN std_logic;
		din : IN std_logic_vector(13 downto 0);
		cos : IN std_logic_vector(13 downto 0);
		sin : IN std_logic_vector(13 downto 0);          
		ad9240clk : OUT std_logic;
		dout_i : OUT std_logic_vector(47 downto 0);
		dout_q : OUT std_logic_vector(47 downto 0);
		rdy : OUT std_logic
		);
	END COMPONENT;

	Inst_psd: psd PORT MAP(
		clk => ,
		start => ,
		otr => ,
		din => ,
		cos => ,
		sin => ,
		ad9240clk => ,
		dout_i => ,
		dout_q => ,
		rdy => 
	);


