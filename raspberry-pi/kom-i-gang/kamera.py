"""Ta ett bilde med kameramodulen og lagre det i hjemmemappen."""
import time
from pathlib import Path

from picamera2 import Picamera2

kamera = Picamera2()
kamera.start()
time.sleep(2)  # La eksponering og hvitbalanse stabilisere seg
kamera.capture_file(str(Path.home() / "bilde.jpg"))
kamera.stop()
