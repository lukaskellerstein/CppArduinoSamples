#include <iostream>

//without this, we must use std::string, std::cout ... etc.
using namespace std;

string a;
int b;
int c, d, e;
float f;
bool g;
char h;

int cc, dd, ee = 5;

string aa = "some text";
int bb = 55;
char hh = 'A';

int main()
{
    //DECLARE
    string aaa;
    int bbb;
    

    //DECLARE and INITIALIZE
    string ccc = "some text";
	int ddd = 555;

    //ASSIGN
	a = "someString";
	b = 112313213;
	c, d, e = 1, 2, 3;


    //PRINT IT -----------------

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << cc << endl;
    cout << dd << endl;
    cout << ee << endl;
    cout << aa << endl;
    cout << bb << endl;
    cout << aaa << endl;
    cout << bbb << endl;
    cout << ccc << endl;
    cout << ddd << endl;

    return 0;
}