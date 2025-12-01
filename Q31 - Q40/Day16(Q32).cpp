// Write a program to check if a number is a palindrome.


#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // save original value

    // reverse logic
    while (num != 0) {
        remainder = num % 10;               // get last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num = num / 10;                     // remove last digit
    }

    // check palindrome
    if (original == reversed)
        printf("%d is a Palindrome Number.\n", original);
    else
        printf("%d is NOT a Palindrome Number.\n", original);

    return 0;
}
