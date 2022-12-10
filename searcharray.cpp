#include <iostream>
using namespace std;

int search(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return ++i;
        }
    }
    return -1;
}
int insert(int arr[], int size, int x, int cap, int pos)
{
    if (size == cap)
    {
        return -1;
    }
    int index = pos - 1;
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = x;
    return size + 1;
}

int insertbeg(int arr[], int size, int x)
{
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = x;
    return size + 1;
}

int insertend(int arr[], int size, int x)
{
    int i = 0;
    for (i = 0; i <= size; i++)
    {
        while (arr[i + 1] != 0)
        {
            i++;
        }
    }
    arr[i] = x;
    return size + 1;
}

int deletebeg(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

int deleteend(int a[])
{
    int i, m = 0;
    int k = 0;
    while (a[m] != 0)
    {
        m++;
        k++;
    }

    for (i = 0; i < k; i++)
    {

        while (a[i] != 0)
        {
            k++;
        }

        if (a[i] == a[k - 1])
        {
            break;
        }
    }
    return k - 1;
}

int deletearr(int arr[], int size, int x)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
            break;
    }
    if (i == size)
        return size;
    for (int j = i; j < size - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    return (size - 1);
}

int main()
{
    int size = 100;
    int arr[size] = {10, 20, 30, 40, 50};
    cout << search(arr, 6, 40) << endl;
    cout << insert(arr, 6, 90, 7, 3) << endl;
    cout << insert(arr, 6, 70, 7, 3) << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << deletearr(arr, size, 90) << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    insertbeg(arr, 12, 9);
    insertbeg(arr, 12, 13);
    insertbeg(arr, 12, 45);
    insertend(arr, 13, 4);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    insertend(arr, 18, 7);
    insertend(arr, 16, 48);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    deletebeg(arr, 16);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    deleteend(arr);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
