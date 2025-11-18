// base.c, by Hexenmeister, 17-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 69)
// This program will output the result of expressions from chapter 4 the exercise no. 9 
// the printf function calls have been slightly modified to print the section of the exercise in question

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part a
    i = 7; j = 8;
    i *= j + 1;
    printf("a) %d %d\n", i, j);         // expectation: 63, 8

    // Part b
    i = j = k = 1;
    i += j += k;
    printf("b) %d %d %d\n", i, j, k);   // expectation: 3, 2, 1

    // Part c
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("c) %d %d %d\n", i, j, k);   // expectation: 2, -1, 3

    // Part d
    i = 2 ; j = 1; k = 0;
    i *= j *= k;
    printf("d) %d %d %d\n", i, j, k);   // expectation: 0, 0, 0

    return 0;
}
