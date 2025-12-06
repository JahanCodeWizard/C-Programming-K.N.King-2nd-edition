// 4-wind-speed.c, by Hexenmeister, 06-Dec-2025 Thu
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 96)
// 4-wind-speed.c: asks the user to enter a wind speed (in knots), then displays the corresponding description (Beaufort scale).

#include <stdio.h>

int main(void) {
    // declaration
    int speed;
    // input
    printf("Enter the windspeed: ");
    scanf("%d", &speed);

    // process + output
    if (speed < 1) {
        printf("Calm\n");
    } else if (speed <= 3) {
        printf("Light air\n");
    } else if (speed <= 27) {
        printf("Breeze\n");
    } else if (speed <= 47) {
        printf("Gale\n");
    } else if (speed <= 63) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }

    return 0;
}
