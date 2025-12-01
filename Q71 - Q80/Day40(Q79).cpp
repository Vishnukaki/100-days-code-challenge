// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];

    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

  
    for (int k = 0; k < cols; k++) {
        i = 0;
        j = k;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

  
    for (int k = 1; k < rows; k++) {
        i = k;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}

