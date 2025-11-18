// base.c, by Hexenmeister, 16-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 57)
// upc: Universal Product Code. calculate the check digit of the upc based on the first 11 digits. basically, you give it 11 of 12 digits and it would produce the 12th digit.

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit, first_sum, second_sum;

    // first_sum = a1 + a3 + a5 + a7 + a9 + a11 (odds)
    // second_sum = a2 + a4 + a6 + a8 + a10 (evens)
    // check digit = 9 - ((((first_sum * 3) + second_sum) - 1) % 10)
    
    // input
    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    // calculation
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3+ i5 + j2 + j4;

    check_digit = 9 - ((((first_sum * 3) + second_sum) - 1) % 10 );

    // output
    printf("Check digit: %d\n", check_digit);
    
    return 0;
}
