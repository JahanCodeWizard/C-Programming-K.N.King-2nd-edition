// 11-euler-constant-approximate.c, by Hexenmeister, 21-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 124)
// 11-euler-constant-approximate.c: prompts user to enter an integer, then calculate the approximate of e

#include <stdio.h>

int main(void) {
    // declaration
    int appr, fact = 1;
    float euler = 1.0f;
    
    // input
    printf("Enter an integer: ");
    scanf("%d", &appr);

    // calculating loop
    for (int i = 1; i <= appr; i++) {
        // calculating the factorial
        fact *= i;

        euler += (1.000f / fact);
    }

    // output
    printf("The Euler approximation is %f\n", euler);

    return 0;
}
