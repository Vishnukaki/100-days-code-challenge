// Reverse each word in a sentence without changing the word order.

#include <stdio.h>

void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[300];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        // If space or end of line is reached ? reverse the word
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;     // move to next word
        }

        i++;
    }

    printf("Reversed words: %s", str);

    return 0;
}
