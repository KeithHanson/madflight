/*==============================================================================
Generated on: 2024-10-23 18:06:29.141922
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: TALONF4V2
Manufacturer ID: HENA

//copy this line to madflight.ino to use this flight controller (or copy/paste the whole file)
#include <madflight_board_betaflight_HENA-TALONF4V2.h>
==============================================================================*/

#define HW_BOARD_NAME "BETAFLIGHT-HENA-TALONF4V2"
#define HW_MCU "STM32F405"

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
#define HW_OUT_COUNT     5
#define HW_PIN_OUT_LIST  {PB0,PB1,PA3,PA2,PB8}

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
#define HW_SERIAL_COUNT 4
#define HW_PIN_SERIAL { {1,PA9,PA10,PC0}, {3,PB10,PB11,-1}, {4,PA0,PA1,-1}, {6,PC6,PC7,-1} } // {INDEX,TX,RX,INVERTER}

//SPI
#define HW_SPI_COUNT 3
#define HW_PIN_SPI { {1,PA5,PA6,PA7}, {2,PB13,PB14,PB15}, {3,PC10,PC11,PC12} } // {INDEX,SCK,MISO,MOSI}

//I2C
#define HW_I2C_COUNT 0
#define HW_PIN_I2C {  } // {INDEX,SCL,SDA}

//other pins
#define HW_PIN_BEEPER PB4
#define HW_PIN_LED_STRIP PB8
//#define HW_PIN_LED PB5
#define HW_PIN_CAMERA_CONTROL PB9
#define HW_PIN_ADC_BATT PC2
#define HW_PIN_ADC_RSSI PC3
#define HW_PIN_ADC_CURR PC1
#define HW_PIN_SDCARD_CS PB12
#define HW_PIN_SDCARD_DETECT PB7
#define HW_PIN_PINIO PA14
#define HW_PIN_FLASH_CS PB12
#define HW_PIN_OSD_CS PA15
#define HW_PIN_GYRO_EXTI PC4
#define HW_PIN_GYRO_CS PA4
#define HW_PIN_USB_DETECT PC5

//set statements
#define HW_SET_SERIALRX_PROVIDER SBUS
#define HW_SET_MAG_HARDWARE NONE
#define HW_SET_BARO_HARDWARE NONE
#define HW_SET_MOTOR_PWM_PROTOCOL DSHOT600
#define HW_SET_GYRO_TO_USE FIRST
#define HW_SET_RX_SPI_BUS 0
#define HW_SET_RX_SPI_LED_INVERSION OFF
#define HW_SET_ADC_DEVICE 1
#define HW_SET_BLACKBOX_DEVICE SPIFLASH
#define HW_SET_DSHOT_BURST OFF
#define HW_SET_DSHOT_BITBANG AUTO
#define HW_SET_DSHOT_BITBANG_TIMER AUTO
#define HW_SET_CURRENT_METER ADC
#define HW_SET_BATTERY_METER ADC
#define HW_SET_IBATA_SCALE 250
#define HW_SET_BEEPER_INVERSION ON
#define HW_SET_BEEPER_OD OFF
#define HW_SET_BEEPER_FREQUENCY 0
#define HW_SET_SYSTEM_HSE_MHZ 8
#define HW_SET_VTX_SPI_BUS 0
#define HW_SET_MAX7456_CLOCK NOMINAL
#define HW_SET_MAX7456_SPI_BUS 3
#define HW_SET_MAX7456_PREINIT_OPU OFF
#define HW_SET_LED_INVERSION 0
#define HW_SET_FLASH_SPI_BUS 2
#define HW_SET_GYRO_1_BUSTYPE SPI
#define HW_SET_GYRO_1_SPIBUS 1
#define HW_SET_GYRO_1_I2CBUS 0
#define HW_SET_GYRO_1_I2C_ADDRESS 0
#define HW_SET_GYRO_1_SENSOR_ALIGN CW0
#define HW_SET_GYRO_1_ALIGN_ROLL 0
#define HW_SET_GYRO_1_ALIGN_PITCH 0
#define HW_SET_GYRO_1_ALIGN_YAW 0
#define HW_SET_PINIO_BOX 40,255,255,255
#define HW_SET_PINIO_CONFIG 1,1,1,1


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.1.0 Oct 16 2019 / 11:57:16 (c37a7c91a) MSP API: 1.42

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

