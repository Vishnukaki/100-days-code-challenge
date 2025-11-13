//Write a program to input two numbers and display their sum.
#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nSum: %.2f", a + b);
    printf("\nDifference: %.2f", a - b);
    printf("\nProduct: %.2f", a * b);

    if (b != 0)
        printf("\nQuotient: %.2f\n", a / b);
    else
        printf("\nCannot divide by zero!\n");

    return 0;
}
