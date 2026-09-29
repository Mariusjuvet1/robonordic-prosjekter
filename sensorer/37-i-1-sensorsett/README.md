# 37-i-1 sensorsett

Kode til guiden **[37-i-1 sensorsett: Slik bruker du modulene](https://robonordic.no/37-i-1-sensorsett-slik-bruker-du-modulene/)** på robonordic.no.

| Skisse | Moduler | Kobling |
|---|---|---|
| `01_digital_modul` | Tilt, Hall, berøring, reed, IR-hinder, flamme/lyd (DO) | S/DO til pinne 2 |
| `02_analog_modul` | LDR, termistor, mikrofon/flamme (AO), joystick | AO til A0 |
| `03_rgb_led` | RGB-LED (KY-016 / KY-009) | R/G/B til pinne 9/10/11 |
| `04_dreieenkoder` | Dreieenkoder (KY-040) | CLK 2, DT 3, SW 4 |

Pinnemerkingen varierer mellom produsenter – sjekk trykket på modulen før du kobler til.

**Maskinvare:** [37-i-1 sensorsett](https://robonordic.no/product/37-i-1-sensorsett-for-arduino-og-esp32-37-moduler/) og Arduino UNO/Nano. På ESP32: bruk 3V3, GPIO-numre og husk at analogverdiene går til 4095.

Kompilert med `arduino-cli compile --fqbn arduino:avr:uno`.
