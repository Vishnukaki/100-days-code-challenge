//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float c, f;
    printf("Enter Celsius value: ");
    scanf("%f", &c);

    f = (c * 9.0 / 5.0) + 32;
    printf("Fahrenheit: %.2f\n", f);

    return 0;
}
