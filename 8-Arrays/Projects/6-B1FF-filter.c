// 6-B1FF-filter.c, by JahanCodeWizard, 08-Mar-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 179)
// 6-B1FF-filter.c: translate a given message into B1FF-speak.

#include <stdio.h>
#include <ctype.h>

#define ARR_LEN 50
#define EXC_MARKS 10

int main(void)
{   
    int i, msg_len = 0;
    char current_char;
    char char_arr[ARR_LEN];
    
    printf("Enter message: ");

    for (i = 0; i < ARR_LEN; i++) {
        scanf("%c", &current_char);
        msg_len++;  // keeps track of the count of letters in the given message
        if (current_char == '\n') break;
        
        char_arr[i] = toupper(current_char);
    }


    printf("In B1FF-speak: ");
    for (i = 0; i < msg_len; i++) {
        current_char = char_arr[i];

        switch (current_char) {
            case 'A':
                current_char = '4';
                break;
            case 'B':
                current_char = '8';
                break;
            case 'E':
                current_char = '3';
                break;
            case 'I':
                current_char = '1';
                break;
            case 'O':
                current_char = '0';
                break;
            case 'S':
                current_char = '5';
                break;
            default:
                break;
        }
    
        printf("%c", current_char);
    }

    for (i = 0; i < EXC_MARKS; i++) {
        printf("!");
    }
    
    printf("\n");
    
    return 0;
}
