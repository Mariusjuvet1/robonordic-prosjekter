# FastAPI for maker-prosjekter

Kode til guiden **[FastAPI for maker-prosjekter](https://robonordic.no/fastapi-for-maker-prosjekter-bygg-apier-raskt/)** på robonordic.no.

| Fil | Hva den gjør | Merk |
|---|---|---|
| `main.py` | API med /sensor, /rele og WebSocket-strøm på /ws/sensor | `uvicorn main:app --host 0.0.0.0 --port 8000` |
| `klient.html` | Nettside som viser sensorstrømmen live | Bytt adressen til din Pi |

**Plattform:** Python 3.10+

Installer med `pip install -r requirements.txt`. Interaktiv dokumentasjon på `/docs`. Sensorverdiene er tilfeldige – bytt ut `les_sensorverdier()` med ekte sensorlesing.
