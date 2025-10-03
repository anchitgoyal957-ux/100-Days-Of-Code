#include <stdio.h>
int main() {
    int d, fine;

    printf("Number of late days: ");
    scanf("%d", &d);

    if (d <= 5) {
        fine = d * 2;
        printf("Fine Rs.%d\n", fine);
    }
    else if (d <= 10) {
        fine = (5 * 2) + (d - 5) * 4;
        printf("Fine Rs.%d\n", fine);
    }
    else if (d <= 30) {
        fine = (5 * 2) + (5 * 4) + (d - 10) * 6;
        printf("Fine Rs.%d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }
    return 0;
}