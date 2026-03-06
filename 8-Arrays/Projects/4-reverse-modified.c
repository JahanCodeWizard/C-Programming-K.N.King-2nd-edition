// 4-reverse-modified.c, by JahanCodeWizard, 06-Mar-2026 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 179)
// 4-reverse-modified.c: reverses a series of numbers. 
    
#include <stdio.h>

#define N 10
#define ARR_LEN (int) (sizeof(a) / sizeof(a[0]))

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < ARR_LEN; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = ARR_LEN - 1 ; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}
