// 11-output.c, by Hexenmeister, 19-Dec-2025 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 121-122)
// 11-output.c: a simple program to produce output of the given code snippet in exercise 11

#include <stdio.h>

int main(void) {
    // declaration
    int i, sum;
    
    // code snippet
    sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum);    // expectation: 20

    return 0;
}
