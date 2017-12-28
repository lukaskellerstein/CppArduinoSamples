#include <iostream>

using namespace std;

int main(){
    
    //variables ------------------------------------   
    string text = "some text";

    cout << "value : " << text << endl; //value
    cout << "memory address : " << &text << endl; //memory address

    //array -----------------------------------------
    int arr[10];
    for (int i = 0; i < 3; i++){
        arr[i] = i;
    } 

    for (int ii = 0; ii < 3; ii++){
        cout << "value " << ii << " : " << arr[ii] << "memory address : " << &arr[ii] << endl;
    } 

    //READLINE - waiting for end
    std::string readline;
    std::cin >> readline;
}