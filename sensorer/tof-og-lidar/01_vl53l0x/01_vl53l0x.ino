#include "Adafruit_VL53L0X.h"

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  Serial.begin(9600);
  
  if (!lox.begin()) {
    Serial.println("Finner ikke VL53L0X");
    while(1);
  }
  
  Serial.println("VL53L0X klar!");
}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  
  lox.rangingTest(&measure, false);
  
  if (measure.RangeStatus != 4) {
    Serial.print("Avstand (mm): ");
    Serial.println(measure.RangeMilliMeter);
  } else {
    Serial.println("Utenfor rekkevidde");
  }
  
  delay(100);
}
