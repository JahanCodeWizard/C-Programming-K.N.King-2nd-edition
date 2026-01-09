// sum2.c, by JahanCodeWizard, 02-Jan-2026 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 131)
// sum2.c: Sums a series of numbers (using long variables)

#include <stdio.h>

int main(void) 
{
    long n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%ld", &n);
    while (n != 0) {
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum is: %ld\n", sum);

    return 0;
}
