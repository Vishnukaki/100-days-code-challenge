// Find the digit that occurs the most times in an integer number.


#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};  

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num; 
    }


    while (num > 0) {
        digit = num % 10; 
        freq[digit]++;
        num /= 10;
    }

    int maxFreq = 0, maxDigit = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", maxDigit);
    printf("Number of occurrences: %d\n", maxFreq);

    return 0;
}
