#include <iostream>

using namespace std;


class Calculator
{
  public:
    int Calculate(int, int, char);
};

int Calculator::Calculate(int x, int y, char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        if (y != 0)
            return x - y;
    default:
        cin >> x >> oper >> y;
        Calculate(x, y, oper);
    }
}