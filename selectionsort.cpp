#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[i], arr[min_ind]);
    }
}

int main()
{
    int arr[5] = {1, 6, 52, 10, 4};
    selectionsort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}