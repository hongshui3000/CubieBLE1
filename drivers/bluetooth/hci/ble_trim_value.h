
#define USE_13_5DB_TRIM 1

#if defined(USE_13_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
		0x55, 0x02, 0x99, 0x8D, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
		0x08, 0x09, 0x09, 0xFD, 0x08, 0x0B, 0x09, 0x01, 0xF9, 0x09, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
		0x21, 0x60, 0x00, 0xF7, 0x02, 0x11, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
		0x0A, 0x1D, 0x11, 0x0F, 0x94, 0xE6, 0x00, 0x00, 0x98, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
		0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
		0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x09, 0x09, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
		0x3A, 0x00, 0x00, 0x00, 0x04, 0x0C, 0xB4, 0x0B, 0x0D, 0x0B, 0xB4, 0x0B, 0x18, 0x0A, 0xB4, 0x0B,
		0x21, 0x0A, 0xB4, 0x0B, 0x27, 0x09, 0xB4, 0x0B,         
};
#elif defined(USE_05_0DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{ 
  0x21, 0x02, 0xA9, 0x8C, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
  0x09, 0x0A, 0x0A, 0xFC, 0x0B, 0x0B, 0x0D, 0x01, 0x00, 0x0C, 0x01, 0x00, 0x21, 0x02, 0x00, 0x00
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{ 
  0x05, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
  0x0A, 0x1D, 0x12, 0x0F, 0x92, 0xE6, 0x00, 0x00, 0x9D, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32
};
uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
  0xCF, 0x55, 0x0F, 0x18, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
  0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
  0x3A, 0x00, 0x00, 0x00, 0x04, 0x0C, 0xD3, 0x0B, 0x0D, 0x0B, 0xD3, 0x0B, 0x18, 0x0A, 0xD3, 0x0B,
  0x21, 0x0A, 0xD3, 0x0B, 0x27, 0x09, 0xD3, 0x0B 
};	

#elif defined(USE_08_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{ 
  0x55, 0x02, 0xAA, 0x8E, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x6B, 0x04, 0x16, 0x00,
  0x07, 0x0A, 0x0A, 0xFD, 0x0B, 0x0C, 0x0E, 0x01, 0x02, 0xEF, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
  0x08, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
  0x0A, 0x1D, 0x10, 0x0F, 0x93, 0xE6, 0x00, 0x00, 0x98, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32
};
uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
  0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
  0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
  0x3A, 0x00, 0x00, 0x00, 0x04, 0x0A, 0xC4, 0x0C, 0x0D, 0x09, 0xC4, 0x0C, 0x18, 0x08, 0xC4, 0x0C,
  0x21, 0x08, 0xC4, 0x0C, 0x27, 0x07, 0xC4, 0x0C,
};	
#elif defined(USE_08_0DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{ 
  0x55, 0x02, 0xAA, 0x8E, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x75, 0x04, 0x1C, 0x00,
  0x09, 0x0A, 0x0A, 0xFD, 0x0B, 0x0C, 0x0E, 0x01, 0x00, 0xEF, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
  0x08, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
  0x0A, 0x1D, 0x10, 0x0F, 0x93, 0xE6, 0x00, 0x00, 0x98, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32 
};
uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
  0xCF, 0x55, 0x0F, 0x18, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
  0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
  0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xC3, 0x0C, 0x0D, 0x0A, 0xC3, 0x0C, 0x18, 0x09, 0xC3, 0x0C,
  0x21, 0x09, 0xC3, 0x0C, 0x27, 0x08, 0xC3, 0x0C,
};	

#elif defined(USE_09_0DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{ 
  0x51, 0x02, 0x9A, 0x8B, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
  0x08, 0x0A, 0x0A, 0xFD, 0x09, 0x0C, 0x0A, 0x01, 0x14, 0xFA, 0x01, 0x00, 0x51, 0x02, 0x00, 0x00
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
  0x09, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
  0x0A, 0x1D, 0x13, 0x0F, 0x85, 0xE6, 0x00, 0x00, 0xAF, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32
};
uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
  0xCF, 0x55, 0x0F, 0x18, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
  0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
  0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xB4, 0x0C, 0x0D, 0x0A, 0xB4, 0x0C, 0x18, 0x09, 0xB4, 0x0C,
  0x21, 0x09, 0xB4, 0x0C, 0x27, 0x08, 0xB4, 0x0C
};	

#elif defined(USE_11_0DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{ 
  0x55, 0x02, 0x9A, 0x8E, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x96, 0x04, 0x22, 0x00,
  0x07, 0x0A, 0x0A, 0xFD, 0x10, 0x0C, 0x0E, 0x01, 0x15, 0x12, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
  0x11, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
  0x0A, 0x1D, 0x13, 0x0F, 0x93, 0xE6, 0x00, 0x00, 0x9E, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
  0xCF, 0x55, 0x0F, 0x18, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
  0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
  0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xC3, 0x0C, 0x0D, 0x0A, 0xC3, 0x0C, 0x18, 0x09, 0xC3, 0x0C,
  0x21, 0x09, 0xC3, 0x0C, 0x27, 0x08, 0xC3, 0x0C
};	

