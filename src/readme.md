# Sharp Memory LCD Test

## Wiring — nRF52840 DK to LS011B7DH03
- MOSI → P0.23 (pin 11)
- SCK  → P0.25 (pin 13)
- CS   → P0.17 (A0)
- VCC  → 3.3V
- GND  → GND

To get the pins for the Development kit:
code ~/.platformio/packages/framework-arduinonordicnrf5/variants/nRF52DK/variant.h

#define PIN_SPI_MISO         (12)
#define PIN_SPI_MOSI         (11)
#define PIN_SPI_SCK          (13)

code ~/.platformio/packages/framework-arduinonordicnrf5/variants/nRF52DK/variant.cpp