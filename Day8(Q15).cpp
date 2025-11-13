//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("Uppercase letter\n");
    else if (c >= 'a' && c <= 'z')
        printf("Lowercase letter\n");
    else if (c >= '0' && c <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

    return 0;
}
