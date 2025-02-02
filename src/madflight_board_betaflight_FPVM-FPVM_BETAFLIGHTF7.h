/*==============================================================================
Generated on: 2024-10-23 18:06:29.087918
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: FPVM_BETAFLIGHTF7
Manufacturer ID: FPVM

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_FPVM-FPVM_BETAFLIGHTF7.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-FPVM-FPVM_BETAFLIGHTF7"
#define HW_MCU "STM32F745"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6000
#define IMU_USE  IMU_USE_SPI_MPU6500
#define OSD_USE  OSD_USE_MAX7456
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW90
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PE0
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PA4
#define HW_PIN_IMU_EXTI  PD0

//BARO/MAG I2C: (I2C2)
#define HW_PIN_I2C_SDA   -1
#define HW_PIN_I2C_SCL   -1

//Outputs:
#define HW_OUT_COUNT     4
#define HW_PIN_OUT_LIST  {PB0,PB1,PE9,PE11}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL2)
#define HW_PIN_GPS_RX    PA3
#define HW_PIN_GPS_TX    PA2
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC3
#define HW_PIN_BAT_I     PC2

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 4
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {2,PA2,PA3,-1}, {3,PB10,PB11,-1}, {6,PC6,PC7,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 4
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PC10,PC11,PC12}, {4,PE2,PE5,PE6} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 0
#define HW_PIN_I2C {  } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PD15
#define HW_PIN_PPM PA3
#define HW_PIN_SONAR_TRIGGER PB10
#define HW_PIN_SONAR_ECHO PB11
#define HW_PIN_LED_STRIP PD12
//#define HW_PIN_LED PE0
#define HW_PIN_CAMERA_CONTROL PC8
#define HW_PIN_ADC_BATT PC3
#define HW_PIN_ADC_RSSI PC5
#define HW_PIN_ADC_CURR PC2
#define HW_PIN_BARO_CS PA1
#define HW_PIN_FLASH_CS PE4
#define HW_PIN_OSD_CS PB12
#define HW_PIN_GYRO_EXTI PD0
#define HW_PIN_GYRO_EXTI_2 PE8
#define HW_PIN_GYRO_CS PA4
#define HW_PIN_GYRO_CS_2 PA15
#define HW_PIN_USB_DETECT PC4

//set statements
#define HW_SET_MAG_BUSTYPE I2C
#define HW_SET_MAG_I2C_DEVICE 2
#define HW_SET_BARO_SPI_DEVICE 1
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_MAX7456_SPI_BUS 2
#define HW_SET_DASHBOARD_I2C_BUS 2
#define HW_SET_FLASH_SPI_BUS 4
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW90
#define HW_SET_GYRO_1_ALIGN_YAW 900
#define HW_SET_GYRO_2_SPIBUS 3
#define HW_SET_GYRO_2_SENSOR_ALIGN CW270
#define HW_SET_GYRO_2_ALIGN_YAW 2700


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F745 (S745) 4.1.0 Sep 25 2019 / 01:23:16 (064ca9b75) MSP API: 1.42

#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500
#define USE_MAX7456
#define USE_FLASH
#define USE_FLASH_W25Q128FV

board_name FPVM_BETAFLIGHTF7
manufacturer_id FPVM

# resources
resource BEEPER 1 D15
resource MOTOR 1 B00
resource MOTOR 2 B01
resource MOTOR 3 E09
resource MOTOR 4 E11
resource PPM 1 A03
resource SONAR_TRIGGER 1 B10
resource SONAR_ECHO 1 B11
resource LED_STRIP 1 D12
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 B10
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 B11
resource SERIAL_RX 6 C07
resource LED 1 E00
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 C10
resource SPI_SCK 4 E02
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 C11
resource SPI_MISO 4 E05
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 C12
resource SPI_MOSI 4 E06
resource CAMERA_CONTROL 1 C08
resource ADC_BATT 1 C03
resource ADC_RSSI 1 C05
resource ADC_CURR 1 C02
resource BARO_CS 1 A01
resource FLASH_CS 1 E04
resource OSD_CS 1 B12
resource GYRO_EXTI 1 D00
resource GYRO_EXTI 2 E08
resource GYRO_CS 1 A04
resource GYRO_CS 2 A15
resource USB_DETECT 1 C04

# timer
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer E13 AF1
# pin E13: TIM1 CH3 (AF1)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer E09 AF1
# pin E09: TIM1 CH1 (AF1)
timer E11 AF1
# pin E11: TIM1 CH2 (AF1)
timer D12 AF2
# pin D12: TIM4 CH1 (AF2)
timer B10 AF1
# pin B10: TIM2 CH3 (AF1)
timer B11 AF1
# pin B11: TIM2 CH4 (AF1)
timer C06 AF3
# pin C06: TIM8 CH1 (AF3)
timer C07 AF3
# pin C07: TIM8 CH2 (AF3)
timer A03 AF1
# pin A03: TIM2 CH4 (AF1)
timer A02 AF3
# pin A02: TIM9 CH1 (AF3)

# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin C08 1
# pin C08: DMA2 Stream 4 Channel 7
dma pin E13 1
# pin E13: DMA2 Stream 6 Channel 6
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin E09 2
# pin E09: DMA2 Stream 3 Channel 6
dma pin E11 1
# pin E11: DMA2 Stream 2 Channel 6
dma pin D12 0
# pin D12: DMA1 Stream 0 Channel 2
dma pin B10 0
# pin B10: DMA1 Stream 1 Channel 3
dma pin B11 0
# pin B11: DMA1 Stream 7 Channel 3
dma pin C06 0
# pin C06: DMA2 Stream 2 Channel 0
dma pin C07 1
# pin C07: DMA2 Stream 3 Channel 7
dma pin A03 0
# pin A03: DMA1 Stream 7 Channel 3

# feature
feature OSD

# master
set mag_bustype = I2C
set mag_i2c_device = 2
set baro_spi_device = 1
set blackbox_device = SPIFLASH
set current_meter = ADC
set battery_meter = ADC
set beeper_inversion = ON
set beeper_od = OFF
set max7456_spi_bus = 2
set dashboard_i2c_bus = 2
set flash_spi_bus = 4
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW90
set gyro_1_align_yaw = 900
set gyro_2_spibus = 3
set gyro_2_sensor_align = CW270
set gyro_2_align_yaw = 2700

*/
