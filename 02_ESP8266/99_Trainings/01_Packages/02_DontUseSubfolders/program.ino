
#include "lib/SomeLibrary2.h"

SomeClass2 class2;

void setup(){
    Serial.begin(115200);
}


void loop()
{
    string text = class2.PrintSomething();

    Serial.printl(text.c_str());

    delay(1000);
}