// boolean-c89-2.c, by JahanCodeWizard, 31-Dec-2025 Wed
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 85)
// boolean-c89-2.c: the main purpose of this program is to show how boolean values were used under the c89 standard

#include <stdio.h>

#define bool int    // creating a macro which replace bool with int

int main(void){
    bool flag;
    
    flag = 0;
    printf("The flag contains \"%d\" now.\n", flag);

    // ...
    
    flag = 1;
    printf("The flag contains \"%d\" now.\n", flag);

    return 0;
}
