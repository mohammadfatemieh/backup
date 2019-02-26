
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
use IEEE.std_logic_unsigned.all;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity adc is
port(
	Din: in std_logic_vector(0 to 13);
	ADOUT0: out std_logic_vector(0 to 7);
	ADOUT1: out std_logic_vector(0 to 5)

);

end adc; 

architecture Behavioral of adc is

begin


ADOUT0 <= Din(6 to 13);
ADOUT1 <= Din(0 to 5);

end Behavioral;