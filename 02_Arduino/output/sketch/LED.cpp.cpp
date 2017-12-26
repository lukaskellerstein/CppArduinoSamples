#include <Arduino.h>
#line 1 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/LED.cpp"
#line 1 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/LED.cpp"
#include "LED.h" //include the declaration for this class

const byte LED_PIN = BUILTIN_LED; //use the LED @ Arduino pin 13

#line 5 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/program.ino"
void setup();
#line 7 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/program.ino"
void loop();
#line 5 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/program.ino"
//<<constructor>> setup the LED, make pin 13 an OUTPUT
LED13::LED13(){
    pinMode(LED_PIN, OUTPUT); //make that pin an OUTPUT
}

//<<destructor>>
LED13::~LED13(){/*nothing to destruct*/}

//turn the LED on
void LED13::on(){
	digitalWrite(LED_PIN,HIGH); //set the pin HIGH and thus turn LED on
}

//turn the LED off
void LED13::off(){
	digitalWrite(LED_PIN,LOW); //set the pin LOW and thus turn LED off
}

//blink the LED in a period equal to paramterer -time.
void LED13::blink(int time){
	on(); 			//turn LED on
	delay(time/2);  //wait half of the wanted period
	off();			//turn LED off
	delay(time/2);  //wait the last half of the wanted period
}
#line 1 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/program.ino"
 #include "LED.h"

LED13 led;//initialize an instance of the class

void setup(){/*nothing to setup*/}

void loop(){
  led.blink(1000);//stay one second on, then a second off
}
