int ledPin[] = {6, 7, 8, 9};

void setup()
{
  for (int i = 0; i < 4; i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop()
{
  for (byte counter = 0; counter <= 15; counter++)
  {
    displayBinary(counter);
    delay(500);
    for (int i = 0; i < 4; i++) {
      digitalWrite(ledPin[i], LOW);
    }
  }
}

void displayBinary(byte numToShow)
{
  for (int i = 0; i < 4; i++)
  {
    if (bitRead(numToShow, i) == 1)
    {
      digitalWrite(ledPin[i], HIGH);
    }
    else
    {
      digitalWrite(ledPin[i], LOW);
    }
  }

}
