#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2, real, imaginary;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    }
    else
    {
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imaginary);
        printf("Root 2 = %.2f - %.2fi\n", real, imaginary);
    }
    return 0;
}