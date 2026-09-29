#include <WiFi.h>

// Erstatt med ditt nettverk
const char* ssid = "DITT_WIFI_NAVN";
const char* password = "DITT_WIFI_PASSORD";

void setup() {
  Serial.begin(115200);
  
  // Starter WiFi-tilkobling
  WiFi.begin(ssid, password);
  Serial.print("Kobler til WiFi");
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println();
  Serial.println("WiFi tilkoblet!");
  Serial.print("IP-adresse: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Hovedprogrammet ditt her
}
