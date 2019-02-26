library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ad9240 is
    Port (  
				clkad : in  STD_LOGIC;
				otr : in  STD_LOGIC;
				din : in  STD_LOGIC_VECTOR (13 downto 0);
				ad9240clk : out  STD_LOGIC;
		      adout   : out STD_LOGIC_VECTOR (13 downto 0)
	 );
end ad9240;

architecture Behavioral of ad9240 is


signal dout13 : std_logic;
signal dout13reg : std_logic:='0';
signal data_out:std_logic_vector(13 downto 0);
signal dataout:std_logic_vector(15 downto 0);

begin


process(clkad)         --ad9240
begin
if  clkad'Event and clkad='1' then	
--	 data_out(13)<=not din(13);
	data_out(13 downto 0)<=din(13 downto 0);-- xor "00000000000001";
	adout<=data_out;
end if;
end process;

  ad9240clk<=clkad;


end Behavioral;

