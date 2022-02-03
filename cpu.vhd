----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:44:30 02/03/2022 
-- Design Name: 
-- Module Name:    cpu - Behavioral 
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
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity cpu is
  port( clk      : in  std_logic;
        reset    : in  std_logic;
        wr_en    : out  std_logic;
        dr       : in  std_logic_vector( 7 downto 0); -- Data from the memory
        dw       : out std_logic_vector( 7 downto 0); -- Data to the memory
        addr     : out std_logic_vector( 7 downto 0); -- Memory address
        pc_out   : out std_logic_vector( 7 downto 0); -- Program counter value
        accu_out : out std_logic_vector( 7 downto 0)  -- Accumulator value
        );
end cpu;

architecture fsm of cpu is

  --   op-codes
  constant LDA : std_logic_vector( 3 downto 0) := "0001";
  constant STA : std_logic_vector( 3 downto 0) := "0010";
  constant ADD : std_logic_vector( 3 downto 0) := "0011";
  constant JNC : std_logic_vector( 3 downto 0) := "0100";
  constant JMP : std_logic_vector( 3 downto 0) := "0101";

  constant one : std_logic_vector( 7 downto 0) := "00000001";

  -- CPU registers
  signal accu    : std_logic_vector( 7 downto 0) := "00000000" ; -- Accumulator
  signal op_code : std_logic_vector( 3 downto 0) := "0000" ;     -- Current op-code
  signal pc      : std_logic_vector( 7 downto 0) := "00000000" ; -- Program counter

    --   FSM states
  type state_t is ( load_opcode, LDA_1, STA_1, STA_2, 
							ADD_1, ADD_2, ADD_3, JNC_1, JMP_1); -- List of states in the CPU FSM
  
  -- Signals used for debugging
  signal state_watch : state_t;

begin  --  fsm 

  -- Accumulator and program counter value outputs
  accu_out <= accu;
  pc_out <= pc;
  
  fsm_proc : process ( clk, reset)
    variable state   : state_t := load_opcode;
	 variable add1    : std_logic_vector(8 downto 0) := (others => '0');
	 variable acc1    : std_logic_vector(8 downto 0) := (others => '0');
	 variable sum     : std_logic_vector(8 downto 0) := (others => '0');
	 variable ovf     : std_logic := '0'; 
  begin  --  process fsm_proc 
    if ( reset = '1') then  -- Asynchronous reset
      --   output and variable initialisation
      wr_en    <= '0';
      dw       <= ( others => '0');
      addr     <= ( others => '0');
      op_code  <= ( others => '0');
      accu     <= ( others => '0');
      pc       <= ( others => '0');

      state := load_opcode;
    elsif rising_edge( clk) then  -- Synchronous FSM
      state_watch <= state;

      case state is
        when load_opcode =>
			 wr_en   <= '0';
          op_code <= dr(3 downto 0);  -- Load the op-code
          pc      <= pc + one;        -- Increment the program counter
          addr    <= pc + one;        -- Memory address pointed to PC
			 
          -- Op-code determines the next state:
          case dr (3 downto 0) is
            when LDA => state := LDA_1;
				when STA => state := STA_1;
				when ADD => state := ADD_1;
				when JNC => state := JNC_1;
				when JMP => state := JMP_1;

            when others => state := load_opcode;
          end case; -- opcode decoder

        -- Op-code behaviors
        when LDA_1 =>           -- Load accumulator from memory address
          accu    <= dr; 
          pc      <= pc + one;
          addr    <= pc + one;
  
          state := load_opcode;
			 
		  when STA_1 =>
		    dw      <= accu;
			 addr    <= dr;
			 wr_en   <= '1';
			 state := STA_2;
			 
		  when STA_2 =>
			 pc      <= pc + one;
			 addr    <= pc + one;
			 state := load_opcode;		 
			 
		  when ADD_1 =>
		    acc1(accu'range) := accu;
			 addr <= dr;
			 state := ADD_2;
			 
		  when ADD_2 =>
			 state := ADD_3;
			 add1(dr'range) := dr;
			 
		  when ADD_3 =>
			 sum := acc1 + add1;
			 accu <= sum(accu'range);
			 ovf := sum(8);
			 pc      <= pc + one;
			 addr    <= pc + one;
			 state := load_opcode;
			 
		  when JNC_1 =>
		    if ovf = '0' then
			   pc <= dr;
				addr <= dr;
			 else
			   pc   <= pc + one;
				addr <= pc + one;
			 end if;
			 state := load_opcode;
			 
		  when JMP_1 =>
		    pc <= dr;
			 addr <= dr;
			 state := load_opcode;
			 
      end case;  --  state
    end if; -- rising_edge(clk)
  end process fsm_proc;
end fsm;

