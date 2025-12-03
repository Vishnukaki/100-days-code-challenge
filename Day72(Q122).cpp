// Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Contents of info.txt:\n\n");

    // Read each line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
