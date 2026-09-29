# RoboNordic – prosjekter og kodeeksempler

Kode til guidene og prosjektene på **[robonordic.no](https://robonordic.no/guider/)** – den norske delebutikken for robotikk, elektronikk og 3D-printing. Hver mappe hører til én guide, med lenke tilbake til full forklaring, koblingsskjema og komponenter.

## Innhold

| Mappe | Guide | Plattform |
|---|---|---|
| [`cad/openscad`](cad/openscad) | [OpenSCAD: programmatisk 3D-modellering](https://robonordic.no/openscad-programmatisk-3d-modellering-for-ingeniorer/) | OpenSCAD |
| [`cnc/g-code`](cnc/g-code) | [G-code grunnleggende](https://robonordic.no/g-code-grunnleggende-forstaa-cnc-maskinens-spraak/) | CNC (GRBL o.l.) |
| [`mikrokontrollere/arduino-startpakke`](mikrokontrollere/arduino-startpakke) | [Arduino-startpakke: fem første prosjekter](https://robonordic.no/arduino-startpakke-dine-forste-fem-prosjekter/) | Arduino UNO |
| [`mikrokontrollere/esp32-kom-i-gang`](mikrokontrollere/esp32-kom-i-gang) | [Kom i gang med ESP32](https://robonordic.no/kom-i-gang-med-esp32-din-forste-mikrokontroller/) | ESP32 |
| [`mikrokontrollere/xiao-esp32-c3`](mikrokontrollere/xiao-esp32-c3) | [XIAO ESP32-C3](https://robonordic.no/xiao-esp32-c3-kraftig-mikrokontroller-i-miniformat/) | ESP32-C3 |
| [`programvare/fastapi-maker`](programvare/fastapi-maker) | [FastAPI for maker-prosjekter](https://robonordic.no/fastapi-for-maker-prosjekter-bygg-apier-raskt/) | Python 3.10+ |
| [`programvare/kalman-filter`](programvare/kalman-filter) | [Kalman-filter forklart](https://robonordic.no/kalman-filter-forklart-sensordata-uten-stoy/) | Python 3.10+ |
| [`raspberry-pi/kom-i-gang`](raspberry-pi/kom-i-gang) | [Raspberry Pi fra null til prosjekt](https://robonordic.no/raspberry-pi-fra-null-til-prosjekt-komplett-oppsettguide/) | Raspberry Pi (Bookworm) |
| [`regulering/pid-regulering`](regulering/pid-regulering) | [PID-regulering i praksis](https://robonordic.no/pid-regulering-i-praksis-kontroller-motorer-og-temperaturer/) | Arduino UNO |
| [`robotikk/linjefolger`](robotikk/linjefolger) | [Bygg en linjefølgerrobot](https://robonordic.no/bygg-en-linjefolgerobot-komplett-prosjektguide/) | Arduino UNO |
| [`robotikk/robotarm-servo`](robotikk/robotarm-servo) | [Robotarm med servomotorer](https://robonordic.no/robotarm-med-servomotorer-bygg-og-programmer/) | Arduino UNO |
| [`sensorer/37-i-1-sensorsett`](sensorer/37-i-1-sensorsett) | [37-i-1 sensorsett](https://robonordic.no/37-i-1-sensorsett-slik-bruker-du-modulene/) | Arduino UNO/ESP32 |
| [`sensorer/tof-og-lidar`](sensorer/tof-og-lidar) | [ToF og LiDAR-sensorer](https://robonordic.no/tof-og-lidar-sensorer-presise-avstandsmaalinger-for-robotikk/) | Arduino/ESP32 + Python |

Flere prosjekter kommer etter hvert som guidene publiseres – se [alle prosjekter](https://robonordic.no/category/prosjekter/).

## Slik bruker du koden

- **Arduino-skisser (`.ino`)**: åpne mappen i Arduino IDE 2 eller bruk `arduino-cli compile`. Hver skisse ligger i sin egen mappe, slik Arduino krever.
- **Python**: `pip install -r requirements.txt` i mappen, og kjør skriptet.
- **OpenSCAD (`.scad`)** og **G-code (`.nc`)**: åpne i OpenSCAD eller CNC-programmet ditt.

Alle Arduino-skisser kompileres og all Python syntakssjekkes automatisk ved hver endring (GitHub Actions). De er eksempler for læring – test alltid på egen maskinvare, og sjekk pinner og spenninger mot ditt eget kort.

## Om RoboNordic

RoboNordic er delebutikken til verkstedet vårt i Drammen. Vi bygger industrielle og medisinske roboter, og selger komponentene vi selv bruker – kontrollert og sendt fra Norge. Spørsmål? [kundeservice@robonordic.no](mailto:kundeservice@robonordic.no)

## Lisens

MIT – bruk koden fritt, også kommersielt. Se [LICENSE](LICENSE).
