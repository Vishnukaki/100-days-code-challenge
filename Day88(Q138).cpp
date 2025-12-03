// Print all enum names and integer values using a loop.

#include <stdio.h>

int main() {
    // Define enum
    enum Colors { RED, GREEN, BLUE, YELLOW, BLACK };

    // Parallel array containing names of enum values
    const char *names[] = { "RED", "GREEN", "BLUE", "YELLOW", "BLACK" };

    // Number of enum constants
    int count = sizeof(names) / sizeof(names[0]);

    // Loop to print each enum value and its integer value
    for (int i = 0; i < count; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
