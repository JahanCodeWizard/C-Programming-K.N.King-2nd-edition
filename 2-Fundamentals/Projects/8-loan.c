// loan.c, by Hexenmeister, 14-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 2, Page 35)
// loan: This program calulates the remaining balance on a loan afer the 1st, 2nd and 3rd monthly payments.

#include <stdio.h>

int main(void)
{
    // declaration
    float amount, rate, monthly_rate, monthly_payment, remaining_after_one, remaining_after_two, remaining_after_three;

    // Input: take amount, interest rate, monthly payment from user
    // amount
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    // rate
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    // monthly payment
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    // Calculation
    rate = rate / 100.0f; // change it into percent
    monthly_rate = rate / 12;
    remaining_after_one = (amount - monthly_payment) * (1.0f + monthly_rate);
    remaining_after_two = (remaining_after_one - monthly_payment) * (1.0f + monthly_rate);
    remaining_after_three = (remaining_after_two - monthly_payment) * (1.0f + monthly_rate);

    // Output: remaining after 1st, 2nd and 3rd payments.
    printf("\nBalance remaining after first payment: %.2f\n", remaining_after_one);
    printf("Balance remaining after second payment: %.2f\n", remaining_after_two);
    printf("Balance remaining after third payment: %.2f\n", remaining_after_three);
    
    return 0;
}
