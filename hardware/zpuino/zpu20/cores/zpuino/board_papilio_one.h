#ifndef __BOARD_H__
#define __BOARD_H__

#ifndef CLK_FREQ
#define CLK_FREQ 96000000UL
#endif

#if defined(__S3E_250__)
#define SPIOFFSET 0x00042000 /* To be atmel-compatible */
#elif defined (__S3E_500__)
#define SPIOFFSET 0x00046000
#else
#error Undefined board size. Please define __S3E_250__ or __S3E_500__.
#endif

#ifndef BOARD_MEMORYSIZE
#error Undefined board memory size
#endif

#define BOARD_SPI_DIVIDER BIT(SPICP0)

#define IOBASE 0x08000000
#define IO_SLOT_OFFSET_BIT 23


// Wing1 Column A
#define FPGA_PIN_P18 0
#define FPGA_PIN_P23 1
#define FPGA_PIN_P26 2
#define FPGA_PIN_P33 3
#define FPGA_PIN_P35 4
#define FPGA_PIN_P40 5
#define FPGA_PIN_P53 6
#define FPGA_PIN_P57 7
#define FPGA_PIN_P60 8
#define FPGA_PIN_P62 9
#define FPGA_PIN_P65 10
#define FPGA_PIN_P67 11
#define FPGA_PIN_P70 12
#define FPGA_PIN_P79 13
#define FPGA_PIN_P84 14
#define FPGA_PIN_P86 15

//Wing1 Column B
#define FPGA_PIN_P85 16
#define FPGA_PIN_P83 17
#define FPGA_PIN_P78 18
#define FPGA_PIN_P71 19
#define FPGA_PIN_P68 20
#define FPGA_PIN_P66 21
#define FPGA_PIN_P63 22
#define FPGA_PIN_P61 23
#define FPGA_PIN_P58 24
#define FPGA_PIN_P54 25
#define FPGA_PIN_P41 26
#define FPGA_PIN_P36 27
#define FPGA_PIN_P34 28
#define FPGA_PIN_P32 29
#define FPGA_PIN_P25 30
#define FPGA_PIN_P22 31

// Wing2 Column A
#define FPGA_PIN_P91 32
#define FPGA_PIN_P92 33
#define FPGA_PIN_P94 34
#define FPGA_PIN_P95 35
#define FPGA_PIN_P98 36
#define FPGA_PIN_P2  37
#define FPGA_PIN_P3  38
#define FPGA_PIN_P4  39
#define FPGA_PIN_P5  40
#define FPGA_PIN_P9  41
#define FPGA_PIN_P10 42
#define FPGA_PIN_P11 43
#define FPGA_PIN_P12 44
#define FPGA_PIN_P15 45
#define FPGA_PIN_P16 46
#define FPGA_PIN_P17 47

// Other pins
#define FPGA_PIN_P24 48

#define FPGA_PIN_FLASHCS     FPGA_PIN_P24

#define SPI_FLASH_SEL_PIN    FPGA_PIN_FLASHCS

/* WING configuration */

#define WING_AL0 0
#define WING_AL1 1
#define WING_AL2 2
#define WING_AL3 3
#define WING_AL4 4
#define WING_AL5 5
#define WING_AL6 6
#define WING_AL7 7
#define WING_AH0 8
#define WING_AH1 9
#define WING_AH2 10
#define WING_AH3 11
#define WING_AH4 12
#define WING_AH5 13
#define WING_AH6 14
#define WING_AH7 15

#define WING_BL0 16
#define WING_BL1 17
#define WING_BL2 18
#define WING_BL3 19
#define WING_BL4 20
#define WING_BL5 21
#define WING_BL6 22
#define WING_BL7 23
#define WING_BH0 24
#define WING_BH1 25
#define WING_BH2 26
#define WING_BH3 27
#define WING_BH4 28
#define WING_BH5 29
#define WING_BH6 30
#define WING_BH7 31
        
#define WING_CL0 32
#define WING_CL1 33
#define WING_CL2 34
#define WING_CL3 35
#define WING_CL4 36
#define WING_CL5 37
#define WING_CL6 38
#define WING_CL7 39
#define WING_CH0 40
#define WING_CH1 41
#define WING_CH2 42
#define WING_CH3 43
#define WING_CH4 44
#define WING_CH5 45
#define WING_CH6 46
#define WING_CH7 47

//Wing 1 Column A
#define WA0 0
#define WA1 1
#define WA2 2
#define WA3 3
#define WA4 4
#define WA5 5
#define WA6 6
#define WA7 7
#define WA8 8
#define WA9 9
#define WA10 10
#define WA11 11
#define WA12 12
#define WA13 13
#define WA14 14
#define WA15 15

