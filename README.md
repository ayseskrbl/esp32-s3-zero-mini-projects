# ESP32-S3-Zero Mini Projects

Small, hands-on embedded C projects built on the ESP32-S3-Zero with ESP-IDF. Each project isolates one concept (GPIO, input handling, peripherals) and is tested in simulation first, then on physical hardware.

## Projects

| Project | Concepts | Verified on |
|---|---|---|
| [LED Blink](./01-gpio-basics/led-blink) | GPIO output | Wokwi |
| [Three LED Sequence](./01-gpio-basics/three-led-sequence) | GPIO output, timing | Hardware |
| [Button-Controlled LEDs](./01-gpio-basics/button-controlled-leds) | GPIO input, pull-up/pull-down | Hardware |

## Roadmap

- [ ] Button debouncing (GPIO interrupt + FreeRTOS)
- [ ] Rotary encoder (EC11)
- [ ] SPI communication
- [ ] GC9A01 round display
- [ ] Menu system (encoder + display)
- [ ] Bluetooth Low Energy (BLE)

The later items build toward a larger project: [holographic-music-player](https://github.com/ayseskrbl/holographic-music-player).

## Hardware & Tools

- **Board:** ESP32-S3-Zero
- **Framework:** ESP-IDF (C), FreeRTOS
- **Simulator:** Wokwi
- **Editor:** Visual Studio Code
- **Components:** breadboard, LEDs, push buttons, resistors

## Build & Flash

```bash
cd 01-gpio-basics/led-blink
idf.py set-target esp32s3
idf.py build flash monitor
```

## Repository Structure

```text
esp32-s3-zero-mini-projects/
└── 01-gpio-basics/
    ├── led-blink/
    ├── three-led-sequence/
    └── button-controlled-leds/
```

New folders are added as each project is completed.
