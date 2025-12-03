// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

int main() {
    // Define the enum
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    enum Status result;
    int choice;

    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &choice);

    result = choice;  // assign user input to enum variable

    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out. Check your connection.\n");
            break;

        default:
            printf("Invalid status value.\n");
    }

    return 0;
}
