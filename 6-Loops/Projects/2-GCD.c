// 2-GCD.c, by Hexenmeister, 20-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 122)
// 2-GCD.c: prompts the user to enter two integers, then calculates and displays their greatest common divisor (GCD) 

#include <stdio.h>

int main(void) {
    // declaration
    int small, big, temp;
    
    // input
    printf("Enter two integers: ");
    scanf("%d %d", &small, &big);

    // process

    /* sorting the values of small and big:
       the smaller integer must go into the small variable.
       the bigger integer must go into the big variable.
     */
    if (small > big) {
        temp = big;     // the actual small value
        big = small;    // the actual big value is now in big variable
        small = temp;   // the actual small value is now in small variable
    }
   
    while (small != 0) {
        temp = big % small; // calculating the remainder

        // swapping the values
        big = small;
        small = temp;
    }

    // output
    printf("greatest common divisor: %d\n", big);

    return 0;
}
