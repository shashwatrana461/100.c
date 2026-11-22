
#include <stdio.h>

int main() {
    char s[200];
    int i = 0, start = 0;
    int len = 0, max = 0, pos = 0;

    fgets(s, sizeof(s), stdin);

    while(1) {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            if(len > max) {
                max = len;
                pos = start;
            }

            len = 0;
            start = i + 1;

            if(s[i] == '\0' || s[i] == '\n')
                break;
        }
        else {
            len++;
        }

        i++;
    }

    for(i = pos; i < pos + max; i++)
        printf("%c", s[i]);

    return 0;
}
