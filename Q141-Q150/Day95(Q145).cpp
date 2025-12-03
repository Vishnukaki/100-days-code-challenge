// Return a structure containing top student's details from a function.

#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return top student
struct Student getTopStudent(struct Student s[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   // returning the structure
}

int main() {
    int n = 5;
    struct Student s[5], topper;

    // Read students' data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Call the function that returns a structure
    topper = getTopStudent(s, n);

    // Print topper's details
    printf("\n--- Top Student ---\n");
    printf("Name : %s\n", topper.name);
    printf("Roll No : %d\n", topper.roll_no);
    printf("Marks : %.2f\n", topper.marks);

    return 0;
}
