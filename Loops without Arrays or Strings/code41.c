#include <stdio.h>

int main() {
    int num, temp, first, last, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    int middle = num % power;
    middle = middle / 10;

    int result = (last * power) + (middle * 10) + first;

    printf("%d", result);

    return 0;
}