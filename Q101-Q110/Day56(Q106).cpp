// #include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int nge[n];  // to store next greater elements

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Brute force: nested loops
    for (i = 0; i < n; i++) {
        nge[i] = -1;  // default if no greater element found
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break;  // nearest greater found
            }
        }
    }

    // Print result in comma-separated format
    printf("Next greater elements: ");
    for (i = 0; i < n; i++) {
        printf("%d", nge[i]);
        if (i != n - 1)
            printf(",");  // comma separated
    }

    printf("\n");

    return 0;
}
