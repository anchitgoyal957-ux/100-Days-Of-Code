#include <stdio.h>

int main() {
    float cp, sp, profit, loss, per;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        per = (profit / cp) * 100;
        printf("Profit Percentage = %.2f\n", per);
    } 
    else if (cp > sp) {
        loss = cp - sp;
        per = (loss / cp) * 100;
        printf("Loss Percentage = %.2f\n", per);
    } 
    else {
        printf("No Profit No Loss.\n");
    }
    return 0;
}