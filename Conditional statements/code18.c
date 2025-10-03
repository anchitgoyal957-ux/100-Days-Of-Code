#include <stdio.h>
int main()
{
    float p;
    printf("Enter percentage: ");
    scanf("%f", &p);

    if (p >= 90 && p <= 100) {
        printf("Grade A\n");
    } else if (p >= 80 && p < 90) {
        printf("Grade B\n");
    } else if (p >= 70 && p < 80) {
        printf("Grade C\n");
    } else if (p >= 60 && p < 70) {
        printf("Grade D\n");
    } else if (p < 60 && p >= 0) {
        printf("Grade F\n");
    } else {
        printf("Invalid percentage.\n");
    }
    return 0;
}