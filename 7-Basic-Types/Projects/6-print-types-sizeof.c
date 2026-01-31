// 6-print-types-sizeof.c, by JahanCodeWizard, 16-Jan-2026 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 158)
// 6-print-types-sizeof.c: prints the sizeof various types. This program has been written using the C99 standard.

#include <stdio.h>

int main(void) {
    printf("This program lists size of some of the C types.\n");
    
    printf("\tint:\t\t%zu\n", sizeof(int));
    printf("\tshort:\t\t%zu\n", sizeof(short));
    printf("\tlong:\t\t%zu\n", sizeof(long));
    printf("\tfloat:\t\t%zu\n", sizeof(float));
    printf("\tdouble:\t\t%zu\n", sizeof(double));
    printf("\tlong double:\t%zu\n", sizeof(long double));
    return 0;
}
