# Chirping Bird Cage Theft Detector

This project demonstrates a simple theft detection system for bird cages using an Arduino. The system employs an infrared sensor and a Hall effect sensor to detect unauthorized movements or attempts to open the cage. When a threat is detected, the system triggers a buzzer to sound an alarm.

## Components Used

- **Arduino IDE**
- **Arduino Uno** (or compatible board) - 1 Unit
- **Infrared Sensor (IR)** - 1 Unit
- **Hall Effect Sensor** - 1 Unit
- **Buzzer** - 1 Unit
- **Project Board / BreadBoard** - 1 Unit
- **Jumper Wires**
- **Power Supply** (for Arduino)

# Schematic:

- Below you can see a schematic image to facilitate the wiring of cables from the microcontroller to devices, both input and output sensors:

!Schematic](img/skema.jpg)

## Circuit Diagram

### Wiring Instructions

- **IR Sensor:**
  - **Signal Pin** to Digital Pin 2 (D2) on the Arduino
  - **VCC** to 5V
  - **GND** to GND
- **Hall Effect Sensor:**
  - **Signal Pin** to Digital Pin 3 (D3) on the Arduino
  - **VCC** to 5V
  - **GND** to GND
- **Buzzer:**
  - **Positive Pin** to Digital Pin 8 (D8) on the Arduino
  - **Negative Pin** to GND

## How It Works

- The IR sensor monitors the presence of objects in front of the bird cage.
- The Hall effect sensor detects whether a magnet is present, typically indicating that the cage is closed.
- If the IR sensor detects movement or the Hall effect sensor indicates that the cage is being opened, the buzzer will sound an alarm.
- The buzzer continues to chirp at intervals as a warning signal to deter theft.

## Code Explanation

- **Sensor Initialization:** The IR sensor is connected to pin D2, the Hall effect sensor to pin D3, and the buzzer to pin D8.
- **Alarm Logic:** The code checks if the IR sensor is triggered or if the Hall effect sensor indicates the cage is being opened. If either condition is met, the buzzer is activated in a chirping pattern to sound the alarm.

## Installation

1. Gather all components listed above.
2. Connect the components following the wiring instructions.
3. Open the Arduino IDE and connect your Arduino board.
4. Copy the provided code into the Arduino IDE.
5. Upload the code to your Arduino Uno.

## Usage

- Once installed, the system will automatically monitor the cage.
- If an unauthorized movement is detected, the buzzer will sound the alarm.

## Conclusion

- The Chirping Bird Cage Theft Detector provides a simple yet effective way to protect your bird cage from theft. It can be easily implemented and serves as an audible deterrent to would-be thieves.

- The buzzer will sound when the hall sensor no longer works detect the presence of a magnet or IR sensor obstructed by objects.
