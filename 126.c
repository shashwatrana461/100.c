#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char str[200];

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL) {
        printf("Error: File does not exist!");
    }
    else {
        printf("File opened successfully.\n");

        while(fgets(str, sizeof(str), fp) != NULL) {
            printf("%s", str);
        }

        fclose(fp);
    }

    return 0;
}
