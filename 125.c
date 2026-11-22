#include <stdio.h>

int main() {
    FILE *fp;
    char str[200];

    fp = fopen("info.txt", "a");

    if(fp == NULL) {
        printf("File cannot be opened!");
        return 0;
    }

    printf("Enter new line: ");
    getchar();
    fgets(str, sizeof(str), stdin);

    fprintf(fp, "%s", str);

    fclose(fp);

    printf("Text added successfully!");

    return 0;
}
