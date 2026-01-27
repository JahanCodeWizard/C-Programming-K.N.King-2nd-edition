// 9-time-12-to-24.c, by JahanCodeWizard, 25-Jan-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 158)
// 9-time-12-to-24.c: Asks the user fo a 12-hour time, then displays the time in 24-hour form.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hour, minute;
    char meridiem;

    printf("Enter a 12-hour time: ");
    scanf(" %d : %d %c", &hour, &minute, &meridiem);
    
    meridiem = tolower(meridiem);

    if (meridiem == 'a') {
        if (hour == 12) {
            hour = 0;
        } 
    } else if (meridiem == 'p') {
        if (hour != 12) {
            hour += 12; // Turns 1:23 PM to 13:23
        }
    } else {
        // invalid input
        printf("Invalid Input!\n");
        printf("meridiem: %c has been entered.\n", meridiem);
        
        return 1;
    }

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);

    return 0;
}
