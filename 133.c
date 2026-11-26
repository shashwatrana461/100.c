
#include <stdio.h>

enum Months {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    int month, days;

    printf("Enter month number: ");
    scanf("%d", &month);

    switch (month) {
        case JAN: case MAR: case MAY:
        case JUL: case AUG: case OCT: case DEC:
            days = 31;
            break;

        case APR: case JUN: case SEP: case NOV:
            days = 30;
            break;

        case FEB:
            days = 28;
            break;

        default:
            printf("Invalid month");
            return 0;
    }

    printf("Number of days = %d", days);

    return 0;
}
