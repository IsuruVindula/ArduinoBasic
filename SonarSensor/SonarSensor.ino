 #include<Servo.h>

int echopin = 12;
int trigerpin = 11;
long distanse, cm, inches ;
Servo t;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(trigerpin, OUTPUT);
  pinMode(echopin, INPUT);

  digitalWrite(trigerpin, LOW);
  delay(5);
  //  digitalWrite(7, LOW);

  t.attach(6);
  t.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigerpin, HIGH);
  delay(10);
  digitalWrite(trigerpin, LOW);

  distanse = pulseIn(echopin, HIGH);
  cm = (distanse / 2) / 29.1;
//  Serial.print(distanse);
//  Serial.print(",");
  Serial.print(cm);
  Serial.print("cm");

  //  if (cm < 5) {
  //    //    digitalWrite(7, HIGH);
  //    motor();
  //  }else{
  //    t.write(0);
  //  }

  int p = map(cm, 5, 15, 180, 0);
  Serial.print("  coner = ");
  Serial.print(p);
  Serial.println();
  t.write(p);
  delay(100);
}

void motor() {
  t.write(90);
}
