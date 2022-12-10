#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str = "hjhgjhh";
    int beg = 0;
    int end = str.length() - 1;
    while (beg < end)
    {
        if ((str[beg]) != (str[end]))
        {
            cout << "false";
        }
        beg++;
        end--;
    }
    cout << "true";

    return 0;
}