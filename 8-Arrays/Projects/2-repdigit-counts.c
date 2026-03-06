// 2-repdigit-counts.c, by JahanCodeWizard, 05-Mar-2026 Thu
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 178)
// 2-repdigit-counts.c: Takes in a number and then prompts the user, which numbers are repeated.
    
#include <stdio.h>

int main(void) {
    short digits_arr[10] = {0};
    long number;
    int digit;

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
        
        printf("Digit:\t\t0 1 2 3 4 5 6 7 8 9\n");
        printf("Occurrences:\t");
        for (digit = 0; digit < 10; digit++) {
            printf("%d ", digits_arr[digit]);
        }
    
    printf("\n");
    return 0;
}
