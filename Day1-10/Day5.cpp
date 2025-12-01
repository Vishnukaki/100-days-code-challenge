//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int sec, hr, min;
    printf("Enter total seconds: ");
    scanf("%d", &sec);

    hr = sec / 3600;
    min = (sec % 3600) / 60;
    sec = sec % 60;

    printf("Converted Time: %d:%d:%d\n", hr, min, sec);
    return 0;
}











