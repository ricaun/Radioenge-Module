/*
  Radioenge Blink example
*/

#define LED_RED PB5
#define LED_GREEN PB8
#define LED_YELLOW PB9

void setup() 
{
  Serial.begin(115200);
  Serial.println();
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
}


void loop() 
{
  digitalWrite(LED_RED, !digitalRead(LED_RED));
  digitalWrite(LED_GREEN, !digitalRead(LED_GREEN));
  digitalWrite(LED_YELLOW, !digitalRead(LED_YELLOW));
  delay(100);
}
