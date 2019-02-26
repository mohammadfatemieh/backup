
-- VHDL Instantiation Created from source file adc.vhd -- 14:53:53 09/11/2018
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT adc
	PORT(
		Din : IN std_logic_vector(0 to 13);          
		ADOUT0 : OUT std_logic_vector(0 to 7);
		ADOUT1 : OUT std_logic_vector(0 to 5)
		);
	END COMPONENT;

	Inst_adc: adc PORT MAP(
		Din => ,
		ADOUT0 => ,
		ADOUT1 => 
	);


