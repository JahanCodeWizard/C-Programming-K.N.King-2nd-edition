// 1-digit-revers.c, by Hexenmeister, 22-Nov-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 71)
// 1-digit-revers.c: This is a simple program which asks the user to put a two-digit number, then prints the number with its digits reversed.

#include <stdio.h>

int main(void){
    // declaration
    int input_number, first_digit, last_digit;
    
    // input
    printf("Enter a two-digit number: ");
    scanf("%d", &input_number);

    // calculation
    first_digit = input_number / 10;
    last_digit = input_number % 10;

    // output
    printf("The reversal is: %d%d\n",last_digit, first_digit);

    return 0;
}
    
