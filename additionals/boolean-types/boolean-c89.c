// boolean-c89.c, by JahanCodeWizard, 31-Dec-2025 Wed
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 84)
// boolean-c89.c: the main purpose of this program is to show how boolean values were used under the c89 standard

#include <stdio.h>

// Boolean Macros
#define TRUE 1      // replace "TRUE" with the value 1
#define FALSE 0     // replace "FALSE" with the value 0

int main(void){
    int flag;
    
    flag = FALSE;
    printf("The flag contains \"%d\" now.\n", flag);

    // ...
    
    flag = TRUE;
    printf("The flag contains \"%d\" now.\n", flag);

    return 0;
}
