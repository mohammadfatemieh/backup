
-- VHDL Instantiation Created from source file top.vhd -- 15:07:45 09/10/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT top
	PORT(
		CLK : IN std_logic;
		wr : IN std_logic;
		din0 : IN std_logic_vector(7 downto 0);
		din1 : IN std_logic_vector(7 downto 0);          
		clk0 : OUT std_logic;
		clk1 : OUT std_logic;
		Dout : OUT std_logic_vector(0 to 7)
		);
	END COMPONENT;

	Inst_top: top PORT MAP(
		CLK => ,
		wr => ,
		din0 => ,
		din1 => ,
		clk0 => ,
		clk1 => ,
		Dout => 
	);


