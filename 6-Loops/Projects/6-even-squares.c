// 6-even-squares.c, by Hexenmeister, 21-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 123)
// 6-even-squares.c: prompts the user to enter a number, then prints all even squares between 1 and the given number.

#include <stdio.h>

int main(void) {
    // declaration
    int number;
    
    // input
    printf("Enter a number: ");
    scanf("%d", &number);

    // process + input
    for (int i = 2; i * i <= number; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}
