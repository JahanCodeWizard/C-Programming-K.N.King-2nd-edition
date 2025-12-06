// 9-date-comparison.c, by Hexenmeister, 06-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 97)
// 9-date-comparison.c: ask user to input two dates, then indicates which date comes earlier on the calendar 

#include <stdio.h>

int main(void) {
    // declaration
    int day1, day2, month1, month2, year1, year2;

    // input
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    // calculation
    /* I have used short-circuit behavior of the logical operators
     * to my benefit. if year1 is greater than year2 then the whole
     * expression will be evaluated as TRUE. if not, it checks the
     * months and at last it will check days.
     * if the whole expression of the if statement is evaluated as
     * FALSE, then obviously the second date is greater.
     */
    if (year1 > year2 || month1 > month2 || day1 > day2) {
        // DATE_2 comes earlier
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, month1, day1, year1);
    } else {
        // DATE_1 comes earlier
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1, month2, day2, year2);
    }

    // output
    return 0;
}
