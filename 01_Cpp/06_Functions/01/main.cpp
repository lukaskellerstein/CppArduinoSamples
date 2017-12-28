#include <iostream>

using namespace std;


//-----------------------
//Implementation of methods/functions
//-----------------------

//method
void writeText(){
    cout << "Some text" << endl;
}

//function
string getText()
{
    return "Hello world !";
}

//function with input parameter
string getText(string input)
{
    return "Hello " + input;
}

//-----------------------
//MAIN
//-----------------------
int main()
{
    writeText();

    cout << getText() << endl;

    cout << getText("Lukas") << endl;

    //READLINE - waiting for end
    string readline;
    cin >> readline;
}

