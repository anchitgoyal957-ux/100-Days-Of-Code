#include <stdio.h>
int main() {
    int a, b, c;
    char op;

    printf("Enter two numbers with an operator : ");
    scanf("%d %d %c", &a, &b, &op);
    if(op == '+')
    c = a + b;
    else if(op == '-')
    c = a - b;
    else if(op == '*')
    c = a * b;
    else if(op == '/')
    c = a / b;
    else if(op == '%')
    c = a % b;
    switch(op) {
        case '+':
        printf("%d\n", c);
        break;
        case '-':
        printf("%d\n", c);
        break;
        case '*':
        printf("%d\n", c);
        break;
        case '/':
        printf("%d\n", c);
        break;
        case '%':
        printf("%d\n", c);
        break;
        default:
        printf("Invalid entry\n");
    }
    return 0;
}