/*==============================================================================
Generated on: 2024-10-23 18:06:28.940880
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: ALIENFLIGHTNGF7_ELRS
Manufacturer ID: AFNG

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_AFNG-ALIENFLIGHTNGF7_ELRS.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-AFNG-ALIENFLIGHTNGF7_ELRS"
#define HW_MCU "STM32F7X2"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU9250
#define IMU_USE  IMU_USE_SPI_MPU6500
#define IMU_USE  IMU_USE_SPI_ICM20602
#define USE_MAG_SPI_AK8963
#define OSD_USE  OSD_USE_MAX7456
#define BB_USE  BB_USE_SDCARD
#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
#define USE_RX_EXPRESSLRS_TELEMETRY
#define USE_RX_SX1280
#define RX_CHANNELS_AETR
#define RX_SPI_DEFAULT_PROTOCOL  RX_SPI_EXPRESSLRS
#define RX_EXPRESSLRS_TIMER_INSTANCE  TIM5
#define RX_EXPRESSLRS_SPI_RESET_PIN  PB6
#define RX_EXPRESSLRS_SPI_BUSY_PIN  PB7
#define RX_SPI_CS  PA15
#define RX_SPI_EXTI  PB15
#define RX_SPI_BIND  PB2
#define RX_SPI_LED  PB9

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW270
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PC12
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PA4
#define HW_PIN_IMU_EXTI  PC14

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   -1
#define HW_PIN_I2C_SCL   -1

//Outputs:
#define HW_OUT_COUNT     8
#define HW_PIN_OUT_LIST  {PC6,PC7,PB14,PB0,PA0,PC8,PA1,PC9}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL2)
#define HW_PIN_GPS_RX    PA3
#define HW_PIN_GPS_TX    PA2
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC0
#define HW_PIN_BAT_I     PC1

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 3
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {2,PA2,PA3,-1}, {4,PC10,PC11,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PC2,PC3}, {3,PB3,PB4,PB5} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 0
#define HW_PIN_I2C {  } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PC13
#define HW_PIN_PPM PA8
#define HW_PIN_LED_STRIP PA8
//#define HW_PIN_LED PC12
#define HW_PIN_LED_2 PD2
#define HW_PIN_ADC_BATT PC0
#define HW_PIN_ADC_RSSI PC4
#define HW_PIN_ADC_CURR PC1
#define HW_PIN_SDCARD_CS PB10
#define HW_PIN_SDCARD_DETECT PB11
#define HW_PIN_OSD_CS PB12
#define HW_PIN_RX_SPI_CS PA15
#define HW_PIN_RX_SPI_EXTI PB15
#define HW_PIN_RX_SPI_BIND PB2
#define HW_PIN_RX_SPI_LED PB9
#define HW_PIN_RX_SPI_EXPRESSLRS_RESET PB6
#define HW_PIN_RX_SPI_EXPRESSLRS_BUSY PB7
#define HW_PIN_GYRO_EXTI PC14
#define HW_PIN_GYRO_CS PA4

//set statements
#define HW_SET_RX_SPI_PROTOCOL RX_SPI_EXPRESSLRS
#define HW_SET_RX_SPI_BUS 3
#define HW_SET_BLACKBOX_DEVICE SDCARD
#define HW_SET_DSHOT_BURST ON
#define HW_SET_BATTERY_METER ADC
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_SDCARD_DETECT_INVERTED ON
#define HW_SET_SDCARD_MODE SPI
#define HW_SET_SDCARD_SPI_BUS 2
#define HW_SET_MAX7456_SPI_BUS 3
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW270
#define HW_SET_GYRO_1_ALIGN_YAW 2700
#define HW_SET_EXPRESSLRS_DOMAIN ISM2400


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F7X2 (S7X2) 4.3.2 Nov 28 2022 / 07:30:19 (60c9521) MSP API: 1.44

#mcu STM32F7X2

#define USE_GYRO
#define USE_GYRO_SPI_MPU9250
#define USE_ACC
#define USE_ACC_SPI_MPU9250
#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_ICM20602
#define USE_ACC_SPI_ICM20602
#define USE_MAG
#define USE_MAG_SPI_AK8963
#define USE_MAX7456
#define USE_SDCARD
#define USE_RX_SPI
#define USE_RX_EXPRESSLRS
#define USE_RX_EXPRESSLRS_TELEMETRY
#define USE_RX_SX1280
#define RX_CHANNELS_AETR
#define RX_SPI_DEFAULT_PROTOCOL         RX_SPI_EXPRESSLRS
#define RX_EXPRESSLRS_TIMER_INSTANCE    TIM5
#define RX_EXPRESSLRS_SPI_RESET_PIN     PB6
#define RX_EXPRESSLRS_SPI_BUSY_PIN      PB7
#define RX_SPI_CS                       PA15
#define RX_SPI_EXTI                     PB15
#define RX_SPI_BIND                     PB2
#define RX_SPI_LED                      PB9

board_name ALIENFLIGHTNGF7_ELRS
manufacturer_id AFNG

# resources
resource BEEPER 1 C13
resource MOTOR 1 C06
resource MOTOR 2 C07
resource MOTOR 3 B14
resource MOTOR 4 B00
resource MOTOR 5 A00
resource MOTOR 6 C08
resource MOTOR 7 A01
resource MOTOR 8 C09
resource PPM 1 A08
resource LED_STRIP 1 A08
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 4 C10
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource SERIAL_RX 4 C11
resource LED 1 C12
resource LED 2 D02
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 C02
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 C03
resource SPI_MOSI 3 B05
resource ADC_BATT 1 C00
resource ADC_RSSI 1 C04
resource ADC_CURR 1 C01
resource SDCARD_CS 1 B10
resource SDCARD_DETECT 1 B11
resource OSD_CS 1 B12
resource RX_SPI_CS 1 A15
resource RX_SPI_EXTI 1 B15
resource RX_SPI_BIND 1 B02
resource RX_SPI_LED 1 B09
resource RX_SPI_EXPRESSLRS_RESET 1 B06
resource RX_SPI_EXPRESSLRS_BUSY 1 B07
resource GYRO_EXTI 1 C14
resource GYRO_CS 1 A04

# timer
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer C06 AF3
# pin C06: TIM8 CH1 (AF3)
timer C07 AF2
# pin C07: TIM3 CH2 (AF2)
timer B14 AF3
# pin B14: TIM8 CH2N (AF3)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer A00 AF2
# pin A00: TIM5 CH1 (AF2)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer A01 AF2
# pin A01: TIM5 CH2 (AF2)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)

# dma
dma ADC 1 0
# ADC 1: DMA2 Stream 0 Channel 0
dma pin A08 1
# pin A08: DMA2 Stream 1 Channel 6
dma pin C06 0
# pin C06: DMA2 Stream 2 Channel 0
dma pin C07 0
# pin C07: DMA1 Stream 5 Channel 5
dma pin B14 1
# pin B14: DMA2 Stream 3 Channel 7
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin A00 0
# pin A00: DMA1 Stream 2 Channel 6
dma pin C08 1
# pin C08: DMA2 Stream 4 Channel 7
dma pin A01 0
# pin A01: DMA1 Stream 4 Channel 6
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7

# feature
feature RX_SPI
feature MOTOR_STOP
feature OSD

# map
map TAER1234

# master
set rx_spi_protocol = RX_SPI_EXPRESSLRS
set rx_spi_bus = 3
set blackbox_device = SDCARD
set dshot_burst = ON
set battery_meter = ADC
set beeper_inversion = ON
set beeper_od = OFF
set sdcard_detect_inverted = ON
set sdcard_mode = SPI
set sdcard_spi_bus = 2
set max7456_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW270
set gyro_1_align_yaw = 2700
set expresslrs_domain = ISM2400

*/
