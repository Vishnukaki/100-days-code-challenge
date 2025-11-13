//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int x, y, t;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x=%d y=%d\n", x, y);

    t = x;
    x = y;
    y = t;

    printf("After swap: x=%d y=%d\n", x, y);
    return 0;
}
