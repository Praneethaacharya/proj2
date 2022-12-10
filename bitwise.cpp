#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = 6;
    cout << (x & y);
    cout << endl;
    cout << (x | y);
    cout << endl;
    cout << (x ^ y);
    cout << endl;
    // Left shift operator
    cout << (x << 1) << endl;
    cout << (x << 2) << endl;
    return 0;
}