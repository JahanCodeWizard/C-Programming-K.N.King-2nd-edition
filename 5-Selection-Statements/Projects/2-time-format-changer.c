// 2-time-format-changer.c, by Hexenmeister, 04-Dec-2025 Thu
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 96)
// 2-time-format-changer.c: Takes time in 24-hour format and display it in 12-hour format

#include <stdio.h>

int main(void) {
    // declaration
    int hours, minutes;

    // input
    printf("Enter a 24-hour time (i.e. 23:45): ");
    scanf("%d:%d", &hours, &minutes);

    // process + output
    printf("Equivalent 12-hour time: ");
    if (hours == 0) {
        // AM
        printf("12:%.2d AM\n", minutes);
    } else if (hours < 12) {
        // AM
        printf("%.2d:%.2d AM\n", hours, minutes);
    } else if (hours == 12) {
        // PM (12 PM AKA Noon)
        printf("12:%.2d PM\n", minutes); 
    } else if (hours > 12 && hours < 24) {
        // PM
        printf("%.2d:%.2d PM\n", hours - 12, minutes); 
    } else {
        // if hour is out of range
        printf("Invalid input.\n");
    }

    return 0;
}
