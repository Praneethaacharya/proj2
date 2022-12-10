#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "All the prime numbers from 1 to 1000: " << endl;
    for (int i = 2; i <= 1000; ++i)
    {
        int c = 0;
        for (int j = 2; j <= sqrt(i); ++j)
        {
            if (i % j == 0)
            {
                c = 1;
            }
        }
        if (c == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}