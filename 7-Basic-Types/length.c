// length.c, by JahanCodeWizard, 10-Jan-2026 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 142)
// length.c: Determines the length of a message

#include <stdio.h>

int main(void) {
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();
    while (ch != '\n') {
        len++;
        ch = getchar();
    }
    printf("Your message was %d character(s) long.\n", len);

    return 0;
}
