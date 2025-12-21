// 10-date-comparison.c, by Hexenmeister, 21-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 124)
// 10-date-comparison.c: ask user to input dates, then indicates which date comes earlier on the calendar. to exit user must enter 0/0/0 as input.

#include <stdio.h>

int main(void) {
    // declaration
    int day, month, year;
    int early_day=32, early_month=13, early_year=100;
    
    // input + processing loop
    for (;;) {
        // input
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        // Exit point: 0/0/0
        if (day == 0 && month == 0 && year == 0) break;

        // checking for the earliest date - using short-circuit behavior to my benefit
        if ((year < early_year) ||
           ((year == early_year) && (month < early_month)) ||
           ((year == early_year) && (month == early_month) && (day < early_day)))
        {
            early_day = day;
            early_month = month;
            early_year = year;
        }
    } 

    // output
    printf("%.2d/%.2d/%.2d is the earliest date\n", early_month, early_day, early_year);

    return 0;
}
