// 8-calendar.c, by Hexenmeister, 21-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 123)
// 8-calendar.c: prints a one month calendar

#include <stdio.h>

int main(void) {
    // declaration
    int days, start;
    
    // input
    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    // process + output
    for (int i = 1; i < start; i++) {
        printf("   ");
    }

    for (int i = 1; i <= days; i++) {
        // printing the days in a month
        printf("%3d", i);

        // test: i is the last day in the week?
        if ((start - 1 + i) % 7 == 0) printf("\n");
    }
    
    printf("\n"); // visual
    return 0;
}
