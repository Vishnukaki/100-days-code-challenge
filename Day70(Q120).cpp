// Write a program to take a string input. Change it to sentence case.
 
#include <stdio.h>

int main() {
    char str[500];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; // to lowercase
    }

    // Convert first meaningful character to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // to uppercase
            break;
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}

 
