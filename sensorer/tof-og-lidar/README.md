# ToF- og LiDAR-sensorer

Kode til guiden **[ToF og LiDAR-sensorer: Presise avstandsmålinger for robotikk](https://robonordic.no/tof-og-lidar-sensorer-presise-avstandsmaalinger-for-robotikk/)** på robonordic.no.

| Fil | Hva den gjør |
|---|---|
| `01_vl53l0x/01_vl53l0x.ino` | Leser avstand i mm fra en VL53L0X over I2C (Adafruit_VL53L0X-biblioteket) |
| `02_rplidar/rplidar_hindringer.py` | Leser skann fra en RPLidar på `/dev/ttyUSB0` og regner om til x/y-hindringer |

```bash
cd 02_rplidar
pip install -r requirements.txt
python rplidar_hindringer.py
```
