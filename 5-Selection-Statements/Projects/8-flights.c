// 8-flights.c, by Hexenmeister, 06-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 96-97)
/* 8-flights.c: asks user to enter a time in 24 hour format, 
 * then the program displays the departure and arrival times 
 * for te flight whose departure time is closest to the 
 * entered time by user.
 */

#include <stdio.h>

int main(void) {
    // declaration
    int hour, minute;
    int time;         // time since midnight (expressed in minutes)

                        //  Departure time      Arrival time
    int dep_1 = 480;    //  8:00 AM             10:16 AM
    int dep_2 = 583;    //  9:43 AM             11:52 AM
    int dep_3 = 679;    // 11:19 AM              1:31 PM
    int dep_4 = 767;    // 12:47 PM              3:00 PM
    int dep_5 = 840;    //  2:00 PM              4:08 PM
    int dep_6 = 945;    //  3:45 PM              5:55 PM
    int dep_7 = 1140;   //  7:00 PM              9:20 PM
    int dep_8 = 1305;   //  9:45 PM             11:58 PM

    int c_dep;          // closest departure time

    // input
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    // calculations
    // change the input 24-time into minutes since midnight
    time = (hour * 60) + minute;

    // finding closest departure time, set the c_dep var.
    // first we find the range which the time is included in, then check to which side of the range it is closer. it's seems scary, but it's simple really.
    if ( time <= dep_1 || time > dep_8 ) {
        if ((dep_1 - time) < (time - dep_8)) {
            c_dep = dep_1;
        } else {
            c_dep = dep_8;
        }
    } else if ( dep_2 >= time && time > dep_1 ) {
        if ((dep_2 - time) < (time - dep_1)) {
            c_dep = dep_2;
        } else {
            c_dep = dep_1;
        }
    } else if ( dep_3 >= time && time > dep_2 ) {
        if ((dep_3 - time) < (time - dep_2)) {
            c_dep = dep_3;
        } else {
            c_dep = dep_2;
        }
    } else if ( dep_4 >= time && time > dep_3 ) {
        if ((dep_4 - time) < (time - dep_3)) {
            c_dep = dep_4;
        } else {
            c_dep = dep_3;
        }
    } else if ( dep_5 >= time && time > dep_4 ) {
        if ((dep_5 - time) < (time - dep_4)) {
            c_dep = dep_5;
        } else {
            c_dep = dep_4;
        }
    } else if ( dep_6 >= time && time > dep_5 ) {
        if ((dep_6 - time) < (time - dep_6)) {
            c_dep = dep_6;
        } else {
            c_dep = dep_5;
        }
    } else if ( dep_7 >= time && time > dep_6 ) {
        if ((dep_7 - time) < (time - dep_6)) {
            c_dep = dep_7;
        } else {
            c_dep = dep_6;
        }
    } else if ( dep_8 >= time && time > dep_7 ) {
        if ((dep_8 - time) < (time - dep_7)) {
            c_dep = dep_8;
        } else {
            c_dep = dep_7;
        }
    }

    // output: based on the value of c_dep prints the output.
    printf("Closest departure time is ");

    switch (c_dep) {
        case 480:   printf("8:00 a.m., arriving at 10:16 a.m.\n");
                    break;
        case 583:   printf("9:43 a.m., arriving at 11:52 a.m.\n");
                    break;
        case 679:   printf("11:19 a.m., arriving at 1:31 p.m.\n");
                    break;
        case 767:   printf("12:47 p.m., arriving at 3:00 p.m.\n");
                    break;
        case 840:   printf("2:00 p.m., arriving at 4:08 p.m.\n");
                    break;
        case 945:   printf("3:45 p.m., arriving at 5:55 p.m.\n");
                    break;
        case 1140:  printf("7:00 p.m., arriving at 9:20 p.m.\n");
                    break;
        case 1305:  printf("9:45 p.m., arriving at 11:58 p.m.\n");
                    break;
    }

    return 0;
}
