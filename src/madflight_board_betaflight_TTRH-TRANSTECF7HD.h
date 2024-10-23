/*==============================================================================
Generated on: 2024-10-23 18:06:29.343171
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: TRANSTECF7HD
Manufacturer ID: TTRH

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_TTRH-TRANSTECF7HD.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-TTRH-TRANSTECF7HD"
#define HW_MCU "STM32F7X2"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6000
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW180FLIP
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PA14
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PC2
#define HW_PIN_IMU_EXTI  PC3

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   PB6
#define HW_PIN_I2C_SCL   PB7

//Outputs:
#define HW_OUT_COUNT     6
#define HW_PIN_OUT_LIST  {PB0,PB1,PC6,PC7,PB3,PB4}

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
#define HW_SERIAL_COUNT 5
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {2,PA2,PA3,-1}, {3,PC10,PC11,-1}, {4,PA0,PA1,-1}, {5,PC12,PD2,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 2
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 1
#define HW_PIN_I2C { {1,PB6,PB7} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_LED_STRIP PA15
//#define HW_PIN_LED PA14
#define HW_PIN_ADC_BATT PC0
#define HW_PIN_ADC_RSSI PB5
#define HW_PIN_ADC_CURR PC1
#define HW_PIN_GYRO_EXTI PC3
#define HW_PIN_GYRO_CS PC2
#define HW_PIN_FLASH_CS PC13
#define HW_PIN_USB_DETECT PA4

//set statements
#define HW_SET_MAG_HARDWARE NONE
#define HW_SET_BARO_HARDWARE NONE
#define HW_SET_SERIALRX_PROVIDER SBUS
#define HW_SET_DSHOT_BURST ON
#define HW_SET_MOTOR_PWM_PROTOCOL DSHOT300
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_PID_PROCESS_DENOM 1
#define HW_SET_MAX7456_SPI_BUS 0
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_FLASH_SPI_BUS 2
#define HW_SET_GYRO_1_SENSOR_ALIGN CW180FLIP
#define HW_SET_GYRO_1_ALIGN_PITCH 1800
#define HW_SET_GYRO_1_ALIGN_YAW 1800


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F7X2 (S7X2) 4.1.2 Dec 22 2019 / 02:21:16 (89051e256) MSP API: 1.42

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_FLASH
#define USE_FLASH_W25Q128FV

board_name TRANSTECF7HD
manufacturer_id TTRH

# name: TransTEC

# resources
resource MOTOR 1 B00
resource MOTOR 2 B01
resource MOTOR 3 C06
resource MOTOR 4 C07
resource MOTOR 5 B03
resource MOTOR 6 B04
resource LED_STRIP 1 A15
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
resource I2C_SCL 1 B06
resource I2C_SDA 1 B07
resource LED 1 A14
resource SPI_SCK 1 A05
resource SPI_MISO 1 A06
resource SPI_MOSI 1 A07
resource SPI_SCK 2 B13
resource SPI_MISO 2 B14
resource SPI_MOSI 2 B15
resource ADC_BATT 1 C00
resource ADC_RSSI 1 B05
resource ADC_CURR 1 C01
resource GYRO_EXTI 1 C03
resource GYRO_CS 1 C02
resource FLASH_CS 1 C13
resource USB_DETECT 1 A04

# timer
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer C06 AF3
# pin C06: TIM8 CH1 (AF3)
timer C07 AF3
# pin C07: TIM8 CH2 (AF3)
timer B03 AF1
# pin B03: TIM2 CH2 (AF1)
timer B04 AF2
# pin B04: TIM3 CH1 (AF2)
timer B08 AF2
# pin B08: TIM4 CH3 (AF2)
timer A15 AF1
# pin A15: TIM2 CH1 (AF1)

# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin C06 0
# pin C06: DMA2 Stream 2 Channel 0
dma pin C07 0
# pin C07: DMA2 Stream 2 Channel 0
dma pin B03 0
# pin B03: DMA1 Stream 6 Channel 3
dma pin B04 0
# pin B04: DMA1 Stream 4 Channel 5
dma pin B08 0
# pin B08: DMA1 Stream 7 Channel 2
dma pin A15 0
# pin A15: DMA1 Stream 5 Channel 3

# feature
feature RX_SERIAL
feature LED_STRIP
feature OSD
 
# serial
serial 0 64 115200 57600 0 115200
serial 1 1 115200 57600 0 115200
serial 4 2048 115200 57600 0 115200

# master
set mag_hardware = NONE
set baro_hardware = NONE
set serialrx_provider = SBUS
set dshot_burst = ON
set motor_pwm_protocol = DSHOT300
set blackbox_device = SPIFLASH
set current_meter = ADC
set battery_meter = ADC
set pid_process_denom = 1
set max7456_spi_bus = 0
set gyro_1_spibus = 1
set flash_spi_bus = 2
set gyro_1_sensor_align = CW180FLIP
set gyro_1_align_pitch = 1800
set gyro_1_align_yaw = 1800

*/
