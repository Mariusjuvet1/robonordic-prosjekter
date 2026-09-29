# Raspberry Pi fra null til prosjekt

Kode til guiden **[Raspberry Pi fra null til prosjekt](https://robonordic.no/raspberry-pi-fra-null-til-prosjekt-komplett-oppsettguide/)** på robonordic.no.

| Fil | Hva den gjør | Merk |
|---|---|---|
| `blink.py` | Blinker en LED på GPIO 18 | LED + 220 Ω mellom GPIO 18 og GND |
| `kamera.py` | Tar ett bilde med kameramodulen | Kameramodul på CSI-porten |
| `fotoboks.py` | Knapp på GPIO 24 tar bilde, LED lyser imens | LED GPIO 18, knapp GPIO 24–GND |

**Plattform:** Raspberry Pi (Bookworm)

Bruker `gpiozero` og `picamera2`, som følger med Raspberry Pi OS Bookworm og virker på Pi 5. Mangler de: `sudo apt install python3-gpiozero python3-picamera2`.
