/* SPDX-License-Identifier: Apache-2.0 */

#define DT_UART_NS16550_PORT_0_BAUD_RATE	DT_NS16550_F0008000_CURRENT_SPEED

#define DT_UART_NS16550_PORT_0_NAME		DT_NS16550_F0008000_LABEL

#define _RAM_ADDR				CONFIG_SRAM_BASE_ADDRESS

#define _RAM_SIZE				(CONFIG_SRAM_SIZE * 1024)

#define _ROM_ADDR				CONFIG_FLASH_BASE_ADDRESS

#define _ROM_SIZE				(CONFIG_FLASH_SIZE *1024)

#define DT_I2C_0_NAME				DT_NIOS2_I2C_100200_LABEL
#define DT_I2C_0_BASE_ADDRESS			DT_NIOS2_I2C_100200_BASE_ADDRESS
#define DT_I2C_0_BITRATE			DT_NIOS2_I2C_100200_CLOCK_FREQUENCY