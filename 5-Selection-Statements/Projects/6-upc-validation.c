// 6-upc-validation.c, by Hexenmeister, 06-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 96)
// 6-upc-validation.c: asks user to enter a upc and checks if it's VALID or NOT VALID.

#include <stdio.h>

int main(void) {
    // declaration
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, check_digit;
    int validation, first_sum, sec_sum;

    // input
    printf("Enter a UPC (12-digits): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &check_digit);

    // calculation
    first_sum = d1 + d3 + d5 + d7 + d9 + d11;
    sec_sum = d2 + d4 + d6 + d8 + d10;

    validation = 9 - ((((first_sum * 3) + sec_sum) -1 ) % 10);

    // output
    if (validation == check_digit) printf("VALID\n");
    else printf("NOT VALID\n");

    return 0;
}
