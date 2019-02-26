----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:34:06 08/09/2018 
-- Design Name: 
-- Module Name:    ect_master - Behavioral 
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
use IEEE.STD_LOGIC_1164.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

use ieee.std_logic_unsigned.all;
-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ect_master is
  port (clk     : in    std_logic;
--        reset   : in    std_logic;
--        clkout  : out   std_logic;\
		  din : in std_logic_vector(13 downto 0);--AD9240芯片的输出
--		  gpo_dout : out std_logic_vector(7 downto 0);
--		  clk0 : OUT std_logic;--给到573
--		  clk1 : OUT std_logic;--给到573
		  otr : in std_logic;
		  ADCLK : OUT std_logic;	
--      pdb     : inout std_logic_vector (7 downto 0);
        pdb     : inout std_logic_vector (7 downto 0);
--      leds     : out std_logic_vector (7 downto 0);
        astb    : out   std_logic;
        dstb    : out   std_logic;
--      address : out   std_logic;
        pwr     : out   std_logic;
		  led 	 : out std_logic_vector (3 downto 0);
	  	  DACLK: out std_logic:='0';--9754的时钟
		  DO   	 : out std_logic_vector (13 downto 0);--DDS输出
        pwait   : in    std_logic;
		  RTS     : in    std_logic;
		  BTN     : in    std_logic;
		  RXD     : in    std_logic;--从板的接收，对应pmod发送
		  TXD     : out    std_logic--从板的发送，对应pmod接收
--		  CTS     : out    std_logic		 
        --led     : out   std_logic
		  );
end ect_master;

architecture Behavioral of ect_master is
  component microblaze_mcs
    port (
      Clk             : in  std_logic;
      Reset           : in  std_logic;
      IO_Addr_Strobe  : out std_logic;
      IO_Read_Strobe  : out std_logic;
      IO_Write_Strobe : out std_logic;
      IO_Address      : out std_logic_vector(31 downto 0);
      IO_Byte_Enable  : out std_logic_vector(3 downto 0);
      IO_Write_Data   : out std_logic_vector(31 downto 0);
      IO_Read_Data    : in  std_logic_vector(31 downto 0);
      IO_Ready        : in  std_logic;
      UART_Rx         : in  std_logic;
      UART_Tx         : out std_logic;
		UART_Interrupt  : OUT STD_LOGIC;
      FIT1_Toggle     : out std_logic;
		INTC_IRQ        : OUT STD_LOGIC

      );
  end component;

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
		i : OUT std_logic_vector(31 downto 0);
		j : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;




	component dcm 
	port(-- Clock in ports
   CLK_IN1           : in     std_logic;
   -- Clock out ports
   CLK_OUT1          : out    std_logic;
   CLK_OUT2          : out    std_logic;
   CLK_OUT3          : out    std_logic;
   -- Status and control signals
   dcmreset          : in     std_logic;
   clocklocked       : out    std_logic
   );
   end component;
	
	COMPONENT dds
   PORT (
    clk : IN STD_LOGIC;
    we : IN STD_LOGIC;
    data : IN STD_LOGIC_VECTOR(24 DOWNTO 0);
	 cosine : OUT STD_LOGIC_VECTOR(13 DOWNTO 0);
    sine : OUT STD_LOGIC_VECTOR(13 DOWNTO 0)
   );
   END COMPONENT;




-- COMP_TAG_END ------ End COMPONENT Declaration ------------
-- The following code must appear in the VHDL architecture
-- body. Substitute your own instance name and net names.
------------- Begin Cut here for INSTANTIATION Template ----- INST_TAG


