#include<Servo.h>

int inputpin = A0;
int motorpin = 5;
Servo t;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputpin, INPUT);
  pinMode(motorpin, OUTPUT);
  t.attach(motorpin);
  t.write(0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float variable = analogRead(inputpin);
  Serial.println(variable);

  float p = map(variable, 72, 1023, 0, 180); //map the variable value to rotation value
  t.write(p);
}
