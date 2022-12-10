#include <iostream>
using namespace std;

void bubblesort(int *arr, int n)
{
    for (int i = 0; i <=1; i++)
    {
        int swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[6] = {6, 25, 99, 10, 55, 23};
    bubblesort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}