# RoboNordic – prosjekter og kodeeksempler

Kode til guidene og prosjektene på **[robonordic.no](https://robonordic.no/guider/)** – den norske delebutikken for robotikk, elektronikk og 3D-printing. Hver mappe hører til én guide, med lenke tilbake til full forklaring, koblingsskjema og komponenter.

## Innhold

| Mappe | Guide | Plattform |
|---|---|---|
| [`mikrokontrollere/esp32-kom-i-gang`](mikrokontrollere/esp32-kom-i-gang) | [Kom i gang med ESP32](https://robonordic.no/kom-i-gang-med-esp32-din-forste-mikrokontroller/) | ESP32 |
| [`mikrokontrollere/xiao-esp32-c3`](mikrokontrollere/xiao-esp32-c3) | [XIAO ESP32-C3](https://robonordic.no/xiao-esp32-c3-kraftig-mikrokontroller-i-miniformat/) | ESP32-C3 |
| [`sensorer/tof-og-lidar`](sensorer/tof-og-lidar) | [ToF og LiDAR-sensorer](https://robonordic.no/tof-og-lidar-sensorer-presise-avstandsmaalinger-for-robotikk/) | Arduino/ESP32 + Python |

Flere prosjekter kommer etter hvert som guidene publiseres – se [alle prosjekter](https://robonordic.no/category/prosjekter/).

## Slik bruker du koden

- **Arduino-skisser (`.ino`)**: åpne mappen i Arduino IDE 2 eller bruk `arduino-cli compile`. Hver skisse ligger i sin egen mappe, slik Arduino krever.
- **Python**: `pip install -r requirements.txt` i mappen, og kjør skriptet.

Alle Arduino-skisser kompileres med `arduino-cli` før de publiseres. De er eksempler for læring – test alltid på egen maskinvare, og sjekk pinner og spenninger mot ditt eget kort.

## Om RoboNordic

RoboNordic er delebutikken til verkstedet vårt i Drammen. Vi bygger industrielle og medisinske roboter, og selger komponentene vi selv bruker – kontrollert og sendt fra Norge. Spørsmål? [kundeservice@robonordic.no](mailto:kundeservice@robonordic.no)

## Lisens

MIT – bruk koden fritt, også kommersielt. Se [LICENSE](LICENSE).
