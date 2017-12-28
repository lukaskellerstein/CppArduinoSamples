#include <iostream>

//because of this, we dont need write std::string anymore
using namespace std;

int main(){

    string someText = "some text";

    cout << someText << endl; //value
    cout << &someText << endl; //memory address

    someText = "other text";

    cout << someText << endl; //value
    cout << &someText << endl; //memory address

    string input;
    cin >> input;
}