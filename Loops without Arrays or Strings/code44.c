#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0, a;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        a = (float)(2 * i + 1) / (2 * i + 2);
        sum += a;
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}