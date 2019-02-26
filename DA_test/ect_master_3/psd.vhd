----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:13:31 11/01/2018 
-- Design Name: 
-- Module Name:    psd - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity psd is
    Port ( clk : in  STD_LOGIC;
           start : in  STD_LOGIC;
			  otr   : IN std_logic;
           din : in  STD_LOGIC_VECTOR (13 downto 0);
           cos : in  STD_LOGIC_VECTOR (13 downto 0);
           sin : in  STD_LOGIC_VECTOR (13 downto 0);
			  ad9240clk    : OUT std_logic;
           dout_i : out  STD_LOGIC_VECTOR (47 downto 0);
           dout_q : out  STD_LOGIC_VECTOR (47 downto 0);
			  cnt_l :  in STD_LOGIC_VECTOR(15 DOWNTO 0);--从外部输入与频率对应的计数次数
           rdy : out  STD_LOGIC);
end psd;

architecture Behavioral of psd is
COMPONENT cnt
  PORT (
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    sclr : IN STD_LOGIC;
    load : IN STD_LOGIC;
    l : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    thresh0 : OUT STD_LOGIC;
    q : OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
  );
END COMPONENT;

COMPONENT ad9240
	PORT(
		clkad        : IN std_logic;
		otr          : IN std_logic;
		din          : IN std_logic_vector(13 downto 0);    --9240输出到ad9240模块      
		ad9240clk    : OUT std_logic;
		adout        : OUT std_logic_vector(13 downto 0)   --ad9240模块输出
		);
	END COMPONENT;




signal    cnt_ce :  STD_LOGIC;
signal    cnt_sclr :  STD_LOGIC;
signal    cnt_load :  STD_LOGIC;
signal    thresh0 :  STD_LOGIC;
signal    cnt_q :  STD_LOGIC_VECTOR(15 DOWNTO 0);
signal    ad9240out :std_logic_vector(13 DOWNTO 0);

COMPONENT Macc
  PORT (
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    sclr : IN STD_LOGIC;
    a : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    s : OUT STD_LOGIC_VECTOR(47 DOWNTO 0)
  );
END COMPONENT;

signal macc_ce :  STD_LOGIC;
signal macc_sclr :  STD_LOGIC;
signal macc_si :  STD_LOGIC_VECTOR(47 DOWNTO 0);
signal macc_sq :  STD_LOGIC_VECTOR(47 DOWNTO 0);
signal rmacc_si :  STD_LOGIC_VECTOR(47 DOWNTO 0);
signal rmacc_sq :  STD_LOGIC_VECTOR(47 DOWNTO 0);

begin

  Inst_ad9240: ad9240 PORT MAP(
		clkad => clk,
		otr   => otr,
		din   => din,
		ad9240clk => ad9240clk,
		adout => ad9240out
	);



  
    Inst_cnt : cnt
  PORT MAP (
    clk => clk,
    ce => cnt_ce,
    sclr => start,
    load => cnt_load,
    l => cnt_l,--31.25KHz"0000000100000000",--计数次数，随频率变化
    thresh0 => thresh0,
    q => cnt_q
  );



Inst_macc_i : Macc
  PORT MAP (
    clk => clk,
    ce => macc_ce,
    sclr => start,
    a => ad9240out,--"00011101011001",--
    b => sin,--"00000001001000",--
    s => macc_si
  );

Inst_macc_q : Macc
  PORT MAP (
    clk => clk,
    ce => macc_ce,
    sclr => start,
    a => ad9240out,--"00000001011001",--"00000001011001",--"00000001001000",--
    b => cos,--"11111111000001",--"11111111000001",--"?10111111000001?",--
    s => macc_sq
  );
  
process (clk, start)
begin
   if start='1' then   
      rmacc_si <= (others=>'0');
		rmacc_sq <= (others=>'0');
   elsif (clk'event and clk='1') then 
      if thresh0 = '1' then 
         rmacc_si <= macc_si;
         rmacc_sq <= macc_sq;
			end if; 
   end if;
end process;
			dout_i<=rmacc_si;
         dout_q<=rmacc_sq;

--dout_i<="101010101010101010101010101010101010101010101010";
--dout_q<="010101010101010101010101010101010101010101010101";

process (clk, start, thresh0)
begin
   if (clk'event and clk='1') then 
      if start = '1' then 
         macc_ce <='1';
         cnt_ce <='1';
		elsif thresh0 = '1' then
			macc_ce <='0';
			cnt_ce <='0';
      end if; 
	end if;
end process;

process (clk, start)--在start之后，load来一个周期高电平
begin
   if (clk'event and clk='1') then 
         cnt_load <= start;
	end if;
end process;


process (clk)
begin
   if (clk'event and clk='1') then 
     rdy <= not cnt_ce;
     --rdy <= thresh0;
   end if; 
 end process;
end Behavioral;