board_name TALONF4V2
manufacturer_id HENA

# resources
resource BEEPER 1 B04
resource MOTOR 1 B00
resource MOTOR 2 B01
resource MOTOR 3 A03
resource MOTOR 4 A02
resource MOTOR 5 B08
resource LED_STRIP 1 B08
resource SERIAL_TX 1 A09
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 A00
resource SERIAL_TX 6 C06
resource SERIAL_RX 1 A10
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 A01
resource SERIAL_RX 6 C07
resource INVERTER 1 C00
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
resource CAMERA_CONTROL 1 B09
resource ADC_BATT 1 C02
resource ADC_RSSI 1 C03
resource ADC_CURR 1 C01
resource SDCARD_CS 1 B12
resource SDCARD_DETECT 1 B07
resource PINIO 1 A14
resource FLASH_CS 1 B12
resource OSD_CS 1 A15
resource GYRO_EXTI 1 C04
resource GYRO_CS 1 A04
resource USB_DETECT 1 C05

# timer
timer B09 AF3  # pin B09: TIM11 CH1 (AF3)
timer B00 AF1  # pin B00: TIM1 CH2N (AF1)
timer B01 AF3  # pin B01: TIM8 CH3N (AF3)
timer A03 AF1  # pin A03: TIM2 CH4 (AF1)
timer A02 AF1  # pin A02: TIM2 CH3 (AF1)
timer B04 AF2  # pin B04: TIM3 CH1 (AF2)
timer B08 AF2  # pin B08: TIM4 CH3 (AF2)

# feature
feature OSD 
feature RX_SERIAL

# serial
serial 0 64 115200 57600 0 115200

# dma
dma SPI_TX 2 0  # SPI_TX 2: DMA1 Stream 4 Channel 0
dma ADC 1 1     # ADC 1: DMA2 Stream 4 Channel 0
dma pin B00 0   # pin B00: DMA2 Stream 6 Channel 0
dma pin B01 0   # pin B01: DMA2 Stream 2 Channel 0
dma pin A03 1   # pin A03: DMA1 Stream 6 Channel 3
dma pin A02 0   # pin A02: DMA1 Stream 1 Channel 3
dma pin B04 0   # pin B04: DMA1 Stream 4 Channel 5
dma pin B08 0   # pin B08: DMA1 Stream 7 Channel 2

# master
set serialrx_provider = SBUS
set mag_hardware = NONE
set baro_hardware = NONE
set motor_pwm_protocol = DSHOT600
set gyro_to_use = FIRST
set rx_spi_bus = 0
set rx_spi_led_inversion = OFF
set adc_device = 1
set blackbox_device = SPIFLASH
set dshot_burst = OFF
set dshot_bitbang = AUTO
set dshot_bitbang_timer = AUTO
set current_meter = ADC
set battery_meter = ADC
set ibata_scale = 250
set beeper_inversion = ON
set beeper_od = OFF
set beeper_frequency = 0
set system_hse_mhz = 8
set vtx_spi_bus = 0
set max7456_clock = NOMINAL
set max7456_spi_bus = 3
set max7456_preinit_opu = OFF
set led_inversion = 0
set flash_spi_bus = 2
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_i2cBus = 0
set gyro_1_i2c_address = 0
set gyro_1_sensor_align = CW0
set gyro_1_align_roll = 0
set gyro_1_align_pitch = 0
set gyro_1_align_yaw = 0
set pinio_box = 40,255,255,255
set pinio_config = 1,1,1,1

*/
