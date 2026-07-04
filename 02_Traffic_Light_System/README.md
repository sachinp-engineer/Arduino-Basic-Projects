# 🚦 Traffic Light System using Arduino Uno

![Arduino](https://img.shields.io/badge/Arduino-Uno-blue)
![Simulation](https://img.shields.io/badge/Simulation-Tinkercad-orange)
![Language](https://img.shields.io/badge/Language-C%2B%2B-green)
![License](https://img.shields.io/badge/License-MIT-yellow)

## 📌 Project Overview

This project demonstrates a **Traffic Light Control System** using an **Arduino Uno**. Three LEDs represent the **Red**, **Yellow**, and **Green** traffic signals, while buzzers provide an audible indication for each signal. The entire circuit was designed and simulated using **Tinkercad Circuits**.

The traffic signal operates in the following sequence:

🔴 Stop → 🟡 Get Ready → 🟢 Go → 🟡 Slow Down → Repeat

---

## ✨ Features

- Sequential traffic light operation
- LED indication for each traffic signal
- Audible buzzer alerts
- Beginner-friendly Arduino project
- Designed and simulated using Tinkercad

---

## 🛠 Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| Breadboard | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| 220Ω Resistors | 3 |
| Piezo Buzzers | 3 |
| Jumper Wires | As Required |

---

## 💻 Software Used

- Arduino IDE
- Tinkercad Circuits
- Embedded C/C++

---

## 🔌 Pin Configuration

| Component | Arduino Pin |
|-----------|-------------|
| Green LED | D8 |
| Yellow LED | D12 |
| Red LED | D13 |

> **Note:** Each LED is connected through a **220Ω resistor**. Buzzers are connected in parallel with the corresponding LED to provide an audible indication.

---

## ⚙️ Working Principle

1. The Arduino initializes all LED pins as outputs.
2. The **Red LED** turns ON for **5 seconds**, indicating **STOP**.
3. The **Yellow LED** turns ON for **2 seconds**, indicating **GET READY**.
4. The **Green LED** turns ON for **5 seconds**, indicating **GO**.
5. The **Yellow LED** turns ON again for **2 seconds**, indicating **SLOW DOWN**.
6. The sequence repeats continuously.

---

## 📂 Project Structure

```
Traffic_Light_System
│
├── Traffic_Light_System.ino
├── README.md
├── Traffic_Light_System_Report.pdf
├── circuit.png
├── source_code.png
├── output_red.png
├── output_yellow.png
└── output_green.png
```

---

## 📸 Circuit Diagram

Add your Tinkercad circuit screenshot here.

```
circuit.png
```

---

## 📷 Simulation Results

### 🔴 Red Signal

- Red LED ON
- Yellow LED OFF
- Green LED OFF
- Red buzzer active

### 🟡 Yellow Signal

- Yellow LED ON
- Red LED OFF
- Green LED OFF
- Yellow buzzer active

### 🟢 Green Signal

- Green LED ON
- Red LED OFF
- Yellow LED OFF
- Green buzzer active

---

## 🚀 Applications

- Traffic signal simulation
- Embedded systems laboratory
- Arduino programming practice
- Digital electronics education
- Microcontroller learning projects

---

## 🎯 Learning Outcomes

- Arduino Programming
- Digital Output Control
- LED Interfacing
- Embedded C Programming
- Timing Functions (`delay()`)
- Circuit Simulation using Tinkercad

---

## 🔮 Future Improvements

- Add pedestrian crossing button
- Include countdown timer using a 7-segment display
- Implement automatic traffic control using IR sensors
- IoT-based traffic monitoring with ESP32
- Smart traffic management using AI

---

## 👨‍💻 Author

**Sachin P**

Electrical and Electronics Engineering (EEE)

---

## 📄 License

This project is licensed under the **MIT License**.

---

## ⭐ Repository

If you found this project helpful, consider giving it a ⭐ on GitHub!
