
#include <stdio.h>

int main() {
    int a[100], n, x, i, result = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(a[i] >= x) {
            result = i;
            break;
        }
    }

    printf("%d", result);

    return 0;
}
