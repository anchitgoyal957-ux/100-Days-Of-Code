#include <stdio.h>
int main() {
    int n, a, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(a == rev) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}