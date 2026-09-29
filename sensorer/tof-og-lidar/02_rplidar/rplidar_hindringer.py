from rplidar import RPLidar
import numpy as np

lidar = RPLidar('/dev/ttyUSB0')

try:
    for i, scan in enumerate(lidar.iter_scans()):
        obstacles = []
        
        for (_, angle, distance) in scan:
            # Filtrer bort for nære eller fjerne målinger
            if 150 < distance < 4000:
                # Konverter til kartesiske koordinater
                x = distance * np.cos(np.radians(angle))
                y = distance * np.sin(np.radians(angle))
                obstacles.append((x, y))
        
        # Behandle hindringer her
        print(f"Scan {i}: {len(obstacles)} hindringer funnet")
        
        if i > 10:  # Stopp etter 10 scans
            break

finally:
    lidar.stop()
    lidar.disconnect()