-- COMP_TAG_END ------ End COMPONENT Declaration ------------
-- The following code must appear in the VHDL architecture
-- body. Substitute your own instance name and net names.
------------- Begin Cut here for INSTANTIATION Template ----- INST_TAG
  type state1 is (uart, waitad ,adok,jietiaook);
  signal curstate_meas: state1 := waitad;
  signal nxstate_meas: state1;
	
  signal IO_Addr_Strobe  : std_logic;
  signal IO_Read_Strobe  : std_logic;
  signal IO_Write_Strobe : std_logic;
  signal IO_Address      : std_logic_vector(31 downto 0);
  signal IO_Byte_Enable  : std_logic_vector(3 downto 0);
  signal IO_Write_Data   : std_logic_vector(31 downto 0);
  signal IO_Read_Data    : std_logic_vector(31 downto 0);
  signal IO_Ready        : std_logic;
  signal UART_Rx         : std_logic;
  signal UART_Tx         : std_logic;
  signal FIT1_Toggle     : std_logic;
  signal UART_Interrupt  : std_logic;
  signal INTC_IRQ        : std_logic;
  signal clkmain         : std_logic;
--  signal busIn  : std_logic_vector(7 downto 0);
--  signal busOut : std_logic_vector(7 downto 0);
--  signal busIn           : std_logic_vector(15 downto 0);
  signal busIn           : std_logic_vector(31 downto 0);
  signal busOut          : std_logic_vector(15 downto 0);
  constant aData         : std_logic_vector(31 downto 0) := x"C0001000";
  constant aAddr         : std_logic_vector(31 downto 0) := x"C0001010";
  constant aEpp          : std_logic_vector(23 downto 0) := x"C00010";
  constant aAD           : std_logic_vector(31 downto 0) := x"C0001020";
  constant aLed          : std_logic_vector(31 downto 0) := x"C0001030"; 
  constant aCNT          : std_logic_vector(31 downto 0):= x"C0001040";
  constant asagain       : std_logic_vector(31 downto 0):= x"C0001050";
  signal	rled            :std_logic_vector(3 downto 0);--AD到MCS的输出
  signal	adout           :std_logic_vector(13 downto 0);--AD到MCS的输出
  signal	ad9240clk       :std_logic;
  signal	adclk1          :std_logic;
  signal	rRdy            :std_logic;
  signal	UART_SEND_DATA  :std_logic_vector(7 downto 0);--UART传输数据
  signal UART_READ_DATA  :std_logic_vector(7 downto 0);--UART读取数据
  signal busout1         :std_logic_vector(15 downto 0);--最终发给573的数据，为使AD数据按照预定格式显示
  signal clk_16m         :std_logic;
  signal clk_8m          :std_logic;
  signal dcmreset        :std_logic;
  signal dcmclockd       :std_logic;
--  signal dds_data : std_logic_vector(24 downto 0):= "0000000000000000110100011";--100
--  signal dds_data : std_logic_vector(24 downto 0):= "0000000000001000001100010";--1K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000000001010001111010111";--10K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000000010100011110101110";--20K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000000011110101110000101";--30K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000000101000111101011100";--40K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000000110011001100110011";--50K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000000111101011100001010";--60K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000001000111101011100001";--70K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000001010001111010111000";--80K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000001011100001010001111";--90K
  signal dds_data : std_logic_vector(24 downto 0):= "0000001100110011001100110";--100K
--  signal dds_data : std_logic_vector(24 downto 0):= "0000111111111111111111110";--500K

  signal count           : integer;
  signal sin             : std_logic_vector(13 downto 0);
  signal cosine          : std_logic_vector(13 downto 0);
  signal sin1            : std_logic_vector(13 downto 0);
  signal rdaclk          : std_logic;
  signal clkjietiao      : std_logic;
  signal jietiaordy      : std_logic;
  signal adce            : std_logic; 
  signal flaguart        : std_logic:= '0';     --UART flag
  signal cnt_reg         : std_logic_vector(15 downto 0);
  signal i               : std_logic_vector(31 downto 0);
  signal j               : std_logic_vector(31 downto 0);
  signal xled            : std_logic_vector(2 downto 0):="101";
  signal result          : std_logic_vector(75 downto 0);
