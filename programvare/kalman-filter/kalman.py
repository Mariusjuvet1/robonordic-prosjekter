"""Kalman-filter for en støyete temperatursensor – simulering med plott."""
import matplotlib.pyplot as plt
import numpy as np


class KalmanFilter:
    def __init__(self, F, H, Q, R, P, x):
        self.F = F  # Tilstandsovergangsmatrise
        self.H = H  # Observasjonsmatrise
        self.Q = Q  # Prosessstøy
        self.R = R  # Målestøy
        self.P = P  # Kovariansmatrise
        self.x = x  # Tilstandsvektor

    def predict(self):
        self.x = self.F @ self.x
        self.P = self.F @ self.P @ self.F.T + self.Q

    def update(self, z):
        S = self.H @ self.P @ self.H.T + self.R
        K = self.P @ self.H.T @ np.linalg.inv(S)
        y = z - self.H @ self.x
        self.x = self.x + K @ y
        self.P = self.P - K @ self.H @ self.P


def main():
    F = np.array([[1.0]])   # Temperaturen endres ikke mellom målingene
    H = np.array([[1.0]])   # Vi måler temperaturen direkte
    Q = np.array([[0.1]])   # Liten prosessstøy
    R = np.array([[1.0]])   # Målestøy fra sensoren
    P = np.array([[1.0]])   # Startusikkerhet
    x = np.array([[20.0]])  # Startgjetning

    kf = KalmanFilter(F, H, Q, R, P, x)

    sann_temp = 22.0
    rng = np.random.default_rng(42)
    maalinger = sann_temp + rng.normal(0, 1, 100)
    estimater = []
    for z in maalinger:
        kf.predict()
        kf.update(np.array([[z]]))
        estimater.append(kf.x[0, 0])

    print(f"Siste estimat: {estimater[-1]:.2f} °C (sann verdi {sann_temp} °C)")
    plt.plot(maalinger, ".", label="Målinger", alpha=0.5)
    plt.plot(estimater, label="Kalman-estimat")
    plt.axhline(sann_temp, color="k", linestyle="--", label="Sann verdi")
    plt.xlabel("Måling")
    plt.ylabel("Temperatur (°C)")
    plt.legend()
    plt.show()


if __name__ == "__main__":
    main()
