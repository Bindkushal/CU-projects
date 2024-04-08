#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    // Asking for the dimensions of the first matrix
    printf("Enter the number of rows and columns for the first matrix (between 1 and 100): ");
    scanf("%d %d", &r1, &c1);

    // Asking for the dimensions of the second matrix
    printf("Enter the number of rows and columns for the second matrix (between 1 and 100): ");
    scanf("%d %d", &r2, &c2);

    // Checking if dimensions match for matrix addition
    if (r1 != r2 || c1 != c2) {
        printf("\nMatrix addition is not possible. Dimensions of matrices are not compatible.\n");
        return 0;
    }

    int a[100][100], b[100][100], sum[100][100], i, j;

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Adding the matrices
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)

            sum[i][j] = a[i][j] + b[i][j];
    // Printing the sum matrix
    printf("\nSum of matrices:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j)

        printf("%d\t", sum[i][j]);
        printf("\n");
    }
        return 0;
}
