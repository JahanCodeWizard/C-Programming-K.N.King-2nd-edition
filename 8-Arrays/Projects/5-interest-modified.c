// 5-interest-modified.c, by JahanCodeWizard, 06-Mar-2026 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 179)
// 5-interest-modified.c: Prints a table of compund intrest
    
#include <stdio.h>

#define ARR_LEN ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    int i, j, low_rate, num_years, year;
    double value[5];

    printf("Enter intrest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < ARR_LEN; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d  ", year);
        for (i = 0; i < ARR_LEN; i++) {
            // accumulating the interest monthly
            for (j = 1; j <= 12; j++) {
                value[i] += (double) ((low_rate + i) / 12.0) / 100.0 * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
