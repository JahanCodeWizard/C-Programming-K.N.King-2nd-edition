// 3-output.c, by Hexenmeister, 14-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 121)
// 3-output.c: This program is for representing the output of exercise no. 3

#include <stdio.h>

int main(void) {
    int i, j;
    
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
    
    printf("\n"); // for better visual
    return 0;
}
