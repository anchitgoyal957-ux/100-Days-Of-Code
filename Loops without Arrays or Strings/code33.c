#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    if (sum == num)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}