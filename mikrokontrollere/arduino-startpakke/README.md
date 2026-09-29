# Arduino-startpakke: dine første fem prosjekter

Kode til guiden **[Arduino-startpakke: Dine første fem prosjekter](https://robonordic.no/arduino-startpakke-dine-forste-fem-prosjekter/)** på robonordic.no.

| Skisse | Hva den gjør | Kobling |
|---|---|---|
| `01_blink` | Blinker en ekstern LED | LED + 220 Ω på pinne 8 |
| `02_knapp_led` | Knappen slår LED-en av og på (med prellfilter) | Knapp pinne 2–GND, LED pinne 8 |
| `03_dimmer_potmeter` | Potmeteret styrer lysstyrken med PWM | Potmeter til A0, LED pinne 9 |
| `04_trafikklys` | Trafikklys med fotgjengerknapp | LED 10/11/12, knapp pinne 2 |
| `05_summer_melodi` | Spiller en tonerekke på passiv summer | Summer pinne 6, knapp pinne 2 |

**Maskinvare:** Arduino UNO R3 eller kompatibelt kort, for eksempel [Arduino UNO R3 Startkit](https://robonordic.no/product/arduino-uno-r3-startkit-830-deler-med-breadboard-og-komponenter/).

Kompilert med `arduino-cli compile --fqbn arduino:avr:uno`.
