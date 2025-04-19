const int Ledpin = 9;
const int btnpin = 4;
int state;

void setup() {
  pinMode(Ledpin, OUTPUT);
  pinMode(btnpin, INPUT_PULLUP);

}

void loop() {
  state = digitalRead(btnpin);
  if(state == LOW){
    digitalWrite(Ledpin, HIGH);
  }
  else{
    digitalWrite(Ledpin, LOW);
  }
}
