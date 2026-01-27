// 15-factorial.c, by JahanCodeWizard, 27-Jan-2026 Tue
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 159)
// 15-factorial.c: Computes the factorial of a positive number.

#include <stdio.h>

int main(void) {
    int num, fact = 1;
    
    printf("Enter a positive integer: ");
    scanf(" %d", &num);
    
    while (num >= 1) {
        fact *= num--;
    }

    printf("Fatorial of %d: %d\n", num, fact);

    return 0;
}
