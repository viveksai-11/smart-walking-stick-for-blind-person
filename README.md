# Smart Walking Stick for Blind Persons

## Project Overview

The **Smart Walking Stick for Blind Persons** is an assistive device designed to help visually impaired individuals detect obstacles in their path. This device uses an Arduino microcontroller along with ultrasonic sensors to measure the distance to nearby objects. When an obstacle is detected within a set range, the stick alerts the user through vibrations and a buzzer sound, enhancing safety and mobility.

---

## Features

- Obstacle detection up to 2 meters
- Vibration motor feedback
- Audible buzzer alert
- Compact and lightweight design
- Low power consumption
- Easily extendable with additional modules (e.g., GPS, water sensor)

---

## Components Required

- Arduino Uno or Nano (Microcontroller)
- Ultrasonic Sensor (HC-SR04)
- Vibration Motor
- Buzzer
- 9V Battery and connector
- Breadboard
- Jumper Wires
- Stick/Frame

---

## Project Structure

```
Smart-Walking-Stick/
├── README.md
├── Hardware_Connections.pdf
├── Smart_Stick_Code/
│   ├── smart_stick.ino
│   ├── distance_sensor.c
│   ├── distance_sensor.h
│   ├── vibration_alert.c
│   └── vibration_alert.h
└── Images/
    ├── hardware_setup.jpg
    └── circuit_diagram.png
```

---

## Hardware Connections

| Arduino Pin | Device               |
|-------------|----------------------|
| 9           | Ultrasonic Sensor TRIG|
| 10          | Ultrasonic Sensor ECHO|
| 8           | Buzzer                |
| 7           | Vibration Motor       |
| GND         | Common Ground         |
| 5V          | Power Supply for Sensors|

> **Note:** Connect the buzzer and vibration motor in parallel with appropriate resistors if needed to protect the Arduino board.


---

## Code Explanation

### 1. `smart_stick.ino`
- Main Arduino sketch.
- Initializes the distance sensor and alert system.
- Continuously reads the distance from the ultrasonic sensor.
- Activates buzzer and vibration motor when an obstacle is detected within 2 meters.

### 2. `distance_sensor.c`
- Contains functions to setup and measure distance using the ultrasonic sensor.
- Uses pulseIn function to calculate time taken for the ultrasonic wave to return.

### 3. `distance_sensor.h`
- Header file for `distance_sensor.c`.
- Declares the `setupDistanceSensor()` and `getDistance()` functions.

### 4. `vibration_alert.c`
- Manages the buzzer and vibration motor activation and deactivation.
- Simple HIGH/LOW digital writes to control output devices.

### 5. `vibration_alert.h`
- Header file for `vibration_alert.c`.
- Declares `setupAlertSystem()`, `activateAlert()`, and `deactivateAlert()` functions.

---

## Steps to Run the Project

### 1. Set up Arduino IDE
- Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
- Connect your Arduino board to your PC using a USB cable.

### 2. Prepare the Code
- Open `smart_stick.ino` in Arduino IDE.
- Make sure `distance_sensor.c`, `distance_sensor.h`, `vibration_alert.c`, and `vibration_alert.h` are in the same project folder.

### 3. Connect the Hardware
- Follow the wiring diagram provided in `Hardware_Connections.pdf`.
- Double-check connections to prevent short-circuits.

### 4. Upload the Code
- Select the correct COM port and Arduino board under the Tools menu.
- Click the Upload button.

### 5. Power the Stick
- Connect the 9V battery once the code is successfully uploaded.
- Test obstacle detection by placing objects within 2 meters.

### 6. Debugging
- Use Serial Monitor (9600 baud rate) to read real-time distance values.
- Adjust sensor position for optimal obstacle detection.

---

## Future Improvements

- Add GPS module for tracking
- Integrate a water detection sensor
- Connect via Bluetooth to a smartphone app
- Use a rechargeable Li-ion battery
- Add AI-based obstacle classification using Raspberry Pi

---

## License

This project is open-source and free to use for educational purposes.

---

## Acknowledgements

- Inspired by assistive device needs for visually impaired individuals.
- Special thanks to Arduino community tutorials and documentation.