#elif defined(USE_21_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
	0x51, 0x02, 0xAA, 0x8D, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
	0x07, 0x0A, 0x0A, 0xFC, 0x0D, 0x0D, 0x0B, 0x01, 0xF6, 0xEF, 0x01, 0x00, 0x51, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
	0x21, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
	0x0A, 0x1D, 0x10, 0x0F, 0x91, 0xE6, 0x00, 0x00, 0x96, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};
uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
	0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
	0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
	0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xB4, 0x0D, 0x0D, 0x0A, 0xB4, 0x0D, 0x18, 0x09, 0xB4, 0x0D,
	0x21, 0x09, 0xB4, 0x0D, 0x27, 0x08, 0xB4, 0x0D,
};	
#elif defined(USE_22_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
	0x59, 0x02, 0xAA, 0x8D, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
	0x06, 0x09, 0x09, 0xFD, 0x08, 0x0C, 0x08, 0x01, 0xEE, 0xF6, 0x01, 0x00, 0x59, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
	0x22, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
	0x0A, 0x1D, 0x11, 0x0F, 0x92, 0xE6, 0x00, 0x00, 0x95, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
	0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
	0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x09, 0x09, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
	0x3A, 0x00, 0x00, 0x00, 0x04, 0x0C, 0xA5, 0x0C, 0x0D, 0x0B, 0xA5, 0x0C, 0x18, 0x0A, 0xA5, 0x0C,
	0x21, 0x0A, 0xA5, 0x0C, 0x27, 0x09, 0xA5, 0x0C, 
};
#elif defined(USE_18_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
0x55, 0x02, 0xBA, 0x8C, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x5C, 0x04, 0x19, 0x00,
0x06, 0x0A, 0x0A, 0xFD, 0x0C, 0x0A, 0x0C, 0x01, 0x0C, 0x00, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x18, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x0F, 0x0F, 0x92, 0xE6, 0x00, 0x00, 0x95, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xC4, 0x0A, 0x0D, 0x0A, 0xC4, 0x0A, 0x18, 0x09, 0xC4, 0x0A,
0x21, 0x09, 0xC4, 0x0A, 0x27, 0x08, 0xC4, 0x0A, 
};
#elif defined(USE_20_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
0x51, 0x02, 0xAA, 0x8C, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
0x07, 0x0A, 0x0A, 0xFC, 0x08, 0x00, 0x0E, 0x01, 0xF6, 0x00, 0x01, 0x00, 0x51, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x20, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x11, 0x0F, 0x92, 0xE6, 0x00, 0x00, 0x95, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x02, 0xA5, 0x00, 0x0D, 0x01, 0xA5, 0x00, 0x18, 0x00, 0xA5, 0x00,
0x21, 0x00, 0xA5, 0x00, 0x27, 0xFF, 0xA5, 0x00,    
};
#elif defined(USE_15_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
0x55, 0x02, 0xAA, 0x8A, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x83, 0x04, 0x22, 0x00,
0x07, 0x0A, 0x0A, 0xFC, 0x0D, 0x0C, 0x0E, 0x01, 0x17, 0x06, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x15, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x11, 0x0F, 0x91, 0xE6, 0x00, 0x00, 0x95, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x0A, 0xB5, 0x0C, 0x0D, 0x09, 0xB5, 0x0C, 0x18, 0x08, 0xB5, 0x0C,
0x21, 0x08, 0xB5, 0x0C, 0x27, 0x07, 0xB5, 0x0C,    
};
#elif defined(USE_24_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
0x51, 0x02, 0xAA, 0x8D, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x55, 0x04, 0x21, 0x00,
0x04, 0x0A, 0x0A, 0xFD, 0x0C, 0x0C, 0x0E, 0x01, 0xED, 0xF7, 0x01, 0x00, 0x51, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x24, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x12, 0x0F, 0x93, 0xE6, 0x00, 0x00, 0x96, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xB6, 0x0C, 0x0D, 0x0A, 0xB6, 0x0C, 0x18, 0x09, 0xB6, 0x0C,
0x21, 0x09, 0xB6, 0x0C, 0x27, 0x08, 0xB6, 0x0C,   
};
#elif defined(USE_27_5DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
0x55, 0x02, 0xAA, 0x8D, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
0x04, 0x0A, 0x0A, 0xFC, 0x09, 0x0D, 0x0E, 0x01, 0xF9, 0x12, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x27, 0x05, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x10, 0x0F, 0x92, 0xE6, 0x00, 0x00, 0x97, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xA6, 0x0D, 0x0D, 0x0A, 0xA6, 0x0D, 0x18, 0x09, 0xA6, 0x0D,
0x21, 0x09, 0xA6, 0x0D, 0x27, 0x08, 0xA6, 0x0D,   
};
#elif defined(USE_17_0DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
0x55, 0x02, 0x9A, 0x90, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
0x08, 0x0A, 0x0A, 0xFD, 0x09, 0x0C, 0x0D, 0x01, 0xF2, 0x00, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x17, 0x00, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x12, 0x0F, 0x93, 0xE6, 0x00, 0x00, 0x98, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x55, 0x0F, 0x18, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xC3, 0x0C, 0x0D, 0x0A, 0xC3, 0x0C, 0x18, 0x09, 0xC3, 0x0C,
0x21, 0x09, 0xC3, 0x0C, 0x27, 0x08, 0xC3, 0x0C, 
};
#elif defined(USE_19_0DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
0x51, 0x02, 0xA9, 0x8E, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x66, 0x04, 0x46, 0x00,
0x08, 0x0A, 0x0A, 0xFC, 0x0B, 0x0C, 0x0B, 0x01, 0x09, 0x00, 0x01, 0x00, 0x51, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x19, 0x00, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x10, 0x0F, 0x92, 0xE6, 0x00, 0x00, 0x94, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x55, 0x0F, 0x18, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x0A, 0xB4, 0x0C, 0x0D, 0x09, 0xB4, 0x0C, 0x18, 0x08, 0xB4, 0x0C,
0x21, 0x08, 0xB4, 0x0C, 0x27, 0x07, 0xB4, 0x0C,
};
#elif defined(USE_28_0DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{ 
0x51, 0x02, 0x9A, 0x8F, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
0x09, 0x10, 0x10, 0xFC, 0x10, 0x0D, 0x08, 0x01, 0x06, 0x00, 0x01, 0x00, 0x51, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x28, 0x00, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x3E, 0x0F, 0xA3, 0xE6, 0x00, 0x00, 0xA5, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x55, 0x0F, 0x18, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x10, 0x10, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x0B, 0xD3, 0x0D, 0x0D, 0x0A, 0xD3, 0x0D, 0x18, 0x09, 0xD3, 0x0D,
0x21, 0x09, 0xD3, 0x0D, 0x27, 0x08, 0xD3, 0x0D, 
};
#elif defined(USE_31_0DB_TRIM)
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
0x51, 0x02, 0xA9, 0x8D, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x6B, 0x04, 0x31, 0x00,
0x08, 0x0A, 0x0A, 0xFD, 0x0B, 0x0E, 0x11, 0x01, 0xF1, 0x05, 0x01, 0x00, 0x51, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
0x31, 0x00, 0xDB, 0x00, 0x00, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
0x0A, 0x1D, 0x10, 0x0F, 0x94, 0xE6, 0x00, 0x00, 0x97, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
0xCF, 0x55, 0x0F, 0x18, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x0A, 0x0A, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
0x3A, 0x00, 0x00, 0x00, 0x04, 0x0A, 0xB4, 0x0E, 0x0D, 0x09, 0xB4, 0x0E, 0x18, 0x08, 0xB4, 0x0E,
0x21, 0x08, 0xB4, 0x0E, 0x27, 0x07, 0xB4, 0x0E, 
};
#else
u8_t ic_trim[IC_TRIM_DATA_LEN]=
{
		0x55, 0x02, 0x99, 0x8D, 0x18, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
		0x08, 0x09, 0x09, 0xFD, 0x08, 0x0B, 0x09, 0x01, 0xF9, 0x09, 0x01, 0x00, 0x55, 0x02, 0x00, 0x00,
};

