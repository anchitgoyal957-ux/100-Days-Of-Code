#include <stdio.h>
int main() {
    int row1, col1, row2, col2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);

    int a[row1][col1];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);

    int b[row2][col2];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (row1 != row2 || col1 != col2) {
        printf("Matrix addition not possible. Dimensions must match.\n");
        return 0;
    }

    int sum[row1][col1];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}