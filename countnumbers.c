#include <stdio.h>
int count(int x)
{
    int res = 0;
    while (x > 0)
    {
        x = x / 10;
        res++;
    }
    printf("The number is: %d", res);
    return res;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    count(num);
    return 0;
}