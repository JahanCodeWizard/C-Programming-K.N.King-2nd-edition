// square2.c, by Hexenmeister, 13-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 110)
// square2.c: Prints a table of squares using a for statement

#include <stdio.h>

int main(void) {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}
