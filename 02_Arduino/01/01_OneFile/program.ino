int ledPin = BUILTIN_LED;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    dot();
    dot();
    dot();
    dash();
    dash();
    dash();
    dot();
    dot();
    dot();
    delay(3000);
}

void dot()
{
  digitalWrite(ledPin, HIGH);
  delay(250);
  digitalWrite(ledPin, LOW);
  delay(250);
}

void dash()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(250);
}