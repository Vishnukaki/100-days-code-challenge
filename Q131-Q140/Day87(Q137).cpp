// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

int main() {
    // Define enum for user roles
    enum Role { ADMIN = 1, USER, GUEST };

    int choice;

    printf("Select Role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! You can view content only.\n");
            break;

        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
