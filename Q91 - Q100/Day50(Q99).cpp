// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[10];

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%[^/]/%[^/]/%s", day, month, year);

    // Convert month "04" to "Apr"
    if (strcmp(month, "04") == 0)
        printf("%s-Apr-%s\n", day, year);
    else
        printf("Month is not 04! Cannot convert.\n");

    return 0;
}
