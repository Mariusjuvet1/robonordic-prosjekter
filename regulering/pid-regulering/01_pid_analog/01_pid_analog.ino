// PID-regulering med biblioteket «PID» av Brett Beauregard (Library Manager: «PID»).
// Leser prosessverdien på A0 og styrer pådraget med PWM på pinne 9.
// Kp, Ki og Kd er startverdier – tun dem på ditt eget system.
#include <PID_v1.h>

double Setpoint, Input, Output;
double Kp = 2.0, Ki = 5.0, Kd = 1.0;

PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

void setup() {
  Setpoint = 100;
  myPID.SetMode(AUTOMATIC);
  myPID.SetOutputLimits(0, 255);
}

void loop() {
  Input = analogRead(A0);
  myPID.Compute();
  analogWrite(9, Output);
}
