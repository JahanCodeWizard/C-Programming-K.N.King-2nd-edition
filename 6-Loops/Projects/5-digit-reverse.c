// 5-digit-reverse.c, by Hexenmeister, 21-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 123)
// 5-digit-reverse.c: Prompts the user to enter a number and reverses its digits

#include <stdio.h>

int main(void){
    // declaration
    int number, reverse = 0;

    // input
    printf("Enter a number: ");
    scanf("%d", &number);

    // processing the number 
    do {
        reverse = (10 * reverse) + (number % 10);
        number /= 10;
    } while (number != 0);

    // output
    printf("The reversal is: %d\n", reverse);

    return 0;
}
    
