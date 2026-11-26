# Three LED Sequence

A simple ESP32-S3 experiment using three LEDs connected to separate GPIO pins. The LEDs turn on one at a time in a repeating sequence.

## Objectives

- Configure multiple GPIO pins as output.
- Control LEDs independently using `gpio_set_level()`.
- Use `vTaskDelay()` to create time intervals.
- Implement a repeating sequence with a `while` loop.

## Hardware

- ESP32-S3-Zero
- 3 LEDs
- 3 × 330Ω resistors
- Breadboard
- Jumper wires

## GPIO Connections

| Component | ESP32-S3 GPIO |
|---|---|
| LED 1 | GPIO 2 |
| LED 2 | GPIO 10 |
| LED 3 | GPIO 8 |

Each LED is connected in series with its own current-limiting resistor. All three circuits share GND.

## How It Works

The program continuously cycles through three LEDs:

1. LED 1 turns on for 500 ms.
2. LED 2 turns on for 500 ms.
3. LED 3 turns on for 500 ms.
4. The sequence repeats.

Only one LED remains on at a time.

## Software

- ESP-IDF
- C
- FreeRTOS

## Learning Notes

This experiment builds on the basic GPIO output and LED blink exercise. It introduces independent control of multiple output pins and sequential execution using FreeRTOS delays.

**Status:** Completed
