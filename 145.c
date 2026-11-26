
#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

struct Student topStudent(struct Student s[]) {
    int max = 0;

    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    return s[max];
}

int main() {
    struct Student s[5], top;

    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll and marks: ");
        scanf("%29s %d %f",
              s[i].name, &s[i].roll_no, &s[i].marks);
    }

    top = topStudent(s);

    printf("\nTop Student Details\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
