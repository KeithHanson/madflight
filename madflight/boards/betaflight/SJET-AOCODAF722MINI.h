/*==============================================================================
Generated on: 2023-12-28 16:40:48.526061
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: AOCODAF722MINI
Manufacturer ID: SJET

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include "boards/betaflight/SJET-AOCODAF722MINI.h"
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-SJET-AOCODAF722MINI"
#define HW_MCU "STM32F7X2"

//Defines from betaflight (not all will be used by madflight, and some boards define two or more IMU/MAG/BARO - madflight does not support this)
#define USE_IMU_SPI_MPU6500
#define USE_FLASH_W25Q128FV
#define USE_MAX7456
#define USE_BARO_BMP280

//Sensor specific setup
#define IMU_ROTATE_CW0
#define BARO_I2C_ADR 0
#define MAG_I2C_ADR 0

//LED:
const int HW_PIN_LED      = PA13;
const int HW_LED_ON       = 1; //0:low is on, 1:high is on

//IMU SPI: (SPI1)
const int HW_PIN_SPI_MISO = PA6;
const int HW_PIN_SPI_MOSI = PA7;
const int HW_PIN_SPI_SCLK = PA5;
const int HW_PIN_IMU_CS   = PB2;
const int HW_PIN_IMU_EXTI = PC4;

//BARO/MAG I2C: (I2C1)
const int HW_PIN_I2C_SDA  = PB8;
const int HW_PIN_I2C_SCL  = PB9;

//Outputs:
const int HW_OUT_COUNT    = 8;
const int HW_PIN_OUT[HW_OUT_COUNT] = {PB4,PB5,PB0,PB1,PB6,PB3,PA15,PB7};

//RC Receiver: (SERIAL3)
const int HW_PIN_RCIN_RX  = PB11;
const int HW_PIN_RCIN_TX  = PB10;

//GPS: (SERIAL1)
const int HW_PIN_GPS_RX   = PA10;
const int HW_PIN_GPS_TX   = PA9;

//Battery ADC voltage and current inputs:
const int HW_PIN_BAT_V    = PC2;
const int HW_PIN_BAT_I    = PC1;

//Include Libraries
#include <Wire.h>                      //I2C communication
#include <SPI.h>                       //SPI communication
#include "src/hw_STM32/STM32_PWM.h"    //Servo and oneshot

//Bus Setup
HardwareSerial *rcin_Serial = new HardwareSerial(HW_PIN_RCIN_RX, HW_PIN_RCIN_TX);
HardwareSerial gps_Serial(HW_PIN_GPS_RX, HW_PIN_GPS_TX);
typedef TwoWire HW_WIRETYPE; //define the class to use for I2C
HW_WIRETYPE *i2c = &Wire; //&Wire or &Wire1
SPIClass *spi = &SPI;


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F7X2 (S7X2) 4.2.4 Oct 20 2020 / 08:20:06 (fbcaf8c50) MSP API: 1.43

#define USE_ACC
#define USE_ACC_SPI_MPU6500
#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456
#define USE_BARO
#define USE_BARO_BMP280

board_name AOCODAF722MINI
manufacturer_id SJET

# resources
resource BEEPER 1 C13
resource MOTOR 1 B04
resource MOTOR 2 B05
resource MOTOR 3 B00
resource MOTOR 4 B01
resource MOTOR 5 B06
resource MOTOR 6 B03
resource MOTOR 7 A15
resource MOTOR 8 B07
resource PPM 1 A10
resource LED_STRIP 1 A08
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 A00
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 A01
resource SERIAL_RX 6 C07
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09
resource LED 1 A13
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 C10
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 C11
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 C12
resource ADC_BATT 1 C02
resource ADC_RSSI 1 C00
resource ADC_CURR 1 C01
resource FLASH_CS 1 D02
resource OSD_CS 1 B12
resource GYRO_EXTI 1 C04
resource GYRO_CS 1 B02
resource USB_DETECT 1 C14

# timer
timer A10 AF1
# pin A10: TIM1 CH3 (AF1)
timer B04 AF2
# pin B04: TIM3 CH1 (AF2)
timer B05 AF2
# pin B05: TIM3 CH2 (AF2)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer A15 AF1
# pin A15: TIM2 CH1 (AF1)
timer B03 AF1
# pin B03: TIM2 CH2 (AF1)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)

# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin A10 0
# pin A10: DMA2 Stream 6 Channel 0
dma pin B04 0
# pin B04: DMA1 Stream 4 Channel 5
dma pin B05 0
# pin B05: DMA1 Stream 5 Channel 5
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin A15 0
# pin A15: DMA1 Stream 5 Channel 3
dma pin B03 0
# pin B03: DMA1 Stream 6 Channel 3
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin A08 2
# pin A08: DMA2 Stream 3 Channel 6
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2

# feature
feature RX_SERIAL
feature OSD

# serial
serial 0 64 115200 57600 0 115200

# master
set serialrx_provider = SBUS
set mag_bustype = I2C
set mag_i2c_device = 1
set baro_bustype = I2C
set baro_i2c_device = 1
set serialrx_provider = SBUS
set blackbox_device = SPIFLASH
set dshot_burst = ON
set current_meter = ADC
set battery_meter = ADC
set beeper_inversion = ON
set beeper_od = OFF
set max7456_spi_bus = 2
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1

*/