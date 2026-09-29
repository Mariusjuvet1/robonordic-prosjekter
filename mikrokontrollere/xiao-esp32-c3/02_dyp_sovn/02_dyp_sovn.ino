#include "esp_sleep.h"

void setup() {
  Serial.begin(115200);
  esp_sleep_enable_timer_wakeup(60ULL * 1000000ULL); // 60 sekunder
  Serial.println("Går i dyp søvn...");
  esp_deep_sleep_start();
}

void loop() {
  // Kjøres aldri: brikken våkner via reset etter dyp søvn
}
