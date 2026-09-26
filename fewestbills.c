#include <stdio.h>

int main(void) {
    int dollars, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    twenties = dollars / 20;
    tens = (dollars - (twenties * 20)) / 10;
    fives = (dollars - (twenties * 20) - (tens * 10)) / 5;
    ones = (dollars - (twenties * 20) - (tens * 10) - (fives * 5)) / 1;
    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, ones);

    return 0;
}