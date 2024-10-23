/*==============================================================================
Generated on: 2024-10-23 18:06:28.962879
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: APEXF7
Manufacturer ID: APEX

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_APEX-APEXF7.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-APEX-APEXF7"
#define HW_MCU "STM32F7X2"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6000
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"
#define BARO_USE  BARO_USE_BMP280
#define OSD_USE  OSD_USE_MAX7456

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW0
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PB12
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI3)
#define HW_PIN_SPI_MISO  PB4
#define HW_PIN_SPI_MOSI  PB5
#define HW_PIN_SPI_SCLK  PB3
#define HW_PIN_IMU_CS    PD2
#define HW_PIN_IMU_EXTI  PA4

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   PB8
#define HW_PIN_I2C_SCL   PB9

//Outputs:
#define HW_OUT_COUNT     4
#define HW_PIN_OUT_LIST  {PC8,PB6,PC9,PB7}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL3)
#define HW_PIN_GPS_RX    PC11
#define HW_PIN_GPS_TX    PC10
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC0
#define HW_PIN_BAT_I     PC1

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 6
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {2,PA2,-1,-1}, {3,PC10,PC11,-1}, {4,PA0,PA1,-1}, {5,PC12,-1,-1}, {6,PC6,PC7,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PB3,PB4,PB5} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 1
#define HW_PIN_I2C { {1,PB8,PB9} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PB0
#define HW_PIN_LED_STRIP PA15
//#define HW_PIN_LED PB12
#define HW_PIN_CAMERA_CONTROL PA8
#define HW_PIN_ADC_BATT PC0
#define HW_PIN_ADC_RSSI PC2
#define HW_PIN_ADC_CURR PC1
#define HW_PIN_PINIO PC14
#define HW_PIN_PINIO_2 PB11
#define HW_PIN_FLASH_CS PA3
#define HW_PIN_OSD_CS PC15
#define HW_PIN_GYRO_EXTI PA4
#define HW_PIN_GYRO_EXTI_2 PC3
#define HW_PIN_GYRO_CS PD2
#define HW_PIN_GYRO_CS_2 PB10

//set statements
#define HW_SET_BARO_BUSTYPE I2C
#define HW_SET_BARO_I2C_DEVICE 1
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_DSHOT_BURST ON
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_MAX7456_SPI_BUS 2
#define HW_SET_PINIO_CONFIG 129,129,1,1
#define HW_SET_PINIO_BOX 0,40,255,255
#define HW_SET_FLASH_SPI_BUS 1
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 3
#define HW_SET_GYRO_2_SPIBUS 3
#define HW_SET_GYRO_2_SENSOR_ALIGN CW270
#define HW_SET_GYRO_2_ALIGN_YAW 2700


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F7X2 (S7X2) 4.1.6 Apr 25 2020 / 05:12:26 (283bda8bf) MSP API: 1.42

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_BARO
#define USE_BARO_BMP280
#define USE_MAX7456

board_name APEXF7
manufacturer_id APEX

# resources
resource BEEPER 1 B00
resource MOTOR 1 C08
resource MOTOR 2 B06
resource MOTOR 3 C09
resource MOTOR 4 B07
resource LED_STRIP 1 A15
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 C10
resource SERIAL_TX 4 A00
resource SERIAL_TX 5 C12
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 3 C11
resource SERIAL_RX 4 A01
resource SERIAL_RX 6 C07
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09
resource LED 1 B12
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05
resource CAMERA_CONTROL 1 A08
resource ADC_BATT 1 C00
resource ADC_RSSI 1 C02
resource ADC_CURR 1 C01
resource PINIO 1 C14
resource PINIO 2 B11
resource FLASH_CS 1 A03
resource OSD_CS 1 C15
resource GYRO_EXTI 1 A04
resource GYRO_EXTI 2 C03
resource GYRO_CS 1 D02
resource GYRO_CS 2 B10

# timer
timer A15 AF1
# pin A15: TIM2 CH1 (AF1)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)

# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin A15 0
# pin A15: DMA1 Stream 5 Channel 3
dma pin A08 0
# pin A08: DMA2 Stream 6 Channel 0
dma pin C08 0
# pin C08: DMA2 Stream 2 Channel 0
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2

# feature
feature OSD
feature RX_SERIAL

# serial
serial 1 1024 115200 57600 0 115200
serial 3 1 19200 57600 0 115200

# master
set baro_bustype = I2C
set baro_i2c_device = 1
set blackbox_device = SPIFLASH
set dshot_burst = ON
set current_meter = ADC
set battery_meter = ADC
set beeper_inversion = ON
set beeper_od = OFF
set max7456_spi_bus = 2
set pinio_config = 129,129,1,1
set pinio_box = 0,40,255,255
set flash_spi_bus = 1
set gyro_1_bustype = SPI
set gyro_1_spibus = 3
set gyro_2_spibus = 3
set gyro_2_sensor_align = CW270
set gyro_2_align_yaw = 2700

*/
