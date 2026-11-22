
#include <stdio.h>

int main() {
    char s[100];
    int i, j, found = 0;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++) {
        for(j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                printf("%c", s[i]);
                found = 1;
                break;
            }
        }

        if(found == 1)
            break;
    }

    if(found == 0)
        printf("No repeating character");

    return 0;
}
