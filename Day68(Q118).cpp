// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];   // array size is n, but values are from 0 to n (one missing)

    printf("Enter %d elements (from 0 to %d, one missing):\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = n * (n + 1) / 2;   // sum of 0 + 1 + ... + n
    int actualSum = 0;

    for (i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    printf("Missing number: %d\n", missing);

    return 0;
}
