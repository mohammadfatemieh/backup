library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.std_logic_unsigned.all;

entity UART_TX_test is
    Port ( --UART_TX   : in  STD_LOGIC;
           CLK       : in  STD_LOGIC;
		     rts       : in  STD_LOGIC;
			  txd       : out  STD_LOGIC;
           txd_data  : in  STD_LOGIC_VECTOR (15 downto 0)
			  );
end UART_TX_test;

architecture Behavioral of UART_TX_test is
type tx_STATE_TYPE is (T_IDLE, T_SEND);
--signal txd        : std_logic;
signal clk_16bps  : STD_LOGIC := '0';
signal cnt_clk    : std_logic_vector(7 downto 0);
signal data_buf    : std_logic_vector(7 downto 0);
signal txd_flag_r : std_logic;
signal tx_state   : tx_state_type := T_IDLE;
signal txd_cnt    : std_logic_vector(3 downto 0);
signal state      : integer;
signal txd_flag   : std_logic := '0';
--signal rts        : std_logic;
begin

process(clk)--分频时钟
begin
if(rising_edge(CLK)) then
    if(cnt_clk > "01000100")then
	    clk_16bps <= not clk_16bps;
		cnt_clk <= "00000000";
	else
	    cnt_clk <= cnt_clk + 1;
    end if;
end if;
end process;



process(clk)
begin
if(rising_edge(CLK)) then

case TX_STATE is
when T_IDLE =>
				    txd <= '1';
                txd_flag_r <= '0';
                if(RTS = '0')then
                tx_state <= T_SEND;
                else
                tx_state <= T_IDLE;
				    end if;
when T_SEND =>				
                if(clk_16bps = '1')then
                    if(txd_cnt < "1001")then
                    txd_cnt <= txd_cnt + 1;
					     else
                        txd_cnt <= "0000";
                        tx_state <= T_IDLE;
						      txd_flag_r <= '1';
				         end if;
				    end if;
case txd_cnt is
    when "0000" => txd <= '0';--起始位
    when "0001" => txd <= data_buf(0);
    when "0010" => txd <= data_buf(1);
    when "0011" => txd <= data_buf(2);
    when "0100" => txd <= data_buf(3);
    when "0101" => txd <= data_buf(4);
    when "0110" => txd <= data_buf(5);
    when "0111" => txd <= data_buf(6);
    when "1000" => txd <= data_buf(7);
    when "1001" => txd <= '1';--停止位
	 when others => txd <= '0';
end case;
end case;
end if;

if(rising_edge(CLK)) then
    if(txd_flag = '1')then
        if(state < 2)then
           state <= state+1;
        else
          state <= 0;
		   end if;
    else 
          state <= state;
    end if;
--end if;
if(state = 1)then
            data_buf <= txd_data(7 downto 0);   
    else if state = 2 then
            data_buf <= txd_data(15 downto 8);
end if;
--if(rising_edge(CLK)) then
    if clk_16bps = '1' and txd_cnt = "1001" then --Totally 8 data is done
        txd_flag <= '1';
    else
        txd_flag <= '0';
		end if;
end if;
end if;
end process;
end Behavioral;