"""Fotoboks: trykk på knappen (GPIO 24) for å ta et bilde. LED-en (GPIO 18) lyser mens bildet tas."""
import time
from datetime import datetime
from pathlib import Path
from signal import pause

from gpiozero import LED, Button
from picamera2 import Picamera2

led = LED(18)
knapp = Button(24)  # Intern pull-up: knappen kobles mellom GPIO 24 og GND
kamera = Picamera2()
kamera.start()


def ta_bilde():
    led.on()
    tidspunkt = datetime.now().strftime("%Y%m%d_%H%M%S")
    kamera.capture_file(str(Path.home() / f"foto_{tidspunkt}.jpg"))
    time.sleep(2)
    led.off()


knapp.when_pressed = ta_bilde
pause()
