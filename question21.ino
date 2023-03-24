// C++ code
//
int Centimeter = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  
  
  return pulseIn(echoPin, HIGH);
}

void setup()
{

}

void loop()
{
  Centimeter = 0.01723 * readUltrasonicDistance(7, 7);
  Centimeter = (Centimeter + 1);
  delay(10);
}