// reverse2.c, by JahanCodeWizard, 04-Mar-2026 Wed
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 174)
// reverse2.c: Reverses a series of numbers using a variable-length array - C99 only

#include <stdio.h>

int main(void)
{
    int i, n;
    
    printf("How many numbers do you want to reverse? ");
    scanf("%d", &n);

    int a[n];   /* C99 only - length of array depends on n */

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = n - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}
