#include <stdio.h>
int main()
{
    int r = 1;
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        r = r * i;
    }
    printf("the value: %d", r);
    return 0;
}