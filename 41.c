
#include <stdio.h>

int main() {
    int n, first, last, temp, div = 1;

    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while(temp >= 10) {
        temp = temp / 10;
        div = div * 10;
    }

    first = temp;

    int middle = (n % div) / 10;

    int result = last * div + middle * 10 + first;

    printf("%d", result);

    return 0;
}
