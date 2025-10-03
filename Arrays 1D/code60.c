#include <stdio.h>

int main() {
    int a, i, p = 0, n = 0, z = 0;

    printf("Enter number of elements: ");
    scanf("%d", &a);

    int arr[a];

    printf("Enter %d elements:\n", a);
    for(i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
            p++;
        else if(arr[i] < 0)
            n++;
        else
            z++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", p, n, z);
    return 0;
}