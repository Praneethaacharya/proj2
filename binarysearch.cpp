#include <iostream>
using namespace std;
int x;
int binary_search(int arr[], int n)
{
    int start = 0, end = x - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == n)
        {
            return mid + 1;
        }
        else if (arr[mid] < n)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    x = 6;
    cout << binary_search(arr, 50);
    return 0;
}