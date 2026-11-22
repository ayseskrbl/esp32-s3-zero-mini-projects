# LED Blink — ESP32-S3

A simple LED blinking experiment using ESP32-S3 and ESP-IDF.

## Objective

Learn the basics of GPIO output control by turning an external LED on and off.

## Hardware Components

- ESP32-S3
- Breadboard
- 1x Red LED
- 220Ω resistor
- Jumper wires

## Circuit

The LED is connected to GPIO 2 through a 220Ω current-limiting resistor. The ESP32-S3 and LED share a common GND connection.

See [`diagram.json`](./diagram.json) for the Wokwi circuit configuration.

## Implementation

The experiment uses the ESP-IDF GPIO driver and FreeRTOS task delay functionality.

- `gpio_reset_pin()` — Resets the selected GPIO pin.
- `gpio_set_direction()` — Configures the pin as an output.
- `gpio_set_level()` — Controls the LED state.
- `vTaskDelay()` — Adds a delay between state changes.

## Behavior

- LED ON: 500 ms
- LED OFF: 500 ms
- Repeats continuously.

## Framework & Language

- ESP-IDF
- C
- Wokwi Simulator

## Status

Completed — Wokwi simulation.
