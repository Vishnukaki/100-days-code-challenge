//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // input number of odd terms
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    // display result
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
