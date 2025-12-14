// -output.c, by Hexenmeister, 14-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6 , Page 121)
// 4-output.c: it is a program to show the result of each of for loops provided in this exercise

#include <stdio.h>

int main(void) {
    
    // part a 
    printf("===== a =====\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", i);

    printf("\n"); // visual

    // part b
    printf("===== b =====\n");
    for (int i = 0; i < 10; ++i)
        printf("%d ", i);

    printf("\n"); // visual

    // part c
    printf("===== c =====\n");
    for (int i = 0; i++ < 10; )
        printf("%d ", i);

    printf("\n"); // visual

    return 0;
}
