// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i;
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {   // only lowercase alphabets
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) {  // first repeating
                result = ch;
                break;
            }
        }
    }

    if (result != '\0')
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
