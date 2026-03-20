// 10-flights-modified.c, by JahanCodeWizard, 20-Mar-2026 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 180)
// 10-flights-modified.c: a modified version of Programming Project 8 form Chapter 5. in this modified version, the departure and arrival times are both stored in an array.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int const departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int const arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    int hour, minute;
    int time;         // time since midnight (expressed in minutes)

    char meridiem;
    int i, diff, closest_time_index;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    time = (hour * 60) + minute;
    
    closest_time_index = 0;
    diff = 9999;
    for(i = 0; i < 8; i++) {
        if (diff > abs(time - departure[i])) {
            diff = abs(time - departure[i]);
            closest_time_index = i;
        }
    }
    
    i = closest_time_index; // ease of use for writing the following lines (where indexingarrays)

    // departure time printing
    hour = departure[i] / 60;
    minute = departure[i] % 60;
    if (12 <= hour) {
        hour %= 12;
        meridiem = 'p';
    } else {
        meridiem = 'a';
    }
    printf("Closest departure time is %.2d:%.2d %c.m.", hour, minute, meridiem);

    // arriving time printing
    hour = arrival[i] / 60;
    minute = arrival[i] % 60;
    if (12 <= hour) {
        hour %= 12;
        meridiem = 'p';
    } else {
        meridiem = 'a';
    }
    printf(", arriving at %.2d:%.2d %c.m.\n", hour, minute, meridiem);
    
    return 0;
}
