// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>   // for toupper()

int main() {
    FILE *in, *out;
    char ch;

    // Open input file
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(in);
        return 1;
    }

    // Read characters and convert to uppercase
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;     // convert to uppercase manually
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed. Check output.txt\n");

    return 0;
}
