// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[300];
    char longest[100] = "";
    char current[100];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            current[j++] = str[i];
        } else {
            current[j] = '\0'; // end current word

            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }

            j = 0; // reset for next word
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
