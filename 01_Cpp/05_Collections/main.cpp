#include <iostream>
#include <list>
#include <map>

using namespace std;

int main()
{

    // ************************
    // Array
    // ************************
    int arr[10];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = i;
    }
    // ************************
    // List - created with initial values
    // ************************
    list<int> second(4, 100);
    list<int> l = {7, 5, 16, 8};

    // ************************
    // List - created without initial values
    // ************************
    list<string> list1 = list<string>();
    list1.push_back("string1");
    list1.push_back("string2");
    list1.push_back("string3");

    for (string item : list1)
    {
        std::cout << item << '\n';
    }

    // ************************
    // Map
    // ************************
    map<string, string> map1;
    map1["ID-123213"] = "Item1";
    map1["ID-453453"] = "Item2";
    map1["ID-976484"] = "Item3";

    //Get lenght of map
    cout << map1.size() << endl;

    //Add value
    map1.insert(pair<string, string>("ID-somenewid", "somenewvalue"));

    //Delete value
    map1.erase("ID-somenewid");

    //foreach
    map<string,string>::iterator it;
    for (it = map1.begin(); it != map1.end(); ++it)
    {
        cout << it->first << " => " << it->second << '\n';
    }

    //END
    return 0;
}