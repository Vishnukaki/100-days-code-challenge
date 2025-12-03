// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

// Nested structure: Date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure containing Date structure
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining_date.day, &e.joining_date.month, &e.joining_date.year);

    // Print employee details
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);

    return 0;
}
