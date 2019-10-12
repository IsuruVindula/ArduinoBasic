#include<Servo.h>

int LED = 6;
Servo p;

void setup() {
  p.attach(LED);
  p.write(0);
  digitalWrite(LED, OUTPUT);
  analogWrite(A0, INPUT);
  Serial.begin(9600);
}

void loop() {

  float t = map(analogRead(A0), 0, 100, 0, 200);
  Serial.println(t);
  //  p.write(t);
  Serial.println(t);

}
