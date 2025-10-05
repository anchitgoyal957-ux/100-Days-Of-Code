#include <stdio.h>
int main() {
    int n, i, p, a;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &p, &a);

    for(i = n; i > p; i--) {
        arr[i] = arr[i-1];
    }

    arr[p] = a;

    printf("Array after inserting the given element at a given position :\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}