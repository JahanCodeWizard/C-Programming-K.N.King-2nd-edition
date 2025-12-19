// 12-exercise.c, by Hexenmeister, 19-Dec-2025 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 122)
// 12-exercise.c: this is the efficient version of prime-testing numbers loop

#include <stdio.h>

int main(void) {
    // declaration
    int div, number;
    
    // input
    printf("\t\tPrime Number Checker\nPlease enter the number: ");
    scanf("%d", &number);

    // efficient loop
    for (div = 2; div * div <= number; div++) {
        if (number % div == 0)
            break;
    }

    // output 
    if (div * div <= number)
        printf("%d is divisible by %d\n", number, div);
    else
        printf("%d is prime\n", number);
    
    return 0;
}
