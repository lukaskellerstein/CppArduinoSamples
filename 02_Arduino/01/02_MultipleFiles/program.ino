#include "Morse.h"

Morse temp(BUILTIN_LED);

void setup(){/*nothing to setup*/}

void loop(){
  temp.dot(); temp.dot(); temp.dot();
  temp.dash(); temp.dash(); temp.dash();
  temp.dot(); temp.dot(); temp.dot();
  delay(3000);
}