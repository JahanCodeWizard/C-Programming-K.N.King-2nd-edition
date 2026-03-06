// 3-repdigit-continues.c, by JahanCodeWizard, 05-Mar-2026 Thu
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 178)
// 3-repdigit-continues.c: Takes in a number and then prompts the user, which numbers are repeated.
    
#include <stdio.h>

int main(void) {
    short digits_arr[10] = {0};
    long number;
    int digit, i;
    int signal = 1; // non-zero initial value for signal

    printf("Welcome!\nIn order to exit, enter a non-positive value.\n");    // starting prompt

    do {
        printf("Enter a number: ");
        scanf("%ld", &number);

        signal = number;    // assign signal value
        if (signal <= 0)
            break;          // program termination

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
            for (i = 0; i < 10; i++) {
                printf("%d ", digits_arr[i]);
            }

        printf("\n\n");

        // clearing array (for the second iteration of the loop and so on ...)
        for (i = 0; i < 10; i++)
            digits_arr[i] = 0;
    } while (signal > 0);
    
    printf("Program terminated\n"); // Termination prompt

    return 0;
}
