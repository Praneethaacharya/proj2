#include <iostream>
using namespace std;

int largestarray(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    cout << arr[res] << endl;
    return res;
}

int main()
{
    int arr[6] = {6, 25, 99, 10, 55, 23};
    cout << largestarray(arr, 6);

    return 0;
}