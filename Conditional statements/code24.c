#include <stdio.h>

int main() {
    int u, bill;

    printf("Enter number of units consumed: ");
    scanf("%d", &u);

    if (u <= 100) {
        bill = u * 5;
        printf("Bill: Rs.%d\n", bill);
    }
    else if (u <= 200) {
        bill = (100 * 5) + (u - 100) * 7;
        printf("Bill: Rs.%d\n", bill);
    }
    else if (u <= 300) {
        bill = (100 * 5) + (100 * 7) + (u - 200) * 10;
        printf("Bill: Rs.%d\n", bill);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (u - 300) * 12;
        printf("Bill: Rs.%d\n", bill);
    }
    return 0;
}