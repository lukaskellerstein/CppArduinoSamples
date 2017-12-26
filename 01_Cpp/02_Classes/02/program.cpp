#include <iostream>
#include "calculator.cpp"

using namespace std;

int main()
{
    int x,y,result;
    char oper;
    cout << "Hello! world" << endl;

    cout << "Please enter num1 operator num2" << endl;

    cin >> x >> oper >> y;

    Calculator c;
    result = c.Calculate(x, y, oper);
    cout << "Result is:" << result << endl;

    cin.ignore();
    cin.get();
    return 0;
}
