/*==============================================================================
Generated on: 2024-10-23 18:06:29.051406
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: FLYWOOF405NANO
Manufacturer ID: FLWO

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_FLWO-FLYWOOF405NANO.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-FLWO-FLYWOOF405NANO"
#define HW_MCU "STM32F405"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6000
#define IMU_USE  IMU_USE_SPI_ICM42688P
#define BARO_USE  BARO_USE_BMP280
#define BARO_USE  BARO_USE_DPS310
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"
#define OSD_USE  OSD_USE_MAX7456

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW0
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PC14
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PB12
#define HW_PIN_IMU_EXTI  PB13

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   PB8
#define HW_PIN_I2C_SCL   PB9

//Outputs:
#define HW_OUT_COUNT     8
#define HW_PIN_OUT_LIST  {PB0,PB1,PA3,PA2,PB5,PC9,PB4,PC8}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PB6
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL2)
#define HW_PIN_GPS_RX    PD6
#define HW_PIN_GPS_TX    PD5
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC3
#define HW_PIN_BAT_I     PC2

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 6
#define HW_PIN_SERIAL { {1,PB6,PA10,-1}, {2,PD5,PD6,-1}, {3,PB10,PB11,-1}, {4,PA0,PA1,-1}, {5,-1,PD2,-1}, {6,PC6,PC7,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 2
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {3,PC10,PC11,PC12} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 1
#define HW_PIN_I2C { {1,PB8,PB9} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PC13
#define HW_PIN_PPM PB8
#define HW_PIN_LED_STRIP PA9
//#define HW_PIN_LED PC14
#define HW_PIN_ESCSERIAL PB8
#define HW_PIN_ADC_BATT PC3
#define HW_PIN_ADC_RSSI PC0
#define HW_PIN_ADC_CURR PC2
#define HW_PIN_FLASH_CS PB3
#define HW_PIN_OSD_CS PB14
#define HW_PIN_GYRO_EXTI PB13
#define HW_PIN_GYRO_CS PB12
#define HW_PIN_USB_DETECT PA8

//set statements
#define HW_SET_MAG_BUSTYPE I2C
#define HW_SET_MAG_I2C_DEVICE 1
#define HW_SET_BARO_BUSTYPE I2C
#define HW_SET_BARO_I2C_DEVICE 1
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_IBATA_SCALE 170
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_MAX7456_SPI_BUS 3
#define HW_SET_DASHBOARD_I2C_BUS 1
#define HW_SET_FLASH_SPI_BUS 3
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.3.0 Jun 14 2022 / 00:47:24 (229ac66) MSP API: 1.44

#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_ACCGYRO_BMI270
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

board_name FLYWOOF405NANO
manufacturer_id FLWO

# resources
resource BEEPER 1 C13
resource MOTOR 1 B00
resource MOTOR 2 B01
resource MOTOR 3 A03
resource MOTOR 4 A02
resource MOTOR 5 B05
resource MOTOR 6 C09
resource MOTOR 7 B04
resource MOTOR 8 C08
resource PPM 1 B08
resource LED_STRIP 1 A09
resource SERIAL_TX 1 B06
resource SERIAL_TX 2 D05
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 A00
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 D06
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 A01
resource SERIAL_RX 5 D02
resource SERIAL_RX 6 C07
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09
resource LED 1 C14
resource SPI_SCK 1 A05
resource SPI_SCK 3 C10
resource SPI_MISO 1 A06
resource SPI_MISO 3 C11
resource SPI_MOSI 1 A07
resource SPI_MOSI 3 C12
resource ESCSERIAL 1 B08
resource ADC_BATT 1 C03
resource ADC_RSSI 1 C00
resource ADC_CURR 1 C02
resource FLASH_CS 1 B03
resource OSD_CS 1 B14
resource GYRO_EXTI 1 B13
resource GYRO_CS 1 B12
resource USB_DETECT 1 A08

# timer
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer A03 AF1
# pin A03: TIM2 CH4 (AF1)
timer A02 AF1
# pin A02: TIM2 CH3 (AF1)
timer B05 AF2
# pin B05: TIM3 CH2 (AF2)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer A09 AF1
# pin A09: TIM1 CH2 (AF1)
timer B04 AF2
# pin B04: TIM3 CH1 (AF2)

# dma
dma ADC 1 0
# ADC 1: DMA2 Stream 0 Channel 0
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin A03 1
# pin A03: DMA1 Stream 6 Channel 3
dma pin A02 0
# pin A02: DMA1 Stream 1 Channel 3
dma pin B05 0
# pin B05: DMA1 Stream 5 Channel 5
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin C08 0
# pin C08: DMA2 Stream 2 Channel 0
dma pin A09 0
# pin A09: DMA2 Stream 6 Channel 0
dma pin B04 0
# pin B04: DMA1 Stream 4 Channel 5

# feature
feature RX_SERIAL
feature LED_STRIP
feature OSD

# master
set mag_bustype = I2C
set mag_i2c_device = 1
set baro_bustype = I2C
set baro_i2c_device = 1
set blackbox_device = SPIFLASH
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 170
set beeper_inversion = ON
set beeper_od = OFF
set max7456_spi_bus = 3
set dashboard_i2c_bus = 1
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1

*/
