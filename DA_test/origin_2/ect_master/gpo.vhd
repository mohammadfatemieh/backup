
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
use IEEE.std_logic_unsigned.all;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity HC573 is
  port(
    CLK  : in  std_logic;
    wr   : in  std_logic;
    din0 : in  std_logic_vector(7 downto 0);
    din1 : in  std_logic_vector(7 downto 0);
    clk0 : out std_logic;
    clk1 : out std_logic;
    --G: in std_logic_vector(0 to 5); 
    Dout : out std_logic_vector(0 to 7)
    );
--E: OUT std_logic_vector(0 to 7));
end HC573;

architecture Behavioral of HC573 is

  type state is (st0, st1, st2, st3);
  signal curstate : state                         := st0;
  signal nxstate  : state;
  signal rst      : std_logic                     := '0';
  signal count    : std_logic_vector(25 downto 0) := (others => '0');
  signal count1   : std_logic_vector(10 downto 0) := (others => '0');
  signal clkb     : std_logic;
  signal clkc     : std_logic;

begin

  process(curstate)
  begin
    case curstate is
      when st0 =>
        clk0    <= '0';
        clk1    <= '0';
        Dout    <= din0;
--              Dout<="10101010";
        nxstate <= st1;
      when st1 =>
        clk0    <= '1';
        clk1    <= '0';
        Dout    <= din0;
--              Dout<="10101010";
        nxstate <= st2;
      when st2 =>
        clk0    <= '0';
        clk1    <= '0';
        Dout    <= din1;
--              Dout<="11111111";
        nxstate <= st3;
      when st3 =>
        clk0    <= '0';
        clk1    <= '1';
        Dout    <= din1;
--              Dout<="11111111";
        nxstate <= st0;
--when st3 =>
--              nxstate <= st0;
      when others =>
        clk0 <= '0';
        clk1 <= '0';
        Dout <= din1;
--              Dout<="11111111";

        nxstate <= st0;
    end case;
  end process;

  process(clk)
  begin
    if (rising_edge(clk)) then
      curstate <= nxstate;
    end if;
  end process;
end Behavioral;
