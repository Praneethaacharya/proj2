#include <iostream>
using namespace std;

int main()
{
    int n, i, x;
    int arr[100];
    cout << "Enter total number:" << endl;
    cin >> x;

    for (i = 0; i < x; i++)
    {

        cin >> arr[i];
    }

    cout << "The array is: ";
    for (i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // for (i = 0; i < x; i++)
    // {
    //     if (arr[i] > arr[i + 1])
    //     {
    //         int temp = arr[i + 1];
    //         arr[i + 1] = arr[i];
    //         arr[i] = temp;
    //     }
    //     else
    //     {
    //         return arr[i];
    //     }
    //     cout << "Rearranged";
    // }

    // cout << "The sorted array is: ";
    // for (i = 0; i < x; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    for (i = 0; i < x; i++)
    {
        if (arr[i] != i)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}