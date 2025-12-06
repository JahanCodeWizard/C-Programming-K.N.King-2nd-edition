// 7-max-min-four-numbers.c, by Hexenmeister, 06-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. , Page )
// 7-max-min-four-numbers.c: asks user to enter four integers at the same time on a line, finds the largest and smallest, then prints to the console.

#include <stdio.h>

int main(void) {
    // declaration
    int d1, d2, d3, d4, max, min;

    // input
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &d1, &d2, &d3, &d4);

    // calculation

    // Finding maximum
    max = d1;
    if (d2 > max) max = d2;
    if (d3 > max) max = d3;
    if (d4 > max) max = d4;

    // Finding minimum
    min = d1;
    if (d2 < min) min = d2;
    if (d3 < min) min = d3;
    if (d4 < min) min = d4;

    // output
    printf("Max: %d\nMin: %d\n", max, min);

}
