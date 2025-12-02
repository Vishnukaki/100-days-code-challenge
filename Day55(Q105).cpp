// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ?n / 2? times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Find a candidate using Moore's Voting Algorithm
    int candidate = nums[0];
    int count = 1;

    for (i = 1; i < n; i++) {
        if (nums[i] == candidate)
            count++;
        else
            count--;

        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    // Step 2: Verify the candidate
    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("Majority element: %d\n", candidate);
    else
        printf("Majority element: -1\n");

    return 0;
}
