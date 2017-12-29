
#include "MyLibrary1.h"
#include "MyLibrary2.h"

SomeClass1 class1;
SomeClass2 class2;

void setup(){/*nothing to setup*/}


void loop()
{
    class1.SayHello("Lukas");
    class2.PrintSomething();

    delay(1000);
}