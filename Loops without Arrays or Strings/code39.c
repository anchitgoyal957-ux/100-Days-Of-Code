#include <stdio.h>
int main() {
    int n, a, pro = 1, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        a = n % 10;

        if (a % 2 != 0) {
            pro *= a;
            odd = 1;
        }
        n = n / 10;
    }

    if (!odd)
        pro = 1;

    printf("Product = %d\n", pro);
    return 0;
}