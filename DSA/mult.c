#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Asking for the dimensions of the first matrix
    printf("\nEnter the number of rows and columns for the first matrix (between 1 and 100): ");
    scanf("%d %d", &r1, &c1);

    // Asking for the dimensions of the second matrix
    printf("Enter the number of rows and columns for the second matrix (between 1 and 100): ");
    scanf("%d %d", &r2, &c2);

    // Checking if dimensions are suitable for matrix multiplication
    if (c1 != r2) {
        printf("\nMatrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 0;
    }

    int a[100][100], b[100][100], result[100][100], i, j, k;

    // Input elements of the first matrix
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Input elements of the second matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Initializing elements of result matrix to 0
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            result[i][j] = 0;

    // Multiplying matrices a and b
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k)
                result[i][j] += a[i][k] * b[k][j];

    // Printing the result matrix
    printf("\nResult of matrix multiplication:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j)
            printf("%d\t", result[i][j]);
        printf("\n");
    }

    return 0;
}
