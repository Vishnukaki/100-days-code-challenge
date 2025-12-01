// Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq1[256] = {0}, freq2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of all characters
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n')
            freq1[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n')
            freq2[(unsigned char)str2[i]]++;
    }

    // Compare frequency arrays
    for (i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("Strings ARE anagrams.\n");

    return 0;
}
