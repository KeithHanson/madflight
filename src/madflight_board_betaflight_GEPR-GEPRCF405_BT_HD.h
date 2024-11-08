/*==============================================================================
Generated on: 2024-10-23 18:06:29.094924
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: GEPRCF405_BT_HD
Manufacturer ID: GEPR

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_GEPR-GEPRCF405_BT_HD.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-GEPR-GEPRCF405_BT_HD"
#define HW_MCU "STM32F405"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define BARO_USE  BARO_USE_BMP280
#define BARO_USE  BARO_USE_DPS310
#define IMU_USE  IMU_USE_SPI_MPU6000
#define IMU_USE  IMU_USE_SPI_ICM42688P
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"
#define OSD_USE  OSD_USE_MAX7456

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW180
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PC14
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI3)
#define HW_PIN_SPI_MISO  PB4
#define HW_PIN_SPI_MOSI  PB5
#define HW_PIN_SPI_SCLK  PB3
#define HW_PIN_IMU_CS    PA15
#define HW_PIN_IMU_EXTI  PC3

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   PB8
#define HW_PIN_I2C_SCL   PB9

//Outputs:
#define HW_OUT_COUNT     8
#define HW_PIN_OUT_LIST  {PA8,PA9,PA10,PC8,PC9,PB0,PB10,PB11}

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
#define HW_PIN_BAT_I     PC0

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 7
#define HW_PIN_SERIAL { {1,PB6,PB7,-1}, {2,PA2,PA3,-1}, {3,PC10,PC11,-1}, {4,PA0,PA1,-1}, {5,PC12,PD2,-1}, {6,PC6,PC7,-1}, {11,PB2,PC5,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PB3,PB4,PB5} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 1
#define HW_PIN_I2C { {1,PB8,PB9} } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PC13
#define HW_PIN_PPM PC7
#define HW_PIN_LED_STRIP PB1
//#define HW_PIN_LED PC14
#define HW_PIN_LED_2 PC15
#define HW_PIN_ADC_BATT PC1
#define HW_PIN_ADC_RSSI PC2
#define HW_PIN_ADC_CURR PC0
#define HW_PIN_PINIO PA13
#define HW_PIN_PINIO_2 PA14
#define HW_PIN_FLASH_CS PB12
#define HW_PIN_OSD_CS PA4
#define HW_PIN_GYRO_EXTI PC3
#define HW_PIN_GYRO_CS PA15
#define HW_PIN_USB_DETECT PC4

//set statements
#define HW_SET_MAG_BUSTYPE I2C
#define HW_SET_MAG_I2C_DEVICE 1
#define HW_SET_BARO_BUSTYPE I2C
#define HW_SET_BARO_I2C_DEVICE 1
#define HW_SET_SERIALRX_PROVIDER SBUS
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_MOTOR_PWM_PROTOCOL DSHOT600
#define HW_SET_DSHOT_BURST AUTO
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_IBATA_SCALE 179
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_SYSTEM_HSE_MHZ 8
#define HW_SET_MAX7456_SPI_BUS 1
#define HW_SET_FLASH_SPI_BUS 2
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 3
#define HW_SET_GYRO_1_SENSOR_ALIGN CW180
#define HW_SET_GYRO_1_ALIGN_YAW 2700
#define HW_SET_PINIO_CONFIG 1,129,1,1
#define HW_SET_PINIO_BOX 255,0,255,255


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.1.6 Apr 25 2020 / 05:11:18 (283bda8bf) MSP API: 1.42

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_ACC_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_DPS310
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

board_name GEPRCF405_BT_HD
manufacturer_id GEPR

# resources
resource BEEPER 1 C13
resource MOTOR 1 A08
resource MOTOR 2 A09
resource MOTOR 3 A10
resource MOTOR 4 C08
resource MOTOR 5 C09
resource MOTOR 6 B00
resource MOTOR 7 B10
resource MOTOR 8 B11

resource PPM 1 C07
resource LED_STRIP 1 B01
resource SERIAL_TX 1 B06
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 C10
resource SERIAL_TX 4 A00
resource SERIAL_TX 5 C12
resource SERIAL_TX 6 C06
resource SERIAL_TX 11 B02
resource SERIAL_RX 1 B07
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 C11
resource SERIAL_RX 4 A01
resource SERIAL_RX 5 D02
resource SERIAL_RX 6 C07
resource SERIAL_RX 11 C05
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09
resource LED 1 C14
resource LED 2 C15
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05
resource ADC_BATT 1 C01
resource ADC_RSSI 1 C02
resource ADC_CURR 1 C00
resource PINIO 1 A13
resource PINIO 2 A14
resource FLASH_CS 1 B12
resource OSD_CS 1 A04
resource GYRO_EXTI 1 C03
resource GYRO_CS 1 A15
resource USB_DETECT 1 C04

# timer
timer C07 AF3
# pin C07: TIM8 CH2 (AF3)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer A09 AF1
# pin A09: TIM1 CH2 (AF1)
timer A10 AF1
# pin A10: TIM1 CH3 (AF1)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer B10 AF1
# pin B10: TIM2 CH3 (AF1)
timer B11 AF1
# pin B11: TIM2 CH4 (AF1)

# dma
dma ADC 1 0
# ADC 1: DMA2 Stream 0 Channel 0
dma ADC 3 0
# ADC 3: DMA2 Stream 0 Channel 2
dma pin C07 0
# pin C07: DMA2 Stream 2 Channel 0
dma pin A08 1
# pin A08: DMA2 Stream 1 Channel 6
dma pin A09 1
# pin A09: DMA2 Stream 2 Channel 6
dma pin A10 1
# pin A10: DMA2 Stream 6 Channel 6
dma pin C08 1
# pin C08: DMA2 Stream 4 Channel 7
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin B10 0
# pin B10: DMA1 Stream 1 Channel 3
dma pin B11 0
# pin B11: DMA1 Stream 7 Channel 3

# feature
feature RX_SERIAL
feature LED_STRIP
feature OSD

# serial
serial 4 1 115200 57600 0 115200
serial 5 64 115200 57600 0 115200

# led
led 0 0,15::ATI:0
led 1 1,15::ATI:0
led 2 2,15::ATI:0
led 3 3,15::ATI:0
led 4 4,15::ATI:0
led 5 5,15::ATI:0
led 6 6,15::ATI:0

# aux
aux 0 0 0 1700 2100 0 0

# master
set mag_bustype = I2C
set mag_i2c_device = 1
set baro_bustype = I2C
set baro_i2c_device = 1
set serialrx_provider = SBUS
set blackbox_device = SPIFLASH
set motor_pwm_protocol = DSHOT600
set dshot_burst = AUTO
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 179
set beeper_inversion = ON
set beeper_od = OFF
set system_hse_mhz = 8
set max7456_spi_bus = 1
set flash_spi_bus = 2
set gyro_1_bustype = SPI
set gyro_1_spibus = 3
set gyro_1_sensor_align = CW180
set gyro_1_align_yaw = 2700
set pinio_config = 1,129,1,1
set pinio_box = 255,0,255,255

*/