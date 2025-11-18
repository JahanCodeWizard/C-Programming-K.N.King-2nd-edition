// base.c, by Hexenmeister, 18-Nov-2025.
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 4, Page 70)
// This program will output the result of expressions from chapter 4 the exercise no. 11
// the printf function calls have been slightly modified to print the section of the exercise in question

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // Part a                           // expectations:
    i = 1;
    printf("a) %d \n", i++ - 1);        // 0
    printf("a) %d \n", i);              // 2

    // Part b
    i = 10; j = 5;
    printf("b) %d\n", i++ - ++j);       // 4
    printf("b) %d, %d\n", i, j);        // 11, 6

    // Part c
    i = 7; j = 8;
    printf("c) %d\n", i++ - --j);       // 0
    printf("c) %d, %d\n", i, j);        // 8, 7

    // Part d
    i = 3; j = 4; k = 5;
    printf("d) %d\n", i++ - j++ + --k);   // 3
    printf("d) %d, %d, %d\n", i, j, k);   // 4, 5, 4

    return 0;
}
