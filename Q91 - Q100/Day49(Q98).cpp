// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[200], word[50];
    int i = 0, j = 0, wordCount = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Process each word
    while (name[i] != '\0') {
        if (name[i] != ' ' && name[i] != '\n') {
            word[j++] = name[i];
        } else if (j > 0) {
            word[j] = '\0';
            wordCount++;

            // If not the last word, print initial
            if (name[i] != '\n') {
                printf("%c.", toupper(word[0]));
            }

            j = 0;
        }
        i++;
    }

    // The last collected word is the surname – print it fully
    word[j] = '\0';
    printf("%s", word);

    return 0;
}
