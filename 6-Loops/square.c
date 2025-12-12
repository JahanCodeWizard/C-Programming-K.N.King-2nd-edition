// square.c, by Hexenmeister, 12-Dec-2025 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 102)
// square.c: a simple program which gets a number as input and then prints a table with two columns (the number and it's square).

#include <stdio.h>

int main(void) { 
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        i++;
    }

    return 0;
}
    
