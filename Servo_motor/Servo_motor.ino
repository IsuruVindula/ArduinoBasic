#include <Servo.h>

Servo isuru;
int PIN = 6;
void setup() {
  // put your setup code here, to run once:
  isuru.attach(9);
  isuru.write(0);
  pinMode(PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put*/ your main code here, to run repeatedly:
  fun();
}

int fun() {
  int i = 0;
  for (i; i <= 180; i++) {
    if (i == 120) {
//      light(PIN);
      continue;
    }else if(i == 60){
//      light(PIN);
      continue; 
    }else {
      isuru.write(i);
      delay(80);
    }
  }
  for (int p = 180; p >= 0; p--) {
    if (p == 60) {
      light(PIN);
    } else {
      isuru.write(p);
      delay(10);
    }

  }

}

int light(int pin) {
  digitalWrite(pin, HIGH);
  delay(10);
  digitalWrite(pin, LOW);
}
