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

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ect_master is
  port (clk     : in    std_logic;
--        reset   : in    std_logic;
--        clkout  : out   std_logic;\
		din : in std_logic_vector(13 downto 0);
		gpo_dout : out std_logic_vector(7 downto 0);
		clk0 : OUT std_logic;
		clk1 : OUT std_logic;
		otr : in std_logic;
		ADCLK : OUT std_logic;	
--      pdb     : inout std_logic_vector (7 downto 0);
      pdb     : inout std_logic_vector (15 downto 0);

--        leds     : out std_logic_vector (7 downto 0);
        astb    : out   std_logic;
        dstb    : out   std_logic;
--        address : out   std_logic;
        pwr     : out   std_logic;
        pwait   : in    std_logic
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
      FIT1_Toggle     : out std_logic
      );
  end component;
  
  	COMPONENT top  --控制573
	PORT(
		CLK : IN std_logic;
		wr : IN std_logic;
		din0 : IN std_logic_vector(7 downto 0); --*
		din1 : IN std_logic_vector(7 downto 0);          
		clk0 : OUT std_logic;
		clk1 : OUT std_logic;
		Dout : OUT std_logic_vector(0 to 7)
		);
	END COMPONENT;

	COMPONENT ad9240
	PORT(
		clkad : IN std_logic;
		otr : IN std_logic;
		din : IN std_logic_vector(13 downto 0);    --9240输出      
		ad9240clk : OUT std_logic;
		adout : OUT std_logic_vector(13 downto 0)   --9240入
		);
	END COMPONENT;
  
  

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

  signal clkmain : std_logic;
--  signal busIn  : std_logic_vector(7 downto 0);
--  signal busOut : std_logic_vector(7 downto 0);

  signal busIn  : std_logic_vector(15 downto 0);
  signal busOut : std_logic_vector(15 downto 0);
  constant aData : std_logic_vector(31 downto 0) := x"C0001000";
  constant aAddr : std_logic_vector(31 downto 0) := x"C0001010";
  constant aEpp  : std_logic_vector(23 downto 0) := x"C00010";
  signal	adout :std_logic_vector(13 downto 0);--AD到MCS的输出
  signal	ad9240clk :std_logic;
  signal	adclk1 :std_logic;






begin
  adclk1 <= clk;
  adclk <= adclk1 ;

  clkmain <= clk;
--  clkout  <= clk;

  mcs_0 : microblaze_mcs
    port map (
      Clk             => Clk,
      Reset           => '0',
      IO_Addr_Strobe  => IO_Addr_Strobe,
      IO_Read_Strobe  => IO_Read_Strobe,
      IO_Write_Strobe => IO_Write_Strobe,
      IO_Address      => IO_Address,
      IO_Byte_Enable  => IO_Byte_Enable,
      IO_Write_Data   => IO_Write_Data,
      IO_Read_Data    => IO_Read_Data,
      IO_Ready        => IO_Ready,
      UART_Rx         => UART_Rx,
      UART_Tx         => UART_Tx,
      FIT1_Toggle     => FIT1_Toggle
      );

--  led      <= FIT1_Toggle;              -- system running indicator...
  
  -- pwait
  --IO_Ready <= pwait;

	-- pdb
  busIn <= pdb;
  pdb   <= busOut when IO_Write_Strobe = '1' else (others => 'Z');  
  
  

  
  
  -- pwr
  process (clkmain)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
      pwr <= not IO_Write_Strobe;
    end if;
  end process;
------------------------------------------------------------------------------------------------------------------
  --数据寄存器与地址寄存器的读，其地址aEpp
  --IO_Read_Data <= x"000000" & busIn when IO_Read_Strobe = '1' and IO_Address(31 downto 8) = aEpp else (others => '0');
  --IO_Read_Data(15 downto 0) <="00" &adout when IO_Read_Strobe = '1' and IO_Addr_Strobe = '1' and IO_Address(31 downto 8) = aEpp else (others => '0');
  -- IO_Read_Data(15 downto 0) <="00" &adout;
	
  process (clkmain, IO_Addr_Strobe, IO_Read_Strobe, IO_Address,IO_Ready)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
      if IO_Addr_Strobe = '1' and IO_Read_Strobe = '1' and IO_Address(31 downto 8) = aEpp then
--		  if clkmain'event and clkmain = '1' then
        IO_Read_Data(2 downto 0) <= not adout(0)&"00";--
        IO_Read_Data(15 downto 3) <=  adout(13 downto 1);--
		  IO_Ready <= IO_Read_Strobe;
      --else
      --  IO_Read_Data(15 downto 0) <= IO_Read_Data(15 downto 0);--"1010101010101010"; --
		--  IO_Ready <= '1';
		--  end if;
      end if;
    end if;
  end process;
  ---------------------------------------------------------------------------------------------------------------
  --数据寄存器与地址寄存器的写，其地址aEpp
  process (clkmain, IO_Addr_Strobe, IO_Write_Strobe, IO_Address)
  begin  -- process
    if clkmain'event and clkmain = '1' then  -- rising clock edge
      if IO_Addr_Strobe = '1' and IO_Write_Strobe = '1' and IO_Address(31 downto 8) = aEpp then
        busOut <= IO_Write_Data(15 downto 0);
      else
        busOut <= busOut;
      end if;
    end if;
  end process;

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



	Inst_top: top PORT MAP(
		CLK => clkmain,
		wr => '0',
		din0 => busOut(15 downto 8),
		din1 => busOut(7 downto 0),
--		din0 => adout(13 downto 6),
--		din1 => adout(5 downto 0)&"00",
		clk0 => clk0,
		clk1 => clk1,
		Dout => gpo_dout
	);
	
	
	  	Inst_ad9240: ad9240 PORT MAP(
		clkad => adclk1,
		otr => otr,
		din => din,
		ad9240clk => ad9240clk,
		adout => adout
	);
	

	
	
	
	
end Behavioral;

