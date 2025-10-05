#include <stdio.h>
int main() {
    int n, i, a;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter the sorted elements : \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &a);

    i = n - 1;
    while(i >= 0 && arr[i] > a) {
        arr[i+1] = arr[i];
        i--;
    }

    arr[i+1] = a;

    printf("Array after inserting the element in ascending order :\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}