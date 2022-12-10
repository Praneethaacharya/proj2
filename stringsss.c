#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "bdc";
    char s2[] = "bdc";
    int rev = strcmp(s1, s2);
    if (rev > 0)
    {
        printf("Larger");
    }
    else if (rev == 0)
    {
        printf("Equal");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}