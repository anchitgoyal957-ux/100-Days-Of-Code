#include <stdio.h>
int main() {
    int row, col, dis = 1;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("Matrix must be square.\n");
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
        for (int j = i + 1; j < row; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                dis = 0;
                break;
            }
        }
        if (!dis)
            break;
    }

    if (dis)
        printf("Elements on the diagonal of a matrix are distinct.\n");
    else
        printf("Elements on the diagonal of a matrix are not distinct.\n");
    return 0;
}