#ifndef _MICROBIT_V2_
#define _MICROBIT_V2_

// Master clock frequency

#define VARIANT_MCK (64000000ul)

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array

#define PINS_COUNT			(33)
#define NUM_DIGITAL_PINS	(33)
#define NUM_ANALOG_INPUTS	(7)
#define NUM_ANALOG_OUTPUTS	(0)

// Buttons

#define PIN_BUTTON_A		(5)
#define PIN_BUTTON_B		(11)

// Analog pins

#define PIN_A0				(0)
#define PIN_A1				(1)
#define PIN_A2				(2)
#define PIN_A3				(3)
#define PIN_A4				(4)
#define PIN_A5				(10)
#define PIN_A6				(27)

#define ADC_RESOLUTION 10
static const uint8_t A0 = PIN_A0;
static const uint8_t A1 = PIN_A1;
static const uint8_t A2 = PIN_A2;
static const uint8_t A3 = PIN_A3;
static const uint8_t A4 = PIN_A4;
static const uint8_t A5 = PIN_A5;
static const uint8_t A6 = PIN_A5;

// Serial

#define PIN_SERIAL_RX		(34)
#define PIN_SERIAL_TX		(33)

// SPI

#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO		(14)
#define PIN_SPI_MOSI		(15)
#define PIN_SPI_SCK			(13)

// Wire Interfaces (external and internal)

#define WIRE_INTERFACES_COUNT 2

#define PIN_WIRE_SDA		(19)
#define PIN_WIRE_SCL		(20)

#define PIN_WIRE1_SDA       (30)
#define PIN_WIRE1_SCL       (31)

#ifdef __cplusplus
}
#endif // __cplusplus

#endif
