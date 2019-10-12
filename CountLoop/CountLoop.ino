int ledPin[] = {6, 7, 8, 9};
int count = 2;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 4; i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  int t = 0;
  while (t < count) {
    for (int i = 0; i < 4; i++) {
      digitalWrite(ledPin[i], HIGH);
      delay(1000);
    }
    for (int i = 0; i < 4; i++) {
      digitalWrite(ledPin[i], LOW);
    }
    delay(500);
    t++;
  }
  
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPin[i], HIGH);
  }
  delay(1000);
}
