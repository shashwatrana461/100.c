
#include <stdio.h>

enum Number {
    A = 10, B = 20, C = 30
};

int main() {
    enum Number n;

    n = A;
    printf("A = %d\n", n);

    n = B;
    printf("B = %d\n", n);

    n = C;
    printf("C = %d\n", n);

    return 0;
}
