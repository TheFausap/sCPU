--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:08:03 02/03/2022
-- Design Name:   
-- Module Name:   /home/ise/Projects/sCPU/cpu_tb.vhd
-- Project Name:  sCPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cpu
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY cpu_tb IS
END cpu_tb;
 
ARCHITECTURE behavior OF cpu_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cpu
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         wr_en : OUT  std_logic;
         dr : IN  std_logic_vector(7 downto 0);
         dw : OUT  std_logic_vector(7 downto 0);
         addr : OUT  std_logic_vector(7 downto 0);
         pc_out : OUT  std_logic_vector(7 downto 0);
         accu_out : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
	 
	 COMPONENT procram is
    PORT(
    a     : in  std_logic_vector(7 downto 0);
    di    : in  std_logic_vector(7 downto 0);
    reset : in  std_logic;
    wr_en : in  std_logic;
    clk   : in  std_logic;
    do    : out std_logic_vector(7 downto 0));
    end COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal dr : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal wr_en : std_logic;
   signal dw : std_logic_vector(7 downto 0);
   signal addr : std_logic_vector(7 downto 0);
   signal pc_out : std_logic_vector(7 downto 0);
   signal accu_out : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut_cpu: cpu PORT MAP (
          clk => clk,
          reset => reset,
          wr_en => wr_en,
          dr => dr,
          dw => dw,
          addr => addr,
          pc_out => pc_out,
          accu_out => accu_out
        );
		  
   uut_procram: procram PORT MAP(
      a => addr,
      di => dw,
      reset => reset,
      wr_en => wr_en,
      clk => clk,
      do => dr
     );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		reset <= '1';
      wait for 50 ns;	
		
		reset <= '0';
		
      -- insert stimulus here 
		
      wait;
   end process;

END;
