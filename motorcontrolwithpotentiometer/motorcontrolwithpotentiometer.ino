#include <Servo.h>

Servo esc;

void setup() {
  esc.attach(8); //Specify the esc signal pin
  esc.writeMicroseconds(1000);  //Initialize the signal to 1000
  Serial.begin(9600);
}

void loop() {
  int val;
  val = analogRead(A0); // Read input from analog pin a0 and store in val
  val = map(val, 0, 1023, 1000, 2000);  //map values from max to min input
  esc.writeMicroseconds(val); // using val as signal to esc.
}
