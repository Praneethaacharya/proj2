#include <iostream>
using namespace std;

int search(int arr[], int x, int n)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int insertbeg(int arr[], int n, int x)
{
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = x;
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return n + 1;
}

int insertend(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            cout << "";
        }
        else
        {
            arr[i] = x;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int insertatpos(int arr[], int n, int x, int pos)
{
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

int deletearr(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i == n)
    {
        return n;
    }
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    return (n - 1);
}

int deletebeg(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return (n - 1);
}

int deleteend(int arr[], int k)
{

    for (int i = 0; i < k; i++)
    {
        if (arr[i] != 0)
        {
            k++;
        }
        if (arr[i] == arr[k - 1])
        {
            break;
        }
    }
    for (int i = 0; i < k - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return (k - 1);
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6};
    // cout << search(arr, 10, 3) << endl;
    // cout << insertbeg(arr, 6, 9) << endl;
    // cout << insertbeg(arr, 9, 7) << endl;
    // cout << insertend(arr, 3, 10) << endl;
    // cout << insertatpos(arr, 11, 1, 5) << endl;
    // cout << "This is delete array" << endl;
    // cout << deletearr(arr, 11, 4) << endl;
    // cout << "This is delete array beg" << endl;
    // cout << deletebeg(arr, 11) << endl;
    // cout << deletebeg(arr, 10) << endl;
    cout << "This is delete array end" << endl;
    cout << deleteend(arr, 7) << endl;
    cout << deleteend(arr, 6) << endl;
    return 0;
}