/*
 * Copyright (c) 2018 Actions (Zhuhai) Technology Co., Ltd
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#define CONFIG_UART_1 1

#define BOARD_PIN_CONFIG	\
	{4, 4 | GPIO_CTL_SMIT | GPIO_CTL_PADDRV_LEVEL(3)},\
	{0, 13},\
	{1, 13},\
	{2, 13},\
	{3, 13},\
	{18, 2},

#define CONFIG_IRC_TX_PIN 5
#define CONFIG_IRC_RX_PIN 5
#define CONFIG_USE_PWM_LED  1

/* all managed led */
#define LED_PIN_CONFIG	\
			{18, 3, 0}, \
/* app led pin */
#define LED_LPOWER_PIN			18
#define LED_PAIR_PIN				18
#define LED_BTN_PIN					18
#define LED_IR_BTN_PIN			18

/* key reg val mapping to key val */
#define MXKEYPAD_MASK 0x0f	
	
#define MXKEYPAD_MAPS \
	{0x00000102, 0x00000000, 0x00000000, 	KEY_1}, \
	{0x00000000, 0x00000000, 0x00000400,	KEY_2}, \
	{0x00000000, 0x00000000, 0x00000200,  KEY_3}, \
	{0x00000000, 0x00000000, 0x00000800,  KEY_4}, \
	{0x00010004, 0x00000000, 0x00000000,  KEY_5}, \
	{0x04080000, 0x00000000, 0x00000000,  KEY_6}, \
	{0x02000800, 0x00000000, 0x00000000,  KEY_7}, \
	{0x00000000, 0x00000000, 0x00000100,  KEY_8}, \
	{0x00000000, 0x00000000, 0x00000001,  KEY_9}, \
	{0x00020400, 0x00000000, 0x00000000,  KEY_10}, \
	{0x00000000, 0x00000000, 0x00000008,  KEY_11}, \
	{0x00000000, 0x00000000, 0x00000004,  KEY_12}, \
	{0x01000008, 0x00000000, 0x00000000,  KEY_13}, \
	{0x01020408, 0x00000000, 0x00000000,  KEY_14}, \
	{0x00000000, 0x00000000, 0x00000002,  KEY_15}, \
	{0x0509000c, 0x00000000, 0x00000000,  KEY_16}, \
	{0x060a0c00, 0x00000000, 0x00000000,  KEY_17}, \
	{0x00010102, 0x00000000, 0x00000000,  KEY_18}, \
	{0x04080102, 0x00000000, 0x00000500,  KEY_19}, \

#define IR_KB_POWER                0x18
#define IR_KB_FOCAL_INC            0x19
#define IR_KB_FOCAL_DEC            0x00
#define IR_KB_MUTE                 0x5B
#define IR_KB_MENU                 0x4e
#define IR_KB_UP                   0x46
#define IR_KB_DOWN                 0x16
#define IR_KB_LEFT                 0x47
#define IR_KB_RIGHT                0x15
#define IR_KB_ENTER                0x55
#define IR_KB_ACBACK               0x40
#define IR_KB_ACHOME               0x4f
#define IR_KB_VOL_INC            	 0x14
#define IR_KB_VOL_DEC            	 0x10
#define IR_KB_SETTING              0x0D
#define IR_KB_SUOYI                0xf5
#define	IR_KB_HELP                 0x45
#define IR_KB_VOIC_SEARCH          0x74
#define IR_CUSTOMER_CODE           0xff00  	
	
	/* key val mapping to standard key */
#define KEY_MAPS \
	{KEY_1, 				REMOTE_KEY_RIGHT,							IR_KB_RIGHT},\
	{KEY_2, 				REMOTE_KEY_OK,								IR_KB_ENTER},\
	{KEY_3,  				REMOTE_KEY_DOWN,							IR_KB_DOWN},\
	{KEY_4,  				REMOTE_KEY_UP,								IR_KB_UP},\
	{KEY_5,  				REMOTE_KEY_MUTE,							IR_KB_MUTE},\
	{KEY_6,  				REMOTE_KEY_LEFT,							IR_KB_LEFT},\
	{KEY_7,  				REMOTE_KEY_POWER,							IR_KB_POWER},\
	{KEY_8,  				REMOTE_KEY_BACK,							IR_KB_ACBACK},\
	{KEY_9,  				REMOTE_KEY_VOL_DEC,						IR_KB_VOL_DEC},\
	{KEY_10,  			REMOTE_KEY_HOME,							IR_KB_ACHOME},\
	{KEY_11,  			REMOTE_KEY_VOICE_COMMAND,			KEY_RESERVED},\
	{KEY_12,  			REMOTE_KEY_VOL_INC,						IR_KB_VOL_INC},\
	{KEY_13,  			REMOTE_KEY_MENU,							IR_KB_MENU},\
	{KEY_14,  			REMOTE_COMB_KEY_OK_BACK,			KEY_RESERVED},\
	{KEY_15,        REMOTE_KEY_HELP,              IR_KB_HELP},\
	{KEY_16,        REMOTE_COMB_KEY_TEST_TWO,     KEY_RESERVED},\
	{KEY_17,        REMOTE_COMB_KEY_TEST_THREE,   KEY_RESERVED},\
	{KEY_18,        REMOTE_COMB_KEY_TEST_FOUR,    KEY_RESERVED},\
	{KEY_19,        REMOTE_COMB_KEY_HCI_MODE,     KEY_RESERVED},\
	
	
/* KEY_19 is HOME + BACK */
/* KEY_20 is UP + BACK */
/* KEY_21 is DOWN + BACK */
/* KEY_22 is LEFT + BACK */
/* KEY_23 is RIGHT + BACK */
/* KEY_24 is HOME + VOICE */

#define CUSTOMER_CODE IR_CUSTOMER_CODE

#undef CONFIG_BT_DEVICE_NAME
#define CONFIG_BT_DEVICE_NAME "BLE_RMC"

#undef CONFIG_UART_CONSOLE_ON_DEV_NAME
#define CONFIG_UART_CONSOLE_ON_DEV_NAME "UART_1"

/* Manufacturer Name */
#define CONFIG_DIS_MANUFACTURER_NAME       "PT corp."

/* Model Number String */
#define CONFIG_DIS_MODEL                   "ATB110x"

/* PNP ID */
#define CONFIG_DIS_PNP_COMPANY_ID_TYPE    0x02
#define CONFIG_DIS_PNP_VENDOR_ID          0x54, 0x2B
#define CONFIG_DIS_PNP_PRODUCT_ID         0x00, 0x16
#define CONFIG_DIS_PNP_PRODUCT_VERSION    0x00, 0x00
