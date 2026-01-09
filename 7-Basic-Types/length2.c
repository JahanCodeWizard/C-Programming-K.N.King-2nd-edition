// length2.c, by JahanCodeWizard, 10-Jan-2026 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 142)
// length2.c: Determines the length of a message

#include <stdio.h>

int main(void) {
    int len = 0;
    
    printf("Enter a message: ");
    while(getchar() != '\n')
        len++;
    printf("Your message was %d character(s) long.\n", len);

    return 0;
}
