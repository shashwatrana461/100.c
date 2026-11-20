
#include <stdio.h>

int main()
{
    int n, original, rem;
    int sum = 0, digits = 0, temp;
    int power, i;

    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    if (n == 0)
        digits = 1;

    temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
        {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (original >= 0 && sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}
