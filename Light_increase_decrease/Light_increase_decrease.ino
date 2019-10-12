
int pin = 6;
int brightness = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int increase1 = 2;
  int decrease = 2;
  while (brightness <= 250) {
    brightness += increase1;
    analogWrite(pin, brightness);
    delay(20);
  }

  while (brightness > 0) {
    brightness -= decrease;
    analogWrite(pin, brightness);
    delay(20);
  }
  delay(1000);
}
