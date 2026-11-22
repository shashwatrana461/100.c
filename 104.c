
#include <stdio.h>

int main() {
    int n, x, left, right, i;

    scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        left = 0;
        right = 0;

        for(i = 1; i <= x; i++)
            left += i;

        for(i = x; i <= n; i++)
            right += i;

        if(left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
