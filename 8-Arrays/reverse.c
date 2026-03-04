// reverse.c, by JahanCodeWizard, 04-Mar-2026 Wed
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 164)
// reverse.c: Reverses a series of numbers

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = N - 1 ; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}
