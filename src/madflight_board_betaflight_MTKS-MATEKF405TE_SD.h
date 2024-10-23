/*==============================================================================
Generated on: 2024-10-23 18:06:29.222654
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: MATEKF405TE_SD
Manufacturer ID: MTKS

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_MTKS-MATEKF405TE_SD.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-MTKS-MATEKF405TE_SD"
#define HW_MCU "STM32F405"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_ICM42688P
#define BARO_USE  BARO_USE_DPS310
#define OSD_USE  OSD_USE_MAX7456
#define BB_USE  BB_USE_SDCARD

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW270FLIP
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PA14
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PB4
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PC14
#define HW_PIN_IMU_EXTI  PC15

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   PB8
#define HW_PIN_I2C_SCL   PB7

//Outputs:
#define HW_OUT_COUNT     8
#define HW_PIN_OUT_LIST  {PC9,PC8,PB15,PA8,PB11,PB10,PB3,PA15}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL2)
#define HW_PIN_GPS_RX    PA3
#define HW_PIN_GPS_TX    PA2
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC4
#define HW_PIN_BAT_I     PC5

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 6
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {2,PA2,PA3,-1}, {3,PC10,PC11,-1}, {4,PA0,PA1,-1}, {5,PC12,PD2,-1}, {6,PC6,PC7,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 2
#define HW_PIN_SPI { {1,PA5,PB4,PA7}, {2,PB13,PC2,PC3} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 1
#define HW_PIN_I2C { {1,PB8,PB7} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PB9
#define HW_PIN_SERVO PB14
#define HW_PIN_SERVO_2 PA6
#define HW_PIN_SERVO_3 PB6
#define HW_PIN_PPM PA3
#define HW_PIN_LED_STRIP PB1
//#define HW_PIN_LED PA14
#define HW_PIN_LED_2 PA13
#define HW_PIN_ADC_BATT PC4
#define HW_PIN_ADC_RSSI PB0
#define HW_PIN_ADC_CURR PC5
#define HW_PIN_ADC_EXT PC0
#define HW_PIN_SDCARD_CS PC1
#define HW_PIN_PINIO PA4
#define HW_PIN_PINIO_2 PB5
#define HW_PIN_FLASH_CS PC13
#define HW_PIN_OSD_CS PB12
#define HW_PIN_GYRO_EXTI PC15
#define HW_PIN_GYRO_CS PC14

//set statements
#define HW_SET_MAG_BUSTYPE I2C
#define HW_SET_MAG_I2C_DEVICE 1
#define HW_SET_MAG_HARDWARE AUTO
#define HW_SET_BARO_BUSTYPE I2C
#define HW_SET_BARO_I2C_DEVICE 1
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_VBAT_SCALE 210
#define HW_SET_IBATA_SCALE 150
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_SYSTEM_HSE_MHZ 8
#define HW_SET_MAX7456_SPI_BUS 1
#define HW_SET_PINIO_BOX 40,41,255,255
#define HW_SET_SDCARD_MODE SPI
#define HW_SET_SDCARD_SPI_BUS 2
#define HW_SET_BLACKBOX_DEVICE SDCARD
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW270FLIP
#define HW_SET_GYRO_1_ALIGN_PITCH 1800
#define HW_SET_GYRO_1_ALIGN_YAW 2700
#define HW_SET_SERIALRX_PROVIDER CRSF


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.3.0 Jan 16 2022 / 13:43:35 (ee740d1) MSP API: 1.44

#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_DPS310
#define USE_MAX7456
#define USE_SDCARD

board_name MATEKF405TE_SD
manufacturer_id MTKS

# resources
resource BEEPER 1 B09
resource MOTOR 1 C09
resource MOTOR 2 C08
resource MOTOR 3 B15
resource MOTOR 4 A08
resource MOTOR 5 B11
resource MOTOR 6 B10
resource MOTOR 7 B03
resource MOTOR 8 A15
resource SERVO 1 B14
resource SERVO 2 A06
resource SERVO 3 B06
resource PPM 1 A03
resource LED_STRIP 1 B01
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 C10
resource SERIAL_TX 4 A00
resource SERIAL_TX 5 C12
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 C11
resource SERIAL_RX 4 A01
resource SERIAL_RX 5 D02
resource SERIAL_RX 6 C07
resource I2C_SCL 1 B08
resource I2C_SDA 1 B07
resource LED 1 A14
resource LED 2 A13
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_MISO 1 B04
resource SPI_MISO 2 C02
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 C03
resource ADC_BATT 1 C04
resource ADC_RSSI 1 B00
resource ADC_CURR 1 C05
resource ADC_EXT 1 C00
resource SDCARD_CS 1 C01
resource PINIO 1 A04
resource PINIO 2 B05
resource FLASH_CS 1 C13
resource OSD_CS 1 B12
resource GYRO_EXTI 1 C15
resource GYRO_CS 1 C14

# timer
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer B15 AF1
# pin B15: TIM1 CH3N (AF1)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer B11 AF1
# pin B11: TIM2 CH4 (AF1)
timer B10 AF1
# pin B10: TIM2 CH3 (AF1)
timer B03 AF1
# pin B03: TIM2 CH2 (AF1)
timer A15 AF1
# pin A15: TIM2 CH1 (AF1)
timer B14 AF9
# pin B14: TIM12 CH1 (AF9)
timer A06 AF9
# pin A06: TIM13 CH1 (AF9)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer B09 AF3
# pin B09: TIM11 CH1 (AF3)
timer A03 AF3
# pin A03: TIM9 CH2 (AF3)
timer A02 AF2
# pin A02: TIM5 CH3 (AF2)

# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin C08 0
# pin C08: DMA2 Stream 2 Channel 0
dma pin B15 1
# pin B15: DMA2 Stream 6 Channel 6
dma pin A08 1
# pin A08: DMA2 Stream 1 Channel 6
dma pin B11 0
# pin B11: DMA1 Stream 7 Channel 3
dma pin B10 0
# pin B10: DMA1 Stream 1 Channel 3
dma pin B03 0
# pin B03: DMA1 Stream 6 Channel 3
dma pin A15 0
# pin A15: DMA1 Stream 5 Channel 3
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin A02 0
# pin A02: DMA1 Stream 0 Channel 6

# feature
feature RX_SERIAL
feature TELEMETRY
feature OSD

# serial
serial 1 64 115200 57600 0 115200

# master
set mag_bustype = I2C
set mag_i2c_device = 1
set mag_hardware = AUTO
set baro_bustype = I2C
set baro_i2c_device = 1
set current_meter = ADC
set battery_meter = ADC
set vbat_scale = 210
set ibata_scale = 150
set beeper_inversion = ON
set beeper_od = OFF
set system_hse_mhz = 8
set max7456_spi_bus = 1
set pinio_box = 40,41,255,255
set sdcard_mode = SPI
set sdcard_spi_bus = 2
set blackbox_device = SDCARD
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW270FLIP
set gyro_1_align_pitch = 1800
set gyro_1_align_yaw = 2700
set serialrx_provider = CRSF

*/
