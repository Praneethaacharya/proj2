#include <iostream>
using namespace std;

int main()
{
    cout << "The palindrome sequences are: " << endl;

    int n, m;
    for (int i = 0; i < 10000; i++)
    {
        int rev = 0;
        n = i;
        m = n;
        while (n != 0)
        {
            int l = n % 10;
            rev = rev * 10 + l;
            n = n / 10;
        }
        if (rev == m)
        {
            cout << m << " ";
        }
    }

    return 0;
}