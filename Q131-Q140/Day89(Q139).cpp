// Show that enums store integers by printing assigned values.

#include <stdio.h>

int main() {
    // Enum with explicit integer values
    enum Status {
        SUCCESS = 100,
        FAILURE = 200,
        TIMEOUT = 300
    };

    // Print enum values
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
