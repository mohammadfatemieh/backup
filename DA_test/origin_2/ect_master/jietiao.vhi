
-- VHDL Instantiation Created from source file jietiao.vhd -- 15:12:20 10/24/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT jietiao
	PORT(
		adce : IN std_logic;
		otr : IN std_logic;
		clkad : IN std_logic;
		clkjietiao : IN std_logic;
		data_in : IN std_logic_vector(13 downto 0);
		sin : IN std_logic_vector(13 downto 0);
		cosine : IN std_logic_vector(13 downto 0);          
		ad9240clk : OUT std_logic;
		jietiaordy : OUT std_logic;
		i : OUT std_logic_vector(37 downto 0);
		j : OUT std_logic_vector(37 downto 0)
		);
	END COMPONENT;

	Inst_jietiao: jietiao PORT MAP(
		adce => ,
		otr => ,
		clkad => ,
		clkjietiao => ,
		data_in => ,
		sin => ,
		cosine => ,
		ad9240clk => ,
		jietiaordy => ,
		i => ,
		j => 
	);


