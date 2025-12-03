// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[300];
    int freq[256] = {0};   // frequency of each character
    int left = 0, right = 0;
    int maxLen = 0, n;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    s[strcspn(s, "\n")] = '\0';

    n = strlen(s);

    while (right < n) {
        freq[(unsigned char)s[right]]++;

        // If character repeated ? shrink window from left
        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        // Update max length
        if (right - left + 1 > maxLen)
            maxLen = right - left + 1;

        right++;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
