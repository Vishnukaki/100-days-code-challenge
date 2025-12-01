// Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length (ignoring newline)
    for (j = 0; str[j] != '\0' && str[j] != '\n'; j++);

    i = 0;
    j = j - 1;  // last index

    // check characters from both ends
    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