begin

  
--  clkout  <= clk;

  mcs_0 : microblaze_mcs
    port map (
      Clk             => clkmain,
      Reset           => '0',
      IO_Addr_Strobe  => IO_Addr_Strobe,
      IO_Read_Strobe  => IO_Read_Strobe,
      IO_Write_Strobe => IO_Write_Strobe,
      IO_Address      => IO_Address,
      IO_Byte_Enable  => IO_Byte_Enable,
      IO_Write_Data   => IO_Write_Data,
      IO_Read_Data    => IO_Read_Data,
      IO_Ready        => IO_Ready,
      UART_Rx         => rxd,
      UART_Tx         => txd,
		UART_Interrupt  => UART_Interrupt,
      FIT1_Toggle     => FIT1_Toggle,
		INTC_IRQ        => INTC_IRQ
      );

     led(3)      <= FIT1_Toggle;              -- system running indicator...
  
  -- pwait
  --IO_Ready <= pwait;
------------------------------DA-----------------------------------  
  rdaclk <= clk_8m;--not rdaclk;
  daclk <= rdaclk;
  clkjietiao <= clk_8m;                        -- 解调时钟
  DO <= sin XOR "10000000000000";    
--   daclk <=clk_8m;
---------------------------------------------------------------------
	-- pdb
  --busIn <= pdb;
  --pdb   <= busOut when IO_Write_Strobe = '1' else (others => 'Z');  
--------------------------------------------------------------------------------------------- 
  --UART
    
---------------------------------------------------------------------------------------------
  
  
  -- pwr
  process (clkmain)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
			pwr <= not IO_Write_Strobe;		
    end if;
  end process;
  
  process(clkmain, IO_Write_Strobe,IO_Read_Strobe)
  begin
if clkmain'event and clkmain='1' then 
	IO_Ready <= IO_Write_Strobe or IO_Read_Strobe;
end if;
end process;
----------------------------------------------------------------------------------------------
  --数据寄存器与地址寄存器的读，其地址aAD x"C0001020"
 --------------------------------------------------------寄存器读写原始位置-----------------------
   

--process (clkmain, IO_Addr_Strobe, IO_Read_Strobe, IO_Address)
--begin
 --if clkmain'event and clkmain = '1' then  -- rising clock edge
      --if IO_Addr_Strobe = '1' and IO_Read_Strobe = '1' and IO_Address = aAD and flaguart = '1' then
           --IO_Read_Data(31 downto 0)  <= i(31 downto 0);
		 --end if;	  
		--if IO_Addr_Strobe = '1' and IO_Read_Strobe = '1' and IO_Address = asagain and btn = '1' then	  
			   --IO_Read_Data(31 downto 0)  <= "10101010101010101010101010101010";
		--end if;
     
    --end if;
--end process;

  -------------------------------------------------------------------------------------------
  --数据寄存器与地址寄存器的写，其地址aData  x"C0001000"
  process (clkmain, IO_Addr_Strobe, IO_Write_Strobe, IO_Address)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
      if IO_Addr_Strobe = '1' and IO_Write_Strobe = '1' and IO_Address = aData then
        busOut <= IO_Write_Data(15 downto 0);
      else
        busOut <= busOut;
      end if;
    end if;
  end process;
 ---------------------------------------------------------------------------------------------- 
  --写Led 地址aLed x"C0001030"
    process (clkmain, IO_Addr_Strobe, IO_Write_Strobe, IO_Address)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
      if IO_Addr_Strobe = '1' and IO_Write_Strobe = '1' and IO_Address = aLed then
        rled(2 downto 0) <= IO_Write_Data(2 downto 0);
      else
        rled(2 downto 0) <= rled(2 downto 0);
      end if;
    end if;
  end process;
  
