// 5-tax-calculator.c, by Hexenmeister, 06-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 96)
// 5-tax-calculator.c: asks the user to enter the amount of taxable income, then displays the tax due.

#include <stdio.h>

int main(void) {
    // declaration
    float income, tax;

    // input
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);

    // calculation
    if (income < 750) {
        tax = income * 0.01;
    } else if (income < 2250) {
        tax = 7.50f + ((income - 750) * 0.02);
    } else if (income < 3750) {
        tax = 37.50f + ((income - 2250) * 0.03);
    } else if (income < 5250) {
        tax = 82.50f + ((income - 3750) * 0.04);
    } else if (income < 7000) {
        tax = 142.50f + ((income - 5250) * 0.05);
    } else {
        tax = 230.00f + ((income - 7000) * 0.06);
    }

    // output
    printf("Tax due: %.2f\n", tax);

    return 0;
}
