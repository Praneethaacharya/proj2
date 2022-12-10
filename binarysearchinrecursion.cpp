#include <iostream>
using namespace std;

int bsearch(int arr[], int low, int high, int n)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;
    if (arr[mid] == n)
    {
        return mid + 1;
    }
    else if (arr[mid] < n)
    {
        return bsearch(arr, mid + 1, high, n);
    }
    else
    {
        return bsearch(arr, low, mid - 1, n);
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6, x = 50;
    cout << bsearch(arr, 0, n - 1, x);
    return 0;
}