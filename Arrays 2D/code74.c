#include <stdio.h>

int main() {
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col], trans[col][row];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            trans[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}