uint8_t board_trim[BOARD_TRIM_DATA_LEN]=
{
		0x21, 0x60, 0x00, 0xF7, 0x02, 0x00, 0x01, 0x00, 0x65, 0x28, 0x40, 0x04, 0x14, 0x00, 0x07, 0x00,
		0x0A, 0x1D, 0x11, 0x0F, 0x94, 0xE6, 0x00, 0x00, 0x98, 0x4A, 0x00, 0x00, 0x00, 0x03, 0x03, 0x32,
};

uint8_t tx_trim[TRANSMIT_TRIM_DATA_LEN]=
{
		0xCF, 0x4F, 0x0F, 0x19, 0x41, 0x86, 0xCA, 0xFE, 0xEF, 0xAC, 0x68, 0x14, 0x0F, 0x0F, 0x0F, 0x0F,
		0x0F, 0x0F, 0x0F, 0x0F, 0x00, 0xFD, 0xFA, 0xF7, 0xF4, 0xF1, 0xEE, 0xEB, 0x05, 0x09, 0x09, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
		0x3A, 0x00, 0x00, 0x00, 0x04, 0x0C, 0xB4, 0x0B, 0x0D, 0x0B, 0xB4, 0x0B, 0x18, 0x0A, 0xB4, 0x0B,
		0x21, 0x0A, 0xB4, 0x0B, 0x27, 0x09, 0xB4, 0x0B,         
};
#endif


