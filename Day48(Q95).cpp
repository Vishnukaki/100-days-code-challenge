// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];
    char concat[400];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // if lengths are different ? not rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    // concat str1 + str1
    strcpy(concat, str1);
    strcat(concat, str1);

    // check if str2 is inside concat
    if (strstr(concat, str2) != NULL)
        printf("Strings ARE rotations of each other.\n");
    else
        printf("Strings are NOT rotations.\n");

    return 0;
}
