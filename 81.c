
#include <stdio.h>

int main() {
    char s[100];
    int i = 0, count = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0' && s[i] != '\n') {
        count++;
        i++;
    }

    printf("%d", count);

    return 0;
}
