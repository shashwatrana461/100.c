
#include <stdio.h>

int main() {
    char s[100];
    int i = 0, last = 0;

    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0' && s[i] != '\n') {
        if(s[i] == ' ' && s[i+1] != ' ')
            last = i + 1;

        i++;
    }

    i = 0;

    while(i < last) {
        if(i == 0)
            printf("%c.", s[i]);
        else if(s[i] == ' ' && s[i+1] != ' ')
            printf(" %c.", s[i+1]);

        i++;
    }

    printf(" %s", s + last);

    return 0;
}
