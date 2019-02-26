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
			   adce              : in  STD_LOGIC;
	  		   otr               : in std_logic;
	         clkad             : in STD_LOGIC;
	         clkjietiao        : in STD_LOGIC;
			   data_in           : in  STD_LOGIC_VECTOR (13 downto 0);--AD数据输入
			   sin               : in std_logic_vector (13 downto 0);
			   cosine            : in std_logic_vector (13 downto 0);
				ad9240clk         : out  STD_LOGIC;
            jietiaordy        : out  STD_LOGIC;
            i                 : out  STD_LOGIC_VECTOR (31 downto 0);
			   j                 : out  STD_LOGIC_VECTOR (31 downto 0)			  
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


signal sin_base      :std_logic_vector(13 DOWNTO 0);
signal cosine_base      :std_logic_vector(13 DOWNTO 0);
signal flag          :std_logic;
signal flag1         :std_logic;
signal sclr1         :std_logic;
signal sout          :std_logic_vector(31 DOWNTO 0);
signal sout1         :std_logic_vector(31 DOWNTO 0);
signal count1        :integer := 0;
signal jietiao       :std_logic_vector(15 downto 0);
signal ad9240out     :std_logic_vector(13 DOWNTO 0);
signal adrdy         : std_logic:='0';




begin


sin_base    <= sin;
cosine_base <= cosine;

Inst_ad9240: ad9240 PORT MAP(
		clkad => clkad,
		otr   => otr,
		din   => data_in,
		ad9240clk => ad9240clk,
		adout => ad9240out
	);


Inst_Macc : Macc
  PORT MAP (
    clk => clkjietiao,
    ce => flag,
    sclr => sclr1,
    a => sin_base,
    b => "00000000000001",--cosine_base,
    s => sout
  );

Inst_Macc1 : Macc
  PORT MAP (
    clk => clkjietiao,
    ce => flag,
    sclr => sclr1,
    a => ad9240out,
    b => cosine_base,
    s => sout1
  );
  
  
  process(clkjietiao,adrdy)
begin
if adrdy='1'  then
	 if (clkjietiao'Event and clkjietiao = '1') then	
			if( count1<=6) then
						flag<='0';
						count1<=count1+1;
			elsif( 6<count1 and count1<=jietiao+6) then
						flag<='1';
						count1<=count1+1;
			elsif (jietiao+6<count1 and count1<=jietiao+8) then
						flag<='0';
						count1<=count1+1;
			elsif (jietiao+8<count1 and count1<=jietiao+20) then
						flag<='0';
						sclr1<='1';
						count1<=count1+1;	
			elsif (jietiao+20<count1 and count1<=jietiao+22) then
						flag<='0';
						sclr1<='0';  
						count1<=count1+1;	
		   end if;
     end if;
 elsif adrdy='0' then 
						flag<='0';
						sclr1<='0';	
					   count1<=0;		  
			end if;	
end process;


process(adce,count1)
begin
if (adce'Event and adce='1') then
		adrdy<='1';
	end if;
  if(count1=jietiao+22) then
	   adrdy<='0';
	end if;
end process;

jietiaordy <= not adrdy;

jietiao<="0000000001010000";
i <= sout;
j <= sout1;


end Behavioral;

