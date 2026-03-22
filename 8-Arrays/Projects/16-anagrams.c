// 16-anagrams.c, by JahanCodeWizard, 22-Mar-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 181)
// 16-anagrams.c: checks wether two words are anagrams or not

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int index, letters[26] = {0};
    char ch;

    printf("Enter first word: ");
    for (;;) {
        scanf("%c", &ch);
        // terminating the loop - if newline character is reached
        if (ch == '\n') {
            break;
        } else {
            ch = tolower(ch);
            if (isalpha(ch)) {
                index = (int) (ch - 'a');
                letters[index]++;   // increment the letter count
            }
        }
    }

    printf("Enter second word: ");
    for (;;) {
        scanf("%c", &ch);
        // terminating the loop - if newline character is reached
        if (ch == '\n') {
            break;
        } else {
            ch = tolower(ch);
            if (isalpha(ch)) {
                index = (int) (ch - 'a');
                letters[index]--;   // decrement the letter count
            }
        }
    }

  
    // print the result
    for (index = 0; index < 26; index++) {
        if (letters[index] != 0) {
            printf("The words are not anagrams.\n");
            return 0;   // terminating the program
        }
    }

    // if the program reaches here, then the words are anagram
    printf("The words are anagrams.\n");
    return 0;
}
