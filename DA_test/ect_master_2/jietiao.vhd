----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:35:26 10/23/2018 
-- Design Name: 
-- Module Name:    jietiao - Behavioral 
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
use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity jietiao is
     Port ( 	  
			   start             : in  STD_LOGIC;
	  		   otr               : in std_logic;
	         clk               : in STD_LOGIC;
			   data_in           : in  STD_LOGIC_VECTOR (13 downto 0);--AD数据输入
			   sin               : in std_logic_vector (13 downto 0);
			   cosine            : in std_logic_vector (13 downto 0);
				ad9240clk         : out  STD_LOGIC;
            jietiaordy        : out  STD_LOGIC;
            i                 : out  STD_LOGIC_VECTOR  (31 downto 0);
			   j                 : out  STD_LOGIC_VECTOR  (31 downto 0)			  
			  );




end jietiao;

architecture Behavioral of jietiao is


	COMPONENT ad9240
	PORT(
		clkad        : IN std_logic;
		otr          : IN std_logic;
		din          : IN std_logic_vector(13 downto 0);    --9240输出到ad9240模块      
		ad9240clk    : OUT std_logic;
		adout        : OUT std_logic_vector(13 downto 0)   --ad9240模块输出
		);
	END COMPONENT;


  COMPONENT Macc
  PORT (
    clk           : IN STD_LOGIC;
    ce            : IN STD_LOGIC;
    sclr          : IN STD_LOGIC;
    a             : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    b             : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    s             : OUT STD_LOGIC_VECTOR(31 DOWNTO 0)
    );
  END COMPONENT;

  COMPONENT Macc1
  PORT (
    clk           : IN STD_LOGIC;
    ce            : IN STD_LOGIC;
    sclr          : IN STD_LOGIC;
    a             : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    b             : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    s             : OUT STD_LOGIC_VECTOR(31 DOWNTO 0)
    );
   END COMPONENT;

   COMPONENT cnt
  PORT (
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    sclr : IN STD_LOGIC;
    --load : IN STD_LOGIC;
    --l : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    thresh0 : OUT STD_LOGIC;
    q : OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
  );
END COMPONENT;


    COMPONENT mul
  PORT (
    clk : IN STD_LOGIC;
    a : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    ce : IN STD_LOGIC;
    sclr : IN STD_LOGIC;
    p : OUT STD_LOGIC_VECTOR(31 DOWNTO 0)
  );
END COMPONENT;

    COMPONENT Accum
  PORT (
    b : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    sclr : IN STD_LOGIC;
    q : OUT STD_LOGIC_VECTOR(31 DOWNTO 0)
  );
END COMPONENT;

signal sin_base      :std_logic_vector(13 DOWNTO 0);
signal cosine_base      :std_logic_vector(13 DOWNTO 0);
signal ce          :std_logic;
signal ce1          :std_logic;
signal sclr         :std_logic;
signal sout          :std_logic_vector(31 DOWNTO 0);
signal sout1         :std_logic_vector(31 DOWNTO 0);
signal count        :integer := 0;
signal jietiao       :std_logic_vector(15 downto 0);
signal ad9240out     :std_logic_vector(13 DOWNTO 0);
signal jietiaordy1   : std_logic:='0';
signal thresh0       : std_logic;
signal q             :std_logic_vector(15 DOWNTO 0);
signal p             :std_logic_vector(31 DOWNTO 0);
signal p1             :std_logic_vector(31 DOWNTO 0);
signal qout             :std_logic_vector(31 DOWNTO 0);
signal qout1             :std_logic_vector(31 DOWNTO 0);


begin

Inst_ad9240: ad9240 PORT MAP(
		clkad => clk,
		otr   => otr,
		din   => data_in,
		ad9240clk => ad9240clk,
		adout => ad9240out
	);


