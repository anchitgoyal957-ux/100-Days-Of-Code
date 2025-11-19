#include <stdio.h>

int main() {
    int num, temp, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        int bit = temp % 10;

        if (bit == 0)
            result = result + 1 * place;
        else
            result = result + 0 * place;

        place = place * 10;
        temp = temp / 10;
    }

    printf("%d", result);
    return 0;
}