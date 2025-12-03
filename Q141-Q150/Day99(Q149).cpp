// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>   // for malloc()

// Define structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Allocate memory dynamically
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Take input from user
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Print the details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
