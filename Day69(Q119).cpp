// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int visited[100000] = {0};   // assuming values are not extremely large

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // SINGLE ITERATION to find repeated element
    for (i = 0; i < n; i++) {
        x = arr[i];

        if (visited[x] == 1) {       // already seen ? repeated element
            printf("Repeated element: %d\n", x);
            return 0;
        }

        visited[x] = 1;              // mark as seen
    }

    printf("No repeated element found.\n");
    return 0;
}
