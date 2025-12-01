// Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nCharacters in the string:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')      // ignore newline from fgets()
            printf("%c\n", str[i]);
    }

    return 0;
}
