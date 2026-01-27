// 10-vowel-counter.c, by JahanCodeWizard, 25-Jan-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 158)
// 10-vowel-counter.c: Counts the number of vowels in a given sentence.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int vowel_counter = 0;
    char current_char;

    printf("Enter a sentence: ");
    
    do {
        current_char = getchar();
        
        switch(toupper(current_char)){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':   vowel_counter++;
                        break;
        }
    } while (current_char != '\n');
   
    printf("Your sentence countains %d vowels.\n", vowel_counter);

    return 0;
}
