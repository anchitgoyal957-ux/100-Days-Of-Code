#include <stdio.h>
int main() {
    int a, b, c, d, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = a;
    d = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    lcm = (c * d) / hcf;

    printf("%d\n", lcm);
    return 0;
}