#include <stdio.h>
int fac(int n)
{
    int m;
    if (n <= 0)
    {
        return 1;
    }

    else
    {
        return n * fac(n - 1);
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nThe value is: %d", fac(num));
    return 0;
}