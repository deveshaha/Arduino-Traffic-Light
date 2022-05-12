int ledRojo = 4;
int ledAmarillo = 3;
int ledVerde = 2;

int ledRojoPea = 5;
int ledVerdePea = 6;


void setup()
{
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledVerdePea, HIGH);
  delay(5000);
  
  digitalWrite(ledVerdePea, HIGH);
  delay(250);
  digitalWrite(ledVerdePea, LOW);
  delay(250);
  digitalWrite(ledVerdePea, HIGH);
  delay(250);
  digitalWrite(ledVerdePea, LOW);
  delay(250);
  digitalWrite(ledVerdePea, HIGH);
  delay(250);
  digitalWrite(ledVerdePea, LOW);
  
  digitalWrite(ledVerdePea, LOW);
  digitalWrite(ledRojo, LOW);
  
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledRojoPea, HIGH);
  delay(5000);
  digitalWrite(ledRojoPea, LOW);
  digitalWrite(ledVerde, LOW);
  
  digitalWrite(ledAmarillo, HIGH);
  digitalWrite(ledRojoPea, HIGH);
  delay(2500);  
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledRojoPea, LOW);
  

      
}