
-- VHDL Instantiation Created from source file UART_TX.vhd -- 10:17:00 10/09/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT UART_TX
	PORT(
		CLK : IN std_logic;
		rts : IN std_logic;
		txd_data : IN std_logic_vector(15 downto 0);          
		txd : OUT std_logic
		);
	END COMPONENT;

	Inst_UART_TX: UART_TX PORT MAP(
		CLK => ,
		rts => ,
		txd => ,
		txd_data => 
	);


