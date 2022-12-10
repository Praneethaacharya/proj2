#include <stdio.h>

int ispalindrome(int n)
{
    int rev = 0;
    int temp = n;

    while (temp > 0)
    {
        int last = temp % 10;
        rev = rev * 10 + last;
        temp = temp / 10;
    }
    if (rev == n)
    {
        printf("Palindrome");
    }

    else
    {
        printf("Not a palindrome");
    }
    return temp;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    ispalindrome(num);
    return 0;
}