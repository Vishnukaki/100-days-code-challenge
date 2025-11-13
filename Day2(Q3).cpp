//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    float l, b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);

    printf("Area = %.2f\n", l * b);
    printf("Perimeter = %.2f\n", 2 * (l + b));

    return 0;
}
