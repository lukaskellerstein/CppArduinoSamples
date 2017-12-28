 #include "LED.h"

LED13 led;//initialize an instance of the class

void setup(){/*nothing to setup*/}

void loop(){
  led.blink(1000);//stay one second on, then a second off
}