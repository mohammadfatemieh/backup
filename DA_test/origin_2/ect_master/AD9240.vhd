library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity ad9240 is
  port (
    clkad     : in  std_logic;
    otr       : in  std_logic;
    din       : in  std_logic_vector (13 downto 0);
    ad9240clk : out std_logic;
    adout     : out std_logic_vector (13 downto 0)
    );
end ad9240;

architecture Behavioral of ad9240 is


--signal dout13 : std_logic;
--signal dout13reg : std_logic:='0';
----signal data_out:std_logic_vector(13 downto 0);
--signal dataout:std_logic_vector(15 downto 0);
signal radclk:std_logic;
begin


  process(clkad)                               --ad9240
  begin
    if clkad'event and clkad = '1' then
--      adout(13) <= not din(13);  --注意数据处理
      adout(13 downto 0) <= din(13 downto 0);  -- xor "00000000000001";
    end if;
  end process;

		ad9240clk <= clkad;



end Behavioral;

