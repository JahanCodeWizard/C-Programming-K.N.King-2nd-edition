// 8-output.c, by Hexenmeister, 17-Dec-2025 Wed
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 121)
// 8-output.c: a simple program to produce output of the given code snippet in exercise 8

#include <stdio.h>

int main(void) {
    // declaration
    int i;

    // code snippet 
    for (i = 10; i >= 1; i /= 2) {
        printf("%d ", i++); 
    }

    return 0;
}
