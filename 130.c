
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, n;
    float marks;

    fp = fopen("student.txt", "w");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll and marks: ");
        scanf("%49s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s\n", name);
        printf("Roll: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(fp);

    return 0;
}
