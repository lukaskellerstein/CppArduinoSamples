 int ledPin = BUILTIN_LED;                // LED connected to digital pin 13

void setup()                    // run once, when the sketch starts
{
  pinMode(ledPin, OUTPUT);      // sets the digital pin as output
}

void loop()                     // run over and over again
{
  blink(2000);  //call the code that makes the LED blink
}

//turn the LED on
void on(){
  digitalWrite(ledPin,HIGH); //set the pin HIGH and thus turn LED on
}

//turn the LED off
void off(){
  digitalWrite(ledPin,LOW); //set the pin LOW and thus turn LED off
}

//make the LED blink
void blink(int time){
  on();						    // sets the LED on
  delay(time/2);                // waits for a second
  off();					    // sets the LED off
  delay(time/2);                // waits for a second
}