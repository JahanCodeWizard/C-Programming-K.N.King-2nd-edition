// base.c, by Hexenmeister, 18-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 70)
// This program will output the result of expressions from chapter 4 the exercise no. 10
// the printf function calls have been slightly modified to print the section of the exercise in question

#include <stdio.h>

int main(void)
{
    int i, j;

    // Part a
    i = 6;
    j = i += i;
    printf("a) %d, %d\n", i, j);    // expectation: 12, 12

    // Part b
    i = 5;
    j = (i -= 2) + 1;
    printf("b) %d, %d\n", i, j);    // expectation: 3, 4

    // Part c
    i = 7;
    j = 6 + (i = 2.5);
    printf("c) %d, %d\n", i, j);     // expectation: 2, 8

    // Part d
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("d) %d, %d\n", i, j);    // expectation: 6, 9

    return 0;
}
