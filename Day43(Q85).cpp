// Reverse a string.

#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length (excluding newline)
    for (j = 0; str[j] != '\0' && str[j] != '\n'; j++);

    i = 0;
    j = j - 1;  // last valid character index

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s", str);

    return 0;
}
