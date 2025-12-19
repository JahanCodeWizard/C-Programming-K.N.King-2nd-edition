// 10-output.c, by Hexenmeister, 19-Dec-2025 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 121)
// 10-output.c: This is a simple program which implement the continue statement using the goto statement
// logic of both loops are the same: from 0 to 10, print the even numbers and skip the odd ones. the skipping part is the main subject of focus in this exercise.

#include <stdio.h>

int main(void) {
    
    printf("The following are the result of a loop with continue statement:\n"); // visual

    for (int i = 0; i <= 10; i++) {
        // print even numbers - skip odd numbers
        if (i % 2 == 0) {
            printf("%d ", i);
        } else {
            continue;
        }

    }

    printf("\n"); // visual

    printf("The following are the result of a loop with goto statement:\n"); // visual

    for (int j = 0; j <= 10; j++) {
        // print even numbers - skip odd numbers
        if (j % 2 == 0) {
            printf("%d ", j);
        } else {
            goto before_end;
        }
        before_end: ;
    }

    printf("\n"); // visual

    return 0;
}
