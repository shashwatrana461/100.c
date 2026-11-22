
#include <stdio.h>

int main() {
    char a[100], b[100];
    int i, j, len = 0, found = 0;

    scanf("%s %s", a, b);

    while(a[len] != '\0')
        len++;

    if(len == 0) {
        printf("Rotation");
        return 0;
    }

    for(i = 0; i < len; i++) {
        for(j = 0; j < len; j++) {
            if(a[(i+j) % len] != b[j])
                break;
        }

        if(j == len) {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
