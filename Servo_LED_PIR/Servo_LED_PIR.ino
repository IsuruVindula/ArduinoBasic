#include <Servo.h>


Servo p;
int motorpin = 9;
int ledPin = 7;                // choose the pin for the LED
int inputPin = 8;

void setup() {
  p.attach(motorpin);
  p.write(0);
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  int val = digitalRead(inputPin);
  Serial.println(val);
  if (val == 1) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

int fun() {
  int i = 0;
  for (i; i < 180; i++) {
    p.write(i);
    delay(10);
  }
  for (int t = 180; t >= 0; t--) {
    p.write(t);
    delay(10);
  }

}
