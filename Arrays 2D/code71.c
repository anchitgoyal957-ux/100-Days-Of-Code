#include <stdio.h>
int main() {
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}