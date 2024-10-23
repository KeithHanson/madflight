/*==============================================================================
Generated on: 2024-10-23 18:06:29.203655
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: FISHDRONEF4
Manufacturer ID: LEGA

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_LEGA-FISHDRONEF4.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-LEGA-FISHDRONEF4"
#define HW_MCU "STM32F405"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6500
#define OSD_USE  OSD_USE_MAX7456
#define BB_USE  BB_USE_SDCARD

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW90
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PC13
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PA4
#define HW_PIN_IMU_EXTI  PC4

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   -1
#define HW_PIN_I2C_SCL   -1

//Outputs:
#define HW_OUT_COUNT     4
#define HW_PIN_OUT_LIST  {PB8,PA2,PA15,PA3}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL3)
#define HW_PIN_GPS_RX    PB11
#define HW_PIN_GPS_TX    PB10
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC0
#define HW_PIN_BAT_I     -1

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 3
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {3,PB10,PB11,-1}, {6,PC6,PC7,PC8} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PC2,PC3}, {3,PC10,PC11,PC12} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 0
#define HW_PIN_I2C {  } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PC15
#define HW_PIN_PPM PB0
#define HW_PIN_LED_STRIP PA0
//#define HW_PIN_LED PC13
#define HW_PIN_LED_2 PC14
#define HW_PIN_ESCSERIAL PB0
#define HW_PIN_ADC_BATT PC0
#define HW_PIN_ADC_RSSI PC1
#define HW_PIN_SDCARD_CS PB9
#define HW_PIN_SDCARD_DETECT PB7
#define HW_PIN_FLASH_CS PD2
#define HW_PIN_OSD_CS PB12
#define HW_PIN_GYRO_EXTI PC4
#define HW_PIN_GYRO_CS PA4
#define HW_PIN_USB_DETECT PA8
#define HW_PIN_VTX_CS PB3
#define HW_PIN_VTX_DATA PB5
#define HW_PIN_VTX_CLK PB4

//set statements
#define HW_SET_BLACKBOX_DEVICE SDCARD
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_SDCARD_DETECT_INVERTED ON
#define HW_SET_SDCARD_MODE SPI
#define HW_SET_SDCARD_SPI_BUS 3
#define HW_SET_SYSTEM_HSE_MHZ 8
#define HW_SET_MAX7456_SPI_BUS 2
#define HW_SET_FLASH_SPI_BUS 3
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW90
#define HW_SET_GYRO_1_ALIGN_YAW 900


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.2.0 Mar  5 2020 / 22:29:55 (c29b125a59) MSP API: 1.43

#define USE_ACC
#define USE_ACC_SPI_MPU6500
#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define USE_MAX7456
#define USE_SDCARD

board_name FISHDRONEF4
manufacturer_id LEGA

# resources
resource BEEPER 1 C15
resource MOTOR 1 B08
resource MOTOR 2 A02
resource MOTOR 3 A15
resource MOTOR 4 A03
resource PPM 1 B00
resource LED_STRIP 1 A00
resource SERIAL_TX 1 A09
resource SERIAL_TX 3 B10
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 3 B11
resource SERIAL_RX 6 C07
resource INVERTER 6 C08
resource LED 1 C13
resource LED 2 C14
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 C10
resource SPI_MISO 1 A06
resource SPI_MISO 2 C02
resource SPI_MISO 3 C11
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 C03
resource SPI_MOSI 3 C12
resource ESCSERIAL 1 B00
resource ADC_BATT 1 C00
resource ADC_RSSI 1 C01
resource SDCARD_CS 1 B09
resource SDCARD_DETECT 1 B07
resource FLASH_CS 1 D02
resource OSD_CS 1 B12
resource GYRO_EXTI 1 C04
resource GYRO_CS 1 A04
resource USB_DETECT 1 A08
resource VTX_CS 1 B03
resource VTX_DATA 1 B05
resource VTX_CLK 1 B04

# timer
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B08 AF2
# pin B08: TIM4 CH3 (AF2)
timer A02 AF1
# pin A02: TIM2 CH3 (AF1)
timer A15 AF1
# pin A15: TIM2 CH1 (AF1)
timer A03 AF1
# pin A03: TIM2 CH4 (AF1)
timer A00 AF2
# pin A00: TIM5 CH1 (AF2)

# dma
dma SPI_TX 3 0
# SPI_TX 3: DMA1 Stream 5 Channel 0
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B08 0
# pin B08: DMA1 Stream 7 Channel 2
dma pin A02 0
# pin A02: DMA1 Stream 1 Channel 3
dma pin A15 0
# pin A15: DMA1 Stream 5 Channel 3
dma pin A03 1
# pin A03: DMA1 Stream 6 Channel 3
dma pin A00 0
# pin A00: DMA1 Stream 2 Channel 6

# feature
feature OSD

# master
set blackbox_device = SDCARD
set beeper_inversion = ON
set beeper_od = OFF
set sdcard_detect_inverted = ON
set sdcard_mode = SPI
set sdcard_spi_bus = 3
set system_hse_mhz = 8
set max7456_spi_bus = 2
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW90
set gyro_1_align_yaw = 900

*/
