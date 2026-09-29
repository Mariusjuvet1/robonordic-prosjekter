# Kom i gang med ESP32

Kode til guiden **[Kom i gang med ESP32: Din første mikrokontroller](https://robonordic.no/kom-i-gang-med-esp32-din-forste-mikrokontroller/)** på robonordic.no.

| Skisse | Hva den gjør |
|---|---|
| `01_blink` | Blinker den innebygde LED-en (GPIO 2) én gang i sekundet |
| `02_wifi` | Kobler til WiFi og skriver IP-adressen til seriellmonitoren |
| `03_knapp_led` | Tenner LED-en mens en knapp på GPIO 4 holdes inne (intern pull-up) |

**Maskinvare:** ESP32-utviklingskort, f.eks. [ESP32 WROOM-32D med USB-C](https://robonordic.no/product/esp32-wroom-32d-utviklingskort-wifi-bluetooth-dual-core-30-pin/), breadboard, trykknapp og ledninger.

I `02_wifi` må du bytte ut `DITT_WIFI_NAVN` og `DITT_WIFI_PASSORD` – ikke commit ekte passord til git.
