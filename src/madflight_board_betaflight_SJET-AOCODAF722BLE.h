/*==============================================================================
Generated on: 2024-10-23 18:06:29.274660
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: AOCODAF722BLE
Manufacturer ID: SJET

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_SJET-AOCODAF722BLE.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-SJET-AOCODAF722BLE"
#define HW_MCU "STM32F7X2"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6000
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

//IMU SPI: (SPI2)
#define HW_PIN_SPI_MISO  PB14
#define HW_PIN_SPI_MOSI  PB15
#define HW_PIN_SPI_SCLK  PB13
#define HW_PIN_IMU_CS    PB12
#define HW_PIN_IMU_EXTI  PC4

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   PB8
#define HW_PIN_I2C_SCL   PB9

//Outputs:
#define HW_OUT_COUNT     6
#define HW_PIN_OUT_LIST  {PC9,PC8,PC7,PC6,PB1,PA8}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL2)
#define HW_PIN_GPS_RX    PA3
#define HW_PIN_GPS_TX    PA2
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC2
#define HW_PIN_BAT_I     PC1

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 5
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {2,PA2,PA3,-1}, {3,PC10,PC11,-1}, {4,PA0,PA1,-1}, {5,PC12,PD2,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PB3,PB4,PB5} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 1
#define HW_PIN_I2C { {1,PB8,PB9} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PC13
#define HW_PIN_PPM PA10
#define HW_PIN_LED_STRIP PB7
//#define HW_PIN_LED PC14
#define HW_PIN_CAMERA_CONTROL PB6
#define HW_PIN_ADC_BATT PC2
#define HW_PIN_ADC_RSSI PC3
#define HW_PIN_ADC_CURR PC1
#define HW_PIN_PINIO PA15
#define HW_PIN_FLASH_CS PC0
#define HW_PIN_OSD_CS PA4
#define HW_PIN_GYRO_EXTI PC4
#define HW_PIN_GYRO_CS PB12
#define HW_PIN_USB_DETECT PC15

//set statements
#define HW_SET_BARO_BUSTYPE I2C
#define HW_SET_BARO_I2C_DEVICE 1
#define HW_SET_ADC_DEVICE 3
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_DSHOT_BURST ON
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_IBATA_SCALE 166
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_MAX7456_SPI_BUS 1
#define HW_SET_FLASH_SPI_BUS 3
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 2


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F7X2 (S7X2) 4.2.0 Jun 14 2020 / 03:05:26 (8f2d21460) MSP API: 1.43

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

board_name AOCODAF722BLE
manufacturer_id SJET

# resources
resource BEEPER 1 C13
resource MOTOR 1 C09
resource MOTOR 2 C08
resource MOTOR 3 C07
resource MOTOR 4 C06
resource MOTOR 5 B01
resource MOTOR 6 A08
resource PPM 1 A10
resource LED_STRIP 1 B07
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 C10
resource SERIAL_TX 4 A00
resource SERIAL_TX 5 C12
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 C11
resource SERIAL_RX 4 A01
resource SERIAL_RX 5 D02
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09
resource LED 1 C14
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05
resource CAMERA_CONTROL 1 B06
resource ADC_BATT 1 C02
resource ADC_RSSI 1 C03
resource ADC_CURR 1 C01
resource PINIO 1 A15
resource FLASH_CS 1 C00
resource OSD_CS 1 A04
resource GYRO_EXTI 1 C04
resource GYRO_CS 1 B12
resource USB_DETECT 1 C15

# timer
timer A10 AF1
# pin A10: TIM1 CH3 (AF1)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer C07 AF3
# pin C07: TIM8 CH2 (AF3)
timer C06 AF3
# pin C06: TIM8 CH1 (AF3)
timer B01 AF1
# pin B01: TIM1 CH3N (AF1)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)

# dma
dma ADC 3 0
# ADC 3: DMA2 Stream 0 Channel 2
dma pin A10 0
# pin A10: DMA2 Stream 6 Channel 0
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin C08 1
# pin C08: DMA2 Stream 4 Channel 7
dma pin C07 1
# pin C07: DMA2 Stream 3 Channel 7
dma pin C06 1
# pin C06: DMA2 Stream 2 Channel 7
dma pin B01 0
# pin B01: DMA2 Stream 6 Channel 0
dma pin A08 0
# pin A08: DMA2 Stream 6 Channel 0
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2

# feature
feature OSD

# master
set baro_bustype = I2C
set baro_i2c_device = 1
set adc_device = 3
set blackbox_device = SPIFLASH
set dshot_burst = ON
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 166
set beeper_inversion = ON
set beeper_od = OFF
set max7456_spi_bus = 1
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 2

*/
