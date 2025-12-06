// 1-digit-counter.c, by Hexenmeister, 01-Dec-2025 Mon
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 95)
// 1.2-digit-counter.c: simply takes a number and counts how many digits it does have.

// In this version i've tried to benefit from the short circuit behavior of the logical and (&&) operator. using nowadays hardware it doesn't seem to be any different. but does it make a difference on an old computer(?)

#include <stdio.h>

int main(void){
    // declaration
    int number, digits = 0, temp;
    
    // input
    printf("Enter a number: ");
    scanf("%d", &number);

    // calculation
    if (number < 10 && number >= 0)         digits = 1;
    if (number < 100 && number >= 10);      digits = 2;
    if (number < 1000 && number >= 100);    digits = 3;
    if (number < 10000 && number >= 1000);  digits = 4;

    // output
    printf("The number %d has %d digits.\n", number, digits);

    return 0;
}