--led(2 downto 1) <= rled(2 downto 1);
------------------------------------------------------------------------------------------------
 -- astb & dstb
  process (clkmain, IO_Addr_Strobe, IO_Address)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
      if IO_Addr_Strobe = '1' and IO_Address = aAddr then
        astb <= '0';
      else
        astb <= '1';
      end if;
    end if;
  end process;

  process (clkmain, IO_Addr_Strobe, IO_Address)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
      if IO_Addr_Strobe = '1' and IO_Address = aData then
        dstb <= '0';
      else
        dstb <= '1';
      end if;
    end if;
  end process;
  
process (clkmain) 
begin
   if clkmain='1' and clkmain'event then
			if cnt_reg = "1111111111111111" then
				cnt_reg <= (others=>'0');
			else
				cnt_reg <= cnt_reg + 1;
      end if;
   end if;
end process;
 
-----------------------------------------------------------------------------------------------

    -- Status and control signals

	Inst_clk : dcm port map(
	   -- Clock in ports
      CLK_IN1 => clk,
      -- Clock out ports
      CLK_OUT1 => clkmain,--80m
      CLK_OUT2 => clk_16m,--16m
      CLK_OUT3 => clk_8m,--8m
		dcmreset => dcmreset,
      clocklocked => dcmclockd
	);
	
	Inst_dds : dds
  PORT MAP (
    clk => clk_8m,
    we => '1',
    data => dds_data,
	 cosine => cosine,
    sine => sin
  );
  
  	Inst_jietiao: jietiao PORT MAP(
		adce => adce,
		otr => otr,
		clkad => clk_8m,
		clkjietiao => clk_8m,
		data_in => din,
		sin => sin,
		cosine => cosine,
		ad9240clk => ADCLK,
		jietiaordy => jietiaordy,
		i => i,
		j => j
	);
  

process(clkmain)
begin
if (rising_edge (clkmain)) then
    curstate_meas <= nxstate_meas;
	 end if;
end process;
	 
process(curstate_meas,count,BTN,flaguart,clkmain,IO_Addr_Strobe,IO_Read_Strobe,IO_Address,jietiaordy)
begin
case curstate_meas is

when waitad =>	 
      adce <= '0';
	   nxstate_meas <= adok;
when uart =>    --flaguart=1开始传输数据
    if (BTN='1') then
      flaguart <= '0';
      xled <= not xled;
      nxstate_meas <= waitad;
    else 
      nxstate_meas <= uart;
    end if;
when adok =>
	   adce <= '1';
      nxstate_meas <= jietiaook;

when jietiaook => 
   if (jietiaordy = '1') then
	   nxstate_meas <= uart;		
		flaguart <= '1';       --使用flaguart，保证在等待下一次解调开始标志按钮时，在uart状态循环等待，只发送一次数据
   else 
		nxstate_meas <= jietiaook;
	end if;		
		adce <= '0';
end case;
end process;









process (clkmain, IO_Addr_Strobe, IO_Read_Strobe, IO_Address)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
      if IO_Addr_Strobe = '1' and IO_Read_Strobe = '1' and IO_Address = aAD then-- and flaguart <= '1' then
		--IO_Read_Data(15 downto 0)  <= "00" & adout(13 downto 0);
	   led(2 downto 0) <= "111";
		IO_Read_Data(31 downto 0)  <= i(31 downto 0);
        --case IO_Address(7 downto 4) is
           -- when x"1" => IO_Read_Data(15 downto 0)  <= "00" & adout(13 downto 0);
            --when x"2" => IO_Read_Data(15 downto 0)  <= "00" & adout(13 downto 0);
           -- when x"3" => IO_Read_Data(15 downto 0)  <= "00" & adout(13 downto 0);
           -- when x"4" => IO_Read_Data(15 downto 0)  <= cnt_reg;
           -- when others => IO_Read_Data(15 downto 0) <= (others=>'0');
        -- end case;
      --else
      --  IO_Read_Data(15 downto 0) <= IO_Read_Data(15 downto 0);--"1010101010101010"; --
		--  IO_Ready <= '1';
		--  end if;
      end if;
    end if;
  end process;








end Behavioral;