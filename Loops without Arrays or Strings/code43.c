#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        int fact = 1;

        for (int i = 1; i <= digit; i++)
            fact = fact * i;

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}