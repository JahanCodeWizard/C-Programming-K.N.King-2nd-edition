// 3-fraction-lowest-terms.c, by Hexenmeister, 20-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 123)
// 3-fraction-lowest-terms.c: prompts the user to enter a fraction, then reduces the fraction to lowest terms

#include <stdio.h>

int main(void) {
    // declaration:
    int num, denom;
    int small, big, temp, gcd = 0;

    // input (i.e. 6/12)
    printf("Enter a fraction: ");
    scanf("%d /%d", &num, &denom);

    // process
    /* 
            1.find the gcd
                a. sort values
                b. find gcd
            2.calculate the lowest terms
     */
    small = num;
    big = denom;

    // 1.a. sort values
    if (small > big) {
        temp = big;
        big = small;
        small = temp;
    }

    // 1.b. find gcd
    while (small != 0) {
        temp = big % small;
        big = small;
        small = temp;
    }
    
    gcd = big; 
    
    // 2. lowest terms calculation
    if (gcd != 0) {
        num = num / gcd;
        denom = denom / gcd;
    }

    // output (i.e. 1/2)
    printf("In lowest terms: %d/%d\n", num, denom);

    return 0;
}
