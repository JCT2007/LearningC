#include <stdio.h>

int main(void) {
    double loan_amount, interest, monthly_payment, monthly_rate;
    double after_first, after_second, after_third;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%lf", &interest);
    printf("Enter monthly payment: ");
    scanf("%lf", &monthly_payment);

    monthly_rate = (interest / 100) / 12;
    after_first = loan_amount + (loan_amount * monthly_rate) - monthly_payment;
    after_second = after_first + (after_first * monthly_rate) - monthly_payment;
    after_third = after_second + (after_second * monthly_rate) - monthly_payment;

    printf("Balance remaining after first payment: %.2f\n", after_first);
    printf("Balance remaining after second payment: %.2f\n", after_second);
    printf("Balance remaning after third payment: %.2f\n", after_third);

    return 0;
}