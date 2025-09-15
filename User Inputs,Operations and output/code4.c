#include <stdio.h>
int main ()
{
    int r;
    float pi=3.14, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    area = pi * r * r;
    circumference = 2 * pi * r;
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    return 0;
}