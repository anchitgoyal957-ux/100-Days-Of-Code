#include <stdio.h>
int main() {
    int n, i, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 2*n-1; i += 2) {
        sum = sum + i;
    }

    printf("%d\n", sum);
    return 0;
}