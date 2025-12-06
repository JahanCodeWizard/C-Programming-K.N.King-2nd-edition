// 1-digit-counter.c, by Hexenmeister, 01-Dec-2025 Mon
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 95)
// 1-digit-counter.c: simply takes a number and counts how many digits it does have.

#include <stdio.h>

int main(void){
    // declaration
    int number, digits = 0, temp;
    
    // input
    printf("Enter a number: ");
    scanf("%d", &number);

    // calculation
    if (0 <= number && number < 10)         digits = 1;
    if (10 <= number && number < 100)       digits = 2;
    if (100 <= number && number < 1000)     digits = 3;
    if (1000 <= number && number < 10000)   digits = 4;

    // output
    printf("The number %d has %d digits.\n", number, digits);

    return 0;
}
