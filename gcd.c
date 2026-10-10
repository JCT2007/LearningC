#include <stdio.h>

int main(void) {
    int num1, num2, gcd;

    printf("Input two integers: ");
    scanf("%d%d", &num1, &num2);

    while (num2 > 0) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    gcd = num1;
    printf("Greatest common divisor: %d", gcd);

    return 0;
}