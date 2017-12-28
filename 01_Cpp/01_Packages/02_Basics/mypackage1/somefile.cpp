#include <iostream>
#include "mypackage1.h" 

using namespace std;

string name = "Lukas";
int age = 30;

void somePrint(string text){
 cout << text << endl;
}
string getHello(){
    return "HELLO " + name;
}