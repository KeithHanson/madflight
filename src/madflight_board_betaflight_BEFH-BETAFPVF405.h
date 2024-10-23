/*==============================================================================
Generated on: 2024-10-23 18:06:28.966878
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: BETAFPVF405
Manufacturer ID: BEFH

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_BEFH-BETAFPVF405.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-BEFH-BETAFPVF405"
#define HW_MCU "STM32F405"

//Defines from betaflight. Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out.
#define IMU_USE  IMU_USE_SPI_MPU6000
#define IMU_USE  IMU_USE_SPI_ICM42688P
#define BARO_USE  BARO_USE_SPI_BMP280
#define BB_USE  BB_USE_FLASH
#define BB_FLASH_TYPE  "W25Q128FV"
#define OSD_USE  OSD_USE_MAX7456

//Sensor specific setup
#define IMU_ALIGN  IMU_ALIGN_CW270
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

//BARO/MAG I2C: (I2C2)
#define HW_PIN_I2C_SDA   -1
#define HW_PIN_I2C_SCL   -1

//Outputs:
#define HW_OUT_COUNT     6
#define HW_PIN_OUT_LIST  {PB0,PB1,PA3,PA2,PC8,PA8}

//RC Receiver: (SERIAL1)
#define HW_PIN_RCIN_RX   PA10
#define HW_PIN_RCIN_TX   PA9
#define HW_PIN_RCIN_INVERTER  -1

//GPS: (SERIAL3)
#define HW_PIN_GPS_RX    PB11
#define HW_PIN_GPS_TX    PB10
#define HW_PIN_GPS_INVERTER  PC9

//Battery ADC voltage and current inputs:
#define HW_PIN_BAT_V     PC2
#define HW_PIN_BAT_I     PC1

//-------------------------------------

//Serial
#define HW_SERIAL_COUNT 5
#define HW_PIN_SERIAL { {1,PA9,PA10,-1}, {3,PB10,PB11,PC9}, {4,PA0,PA1,-1}, {5,-1,PD2,-1}, {6,PC6,PC7,PC8} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PC10,PC11,PC12} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 0
#define HW_PIN_I2C {  } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PB4
#define HW_PIN_PPM PB8
#define HW_PIN_SONAR_TRIGGER PC9
#define HW_PIN_SONAR_ECHO PA8
#define HW_PIN_LED_STRIP PB6
//#define HW_PIN_LED PB5
#define HW_PIN_ESCSERIAL PB8
#define HW_PIN_ADC_BATT PC2
#define HW_PIN_ADC_RSSI PC0
#define HW_PIN_ADC_CURR PC1
#define HW_PIN_BARO_CS PB3
#define HW_PIN_SDCARD_CS PB12
#define HW_PIN_SDCARD_DETECT PB7
#define HW_PIN_FLASH_CS PB12
#define HW_PIN_OSD_CS PA15
#define HW_PIN_GYRO_EXTI PC4
#define HW_PIN_GYRO_CS PA4
#define HW_PIN_USB_DETECT PC5

//set statements
#define HW_SET_MAG_BUSTYPE I2C
#define HW_SET_MAG_I2C_DEVICE 2
#define HW_SET_MAG_HARDWARE NONE
#define HW_SET_BARO_SPI_DEVICE 3
#define HW_SET_BARO_HARDWARE NONE
#define HW_SET_SERIALRX_PROVIDER SBUS
#define HW_SET_ADC_DEVICE 2
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_DSHOT_IDLE_VALUE 450
#define HW_SET_DSHOT_BURST ON
#define HW_SET_MOTOR_PWM_PROTOCOL DSHOT600
#define HW_SET_MOTOR_POLES 12
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_YAW_MOTORS_REVERSED ON
#define HW_SET_SDCARD_DETECT_INVERTED ON
#define HW_SET_SDCARD_MODE SPI
#define HW_SET_SDCARD_SPI_BUS 2
#define HW_SET_SYSTEM_HSE_MHZ 8
#define HW_SET_VTX_BAND 5
#define HW_SET_VTX_CHANNEL 8
#define HW_SET_VTX_POWER 1
#define HW_SET_VTX_FREQ 5917
#define HW_SET_MAX7456_SPI_BUS 3
#define HW_SET_DASHBOARD_I2C_BUS 2
#define HW_SET_FLASH_SPI_BUS 2
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_SENSOR_ALIGN CW270
#define HW_SET_GYRO_1_ALIGN_YAW 2700
#define HW_SET_GYRO_2_SPIBUS 1


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.1.2 Dec 22 2019 / 02:19:35 (89051e256) MSP API: 1.42

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_ICM42688P
#define USE_ACCGYRO_BMI270
#define USE_BARO
#define USE_BARO_SPI_BMP280
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

board_name BETAFPVF405
manufacturer_id BEFH

# resources
resource BEEPER 1 B04
resource MOTOR 1 B00
resource MOTOR 2 B01
resource MOTOR 3 A03
resource MOTOR 4 A02
resource MOTOR 5 C08
resource MOTOR 6 A08
resource PPM 1 B08
resource SONAR_TRIGGER 1 C09
resource SONAR_ECHO 1 A08
resource LED_STRIP 1 B06
resource SERIAL_TX 1 A09
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 A00
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 A01
resource SERIAL_RX 5 D02
resource SERIAL_RX 6 C07
resource INVERTER 3 C09
resource INVERTER 6 C08
resource LED 1 B05
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 C10
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 C11
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 C12
resource ESCSERIAL 1 B08
resource ADC_BATT 1 C02
resource ADC_RSSI 1 C00
resource ADC_CURR 1 C01
resource BARO_CS 1 B03
resource SDCARD_CS 1 B12
resource SDCARD_DETECT 1 B07
resource FLASH_CS 1 B12
resource OSD_CS 1 A15
resource GYRO_EXTI 1 C04
resource GYRO_CS 1 A04
resource USB_DETECT 1 C05

# timer
timer B08 AF3
# pin B08: TIM10 CH1 (AF3)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer A03 AF1
# pin A03: TIM2 CH4 (AF1)
timer A02 AF1
# pin A02: TIM2 CH3 (AF1)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer A09 AF1
# pin A09: TIM1 CH2 (AF1)
timer A10 AF1
# pin A10: TIM1 CH3 (AF1)

# dma
dma SPI_TX 2 0
# SPI_TX 2: DMA1 Stream 4 Channel 0
dma ADC 2 1
# ADC 2: DMA2 Stream 3 Channel 1
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin A03 1
# pin A03: DMA1 Stream 6 Channel 3
dma pin A02 0
# pin A02: DMA1 Stream 1 Channel 3
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin A09 0
# pin A09: DMA2 Stream 6 Channel 0
dma pin A10 0
# pin A10: DMA2 Stream 6 Channel 0

# feature
feature RX_SERIAL
feature AIRMODE
feature LED_STRIP
feature OSD

# serial
serial 2 64 115200 57600 0 115200

# master
set mag_bustype = I2C
set mag_i2c_device = 2
set mag_hardware = NONE
set baro_spi_device = 3
set baro_hardware = NONE
set serialrx_provider = SBUS
set adc_device = 2
set blackbox_device = SPIFLASH
set dshot_idle_value = 450
set dshot_burst = ON
set motor_pwm_protocol = DSHOT600
set motor_poles = 12
set current_meter = ADC
set battery_meter = ADC
set beeper_inversion = ON
set beeper_od = OFF
set yaw_motors_reversed = ON
set sdcard_detect_inverted = ON
set sdcard_mode = SPI
set sdcard_spi_bus = 2
set system_hse_mhz = 8
set vtx_band = 5
set vtx_channel = 8
set vtx_power = 1
set vtx_freq = 5917
set max7456_spi_bus = 3
set dashboard_i2c_bus = 2
set flash_spi_bus = 2
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW270
set gyro_1_align_yaw = 2700
set gyro_2_spibus = 1

*/
