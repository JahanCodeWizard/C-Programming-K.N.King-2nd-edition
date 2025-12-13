// numdigits.c, by Hexenmeister, 12-Dec-2025 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 105)
// numdigits.c: Calculates the number of digits in an integer

#include <stdio.h>

int main(void) {
    int digits = 0, n;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digits(s).\n", digits);

    return 0;
}
