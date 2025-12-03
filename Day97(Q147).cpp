// Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

// Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e[3], temp;
    FILE *fp;
    int i;

    // Input 3 employee records
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    // ---------- WRITE TO BINARY FILE ----------
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Write all employee records
    fwrite(e, sizeof(struct Employee), 3, fp);

    fclose(fp);

    printf("\nEmployee records stored in employees.dat successfully.\n");

    // ---------- READ FROM BINARY FILE ----------
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Employee Records Read from File ---\n");

    // Read and print employee records
    while (fread(&temp, sizeof(struct Employee), 1, fp) == 1) {
        printf("\nName: %s\n", temp.name);
        printf("ID: %d\n", temp.id);
        printf("Salary: %.2f\n", temp.salary);
    }

    fclose(fp);

    return 0;
}

