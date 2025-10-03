#include <stdio.h>
int main() {
    int n, pro = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= 2*n; i += 2)
    {
        pro = pro * i;
    }
    printf("%d\n", pro);
    return 0;
}