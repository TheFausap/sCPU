----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:54:57 02/03/2022 
-- Design Name: 
-- Module Name:    procram - Behavioral 
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
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity procram is
  port(
    a     : in  std_logic_vector(7 downto 0);
    di    : in  std_logic_vector(7 downto 0);
    reset : in  std_logic;
    wr_en : in  std_logic;
    clk   : in  std_logic;
    do    : out std_logic_vector(7 downto 0));
end procram;

architecture sim of procram is

-- 16-word blocks of RAM and ROM memory

  type mem_array is array (0 to 15) of std_logic_vector(7 downto 0);
  
  signal ram_data: mem_array := (others => x"00");
  signal rom_data: mem_array := (x"01",x"07",x"03",x"0a",x"02",x"10",x"04",x"02",
                                 x"05",x"00",x"09",x"00",x"00",x"00",x"00",x"00");
 
  begin

    process(clk, wr_en, reset, a)
      variable address : integer := 0;
    begin
      address := to_integer(unsigned(a));

      if reset = '1' then
        ram_data <= (others => x"00");
      elsif rising_edge(clk) then
        if ((wr_en='1') and (address>15) and (address<32)) then
          ram_data (address-16) <= di; -- Write to RAM address
        end if;
      end if;

      if (address>31) then
        do <= (others => '0');
      elsif (address>15) then
        do <= ram_data(address-16);    -- Read from RAM address
      else
        do <= rom_data(address);       -- Read from ROM address
      end if; 

    end process;
END sim;
