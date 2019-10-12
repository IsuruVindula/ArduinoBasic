const int analogPin = A0;   // the pin that the potentiometer is attached to
const int ledCount = 2;

int ledPins[] = {8, 9, 10, 11};   

void setup() {
  // put your setup code here, to run once:
  
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  // read the potentiometer:
  int sensorReading = analogRead(analogPin);
  
  // map the result to a range from 0 to the number of LEDs:
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);

  // loop over the LED array:
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    // if the array element's index is less than ledLevel,
    // turn the pin for this element on:
    if (thisLed < ledLevel) {
      digitalWrite(ledPins[thisLed], HIGH);
    }
    // turn off all pins higher than the ledLevel:
    else {
      digitalWrite(ledPins[thisLed], LOW);
    }
  }

}
