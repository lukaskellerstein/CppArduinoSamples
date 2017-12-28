#include <iostream>

#include "library1/library1.h"
#include "library2/library2.h"

using namespace std;
using namespace Library1;
using namespace Library2;

Calculator calc;
Printer1 printer1;

int main()
{
    int x,y,result;
    char oper;
    cout << "Hello! world" << endl;

    cout << "Please enter num1 operator num2" << endl;

    cin >> x >> oper >> y;

    result = calc.Calculate(x, y, oper);
    cout << "Result is:" << result << endl;



    printer1.Print();
    

    cin.ignore();
    cin.get();
    return 0;
}
