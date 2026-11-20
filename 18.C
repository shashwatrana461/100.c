
#include <stdio.h>

int main()
{
    int per;

    scanf("%d", &per);

    if (per >= 90 && per <= 100)
    {
        printf("Grade A");
    }
    else if (per >= 80 && per < 90)
    {
        printf("Grade B");
    }
    else if (per >= 70 && per < 80)
    {
        printf("Grade C");
    }
    else if (per >= 60 && per < 70)
    {
        printf("Grade D");
    }
    else if (per >= 0 && per < 60)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid percentage");
    }

    return 0;
}
