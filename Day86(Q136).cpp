// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

int main() {
    // Define enum for menu choices
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

    int choice;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n--- MENU ---\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            printf("\nResult = %.2f\n", a + b);
            break;

        case SUBTRACT:
            printf("\nResult = %.2f\n", a - b);
            break;

        case MULTIPLY:
            printf("\nResult = %.2f\n", a * b);
            break;

        default:
            printf("\nInvalid choice!\n");
    }

    return 0;
}

