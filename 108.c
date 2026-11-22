
#include <stdio.h>

int main() {
    int a[100], ans[100];
    int n, i, product = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        product = 1;

        for(int j = 0; j < n; j++) {
            if(i != j)
                product = product * a[j];
        }

        ans[i] = product;
    }

    printf("[");

    for(i = 0; i < n; i++) {
        printf("%d", ans[i]);

        if(i < n-1)
            printf(",");
    }

    printf("]");

    return 0;
}
