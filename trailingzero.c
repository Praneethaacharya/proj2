#include <stdio.h>

int countzeros(int n)
{
    int r = 1;
    for (int i = 2; i <= n; i++)
    {
        r = i * r;
    }
    printf("\nThe factorial is: %d", r);
    int res = 0;
    while (r % 10 == 0)
    {
        res++;
        r = r / 10;
    }
    return res;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\n The zeroes are: %d", countzeros(num));
    return 0;
}