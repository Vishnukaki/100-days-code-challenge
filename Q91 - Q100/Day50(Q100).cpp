// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("All substrings are:\n");

    for (i = 0; i < len; i++) {          // Starting index
        for (j = i; j < len; j++) {      // Ending index
            for (k = i; k <= j; k++) {   // Print substring
                putchar(str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
