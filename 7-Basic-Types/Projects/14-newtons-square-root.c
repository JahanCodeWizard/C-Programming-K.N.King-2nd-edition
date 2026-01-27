// 14-newtons-square-root.c, by JahanCodeWizard, 27-Jan-2026 Tue
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 159)
// 14-newtons-square-root.c: Calculates the square root of a floating-point number using the newton's method. (x, y, x/y, average of y and x/y)

#include <stdio.h>
#include <math.h>

#define AVG ((y + (x / y)) / 2.0)
#define MARGIN 0.00001

int main(void){
    double x, y = 1;

    printf("Enter a positive number: ");
    scanf(" %lf", &x);
    
    /* accoring to the description, program must terminate 
       when the absolute value of difference between the 
       old value of y and the new value of y is less than 
       product of 0.00001 and y.
     */
    while(fabs(y - AVG) >= (MARGIN * y) ) {
        y = AVG;
    }

    printf("square root: %lf\n", y);

    return 0;
}
