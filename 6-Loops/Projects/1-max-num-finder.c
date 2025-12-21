// 1-max-num-finder.c, by Hexenmeister, 20-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 122)
// 1-max-num-finder.c: prompts the user to enter a nonnegative number, and keeps taking input form user until the number 0 or a negative number is entered. prints the largest number. 

#include <stdio.h>

int main(void) {
    // declaration
    float number, max = 0.00f;

    // input + process
    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &number);
        
        // breaking the loop: if a nonpositive value is entered
        if (number <= 0) break;

        // checking for the largest number
        // if the given number is larger than the max, then put the number in max.
        // if not, continue.
        if (number > max) max = number;
    }

    // output 
    printf("The largest number entered was %.2f\n", max);

    return 0;
}
