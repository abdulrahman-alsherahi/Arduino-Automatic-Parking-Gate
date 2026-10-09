# Arduino Automatic Parking Gate

A simple automatic parking gate system built with Arduino.

The system uses an ultrasonic sensor to detect a nearby vehicle or object.  
When an object comes closer than 15 cm, the servo motor opens the gate automatically.

## Features

- Detects nearby objects using an HC-SR04 ultrasonic sensor
- Opens the gate automatically using a servo motor
- Green LED indicates the gate is closed
- Red LED indicates the gate is open
- Displays the measured distance in the Serial Monitor

## Components

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Green LED
- Red LED
- 2 × 220Ω resistors
- Breadboard
- Jumper wires

## Connections

### HC-SR04

| HC-SR04 | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | Pin 7 |
| ECHO | Pin 8 |

### Servo Motor

| Servo | Arduino |
|---|---|
| VCC | 5V |
| GND | GND |
| Signal | Pin 9 |

### LEDs

| Component | Arduino |
|---|---|
| Green LED | Pin 3 |
| Red LED | Pin 4 |

Each LED is connected through a 220Ω resistor.

## How It Works

1. The ultrasonic sensor continuously measures the distance.
2. If the detected object is closer than 15 cm:
   - The servo rotates to 90°.
   - The gate opens.
   - The red LED turns on.
3. If the object is farther than 15 cm:
   - The servo returns to 0°.
   - The gate closes.
   - The green LED turns on.

## Current Version

### Version 1.0

- Automatic object detection
- Automatic servo gate control
- Red and green status LEDs

## Future Improvements

Planned upgrades:

- LCD display
- Buzzer
- Improved parking gate model
- Vehicle counter
- Entry and exit sensors
- Automatic lighting
- More advanced parking logic
