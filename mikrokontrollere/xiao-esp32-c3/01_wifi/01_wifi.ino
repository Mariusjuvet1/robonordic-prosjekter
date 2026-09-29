#include <WiFi.h>

const char* ssid = "DITT_WIFI_NAVN";
const char* passord = "DITT_WIFI_PASSORD";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, passord);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Tilkoblet!");
}

void loop() {
  // Hovedprogrammet ditt her
}
