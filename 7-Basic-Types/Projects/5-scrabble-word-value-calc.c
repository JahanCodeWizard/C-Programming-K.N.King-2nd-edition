// 5-scrabble-word-value-calc.c, by JahanCodeWizard, 16-Jan-2026 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 158)
// 5-scrabble-word-value-calc.c: computes the value of a word by summing the values ot its letters.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    // dec
    char in_char = ' ';
    int c_val, sum = 0;

    // in + proc
    printf("Enter a word: ");
    
    do {
        scanf("%c", &in_char);
        
        switch(toupper(in_char)) {
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                        c_val = 1;
                        break;
            case 'D':
            case 'G':
                        c_val = 2;
                        break;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                        c_val = 3;
                        break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                        c_val = 4;
                        break;
            case 'K':
                        c_val = 5;
                        break;
            case 'J':
            case 'X':
                        c_val = 8;
                        break;
            case 'Q':
            case 'Z':
                        c_val = 10;
                        break;
            default:    
                        c_val = 0;  // This will make sure that any non-alphabetic character doesn't mess up the total value of our word
                        break;
        }

        sum += c_val;
    } while (in_char != '\n');

    // out
    printf("Scrabble value: %d\n", sum);

    return 0;
}
