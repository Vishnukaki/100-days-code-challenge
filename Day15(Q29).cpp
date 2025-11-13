//Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; // use long long for large results

    // input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        // calculate factorial using loop
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        // display result
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
