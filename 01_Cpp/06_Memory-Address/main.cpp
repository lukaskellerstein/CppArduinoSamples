#include <iostream>

int main(){
    std::string text = "some text";

    std::cout << text << std::endl; //value
    std::cout << &text << std::endl; //memory address

    std::string readline;
    std::cin >> readline;
}