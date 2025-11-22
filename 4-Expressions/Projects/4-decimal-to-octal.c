// 4-decimal-to-octal.c, by Hexenmeister, 22-Nov-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 71)
// 4-decimal-to-octal.c: gets a decimal number from user and outputs it in octal.

#include <stdio.h>

int main(void){
    // declaration
    int number, d1, d2, d3, d4, d5;

    // input
    printf("Enter a number between 0 ad 32767: ");
    scanf("%d", &number);

    // calculation
    d1 = number % 8;
    number /= 8;
    
    d2 = number % 8;
    number /= 8;

    d3 = number % 8;
    number /= 8;

    d4 = number % 8;
    number /= 8;

    d5 = number % 8;

    // output
    printf("In octal, your number is: %1d%1d%1d%1d%1d\n", d5, d4, d3, d2, d1);

    return 0;
}
