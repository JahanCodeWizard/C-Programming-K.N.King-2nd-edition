// 4-phone-number-translate.c, by JahanCodeWizard, 16-Jan-2026 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 157)
// 4-phone-number-translate.c: translates an alphabetic phone number into numeric form. 
    
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char in_char = ' ', out_char;
    
    printf("enter phone number: ");

    do {
        scanf("%c", &in_char);
        
        switch (toupper(in_char)) {
            case 'A':
            case 'B':
            case 'C':   
                        out_char = '2';
                        break;
            case 'D':
            case 'E':
            case 'F':
                        out_char = '3';
                        break;
            case 'G':
            case 'H':
            case 'I':
                        out_char = '4';
                        break;
            case 'J':
            case 'K':
            case 'L':
                        out_char = '5';
                        break;
            case 'M':
            case 'N':
            case 'O':
                        out_char = '6';
                        break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                        out_char = '7';
                        break;
            case 'T':
            case 'U':
            case 'V':
                        out_char = '8';
                        break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                        out_char = '9';
                        break;
            default:
                        out_char = in_char;
                        break;
        }
        
        printf("%c", out_char);
        
    } while (in_char != '\n');

    return 0;
}
