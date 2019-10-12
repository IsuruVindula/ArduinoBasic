int pin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  digitalWrite(pin ,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<255; i++){
    analogWrite(pin, i);
    delay(20);
  }
  delay(1000);
  
   for(int j=255; j>0; j--){
    analogWrite(pin, j);
    delay(20);
  }

}
