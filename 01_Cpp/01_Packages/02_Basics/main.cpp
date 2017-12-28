#include <iostream>
#include "./mypackage1/mypackage1.h" 

using namespace std;

int main(){
    cout << name << endl;
    cout << age << endl;

    somePrint("some text");

    cout << getHello() << endl;

    //READLINE - waiting for end
    string readline;
    cin >> readline;
    return 0;
}
