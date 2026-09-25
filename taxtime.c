#include <stdio.h>

#define TAX 0.05

int main(void) {
    float dollars, subtotal;

    printf("Enter dollars: ");
    scanf("%f", &dollars);
    subtotal = dollars + (dollars * TAX);
    printf("Your subtotal is: %.2f\n", subtotal);

    return 0;
}