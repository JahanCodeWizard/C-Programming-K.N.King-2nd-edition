// 3-digit-revers.c, by Hexenmeister, 22-Nov-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 71)
// 3-digit-revers.c: This is a simple program which asks the user to put a three-digit number, then prints the number with its digits reversed.

#include <stdio.h>

int main(void){
    // declaration
    int d1, d2, d3;
    
    // input
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    // output
    printf("The reversal is: %d%d%d\n", d3, d2, d1);

    return 0;
}
    
