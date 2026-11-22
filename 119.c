#include <stdio.h>

int main() {
    int n, i, x, found = 0;

    scanf("%d", &n);

    int arr[n];
    int seen[1001] = {0};

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        x = arr[i];

        if(seen[x] == 1) {
            printf("%d", x);
            found = 1;
            break;
        }

        seen[x] = 1;
    }

    if(found == 0) {
        printf("-1");
    }

    return 0;
}
