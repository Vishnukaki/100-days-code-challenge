// Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[300];

    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("\n--- File Contents ---\n");

    // Read and print file content line-by-line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
