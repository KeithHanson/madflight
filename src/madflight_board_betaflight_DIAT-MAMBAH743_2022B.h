/*==============================================================================
Generated on: 2024-10-23 18:06:29.011407
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: MAMBAH743_2022B
Manufacturer ID: DIAT

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_DIAT-MAMBAH743_2022B.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-DIAT-MAMBAH743_2022B"
#define HW_MCU "STM32H743"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6000
#define IMU_USE  IMU_USE_SPI_ICM42688P
#define BARO_USE  BARO_USE_DPS310
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25N01G"
#define OSD_USE  OSD_USE_MAX7456

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW0
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PE5
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PA4
#define HW_PIN_IMU_EXTI  PC4

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   PB6
#define HW_PIN_I2C_SCL   PB7

//Outputs:
#define HW_OUT_COUNT     8
#define HW_PIN_OUT_LIST  {PA0,PA1,PA2,PA3,PB0,PB1,PC8,PC9}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL2)
#define HW_PIN_GPS_RX    PD6
#define HW_PIN_GPS_TX    PD5
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC1
#define HW_PIN_BAT_I     PC3

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 8
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {2,PD5,PD6,-1}, {3,PD8,PD9,-1}, {4,PD1,PD0,-1}, {5,PC12,PD2,-1}, {6,PC6,PC7,-1}, {7,PE8,PE7,-1}, {8,PE1,PE0,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 4
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PC10,PC11,PB2}, {4,PE12,PE13,PE14} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 2
#define HW_PIN_I2C { {1,PB6,PB7}, {2,PB10,PB11} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PE3
#define HW_PIN_PPM PB9
#define HW_PIN_LED_STRIP PA8
//#define HW_PIN_LED PE5
#define HW_PIN_LED_2 PE4
#define HW_PIN_ADC_BATT PC1
#define HW_PIN_ADC_CURR PC3
#define HW_PIN_ADC_EXT PC0
#define HW_PIN_PINIO PC2
#define HW_PIN_PINIO_2 PC5
#define HW_PIN_FLASH_CS PA15
#define HW_PIN_OSD_CS PB12
#define HW_PIN_GYRO_EXTI PC4
#define HW_PIN_GYRO_EXTI_2 PE15
#define HW_PIN_GYRO_CS PA4
#define HW_PIN_GYRO_CS_2 PE11
#define HW_PIN_USB_DETECT PE6

//set statements
#define HW_SET_GYRO_TO_USE BOTH
#define HW_SET_MAG_BUSTYPE I2C
#define HW_SET_MAG_I2C_DEVICE 1
#define HW_SET_BARO_BUSTYPE I2C
#define HW_SET_BARO_I2C_DEVICE 1
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_IBATA_SCALE 80
#define HW_SET_VBAT_SCALE 110
#define HW_SET_BEEPER_FREQUENCY 0
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_MAX7456_SPI_BUS 2
#define HW_SET_PINIO_CONFIG 129,129,1,1
#define HW_SET_PINIO_BOX 0,40,255,255
#define HW_SET_FLASH_SPI_BUS 3
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW0
#define HW_SET_GYRO_1_ALIGN_YAW 0
#define HW_SET_GYRO_2_BUSTYPE SPI
#define HW_SET_GYRO_2_SPIBUS 4
#define HW_SET_GYRO_2_SENSOR_ALIGN CW270
#define HW_SET_GYRO_2_ALIGN_YAW 2700


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# version
# Betaflight / STM32H743 (SH74) 4.3.1 Jul 13 2022 / 03:37:48 (8d4f005) MSP API: 1.44

#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_ACCGYRO_BMI270
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_ICM42688P       
#define USE_BARO
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_W25N01G
#define USE_MAX7456


board_name MAMBAH743_2022B
manufacturer_id DIAT

# resources
resource BEEPER 1 E03
resource MOTOR 1 A00
resource MOTOR 2 A01
resource MOTOR 3 A02
resource MOTOR 4 A03
resource MOTOR 5 B00
resource MOTOR 6 B01
resource MOTOR 7 C08
resource MOTOR 8 C09
resource PPM 1 B09
resource LED_STRIP 1 A08
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 D05
resource SERIAL_TX 3 D08
resource SERIAL_TX 4 D01
resource SERIAL_TX 5 C12
resource SERIAL_TX 6 C06
resource SERIAL_TX 7 E08
resource SERIAL_TX 8 E01
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 D06
resource SERIAL_RX 3 D09
resource SERIAL_RX 4 D00
resource SERIAL_RX 5 D02
resource SERIAL_RX 6 C07
resource SERIAL_RX 7 E07
resource SERIAL_RX 8 E00
resource I2C_SCL 1 B06
resource I2C_SCL 2 B10
resource I2C_SDA 1 B07
resource I2C_SDA 2 B11
resource LED 1 E05
resource LED 2 E04
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 C10
resource SPI_SCK 4 E12
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 C11
resource SPI_MISO 4 E13
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B02
resource SPI_MOSI 4 E14
resource ADC_BATT 1 C01
resource ADC_CURR 1 C03
resource ADC_EXT 1 C00
resource PINIO 1 C02
resource PINIO 2 C05
resource FLASH_CS 1 A15
resource OSD_CS 1 B12
resource GYRO_EXTI 1 C04
resource GYRO_EXTI 2 E15
resource GYRO_CS 1 A04
resource GYRO_CS 2 E11
resource USB_DETECT 1 E06

# timer
timer A00 AF2
# pin A00: TIM5 CH1 (AF2)
timer A01 AF2
# pin A01: TIM5 CH2 (AF2)
timer A02 AF2
# pin A02: TIM5 CH3 (AF2)
timer A03 AF2
# pin A03: TIM5 CH4 (AF2)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer B08 AF1
# pin B08: TIM16 CH1 (AF1)
timer B09 AF1
# pin B09: TIM17 CH1 (AF1)

# dma
dma ADC 1 8
# ADC 1: DMA2 Stream 0 Request 9
dma ADC 3 9
# ADC 3: DMA2 Stream 1 Request 115
dma TIMUP 1 0
# TIMUP 1: DMA1 Stream 0 Request 15
dma TIMUP 3 2
# TIMUP 3: DMA1 Stream 2 Request 27
dma TIMUP 5 0
# TIMUP 5: DMA1 Stream 0 Request 59
dma TIMUP 8 4
# TIMUP 8: DMA1 Stream 4 Request 51
dma pin A00 0
# pin A00: DMA1 Stream 0 Request 55
dma pin A01 1
# pin A01: DMA1 Stream 1 Request 56
dma pin A02 2
# pin A02: DMA1 Stream 2 Request 57
dma pin A03 3
# pin A03: DMA1 Stream 3 Request 58
dma pin B00 4
# pin B00: DMA1 Stream 4 Request 25
dma pin B01 5
# pin B01: DMA1 Stream 5 Request 26
dma pin C08 6
# pin C08: DMA1 Stream 6 Request 49
dma pin C09 7
# pin C09: DMA1 Stream 7 Request 50
dma pin A08 14
# pin A08: DMA2 Stream 6 Request 11
dma pin B08 0
# pin B08: DMA1 Stream 0 Request 109
dma pin B09 0
# pin B09: DMA1 Stream 0 Request 111

# feature
feature RX_SERIAL
feature LED_STRIP
feature OSD

# serial
serial 0 64 115200 57600 0 115200
serial 3 1 115200 57600 0 115200

# master
set gyro_to_use = BOTH
set mag_bustype = I2C
set mag_i2c_device = 1
set baro_bustype = I2C
set baro_i2c_device = 1
set blackbox_device = SPIFLASH
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 80
set vbat_scale = 110
set beeper_frequency = 0
set beeper_inversion = ON
set beeper_od = OFF
set max7456_spi_bus = 2
set pinio_config = 129,129,1,1
set pinio_box = 0,40,255,255
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW0
set gyro_1_align_yaw = 0
set gyro_2_bustype = SPI
set gyro_2_spibus = 4
set gyro_2_sensor_align = CW270
set gyro_2_align_yaw = 2700


*/