//Wing 1 Column B
#define WB0 16    //This doesn't work for some reason!
#define WB1 17
#define WB2 18
#define WB3 19
#define WB4 20
#define WB5 21
#define WB6 22
#define WB7 23
#define WB8 24
#define WB9 25
#define WB10 26
#define WB11 27
#define WB12 28
#define WB13 29
#define WB14 30
#define WB15 31

//Wing 2 Column C
#define WC0 32
#define WC1 33
#define WC2 34
#define WC3 35
#define WC4 36
#define WC5 37
#define WC6 38
#define WC7 39
#define WC8 40
#define WC9 41
#define WC10 42
#define WC11 43
#define WC12 44
#define WC13 45
#define WC14 46
#define WC15 47

// ******** Define AH/AL syntax
//Wing 1 Column A
#define WAL0 0
#define WAL1 1
#define WAL2 2
#define WAL3 3
#define WAL4 4
#define WAL5 5
#define WAL6 6
#define WAL7 7
#define WAH0 8
#define WAH1 9
#define WAH2 10
#define WAH3 11
#define WAH4 12
#define WAH5 13
#define WAH6 14
#define WAH7 15

//Wing 1 Column B
#define WBL0 16    //This doesn't work for some reason!
#define WBL1 17
#define WBL2 18
#define WBL3 19
#define WBL4 20
#define WBL5 21
#define WBL6 22
#define WBL7 23
#define WBH0 24
#define WBH1 25
#define WBH2 26
#define WBH3 27
#define WBH4 28
#define WBH5 29
#define WBH6 30
#define WBH7 31

//Wing 2 Column C
#define WCL0 32
#define WCL1 33
#define WCL2 34
#define WCL3 35
#define WCL4 36
#define WCL5 37
#define WCL6 38
#define WCL7 39
#define WCH0 40
#define WCH1 41
#define WCH2 42
#define WCH3 43
#define WCH4 44
#define WCH5 45
#define WCH6 46
#define WCH7 47

#define WING_A_0 FPGA_PIN_P18
#define WING_A_1 FPGA_PIN_P23
#define WING_A_2 FPGA_PIN_P26
#define WING_A_3 FPGA_PIN_P33
#define WING_A_4 FPGA_PIN_P35
#define WING_A_5 FPGA_PIN_P40
#define WING_A_6 FPGA_PIN_P53
#define WING_A_7 FPGA_PIN_P57
#define WING_A_8 FPGA_PIN_P60
#define WING_A_9 FPGA_PIN_P62
#define WING_A_10 FPGA_PIN_P65
#define WING_A_11 FPGA_PIN_P67
#define WING_A_12 FPGA_PIN_P70
#define WING_A_13 FPGA_PIN_P79
#define WING_A_14 FPGA_PIN_P84
#define WING_A_15 FPGA_PIN_P86

#define WING_B_0 FPGA_PIN_P85
#define WING_B_1 FPGA_PIN_P83
#define WING_B_2 FPGA_PIN_P78
#define WING_B_3 FPGA_PIN_P71
#define WING_B_4 FPGA_PIN_P68
#define WING_B_5 FPGA_PIN_P66
#define WING_B_6 FPGA_PIN_P63
#define WING_B_7 FPGA_PIN_P61
#define WING_B_8 FPGA_PIN_P58
#define WING_B_9 FPGA_PIN_P54
#define WING_B_10 FPGA_PIN_P41
#define WING_B_11 FPGA_PIN_P36
#define WING_B_12 FPGA_PIN_P34
#define WING_B_13 FPGA_PIN_P32
#define WING_B_14 FPGA_PIN_P25
#define WING_B_15 FPGA_PIN_P22
        
#define WING_C_0 FPGA_PIN_P91
#define WING_C_1 FPGA_PIN_P92
#define WING_C_2 FPGA_PIN_P94
#define WING_C_3 FPGA_PIN_P95
#define WING_C_4 FPGA_PIN_P98
#define WING_C_5 FPGA_PIN_P2
#define WING_C_6 FPGA_PIN_P3
#define WING_C_7 FPGA_PIN_P4
#define WING_C_8 FPGA_PIN_P5
#define WING_C_9 FPGA_PIN_P9
#define WING_C_10 FPGA_PIN_P10
#define WING_C_11 FPGA_PIN_P11
#define WING_C_12 FPGA_PIN_P12
#define WING_C_13 FPGA_PIN_P15
#define WING_C_14 FPGA_PIN_P16
#define WING_C_15 FPGA_PIN_P17

#endif
