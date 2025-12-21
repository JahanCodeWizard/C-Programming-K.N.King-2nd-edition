// 9-loan.c, by Hexenmeister, 21-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 123)
// 9-loan.c: ...!?
    
#include <stdio.h>

int main(void)
{
    // declaration
    float amount, rate, monthly_payment, monthly_rate;
    int payment_number;

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
    
    // number of payments
    printf("Enter the number of payments: ");
    scanf("%d", &payment_number);

    // Calculation + Output
    rate = rate / 100.00f; // change it into percent
    monthly_rate = rate / 12;
    for (int i = 1; i <= payment_number; i++) {
        amount = (amount - monthly_payment) * (1.00f + monthly_rate);
        printf("Balance remaining after %d payment(s): $%.2f\n", i, amount);
    }
    
    return 0;
}
