/*==============================================================================
Generated on: 2024-10-23 18:06:29.201655
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: SYNERGYF4
Manufacturer ID: KLEE

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_KLEE-SYNERGYF4.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-KLEE-SYNERGYF4"
#define HW_MCU "STM32F405"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6000
#define IMU_USE  IMU_USE_SPI_MPU6500
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"
#define OSD_USE  OSD_USE_MAX7456

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW0FLIP
#define BARO_I2C_ADR  0
#define MAG_I2C_ADR  0

//LED:
#define HW_PIN_LED       PB5
#define HW_LED_ON        1 //0:low is on, 1:high is on

//IMU SPI: (SPI1)
#define HW_PIN_SPI_MISO  PA6
#define HW_PIN_SPI_MOSI  PA7
#define HW_PIN_SPI_SCLK  PA5
#define HW_PIN_IMU_CS    PA4
#define HW_PIN_IMU_EXTI  PC4

//BARO/MAG I2C: (I2C1)
#define HW_PIN_I2C_SDA   -1
#define HW_PIN_I2C_SCL   -1

//Outputs:
#define HW_OUT_COUNT     4
#define HW_PIN_OUT_LIST  {PB0,PB1,PA3,PA2}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  PC0

//GPS: (SERIAL3)
#define HW_PIN_GPS_RX    PB11
#define HW_PIN_GPS_TX    PB10
#define HW_PIN_GPS_INVERTER  -1

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC2
#define HW_PIN_BAT_I     PC1

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 3
#define HW_PIN_SERIAL { {1,PA9,PA10,PC0}, {3,PB10,PB11,-1}, {6,PC6,PC7,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 2
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {3,PC10,PC11,PC12} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 0
#define HW_PIN_I2C {  } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PB4
#define HW_PIN_PPM PB14
#define HW_PIN_PWM PB14
#define HW_PIN_PWM_2 PB15
#define HW_PIN_PWM_3 PC6
#define HW_PIN_PWM_4 PC7
#define HW_PIN_PWM_5 PC8
#define HW_PIN_PWM_6 PC9
#define HW_PIN_SONAR_TRIGGER PA1
#define HW_PIN_SONAR_ECHO PA8
#define HW_PIN_LED_STRIP PA1
//#define HW_PIN_LED PB5
#define HW_PIN_ESCSERIAL PB14
#define HW_PIN_CAMERA_CONTROL PA8
#define HW_PIN_ADC_BATT PC2
#define HW_PIN_ADC_RSSI PA0
#define HW_PIN_ADC_CURR PC1
#define HW_PIN_PINIO PB15
#define HW_PIN_FLASH_CS PB3
#define HW_PIN_OSD_CS PA15
#define HW_PIN_GYRO_EXTI PC4
#define HW_PIN_GYRO_CS PA4
#define HW_PIN_USB_DETECT PC5

//set statements
#define HW_SET_ADC_DEVICE 2
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_MOTOR_PWM_PROTOCOL DSHOT600
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_PID_PROCESS_DENOM 1
#define HW_SET_SYSTEM_HSE_MHZ 8
#define HW_SET_MAX7456_SPI_BUS 3
#define HW_SET_DASHBOARD_I2C_BUS 2
#define HW_SET_PINIO_BOX 40,255,255,255
#define HW_SET_FLASH_SPI_BUS 3
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW0FLIP
#define HW_SET_GYRO_2_SPIBUS 1


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.0.0 Apr  1 2019 / 19:06:47 (88665a678) MSP API: 1.41

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_ACC_SPI_MPU6500
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_MPU6500
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

board_name SYNERGYF4
manufacturer_id KLEE

# resources
resource BEEPER 1 B04
resource MOTOR 1 B00
resource MOTOR 2 B01
resource MOTOR 3 A03
resource MOTOR 4 A02
resource PPM 1 B14
resource PWM 1 B14
resource PWM 2 B15
resource PWM 3 C06
resource PWM 4 C07
resource PWM 5 C08
resource PWM 6 C09
resource SONAR_TRIGGER 1 A01
resource SONAR_ECHO 1 A08
resource LED_STRIP 1 A01
resource SERIAL_TX 1 A09
resource SERIAL_TX 3 B10
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 3 B11
resource SERIAL_RX 6 C07
resource INVERTER 1 C00
resource LED 1 B05
resource SPI_SCK 1 A05
resource SPI_SCK 3 C10
resource SPI_MISO 1 A06
resource SPI_MISO 3 C11
resource SPI_MOSI 1 A07
resource SPI_MOSI 3 C12
resource ESCSERIAL 1 B14
resource CAMERA_CONTROL 1 A08
resource ADC_BATT 1 C02
resource ADC_RSSI 1 A00
resource ADC_CURR 1 C01
resource PINIO 1 B15
resource FLASH_CS 1 B03
resource OSD_CS 1 A15
resource GYRO_EXTI 1 C04
resource GYRO_CS 1 A04
resource USB_DETECT 1 C05

# timer
timer B14 AF9
# pin B14: TIM12 CH1 (AF9)
timer B15 AF9
# pin B15: TIM12 CH2 (AF9)
timer C06 AF3
# pin C06: TIM8 CH1 (AF3)
timer C07 AF3
# pin C07: TIM8 CH2 (AF3)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer A03 AF1
# pin A03: TIM2 CH4 (AF1)
timer A02 AF1
# pin A02: TIM2 CH3 (AF1)
timer A01 AF2
# pin A01: TIM5 CH2 (AF2)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer A09 AF1
# pin A09: TIM1 CH2 (AF1)
timer A10 AF1
# pin A10: TIM1 CH3 (AF1)

# dma
dma ADC 2 1
# ADC 2: DMA2 Stream 3 Channel 1
dma pin C06 0
# pin C06: DMA2 Stream 2 Channel 0
dma pin C07 0
# pin C07: DMA2 Stream 2 Channel 0
dma pin C08 0
# pin C08: DMA2 Stream 2 Channel 0
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin A03 1
# pin A03: DMA1 Stream 6 Channel 3
dma pin A02 0
# pin A02: DMA1 Stream 1 Channel 3
dma pin A01 0
# pin A01: DMA1 Stream 4 Channel 6
dma pin A08 0
# pin A08: DMA2 Stream 6 Channel 0
dma pin A09 0
# pin A09: DMA2 Stream 6 Channel 0
dma pin A10 0
# pin A10: DMA2 Stream 6 Channel 0

# feature
feature LED_STRIP
feature OSD
feature AIRMODE

# serial
serial 0 64 115200 57600 0 115200
serial 2 2048 115200 57600 0 115200

# led
led 0 0,0::CV:0

# master
set adc_device = 2
set blackbox_device = SPIFLASH
set motor_pwm_protocol = DSHOT600
set current_meter = ADC
set battery_meter = ADC
set beeper_inversion = ON
set beeper_od = OFF
set pid_process_denom = 1
set system_hse_mhz = 8
set max7456_spi_bus = 3
set dashboard_i2c_bus = 2
set pinio_box = 40,255,255,255
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW0FLIP
set gyro_2_spibus = 1

*/
