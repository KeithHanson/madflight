/*==============================================================================
Generated on: 2024-10-23 18:06:28.995405
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: DFR_F722_DUAL_HD
Manufacturer ID: DFRA

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_DFRA-DFR_F722_DUAL_HD.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-DFRA-DFR_F722_DUAL_HD"
#define HW_MCU "STM32F7X2"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define BARO_USE  BARO_USE_BMP280
#define BARO_USE  BARO_USE_DPS310
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"
#define IMU_USE  IMU_USE_SPI_ICM20689
#define IMU_USE  IMU_USE_SPI_ICM42688P
#define OSD_USE  OSD_USE_MAX7456

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW0
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PC4
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PA15
#define HW_PIN_IMU_EXTI  PA8

//BARO/MAG I2C: (I2C2)
#define HW_PIN_I2C_SDA   PB10
#define HW_PIN_I2C_SCL   PB11

//Outputs:
#define HW_OUT_COUNT     8
#define HW_PIN_OUT_LIST  {PC8,PC6,PC9,PC7,PB6,PB7,PB1,PB0}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL2)
#define HW_PIN_GPS_RX    PA3
#define HW_PIN_GPS_TX    PA2
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC1
#define HW_PIN_BAT_I     PC2

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 5
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {2,PA2,PA3,-1}, {3,PB10,PB11,-1}, {4,PC10,PC11,-1}, {5,PC12,PD2,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PB3,PB4,PB5} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 1
#define HW_PIN_I2C { {2,PB10,PB11} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PC15
#define HW_PIN_PPM PA3
#define HW_PIN_LED_STRIP PA1
//#define HW_PIN_LED PC4
#define HW_PIN_CAMERA_CONTROL PA0
#define HW_PIN_ADC_BATT PC1
#define HW_PIN_ADC_RSSI PC0
#define HW_PIN_ADC_CURR PC2
#define HW_PIN_PINIO PC13
#define HW_PIN_PINIO_2 PC14
#define HW_PIN_PINIO_3 PB8
#define HW_PIN_FLASH_CS PB9
#define HW_PIN_OSD_CS PB12
#define HW_PIN_GYRO_EXTI PA8
#define HW_PIN_GYRO_EXTI_2 PB2
#define HW_PIN_GYRO_CS PA15
#define HW_PIN_GYRO_CS_2 PC3

//set statements
#define HW_SET_GYRO_TO_USE BOTH
#define HW_SET_BARO_BUSTYPE I2C
#define HW_SET_BARO_I2C_DEVICE 2
#define HW_SET_MAG_BUSTYPE I2C
#define HW_SET_MAG_I2C_DEVICE 2
#define HW_SET_SERIALRX_PROVIDER SBUS
#define HW_SET_ADC_DEVICE 3
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_DSHOT_BURST ON
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_IBATA_SCALE 100
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_MAX7456_SPI_BUS 2
#define HW_SET_PINIO_CONFIG 129,1,1,1
#define HW_SET_PINIO_BOX 0,255,255,255
#define HW_SET_FLASH_SPI_BUS 3
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW0
#define HW_SET_GYRO_2_SPIBUS 1
#define HW_SET_GYRO_2_SENSOR_ALIGN CW90


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F7X2 (S7X2) 4.2.2 Aug 16 2020 / 01:48:06 (e833ac612) MSP API: 1.4

board_name DFR_F722_DUAL_HD
manufacturer_id DFRA

#define USE_ACC
#define USE_ACC_SPI_ICM20689
#define USE_ACC_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_GYRO
#define USE_GYRO_SPI_ICM20689
#define USE_GYRO_SPI_ICM42688P
#define USE_MAX7456

# resources
resource BEEPER 1 C15
resource MOTOR 1 C08
resource MOTOR 2 C06
resource MOTOR 3 C09
resource MOTOR 4 C07
resource MOTOR 5 B06
resource MOTOR 6 B07
resource MOTOR 7 B01
resource MOTOR 8 B00
resource PPM 1 A03
resource LED_STRIP 1 A01
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 C10
resource SERIAL_TX 5 C12
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 C11
resource SERIAL_RX 5 D02
resource I2C_SCL 2 B10
resource I2C_SDA 2 B11
resource LED 1 C04
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05
resource CAMERA_CONTROL 1 A00
resource ADC_BATT 1 C01
resource ADC_RSSI 1 C00
resource ADC_CURR 1 C02
resource PINIO 1 C13
resource PINIO 2 C14
resource PINIO 3 B08
resource FLASH_CS 1 B09
resource OSD_CS 1 B12
resource GYRO_EXTI 1 A08
resource GYRO_EXTI 2 B02
resource GYRO_CS 1 A15
resource GYRO_CS 2 C03

# timer
timer A00 AF2
# pin A00: TIM5 CH1 (AF2)
timer A03 AF3
# pin A03: TIM9 CH2 (AF3)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer C06 AF3
# pin C06: TIM8 CH1 (AF3)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer C07 AF3
# pin C07: TIM8 CH2 (AF3)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer A01 AF1
# pin A01: TIM2 CH2 (AF1)

# dma
dma ADC 3 0
# ADC 3: DMA2 Stream 0 Channel 2
dma pin A00 0
# pin A00: DMA1 Stream 2 Channel 6
dma pin C08 1
# pin C08: DMA2 Stream 4 Channel 7
dma pin C06 0
# pin C06: DMA2 Stream 2 Channel 0
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin C07 1
# pin C07: DMA2 Stream 3 Channel 7
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin A01 0
# pin A01: DMA1 Stream 6 Channel 3

# feature
feature RX_SERIAL
feature SOFTSERIAL
feature OSD

# serial
serial 1 64 115200 57600 0 115200

# master
set gyro_to_use = BOTH
set baro_bustype = I2C
set baro_i2c_device = 2
set mag_bustype = I2C
set mag_i2c_device = 2
set serialrx_provider = SBUS
set adc_device = 3
set blackbox_device = SPIFLASH
set dshot_burst = ON
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 100
set beeper_inversion = ON
set beeper_od = OFF
set max7456_spi_bus = 2
set pinio_config = 129,1,1,1
set pinio_box = 0,255,255,255
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW0
set gyro_2_spibus = 1
set gyro_2_sensor_align = CW90

*/
