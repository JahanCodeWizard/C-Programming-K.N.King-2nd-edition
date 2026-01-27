// 3-sum-double.c, by JahanCodeWizard, 13-Jan-2026 Tue
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 157)
// 3-sum-double.c: Sums a series of numbers (using double variables) 
// This program is a modified version of the sum2.c program from chapter 7.

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0f) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);

    return 0;
}
