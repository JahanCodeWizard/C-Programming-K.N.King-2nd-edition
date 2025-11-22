// 6-ean.c, by Hexenmeister, 22-Nov-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 71)
// 6-ean.c: the upc check digit calculator. it takes the first 12 digits and then produce the check digit.

#include <stdio.h>

int main(void){
    // declaration
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, check_digit;
    int sum_evens, sum_odds, total;

    // input
    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    // calculations
    sum_odds= d1 + d3 + d5 + d7 + d9 + d11;
    sum_evens= d2 + d4 + d6 + d8 + d10 + d12;
    total = (sum_evens * 3) + sum_odds;
    check_digit = 9 - ((total -1) % 10);

    // output
    printf("Check digit: %d\n", check_digit);
    
    return 0;
}
