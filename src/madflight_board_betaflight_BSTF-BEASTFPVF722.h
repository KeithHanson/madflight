/*==============================================================================
Generated on: 2024-10-23 18:06:28.974888
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: BEASTFPVF722
Manufacturer ID: BSTF

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_BSTF-BEASTFPVF722.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-BSTF-BEASTFPVF722"
#define HW_MCU "STM32F7X2"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define BARO_USE  BARO_USE_BMP280
#define BARO_USE  BARO_USE_DPS310
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"
#define IMU_USE  IMU_USE_SPI_MPU6000
#define IMU_USE  IMU_USE_SPI_ICM42688P
#define OSD_USE  OSD_USE_MAX7456

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW90
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PC15
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PA4
#define HW_PIN_IMU_EXTI  PC4

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   PB8
#define HW_PIN_I2C_SCL   PB9

//Outputs:
#define HW_OUT_COUNT     8
#define HW_PIN_OUT_LIST  {PC8,PC9,PA8,PA9,PB0,PB1,PA10,PB4}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PB7
#define HW_PIN_RCIN_TX   PB6
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL2)
#define HW_PIN_GPS_RX    PA3
#define HW_PIN_GPS_TX    PA2
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC1
#define HW_PIN_BAT_I     PC3

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 6
#define HW_PIN_SERIAL { {1,PB6,PB7,-1}, {2,PA2,PA3,-1}, {3,PB10,PB11,-1}, {4,PA0,PA1,-1}, {5,PC12,PD2,-1}, {6,PC6,PC7,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PC10,PC11,PB5} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 1
#define HW_PIN_I2C { {1,PB8,PB9} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PC13
#define HW_PIN_LED_STRIP PB3
//#define HW_PIN_LED PC15
#define HW_PIN_ADC_BATT PC1
#define HW_PIN_ADC_CURR PC3
#define HW_PIN_PINIO PC2
#define HW_PIN_PINIO_2 PC14
#define HW_PIN_FLASH_CS PA15
#define HW_PIN_OSD_CS PB12
#define HW_PIN_GYRO_EXTI PC4
#define HW_PIN_GYRO_CS PA4

//set statements
#define HW_SET_MAG_BUSTYPE I2C
#define HW_SET_MAG_I2C_DEVICE 1
#define HW_SET_BARO_BUSTYPE I2C
#define HW_SET_BARO_I2C_DEVICE 1
#define HW_SET_SERIALRX_PROVIDER CRSF
#define HW_SET_ADC_DEVICE 3
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_DSHOT_BURST ON
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_IBATA_SCALE 250
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_MAX7456_SPI_BUS 2
#define HW_SET_PINIO_CONFIG 129,129,1,1
#define HW_SET_PINIO_BOX 40,41,255,255
#define HW_SET_FLASH_SPI_BUS 3
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW90
#define HW_SET_GYRO_1_ALIGN_YAW 900


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F7X2 (S7X2) 4.3.2 Nov 28 2022 / 07:30:19 (60c9521) MSP API: 1.44

#mcu STM32F7X2

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_ACC_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P
#define USE_MAX7456

board_name BEASTFPVF722
manufacturer_id BSTF

# resources
resource BEEPER 1 C13
resource MOTOR 1 C08
resource MOTOR 2 C09
resource MOTOR 3 A08
resource MOTOR 4 A09
resource MOTOR 5 B00
resource MOTOR 6 B01
resource MOTOR 7 A10
resource MOTOR 8 B04
resource LED_STRIP 1 B03
resource SERIAL_TX 1 B06
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 A00
resource SERIAL_TX 5 C12
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 B07
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 A01
resource SERIAL_RX 5 D02
resource SERIAL_RX 6 C07

resource I2C_SCL 1 B08
resource I2C_SDA 1 B09

resource LED 1 C15

resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 C10
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 C11
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05

resource ADC_BATT 1 C01
resource ADC_CURR 1 C03

resource PINIO 1 C02
resource PINIO 2 C14

resource FLASH_CS 1 A15
resource OSD_CS 1 B12
resource GYRO_EXTI 1 C04
resource GYRO_CS 1 A04

# timer
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer A09 AF1
# pin A09: TIM1 CH2 (AF1)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer A10 AF1
# pin A10: TIM1 CH3 (AF1)
timer B04 AF2
# pin B04: TIM3 CH1 (AF2)
timer B03 AF1
# pin B03: TIM2 CH2 (AF1)

# dma
dma ADC 3 0
# ADC 3: DMA2 Stream 0 Channel 2
dma pin C08 0
# pin C08: DMA2 Stream 2 Channel 0
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin A08 0
# pin A08: DMA2 Stream 6 Channel 0
dma pin A09 0
# pin A09: DMA2 Stream 6 Channel 0
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin A10 0
# pin A10: DMA2 Stream 6 Channel 0
dma pin B04 0
# pin B04: DMA1 Stream 4 Channel 5
dma pin B03 0
# pin B03: DMA1 Stream 6 Channel 3

# feature
feature RX_SERIAL
feature TELEMETRY
feature OSD

# serial
serial 1 64 115200 57600 0 115200

# master
set mag_bustype = I2C
set mag_i2c_device = 1
set baro_bustype = I2C
set baro_i2c_device = 1
set serialrx_provider = CRSF
set adc_device = 3
set blackbox_device = SPIFLASH
set dshot_burst = ON
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 250
set beeper_inversion = ON
set beeper_od = OFF
set max7456_spi_bus = 2
set pinio_config = 129,129,1,1
set pinio_box = 40,41,255,255
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW90
set gyro_1_align_yaw = 900

*/
