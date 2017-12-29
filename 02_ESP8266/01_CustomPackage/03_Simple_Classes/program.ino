
#include "SomeCustomPackage.h"

MyClass mycl;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    string message = mycl.PrintSomething();

    Serial.println(message.c_str());

    delay(1000);
}