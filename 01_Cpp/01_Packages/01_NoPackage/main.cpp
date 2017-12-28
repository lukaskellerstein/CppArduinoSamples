#include <iostream>
#include "./mypackage1/somefile.cpp"

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
