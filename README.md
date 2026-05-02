# Obstacle-Avoiding-Three-Wheeler
Autonomous 2WD robot that detects and avoids obstacles using IR sensors (Arduino + L298N)

# Obstacle Avoiding Robot (Arduino)

## Overview
A simple 2WD robot that detects obstacles using IR sensors and changes direction automatically.

## Components Used
- Arduino UNO R3
- L298N Motor Driver
- 2 × DC Motors (chassis kit)
- 2 × IR Obstacle Sensors
- 2 × 3.7V Li-ion Batteries
- Switch
- Jumper wires

## How It Works
- IR sensors detect obstacles
- Arduino reads the sensor signals
- Motors are controlled through L298N to change direction

## Build Notes
- Powered using a 2-cell Li-ion battery pack
- Used a switch for power control
- Mounted components using rubber bands
- Adjusted sensor sensitivity for better detection

## Code
Located in `/code` folder

## Future Improvements
- Add ultrasonic sensor
- Add display for debugging
