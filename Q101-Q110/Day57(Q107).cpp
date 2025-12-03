// Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int pge[n];  // to store previous greater elements

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Brute force approach
    for (i = 0; i < n; i++) {
        pge[i] = -1;  // default if no previous greater found

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge[i] = arr[j];
                break;  // nearest greater on the left found
            }
        }
    }

    // Print output in comma-separated format
    printf("Previous greater elements: ");
    for (i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if (i != n - 1)
            printf(",");
    }

    printf("\n");

    return 0;
}
