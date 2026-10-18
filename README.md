# Arduino / ESP32 Basic Electronics

Small sketches I wrote to explore how basic electronic components behave, by reading them with a microcontroller and printing the results to the Serial Monitor.

| Sketch | Board | What it does |
|---|---|---|
| `capacitor_reading.ino` | ESP32 | Reads the voltage across a charging/discharging capacitor on analog pin 32 and prints it every 200 ms. |
| `diode.ino` | ESP32 / Arduino | Reads a digital signal after a diode on pin 25 and reports whether a high voltage got through. |
| `inductors.ino` | ESP32 | Detects back EMF from an inductor through a voltage divider on analog pin 35, ignoring readings below a noise threshold. |
| `potentiometer_reading.ino` | Arduino Uno | Reads a potentiometer on A0 and maps it (0–1023 → 0–255) to dim an LED on PWM pin 9. |

## Running a sketch

1. Open the `.ino` file in the Arduino IDE (it will offer to put it in a folder of the same name).
2. Select your board (ESP32 Dev Module or Arduino Uno) and port.
3. Wire the component to the pin listed above, upload, and open the Serial Monitor at **115200 baud**.

## Concepts covered

- Analog (`analogRead`) vs digital (`digitalRead`) inputs.
- Using PWM (`analogWrite`) and `map()` to turn a sensor reading into an output.
- Filtering noise with a simple threshold.
