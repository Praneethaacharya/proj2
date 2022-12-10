#include <iostream>
using namespace std;

void prime(int n)
{
    int c = 0;
    if (n == 1)
    {
        cout << "Prime" << endl;
    }
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            c = 0;
            break;
        }
        else
        {
            c = 1;
        }
    }
    if (c == 1)
    {
        cout << n << " -> "
             << "Prime" << endl;
    }
}

int main()
{
    prime(10);
    prime(7);
    prime(63);

    return 0;
}