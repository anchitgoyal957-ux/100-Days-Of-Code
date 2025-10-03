#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.00, a;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        a = (float)(2 * i) / (4 * i - 1);
        sum += a;
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}