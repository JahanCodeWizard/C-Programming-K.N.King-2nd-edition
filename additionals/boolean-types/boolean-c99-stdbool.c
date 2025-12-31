// boolean-c99-stdbool.c, by JahanCodeWizard, 31-Dec-2025 Wed
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 85)
// boolean-c99-stdbool.c:  the main purpose of this program is to show how boolean values were used under the c99 standard using the <stdbool.h> header.

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool flag;

    flag = false;

    if (flag)
        printf("This one should not be printed since the flag supposed to be false\n");

    flag = true;
    if (flag)
        printf("This one should be printed since the flag supposed to be true\n");

    return 0;
}
