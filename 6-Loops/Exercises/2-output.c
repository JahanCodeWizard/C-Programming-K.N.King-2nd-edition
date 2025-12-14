// 2-output.c, by Hexenmeister, 14-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 121)
// 2-output.c: This program is for representing the output of exercise no. 2 

#include <stdio.h>

int main(void) {
    int i;
    
    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);
    
    printf("\n"); // for better visual
    return 0;
}
