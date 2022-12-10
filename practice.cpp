#include <iostream>
#include <math.h>
using namespace std;

void checkprime(int n)
{
    int c = 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            c = 1;
        }
    }
    if (c == 0)
    {
        cout << "True";
    }
}

int main()
{
    int n;
    cin >> n;
    checkprime(n);
    return 0;
}