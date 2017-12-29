
#include "SomeCustomPackage.h"

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    string message = PrintSomething();

    Serial.println(message.c_str());

    delay(1000);
}