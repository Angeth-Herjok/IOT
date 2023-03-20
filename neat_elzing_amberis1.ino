// C++ code
//
#include <Servo.h>

Servo servo_11;

void setup()
{
  pinMode(A4, INPUT);
  servo_11.attach(11, 500, 2500);
  pinMode(3, OUTPUT);

  if ((-40 + 0.488155 * (analogRead(A4) - 20)) > 30) {
  }
}

void loop()
{
  servo_11.write(90);
  digitalWrite(3, HIGH);
  delay(10); // Delay a little bit to improve simulation performance
}