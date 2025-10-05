#include <stdio.h>
int main() {
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col], sum[row];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        sum[i] = 0;
        for (int j = 0; j < col; j++) {
            sum[i] += matrix[i][j];
        }
    }

    printf("Sum of each row: ");
    for (int i = 0; i < row; i++) {
        printf("%d ", sum[i]);
    }
    return 0;
}