"""Maker-API med FastAPI: sensorlesing, reléstyring og sanntidsstrøm over WebSocket.

Start: uvicorn main:app --host 0.0.0.0 --port 8000
Dokumentasjon: http://<pi-adresse>:8000/docs
"""
import asyncio
import random  # Erstatt med ekte sensorbibliotek, f.eks. adafruit_dht

from fastapi import FastAPI, WebSocket, WebSocketDisconnect
from pydantic import BaseModel

app = FastAPI(title="Maker API")


class SensorData(BaseModel):
    temperatur: float
    luftfuktighet: float


class ReleKommando(BaseModel):
    slaa_paa: bool


def les_sensorverdier() -> SensorData:
    return SensorData(
        temperatur=round(random.uniform(18, 24), 1),
        luftfuktighet=round(random.uniform(40, 60), 1),
    )


@app.get("/")
def root():
    return {"status": "online", "prosjekt": "RoboNordic Maker API"}


@app.get("/sensor", response_model=SensorData)
def les_sensor():
    return les_sensorverdier()


@app.post("/rele")
def styr_rele(kommando: ReleKommando):
    # På en Raspberry Pi: gpiozero.OutputDevice(17).value = kommando.slaa_paa
    return {"rele_status": "på" if kommando.slaa_paa else "av"}


@app.websocket("/ws/sensor")
async def sensor_stream(websocket: WebSocket):
    await websocket.accept()
    try:
        while True:
            await websocket.send_json(les_sensorverdier().model_dump())
            await asyncio.sleep(2)
    except WebSocketDisconnect:
        pass
