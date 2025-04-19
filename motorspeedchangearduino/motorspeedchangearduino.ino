const int motorPin = 9;
const int potpin = A0;
int speed;
int pot;

void setup() {

}

void loop() {
  pot = analogRead(potpin);
  speed = map(pot,0,1023,0,255);
  analogWrite(motorPin, speed);
}
