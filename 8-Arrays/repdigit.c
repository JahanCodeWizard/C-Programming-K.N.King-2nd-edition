// repdigit.c, by JahanCodeWizard, 04-Mar-2026 Wed
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 166-167)
// repdigit.c: Check numbers for repeated digits

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    return 0;
}
