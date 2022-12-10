#include <iostream>
using namespace std;

int main()
{

    int m, n;
    for (int i = 1; i < 1000; i++)
    {
        int rev = 0;
        m = i;
        n = m;
        while (m != 0)
        {
            int ld = m % 10;
            rev = rev * 10 + ld;
            m = m / 10;
        }

        if (rev == n)
        {
            cout << n << endl;
        }
    }

    return 0;
}