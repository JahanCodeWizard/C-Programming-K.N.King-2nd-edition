// boolean-c99.c, by JahanCodeWizard, 31-Dec-2025 Wed
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 85) 
// boolean-c99.c: the main purpose of this program is to show how boolean values were used under the c99 standard

#include <stdio.h>

int main(void) {
    // _Bool is a type in C99, usigned integer type to be more percise. it can store 0 and 1 only. any nonzero value will end up to be 1.
    _Bool flag;

    flag = 0;   // false - zero

    if (flag)
        printf("This should not be printed\n");

    flag += 5;  // this must end up to store value 1 to the flag

    if (flag)
        printf("This should be printed since the value of flag is \"%d\" now.\n", flag);

    return 0;
}
