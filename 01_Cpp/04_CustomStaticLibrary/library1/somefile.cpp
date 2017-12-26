#include "library1.h" //include the declaration for this class


namespace Library1
{
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
                return 0;
        }
    }
}