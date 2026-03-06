// 1-repdigit-which-digit.c, by JahanCodeWizard, 05-Mar-2026 Thu
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 178)
// 1-repdigit-which-digit.c: Takes in a number and then prompts the user, which numbers are repeated.

#include <stdio.h>

int main(void) {
    short digits_arr[10] = {0};
    long number;
    int digit;

    // in : Enter a number: 939577
    printf("Enter a number: ");
    scanf("%ld", &number);

    while (number > 0) {
        // take each digit
        digit = number % 10;

        // modify the number (var)
        number /= 10;

        // proc the digit in the array
        digits_arr[digit] += 1;
    }
    
    // out : Repeated digit(s): 7 9
    printf("Repeated digit(s): ");
    for (digit = 0; digit < 10; digit++) {
        if(digits_arr[digit] > 1)
            printf("%d ", digit);
    }
    
    printf("\n");
    return 0;
}
