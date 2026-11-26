# ESP32-S3-Zero Mini Projects

A collection of small, hands-on projects and experiments developed using the ESP32-S3-Zero and ESP-IDF.

This repository documents practical implementations of embedded programming concepts, from basic GPIO operations to peripheral integration and wireless communication. Projects are tested through simulation and physical hardware whenever applicable.

## Goals

- Develop embedded C programming skills.
- Understand GPIO configuration and digital input/output.
- Work with buttons, LEDs, and rotary encoders.
- Explore SPI communication and display integration.
- Gain practical experience with ESP-IDF and FreeRTOS.
- Experiment with Bluetooth Low Energy (BLE).

## Hardware & Tools

- **Microcontroller:** ESP32-S3-Zero
- **Framework:** ESP-IDF
- **Language:** C
- **Simulator:** Wokwi
- **IDE:** Visual Studio Code
- **Hardware:** Breadboard, LEDs, push buttons, resistors, and other electronic components

## Repository Structure

```text
esp32-s3-zero-mini-projects/
│
├── 01-gpio-basics/
│   ├── led-blink/
│   ├── three-led-sequence/
│   └── button-controlled-leds/
│
├── 02-button-handling/
│   ├── button-debounce/
│   └── button-press-detection/
│
├── 03-rotary-encoder/
│
├── 04-spi-communication/
│
├── 05-display-gc9a01/
│
├── 06-menu-system/
│
└── 07-bluetooth/
```

## Progress

| Topic | Status |
|---|---|
| GPIO Output — LED Blink | Completed |
| GPIO Output — Three LED Sequence | Completed (Physical Hardware)|
| GPIO Input — Button-Controlled LEDs | Completed (Physical Hardware) |
| Button Debouncing | Planned |
| Button Press Detection | Planned |
| Rotary Encoder | Planned |
| SPI Communication | Planned |
| GC9A01 Display | Planned |
| Menu System | Planned |
| Bluetooth Low Energy (BLE) | Planned |

## Purpose

This repository serves as a collection of practical embedded systems projects and experiments, building a foundation for more complex hardware-software integrations.

Each project focuses on a specific concept and is documented with its implementation, hardware setup, and results. Experiments are developed incrementally, moving from simulation to physical hardware testing where applicable.
