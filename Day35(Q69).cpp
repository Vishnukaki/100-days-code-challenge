// Find the second largest element in an array.


#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = -2147483648;  // Smallest possible int

    // Find largest and second largest
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("No second largest element (all elements are equal).\n");
    } else {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}
