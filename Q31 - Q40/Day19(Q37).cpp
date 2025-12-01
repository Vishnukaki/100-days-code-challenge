// Write a program to find the LCM of two numbers.


#include <stdio.h>

int main() {
    int a, b, n1, n2, temp, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    n1 = a;
    n2 = b;


    while (n2 != 0) {
        temp = n1 % n2;
        n1 = n2;
        n2 = temp;
    }

    hcf = n1;
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
