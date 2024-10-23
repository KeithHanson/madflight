/*==============================================================================
Generated on: 2024-10-23 18:06:29.328169
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: TMOTORF4SX1280
Manufacturer ID: TMTR

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_TMTR-TMOTORF4SX1280.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-TMTR-TMOTORF4SX1280"
#define HW_MCU "STM32F411SX1280"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define OSD_USE  OSD_USE_MAX7456
#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
#define USE_RX_EXPRESSLRS_TELEMETRY
#define USE_RX_SX1280
#define RX_CHANNELS_AETR
#define RX_SPI_DEFAULT_PROTOCOL  RX_SPI_EXPRESSLRS
#define RX_EXPRESSLRS_TIMER_INSTANCE  TIM5
#define RX_EXPRESSLRS_SPI_RESET_PIN  PA8
#define RX_EXPRESSLRS_SPI_BUSY_PIN  PA13
#define RX_SPI_CS  PA15
#define RX_SPI_EXTI  PC14
#define RX_SPI_BIND  PB10
#define RX_SPI_LED  PA14

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW180FLIP
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
#define HW_PIN_IMU_EXTI  PC15

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   -1
#define HW_PIN_I2C_SCL   -1

//Outputs:
#define HW_OUT_COUNT     4
#define HW_PIN_OUT_LIST  {PB0,PB1,PB6,PB7}

//RC Receiver: (SERIAL2)
#define HW_PIN_RCIN_RX   PA3
#define HW_PIN_RCIN_TX   PA2
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL)
#define HW_PIN_GPS_RX    -1
#define HW_PIN_GPS_TX    -1
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PA1
#define HW_PIN_BAT_I     PA0

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 2
#define HW_PIN_SERIAL { {1,PA9,-1,-1}, {2,PA2,PA3,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PB3,PB4,PB5} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 0
#define HW_PIN_I2C {  } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PB2
#define HW_PIN_PPM PA3
#define HW_PIN_LED_STRIP PA10
//#define HW_PIN_LED PC13
#define HW_PIN_ADC_BATT PA1
#define HW_PIN_ADC_CURR PA0
#define HW_PIN_OSD_CS PB12
#define HW_PIN_RX_SPI_CS PA15
#define HW_PIN_RX_SPI_EXTI PC14
#define HW_PIN_RX_SPI_BIND PB10
#define HW_PIN_RX_SPI_LED PA14
#define HW_PIN_RX_SPI_EXPRESSLRS_RESET PA8
#define HW_PIN_RX_SPI_EXPRESSLRS_BUSY PA13
#define HW_PIN_GYRO_EXTI PC15
#define HW_PIN_GYRO_CS PA4

//set statements
#define HW_SET_RX_SPI_BUS 3
#define HW_SET_RX_SPI_LED_INVERSION ON
#define HW_SET_DSHOT_BURST AUTO
#define HW_SET_DSHOT_BITBANG OFF
#define HW_SET_ALIGN_BOARD_YAW 45
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_IBATA_SCALE 250
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_SYSTEM_HSE_MHZ 8
#define HW_SET_MAX7456_SPI_BUS 2
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW180FLIP
#define HW_SET_GYRO_1_ALIGN_PITCH 1800
#define HW_SET_GYRO_1_ALIGN_YAW 1800


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F411SX1280 (S4SX) 4.3.1 Jul 13 2022 / 03:33:32 (8d4f005) MSP API: 1.44
#mcu STM32F411

#define USE_ACC
#define USE_GYRO
#define USE_ACCGYRO_BMI270
#define USE_MAX7456
#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
#define USE_RX_EXPRESSLRS_TELEMETRY
#define USE_RX_SX1280
#define RX_CHANNELS_AETR
#define RX_SPI_DEFAULT_PROTOCOL         RX_SPI_EXPRESSLRS
#define RX_EXPRESSLRS_TIMER_INSTANCE    TIM5
#define RX_EXPRESSLRS_SPI_RESET_PIN     PA8
#define RX_EXPRESSLRS_SPI_BUSY_PIN      PA13
#define RX_SPI_CS                       PA15
#define RX_SPI_EXTI                     PC14
#define RX_SPI_BIND                     PB10
#define RX_SPI_LED                      PA14

board_name TMOTORF4SX1280
manufacturer_id TMTR

# resources
resource BEEPER 1 B02
resource MOTOR 1 B00
resource MOTOR 2 B01
resource MOTOR 3 B06
resource MOTOR 4 B07
resource PPM 1 A03
resource LED_STRIP 1 A10
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_RX 2 A03
resource LED 1 C13
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05
resource ADC_BATT 1 A01
resource ADC_CURR 1 A00
resource OSD_CS 1 B12
resource RX_SPI_CS 1 A15
resource RX_SPI_EXTI 1 C14
resource RX_SPI_BIND 1 B10
resource RX_SPI_LED 1 A14
resource RX_SPI_EXPRESSLRS_RESET 1 A08
resource RX_SPI_EXPRESSLRS_BUSY 1 A13
resource GYRO_EXTI 1 C15
resource GYRO_CS 1 A04

# timer
timer A03 AF3
# pin A03: TIM9 CH2 (AF3)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)
timer A10 AF1
# pin A10: TIM1 CH3 (AF1)

# dma
dma ADC 1 0
# ADC 1: DMA2 Stream 0 Channel 0
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2
dma pin A10 0
# pin A10: DMA2 Stream 6 Channel 0

# feature
feature TELEMETRY
feature OSD

# master
set rx_spi_bus = 3
set rx_spi_led_inversion = ON
set dshot_burst = AUTO
set dshot_bitbang = OFF
set align_board_yaw = 45
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 250
set beeper_inversion = ON
set beeper_od = OFF
set system_hse_mhz = 8
set max7456_spi_bus = 2
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW180FLIP
set gyro_1_align_pitch = 1800
set gyro_1_align_yaw = 1800

*/
