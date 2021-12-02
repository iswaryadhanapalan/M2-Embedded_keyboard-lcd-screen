# Keyboard & Lcd Screen
This is a 4x4 keypad that displays letters on the lcd screen based on which key has been pressed. Built using an atmega328p, a 4x4 keypad, a resistor and lcd screen. The code runs on C.
# LCD
An LCD is a display device that uses liquid material for its pixels. Like all display devices, LCDs contain many small dots, known as pixels. The pixels are illuminated by backlighting. When the backlighting is activated, it will project light at the pixels to create an image.
The liquid pixels are placed between two layers of polarizing glass. With both layers being polarized, the illumination produced by the backlighting can shine through the liquid pixels and out the LCD’s top layer.While all LCDs use liquid pixels between layers of polarizing glass, there are several different types of LCDs, including the following:

Twisted nematic,
In-plane switching,
Super in-plane switching,
Vertical alignment,
Advanced fringe field switching.

# Getting Started
Basic components required are:
1. Microcontroller (Atmega 328p-pu)
2. Lcd 1602A
# Prerequisite
In this case I was using the terminal from linux
Install avr gcc by running the following command

sudo apt-get install gcc-avr binutils-avr avr-libc

Install avrdude by running

sudo apt-get install avrdude
# Software used
1. SimulIDE
2. GCC compiler for AVR
3. Code block
4. vs code
#  4 W'S AND 1 H

## Who

        Anyone can Create and dispaly letters in lcd screen.

## What
   
       The project is developed using an atmega328p, a 4x4 keypad, a resistor and lcd screen.    

## When

       Keypad that displays letters on the lcd screen based on which key has been pressed at anytime.

## Why

       It is developed on simple language and easy to use.
## How

        Based on key pressed the letters will be displayed in LCD screen.
# Design
## Schematic diagram
![schematic](https://user-images.githubusercontent.com/94157594/144371516-59f8211f-0520-4b3c-9f1f-9182844e35d5.png)
## Circuit diagram
![circuit diagram](https://user-images.githubusercontent.com/94157594/144371564-b776aea7-4b94-4824-b6d1-82c8139d0e7e.png)
# Implementation
## Introduction
This folder conatins all the coding files as well as the resources and testing files neede for proper execution of program
## Instructions to execute
1.Clone my repository
2.Go to 3_Implementation folder
3.Make sure your system meets all software and hardware requirements
4.Run "make run" command in terminal for main code execution
5.Run "make run_test" command in terminal for test code execution.
## Folder Structure
|Column 1 Header |Column 2 Header |
|--- |--- |
|Inc |All header files|
| | |
|Src |Main source code for system|
| | |
|test |All source code and data for testing purposes|
| | |



