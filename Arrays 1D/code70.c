#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], r[n];
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < n; i++) {
        r[(i + k) % n] = arr[i];
    }

    printf("Array after rotating the element :\n");
    for(i = 0; i < n; i++) {
        printf("%d ", r[i]);
    }

    return 0;
}