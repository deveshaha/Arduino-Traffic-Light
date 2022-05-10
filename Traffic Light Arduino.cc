int redLed = 4;
int yellowLed = 3;
int greenLed = 2;


void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop()
{
  digitalWrite(redLed, HIGH);
  delay(2000);
  digitalWrite(redLed, LOW);
  
  digitalWrite(greenLed, HIGH);
  delay(2000);
  digitalWrite(greenLed, LOW);
  
  digitalWrite(yellowLed, HIGH);
  delay(500);
  digitalWrite(yellowLed, LOW);
    
}