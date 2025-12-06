// 10-numerical-to-letter-grade.c, by Hexenmeister, 06-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 97)
// 10-numerical-to-letter-grade.c: converts a numerical grade into a letter grade 
    
#include <stdio.h>

int main(void) {
    // declaration
    int grade;

    // input
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    
    // validation of input
    if ( grade < 0 || grade > 100) {
        printf("Illegal grade.\n");
        return 0;
    }

    // selection + output
    printf("Letter grade: ");
    
    switch (grade/ 10) {
        case 10: 
        case 9 : printf("A");
                 break;
        case 8 : printf("B");
                 break;
        case 7 : printf("C");
                 break;
        case 6 : printf("D");
                 break;
        case 5 :
        case 4 :
        case 3 :
        case 2 :
        case 1 :
        case 0 : printf("F");
                 break;

    }
    
    printf("\n");

    return 0;
}
