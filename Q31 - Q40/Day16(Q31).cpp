// Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    // input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  // store original value

    // special case
    if (num == 0) {
        printf("Binary of 0 is 0\n");
        return 0;
    }

    // convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // store remainder (0 or 1)
        num = num / 2;        // divide by 2
        i++;
    }

    // print binary in reverse
    printf("Binary of %d = ", original);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
