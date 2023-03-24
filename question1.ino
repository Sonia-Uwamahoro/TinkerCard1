// C++ code
//
#include <Servo.h>

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_9.attach(9, 500, 2500);

  if ((-40 + 0.488155 * (analogRead(A0) - 20)) > 30) {
    servo_9.write(90);
  }
}

void loop()
{
  delay(100); // Delay a little bit to improve simulation performance
}