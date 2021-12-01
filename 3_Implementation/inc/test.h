#define F_CPU 16000000UL

#include <avr/interrupt.h>
#include <avr/io.h>
#include <string.h>
#include <util/delay.h>

#define keypadDirectionRegisterR DDRB
#define keypadPortControlR PORTB
#define keypadPortValueR PINB

#define keypadDirectionRegisterC DDRC
#define keypadPortControlC PORTC
#define keypadPortValueC PINC

#define ctrl PORTD // We are using port D
#define en 2       // enable signal pin 2
#define rw 1       // read/write signal pin 1
#define rs 0       // register select signal pin 0
