// sum.c, by Hexenmeister, 12-Dec-2025 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 103)
// sum.c: Sums a series of numbers 

#include <stdio.h>

int main(void) {
    
    int n, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to teminate): ");
    
    scanf("%d", &n);
    while (n != 0) {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is: %d\n", sum);

    return 0;
}
