#include <stdio.h>

int main() {
    int n, i, a = 0, b = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            a++;
        else
            b++;
    }

    printf("Count of even numbers = %d\nCount of odd numbers = %d\n", a, b);
    return 0;
}