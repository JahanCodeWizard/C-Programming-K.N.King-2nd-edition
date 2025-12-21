// 4-broker.c, by Hexenmeister, 20-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 123)
// 4-broker.c: ...!?
    
#include <stdio.h>

int main(void){
    // declaration
    float commission, value;
    
    // main program loop
    for (;;) {
        // input
        printf("Enter value of trade: ");
        scanf("%f", &value);
        
        // Exit point: the value 0
        if (value == 0) break;

        // calculation
        if (value < 2500)
            commission = 30.00f + (value * .017f);
        else if (value < 6250)
            commission = 56.00f + (value * .0066f);
        else if (value < 20000)
            commission = 76.00f + (value * .0034f);
        else if (value < 50000)
            commission = 100.00f + (value * .0022f);
        else if (value < 500000)
            commission = 155.00f + (value * .0011f);
        else 
            commission = 255.00f + (value * .0009f);

        if (commission < 39.00f)
            commission = 39.00f;

        // output
        printf("Commission: $%.2f\n", commission);
    } 

    return 0;
} 
