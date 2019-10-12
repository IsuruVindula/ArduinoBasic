void setup() {
  // put your setup code here, to run once:
pinMode(11, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int p[] = {2,1};
  int port[] = {13,11};
  
  int t = 3;
  
  int temp = t;
  int i = 0;
  int j = 0;
  
  while(temp >= 0){
      temp = temp - p[i];
      if(temp < 0){i++;}
      else{
          digitalWrite(port[j], HIGH);
          delay(1000);
          i++;
        }
     }

  digitalWrite(11, LOW);
  digitalWrite(13, LOW);
}
