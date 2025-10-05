#include <stdio.h>
int main() {
    int n, i, a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements in the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n / 2; i++) {
        a = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = a;
    }

    printf("After reversing the array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}