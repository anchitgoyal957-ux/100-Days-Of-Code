#include <stdio.h>
int main()
{
    int l, b, area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%d %d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);
    return 0;
}