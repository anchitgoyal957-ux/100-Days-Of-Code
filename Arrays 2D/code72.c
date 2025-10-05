#include <stdio.h>
int main() {
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col], sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum = %d\n", sum);
    return 0;
}