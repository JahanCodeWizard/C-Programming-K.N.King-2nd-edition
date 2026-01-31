// 2-square-24-pause.c, by JahanCodeWizard, 12-Jan-2026 Mon
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 157)
// 2-square-24-pause.c: Prints a table of squares using a for statement, pauses after every 24 squares, if user press enter it will continue for another 24 squares.

#include <stdio.h>

int main(void) {
    long int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");

    scanf("%ld", &n);
    getchar();  // safty (for consuming the first new-line character after the number has been entered)

    for (i = 1; i <= n; i++) {
        printf("%15ld%15ld\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            getchar();  // wait till enter is pressed
        }
    }
    
    return 0;
}
