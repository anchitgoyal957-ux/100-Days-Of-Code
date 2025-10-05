#include <stdio.h>
int main() {
    int n, i, l1, l2;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1]) {
        l1 = arr[0];
        l2 = arr[1];
    } else {
        l1 = arr[1];
        l2 = arr[0];
    }

    for(i = 2; i < n; i++) {
        if(arr[i] > l1) {
            l2 = l1;
            l1 = arr[i];
        } else if(arr[i] > l2 && arr[i] != l1) {
            l2 = arr[i];
        }
    }

    printf("Second largest element: %d\n", l2);
    return 0;
}