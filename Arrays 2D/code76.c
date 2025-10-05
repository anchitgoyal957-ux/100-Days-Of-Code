#include <stdio.h>
int main() {
    int row, col, sym = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("False\n");
        return 0;
    }

    int matrix[row][col];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                sym = 0;
                break;
            }
        }
        if (!sym)
            break;
    }

    if (sym)
        printf("The matrix is symmetric\n");
    else
        printf("The matrix is not symmetric\n");
    return 0;
}