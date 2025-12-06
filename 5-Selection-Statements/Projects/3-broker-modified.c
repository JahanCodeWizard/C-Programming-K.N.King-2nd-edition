// 3-broker-modified.c, by Hexenmeister, 04-Dec-2025 Thu
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 96)
// 3-broker-modified.c: This is a modified version of broker.c from section 5.2. This program asks users to input the number of shares and price per share instead of the value of the trade. also computes and shows commision charged by a rival broker.

#include <stdio.h>

int main(void) {
    // declaration
    float shares, price, value, commission, r_commission;
    
    // input
    printf("Enter the number of shares: ");
    scanf("%f", &shares);

    printf("Enter the price per share (i.e. 2.35): ");
    scanf("%f", &price);

    // process
    // calculating value of the trade
    value = shares * price;

    // setting the commission
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

    // calculating rival's commission
    if (shares < 2000) {
        r_commission = 33.00f + (shares * 0.03);
    } else {
        r_commission = 33.00f + (shares * 0.02);
    }

    // output
    printf("Commission: %.2f\nRival Broker's Commission: %.2f\n", commission, r_commission);

    return 0;
}
