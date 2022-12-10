#include <stdio.h>

int countzero(int r)
{
    // int r = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     r = i * r;
    // }
    // printf("\nThe value of r is: %d", r);
    int res = 0;
    for (int i = 5; i <= r; i = i * 5)
    {
        res = res + r / i;
    }
    return res;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nThe value is: %d", countzero(num));
    return 0;
}