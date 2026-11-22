
#include <stdio.h>

int main() {
    char s[100];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    if(s[0] != ' ')
        printf("%c", s[0]);

    while(s[i] != '\0') {
        if(s[i] == ' ' && s[i+1] != ' ' &&
           s[i+1] != '\0' && s[i+1] != '\n')
            printf(".%c", s[i+1]);

        i++;
    }

    return 0;
}
