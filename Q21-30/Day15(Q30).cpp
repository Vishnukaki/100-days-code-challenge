//Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // store original for display

    // reverse logic
    while (num != 0) {
        remainder = num % 10;              // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                    // remove last digit
    }

    // display result
    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
