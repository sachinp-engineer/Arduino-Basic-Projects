# PIR Motion Detection Alarm using Arduino Uno

![Arduino](https://img.shields.io/badge/Arduino-Uno-blue)
![Simulation](https://img.shields.io/badge/Simulation-Tinkercad-orange)
![Language](https://img.shields.io/badge/Language-C%2B%2B-green)
![License](https://img.shields.io/badge/License-MIT-yellow)

## Project Overview

This project demonstrates a **PIR (Passive Infrared) Motion Detection Alarm System** using an **Arduino Uno**. The system detects motion within the sensor's field of view and provides both **visual** and **audible** alerts.

- 📺 Displays system status on a **16×2 LCD**
- 🚨 Activates a **buzzer** when motion is detected
- 💻 Designed and simulated using **Tinkercad Circuits**

---

## Features

- Motion detection using PIR sensor
- Real-time LCD status display
- Audible alarm using buzzer
- Beginner-friendly Arduino project
- Fully simulated in Tinkercad

---

## Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| PIR Motion Sensor | 1 |
| 16×2 LCD Display | 1 |
| Piezo Buzzer | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| Potentiometer (LCD Contrast) | 1 |

---

## Software Used

- Arduino IDE
- Tinkercad Circuits
- Embedded C/C++

---

## Circuit Connections

### PIR Sensor

| PIR Pin | Arduino Pin |
|----------|-------------|
| VCC | 5V |
| GND | GND |
| OUT | D2 |

### Buzzer

| Buzzer Pin | Arduino Pin |
|------------|-------------|
| Positive (+) | D3 |
| Negative (-) | GND |

### LCD Connections

| LCD Pin | Arduino Pin |
|----------|-------------|
| RS | D7 |
| Enable | D8 |
| D4 | D9 |
| D5 | D10 |
| D6 | D11 |
| D7 | D12 |

---

## Working Principle

1. The Arduino initializes the LCD and PIR sensor.
2. The LCD displays **"Ready to Detect"** after startup.
3. The PIR sensor continuously monitors for motion.
4. When motion is detected:
   - The LCD displays **"Motion Detected!"**
   - The buzzer turns ON for one second.
5. When no motion is detected:
   - The LCD displays **"No Motion"**
   - The buzzer remains OFF.

---

## Project Structure

```
PIR_Motion_Detection_Alarm
│
├── PIR_Motion_Detection_Alarm.ino
├── README.md
├── report.pdf
├── circuit.png
├── source_code.png
├── output_no_motion.png
└── output_motion_detected.png
```

---

## Simulation Results

### No Motion

- LCD displays **No Motion**
- Buzzer remains OFF

### Motion Detected

- LCD displays **Motion Detected!**
- Buzzer sounds for one second

---

## Applications

- Home Security Systems
- Smart Homes
- Intruder Detection
- Office Monitoring
- Automatic Lighting
- Motion-Based Alarm Systems

---

## Learning Outcomes

- Arduino Programming
- Digital Input/Output
- PIR Sensor Interfacing
- LCD Interfacing
- Embedded Systems
- Tinkercad Circuit Simulation

---

## Future Improvements

- GSM-based SMS alerts
- IoT monitoring using ESP32
- Mobile app notifications
- Camera integration
- Relay-controlled security lights

---

## Author

**Sachin P**

Electrical and Electronics Engineering (EEE)

GitHub: https://github.com/YOUR_USERNAME

---

## License

This project is licensed under the MIT License.
