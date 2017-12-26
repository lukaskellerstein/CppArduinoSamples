# 1 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/LED.cpp"
# 1 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/LED.cpp"
# 2 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/LED.cpp" 2

const byte LED_PIN = BUILTIN_LED; //use the LED @ Arduino pin 13

//<<constructor>> setup the LED, make pin 13 an OUTPUT
LED13::LED13(){
    pinMode(LED_PIN, 0x01); //make that pin an OUTPUT
}

//<<destructor>>
LED13::~LED13(){/*nothing to destruct*/}

//turn the LED on
void LED13::on(){
 digitalWrite(LED_PIN,0x1); //set the pin HIGH and thus turn LED on
}

//turn the LED off
void LED13::off(){
 digitalWrite(LED_PIN,0x0); //set the pin LOW and thus turn LED off
}

//blink the LED in a period equal to paramterer -time.
void LED13::blink(int time){
 on(); //turn LED on
 delay(time/2); //wait half of the wanted period
 off(); //turn LED off
 delay(time/2); //wait the last half of the wanted period
}
# 1 "/home/cellarstone/Projects/Others/ArduinoProjects/02/02_MultipleFiles/program.ino"


LED13 led;//initialize an instance of the class

void setup(){/*nothing to setup*/}

void loop(){
  led.blink(1000);//stay one second on, then a second off
}
