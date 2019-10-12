#include <Servo.h>


Servo hi;
int pin = 6;

void setup() {
  // put your setup code here, to run once:
  hi.attach(pin);
  hi.write(0);
}

void loop() {
  for (float i = 0 ; i <= 180; i++) {
    if (i == 100) {
      delay(1000);
      break;
    }
    hi.write(i);
    delay(50);
  }
  hi.write(180);
  delay(1000);

}
