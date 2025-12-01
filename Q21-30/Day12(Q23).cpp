//Write a program to calculate library fine based on late days as follows: 
First 5 days late: ?2/day 
Next 5 days late: ?4/day 
Next 20 days days late: ?6/day 
More than 30 days: Membership Cancelled.


#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    // input number of late days
    printf("Enter number of days book is returned late: ");
    scanf("%d", &days);

    // check fine based on late days
    if (days <= 0) {
        printf("Invalid input! Days cannot be zero or negative.\n");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ?%d\n", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = ?%d\n", fine);
    }
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine = ?%d\n", fine);
    }
    else {
        printf("Membership Cancelled!\n");
    }

    return 0;
}

