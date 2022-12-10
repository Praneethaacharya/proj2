#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n, x;
    for (int j = 1; j < 10; j++)
    {
        n = j;
        x = 1;
        for (int i = 1; i <= n; i++)
        {
            x = x * i;
        }
        cout << n << ": " << x << endl;
    }

    cout << endl;

    cout << fact(5);

    return 0;
}