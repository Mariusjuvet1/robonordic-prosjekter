"""Blink en LED på GPIO 18 én gang i sekundet. Avslutt med Ctrl+C."""
from signal import pause

from gpiozero import LED

led = LED(18)
led.blink(on_time=1, off_time=1)
pause()
