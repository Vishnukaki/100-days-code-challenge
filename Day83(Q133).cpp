// Create an enum for months and print how many days each month has.

#include <stdio.h>

int main() {
    // Define enum for months
    enum Month {
        JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };

    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("31 days\n");
            break;

        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("30 days\n");
            break;

        case FEBRUARY:
            printf("28 or 29 days (leap year dependent)\n");
            break;

        default:
            printf("Invalid month number!\n");
    }

    return 0;
}