Inst_Macc : Macc
  PORT MAP (
    clk => clk,
    ce => ce1,
    sclr => sclr,
    a => ad9240out,--"00000000000001",--"10011101101001",--"00000000000011",--cosine,--
    b => sin,--"00110111001010",-- "00000000001111",--
    s => sout
  );

Inst_Macc1 : Macc
  PORT MAP (
    clk => clk,
    ce => ce1,
    sclr => sclr,
    a => ad9240out,
    b => cosine,
    s => sout1
  );
  
  Inst_cnt : cnt
  PORT MAP (
    clk => clk,
    ce => ce1,---------注意计数模块的使能信号
    sclr => sclr,
    --load => '1',
    --l => "0000000001010000",--根据激励频率修改采样点数
    thresh0 => thresh0,
    q => q
  );

  Inst_Multiply : mul
  PORT MAP (
    clk => clk,
    a => ad9240out,
    b => sin,
    ce => ce1,
    sclr => sclr,
    p => p
  );
  
  Inst_Accumulate : Accum
  PORT MAP (
    b => p,
    clk => clk,
    ce => ce1,
    sclr => sclr,
    q => qout
  );


    Inst_Multiply1 : mul
  PORT MAP (
    clk => clk,
    a => ad9240out,
    b => cosine,
    ce => ce1,
    sclr => sclr,
    p => p1
  );
  
  Inst_Accumulate1 : Accum
  PORT MAP (
    b => p1,
    clk => clk,
    ce => ce1,
    sclr => sclr,
    q => qout1
  );




-------------------------------------------try1------------------------------------------------
--process(start,count)
--begin
--if(start'Event and start ='1') then	
--jietiaordy1 <='0';

--if(start ='1') then

  	--i <= "10101111111011011011101111011111";--sout;

   --if (clk'Event and clk = '1') then	
   --  count <= count+1; 
   --if(count <= 80) then
	--ce <='1';
	--else
	--count <= 0;
	--ce <= '0';
   --j <= sout1;
   --sclr <='1';
	--jietiaordy1 <='1';
  --end if;
  --end if;
--end if;
--end process;  
---------------------------------------------------------------------------------------------------
process(ce,clk)
begin
if ce='1'  then
	 if (clk'Event and clk='1') then	
			if( count<=81) then
			ce1<='1';
			count<=count+1;
			elsif( 81<count and count<= 82) then	
         ce1 <='0';
			count<=count+1;
			elsif( 82<count and count<= 84) then
			ce1 <='0';
			sclr<='1';
			count<=count+1;	
			elsif( 84<count and count<= 86) then
			ce1 <='0';
			sclr<='0';
			count<=count+1;			
			end if;
     end if;
 elsif ce='0' then 
						ce1<='0';
						sclr<='0';	
					   count<=0;		
		  
			end if;
end process;



process(start,count)
begin
if (start'Event and start='1') then
		ce<='1';
	end if;
  if(count=86) then
	   ce<='0';
	end if;
end process;

jietiaordy <= not ce;
--i(13 downto 0) <= ad9240out;--"01010101101010100101010111111111";--sout;--

process
begin
 wait until  (ce1'event and ce1='0');										--设置解调周期
	i<= qout;
	j<= qout1;
end process;




-------------------------------------------try2------------------------------------------------
--process(start,jietiaordy1)
--begin
--      if (start='1') then
--		  ce<='1';
--   elsif(jietiaordy1 ='1') then
--	   ce<='0';
--   end if;
--end process;


--process(start,thresh0,clk)
--begin
-- if(thresh0'Event and thresh0 = '1') then
--		 i <= "00000000000000001111111111001100";
--       j <= sout1;
--		 jietiaordy1<='1';
--		 ce <= '0';
--	if (clk'Event and clk = '1') then	
--		 sclr <= '1';
--		 end if;
--end if;
--end process;
--jietiaordy <= jietiaordy1;
--ce <= not jietiaordy1;
---------------------------------------------------------------------------------------------------
end Behavioral;

