
#include <stdio.h>

int main()
{
    int n, original, rem, rev = 0;

    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (original >= 0 && original == rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}
