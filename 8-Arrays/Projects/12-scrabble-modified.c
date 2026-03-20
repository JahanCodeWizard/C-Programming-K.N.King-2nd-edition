// 12-scrabble-modified.c, by JahanCodeWizard, 21-Mar-2026 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 180)
// 12-scrabble-modified.c: computes the value of a word by summing the values ot its letters. 

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int scrabble_values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char in_char = ' ';
    int index, sum = 0;

    printf("Enter a word: ");
    
    do {
        scanf("%c", &in_char);
        if (in_char == '\n') {
            break;
        }
        index = ((int) toupper(in_char)) - 65; // scale the index value based on the letter
        sum += scrabble_values[index];
    } while (in_char != '\n');

    printf("Scrabble value: %d\n", sum);

    return 0;
}
