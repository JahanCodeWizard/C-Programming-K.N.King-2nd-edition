// 1-output.c, by Hexenmeister, 14-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 121)
// 1-output.c: This program is for representing the output of exercise no. 1 

#include <stdio.h>

int main(void) {
    int i;
    
    i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    
    printf("\n"); // for better visual
    return 0;
}
