/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'Nios2' in SOPC Builder design 'nios_system'
 * SOPC Builder design path: C:/Altera/Boots/nios_system.sopcinfo
 *
 * Generated: Mon Mar 02 20:55:04 EST 2015
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x0a000020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1d
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x08000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "Nios2"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x08000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x0a000020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x1d
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x08000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x08000000


/*
 * Custom instruction macros
 *
 */

#define ALT_CI_NIOS2_FLOATING_POINT(n,A,B) __builtin_custom_inii(ALT_CI_NIOS2_FLOATING_POINT_N+(n&ALT_CI_NIOS2_FLOATING_POINT_N_MASK),(A),(B))
#define ALT_CI_NIOS2_FLOATING_POINT_N 0xfc
#define ALT_CI_NIOS2_FLOATING_POINT_N_MASK ((1<<2)-1)


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_NIOS_CUSTOM_INSTR_FLOATING_POINT
#define __ALTERA_UP_AVALON_PARALLEL_PORT


/*
 * Dip_Switches configuration
 *
 */

#define ALT_MODULE_CLASS_Dip_Switches altera_up_avalon_parallel_port
#define DIP_SWITCHES_BASE 0x10000040
#define DIP_SWITCHES_IRQ -1
#define DIP_SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DIP_SWITCHES_NAME "/dev/Dip_Switches"
#define DIP_SWITCHES_SPAN 16
#define DIP_SWITCHES_TYPE "altera_up_avalon_parallel_port"


/*
 * Expansion_JP1 configuration
 *
 */

#define ALT_MODULE_CLASS_Expansion_JP1 altera_up_avalon_parallel_port
#define EXPANSION_JP1_BASE 0x10000060
#define EXPANSION_JP1_IRQ 11
#define EXPANSION_JP1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EXPANSION_JP1_NAME "/dev/Expansion_JP1"
#define EXPANSION_JP1_SPAN 16
#define EXPANSION_JP1_TYPE "altera_up_avalon_parallel_port"


/*
 * Expansion_JP2 configuration
 *
 */

#define ALT_MODULE_CLASS_Expansion_JP2 altera_up_avalon_parallel_port
#define EXPANSION_JP2_BASE 0x10000070
#define EXPANSION_JP2_IRQ 12
#define EXPANSION_JP2_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EXPANSION_JP2_NAME "/dev/Expansion_JP2"
#define EXPANSION_JP2_SPAN 16
#define EXPANSION_JP2_TYPE "altera_up_avalon_parallel_port"


/*
 * Expansion_JP3 configuration
 *
 */

#define ALT_MODULE_CLASS_Expansion_JP3 altera_up_avalon_parallel_port
#define EXPANSION_JP3_BASE 0x10000080
#define EXPANSION_JP3_IRQ 13
#define EXPANSION_JP3_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EXPANSION_JP3_NAME "/dev/Expansion_JP3"
#define EXPANSION_JP3_SPAN 16
#define EXPANSION_JP3_TYPE "altera_up_avalon_parallel_port"


/*
 * Expansion_JP3_In configuration
 *
 */

#define ALT_MODULE_CLASS_Expansion_JP3_In altera_up_avalon_parallel_port
#define EXPANSION_JP3_IN_BASE 0x10000090
#define EXPANSION_JP3_IN_IRQ 14
#define EXPANSION_JP3_IN_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EXPANSION_JP3_IN_NAME "/dev/Expansion_JP3_In"
#define EXPANSION_JP3_IN_SPAN 16
#define EXPANSION_JP3_IN_TYPE "altera_up_avalon_parallel_port"


/*
 * Green_LEDs configuration
 *
 */

#define ALT_MODULE_CLASS_Green_LEDs altera_up_avalon_parallel_port
#define GREEN_LEDS_BASE 0x10000010
#define GREEN_LEDS_IRQ -1
#define GREEN_LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define GREEN_LEDS_NAME "/dev/Green_LEDs"
#define GREEN_LEDS_SPAN 16
#define GREEN_LEDS_TYPE "altera_up_avalon_parallel_port"


/*
 * Interval_Timer configuration
 *
 */

#define ALT_MODULE_CLASS_Interval_Timer altera_avalon_timer
#define INTERVAL_TIMER_ALWAYS_RUN 0
#define INTERVAL_TIMER_BASE 0x10002000
#define INTERVAL_TIMER_COUNTER_SIZE 32
#define INTERVAL_TIMER_FIXED_PERIOD 0
#define INTERVAL_TIMER_FREQ 50000000
#define INTERVAL_TIMER_IRQ 0
#define INTERVAL_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define INTERVAL_TIMER_LOAD_VALUE 6249999
#define INTERVAL_TIMER_MULT 0.001
#define INTERVAL_TIMER_NAME "/dev/Interval_Timer"
#define INTERVAL_TIMER_PERIOD 125.0
#define INTERVAL_TIMER_PERIOD_UNITS "ms"
#define INTERVAL_TIMER_RESET_OUTPUT 0
#define INTERVAL_TIMER_SNAPSHOT 1
#define INTERVAL_TIMER_SPAN 32
#define INTERVAL_TIMER_TICKS_PER_SEC 8
#define INTERVAL_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define INTERVAL_TIMER_TYPE "altera_avalon_timer"


