// Print the initials of a name.

#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first initial
    if (name[0] != ' ')
        printf("%c", toupper(name[0]));

    // Check each space and print the next character after it
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", toupper(name[i + 1]));
        }
        i++;
    }

    return 0;
}
