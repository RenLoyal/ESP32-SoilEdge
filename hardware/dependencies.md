# ESP32 Dependencies

## Arduino IDE Libraries
| Library | Purpose | Install via Library Manager |
|---|---|---|
| DHT sensor library | DHT22 temp/humi reading | Search "DHT sensor library" |
| Adafruit Unified Sensor | Required by DHT library | Search "Adafruit Unified Sensor" |

## Board Package
- ESP32 by Espressif Systems

## Pin Mapping
| Module | ESP32 Pin |
|---|---|
| Soil Sensor AOUT | GPIO34 (ADC1_CH6) |
| DHT22 DATA | GPIO4 |
| DHT22 VCC | 3.3V |
| DHT22 GND | GND |
| Soil Sensor VCC | 3.3V |
| Soil Sensor GND | GND |

## Notes
- DHT22 DATA pin needs 10k pull-up resistor to VCC
- Soil sensor powered by 3.3V (NOT 5V)
- ADC is 12-bit, range 0~4095
