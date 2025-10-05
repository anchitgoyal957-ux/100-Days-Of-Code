#include <stdio.h>
int main() {
    int d, c[10] = {0}, i, max = 0, f;
    long long n;

    printf("Enter a number: ");
    scanf("%I64d", &n);

    while(n > 0) {
        d = n % 10;
        c[d]++;
        n /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(c[i] > max) {
            max = c[i];
            f = i;
        }
    }

    printf("Digit with most frequency is : %d", f);
    return 0;
}