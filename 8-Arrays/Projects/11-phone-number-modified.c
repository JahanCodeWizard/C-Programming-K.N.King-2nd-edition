// 11-phone-number-modified.c, by JahanCodeWizard, 21-Mar-2026 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 180)
// 11-phone-number-modified.c: translates an alphabetic phone number into numeric form. stores the given and result phone number in the same array.

#include <stdio.h>
#include <ctype.h>  // toupper()
#define MAX 15
int main(void) {
    char phone_number[MAX];
    int index = 0, max_index;
    char temp = 'a';    // initial value is set to any character (in this case 'a') so the while loop can begin (for the first iteration)
    printf("Enter phone number: ");
    while (temp != '\n') {
        scanf("%c", &temp);
        phone_number[index] = toupper(temp);
        index++;
    }   // using this loop, our last indexed phone_number element would always be the newline character.
    
    max_index = index;  // stores the last index of the input

    printf("In numeric form: ");
    for (index = 0; index <= max_index; index++) {
        switch (phone_number[index]) {
            case 'A':
            case 'B':
            case 'C':   
                        phone_number[index] = '2';
                        break;
            case 'D':
            case 'E':
            case 'F':
                        phone_number[index] = '3';
                        break;
            case 'G':
            case 'H':
            case 'I':
                        phone_number[index] = '4';
                        break;
            case 'J':
            case 'K':
            case 'L':
                        phone_number[index] = '5';
                        break;
            case 'M':
            case 'N':
            case 'O':
                        phone_number[index] = '6';
                        break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                        phone_number[index] = '7';
                        break;
            case 'T':
            case 'U':
            case 'V':
                        phone_number[index] = '8';
                        break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                        phone_number[index] = '9';
                        break;
            default:
                        break;
        }
        
        printf("%c", phone_number[index]);
        
    }

    return 0;
}