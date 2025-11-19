#include <stdio.h>

int main() {
    int num, temp, bin = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        int bit = temp % 2;
        bin = bin + bit * place;
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary: %d", bin);
    return 0;
}