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

    if (col1 != row2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int b[row2][col2];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int c[row1][col2];

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}