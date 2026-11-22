
#include <stdio.h>

int main() {
    int a[100], n, i, j;
    int left, right, found = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        left = 0;
        right = 0;

        for(j = 0; j < i; j++)
            left += a[j];

        for(j = i+1; j < n; j++)
            right += a[j];

        if(left == right) {
            found = i;
            break;
        }
    }

    printf("%d", found);

    return 0;
}
