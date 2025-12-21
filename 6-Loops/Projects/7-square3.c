// square3.c, by Hexenmeister, 13-Dec-2025 Sat (Edited version on 21-Dec-2025)
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 110)
// square3.c: Prints a table of squares using an odd method

#include <stdio.h>    

int main(void) {
    int n, odd, square;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    odd = 3;
    for (int i = 1, square = 1; i <= n; i++, odd += 2) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    return 0;
}
