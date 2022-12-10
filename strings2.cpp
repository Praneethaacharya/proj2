#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str = "have a good day";

    cout << str.length() << endl;
    str = str + " xyz";
    cout << str << endl;
    cout << str.substr(0, 3) << endl;
    cout << str.find("e a") << endl;

    string newstr;
    cout << "Enter new string: ";
    getline(cin, newstr);
    cout << newstr << endl;

    for (char x : str)
    {
        cout << x;
    }

    return 0;
}