/*
 * JTAG_UART configuration
 *
 */

#define ALT_MODULE_CLASS_JTAG_UART altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x10001000
#define JTAG_UART_IRQ 8
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/JTAG_UART"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * Onchip_SRAM configuration
 *
 */

#define ALT_MODULE_CLASS_Onchip_SRAM altera_avalon_onchip_memory2
#define ONCHIP_SRAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_SRAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_SRAM_BASE 0x8000000
#define ONCHIP_SRAM_CONTENTS_INFO ""
#define ONCHIP_SRAM_DUAL_PORT 1
#define ONCHIP_SRAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_SRAM_INIT_CONTENTS_FILE "boot_code"
#define ONCHIP_SRAM_INIT_MEM_CONTENT 1
#define ONCHIP_SRAM_INSTANCE_ID "NONE"
#define ONCHIP_SRAM_IRQ -1
#define ONCHIP_SRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_SRAM_NAME "/dev/Onchip_SRAM"
#define ONCHIP_SRAM_NON_DEFAULT_INIT_FILE_ENABLED 1
#define ONCHIP_SRAM_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_SRAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_SRAM_SINGLE_CLOCK_OP 0
#define ONCHIP_SRAM_SIZE_MULTIPLE 1
#define ONCHIP_SRAM_SIZE_VALUE 8192
#define ONCHIP_SRAM_SPAN 8192
#define ONCHIP_SRAM_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_SRAM_WRITABLE 1


/*
 * Onchip_SRAM_2 configuration
 *
 */

#define ALT_MODULE_CLASS_Onchip_SRAM_2 altera_avalon_onchip_memory2
#define ONCHIP_SRAM_2_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_SRAM_2_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_SRAM_2_BASE 0x9000000
#define ONCHIP_SRAM_2_CONTENTS_INFO ""
#define ONCHIP_SRAM_2_DUAL_PORT 1
#define ONCHIP_SRAM_2_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_SRAM_2_INIT_CONTENTS_FILE "nios_system_Onchip_SRAM_2"
#define ONCHIP_SRAM_2_INIT_MEM_CONTENT 1
#define ONCHIP_SRAM_2_INSTANCE_ID "NONE"
#define ONCHIP_SRAM_2_IRQ -1
#define ONCHIP_SRAM_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_SRAM_2_NAME "/dev/Onchip_SRAM_2"
#define ONCHIP_SRAM_2_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_SRAM_2_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_SRAM_2_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_SRAM_2_SINGLE_CLOCK_OP 1
#define ONCHIP_SRAM_2_SIZE_MULTIPLE 1
#define ONCHIP_SRAM_2_SIZE_VALUE 8192
#define ONCHIP_SRAM_2_SPAN 8192
#define ONCHIP_SRAM_2_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_SRAM_2_WRITABLE 1


/*
 * Pushbuttons configuration
 *
 */

#define ALT_MODULE_CLASS_Pushbuttons altera_up_avalon_parallel_port
#define PUSHBUTTONS_BASE 0x10000050
#define PUSHBUTTONS_IRQ 1
#define PUSHBUTTONS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PUSHBUTTONS_NAME "/dev/Pushbuttons"
#define PUSHBUTTONS_SPAN 16
#define PUSHBUTTONS_TYPE "altera_up_avalon_parallel_port"


/*
 * SDRAM configuration
 *
 */

#define ALT_MODULE_CLASS_SDRAM altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x0
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/SDRAM"
#define SDRAM_POWERUP_DELAY 100.0
#define SDRAM_REFRESH_PERIOD 15.625
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x18
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 9
#define SDRAM_SDRAM_DATA_WIDTH 16
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 1
#define SDRAM_SPAN 33554432
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.5
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 20.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 20.0
#define SDRAM_T_WR 14.0


/*
 * SysID configuration
 *
 */

#define ALT_MODULE_CLASS_SysID altera_avalon_sysid_qsys
#define SYSID_BASE 0x10002020
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/SysID"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1425347263
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAG_UART"
#define ALT_STDERR_BASE 0x10001000
#define ALT_STDERR_DEV JTAG_UART
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JTAG_UART"
#define ALT_STDIN_BASE 0x10001000
#define ALT_STDIN_DEV JTAG_UART
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JTAG_UART"
#define ALT_STDOUT_BASE 0x10001000
#define ALT_STDOUT_DEV JTAG_UART
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios_system"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK INTERVAL_TIMER
#define ALT_TIMESTAMP_CLK none

#endif /* __SYSTEM_H_ */
