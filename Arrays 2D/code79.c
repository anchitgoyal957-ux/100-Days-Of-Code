#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat[m][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Diagonal traversal: ");

    for (k = 0; k < m + n - 1; k++) {
        if (k % 2 == 0) {
            for (i = (k < m ? k : m - 1); i >= 0 && (k - i) < n; i--) {
                j = k - i;
                printf("%d ", mat[i][j]);
            }
        } else {
            for (i = (k < n ? 0 : k - n + 1); i < m && (k - i) < n; i++) {
                j = k - i;
                printf("%d ", mat[i][j]);
            }
        }
    }

    return 0;
}