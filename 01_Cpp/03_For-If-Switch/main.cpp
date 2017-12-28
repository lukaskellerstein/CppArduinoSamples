#include <iostream>

//without this, we must use std::string, std::cout ... etc.
using namespace std;

int func()
{

    //FOR
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    //IF
    int a = 10;
    if (a == 10)
    {
        cout << "a = 10" << endl;
    }
    else if (a > 10)
    {
        cout << "a > 10" << endl;
    }
    else
    {
        cout << "a < 10" << endl;
    }

    //SWITCH
    switch (a)
    {
    case 1:
        cout << '1'; // prints "1"
        break;       // and exits the switch
    case 2:
        cout << '2';
        break;
    case 3:
        cout << '3';
        break;
    case 4:
        cout << '4';
        break;
    default:
        cout << 'number is greater than 4';
    }

    
    return 0;
}