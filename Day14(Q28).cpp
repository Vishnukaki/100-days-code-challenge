//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; 
    int hasEven = 0;       

    // input limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product = product * i;
            hasEven = 1;
        }
    }

    // display result
    if (hasEven)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers found in the range 1 to %d.\n", n);

    return 0;
}
