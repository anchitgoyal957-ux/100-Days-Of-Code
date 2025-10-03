#include <stdio.h>
int main() {
    int n, i, prime;

    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = 1;
            break;
        }
    }
    if (prime == 0)
        printf("Prime\n");
    else
        printf("Not prime\n");
    return 0;
}