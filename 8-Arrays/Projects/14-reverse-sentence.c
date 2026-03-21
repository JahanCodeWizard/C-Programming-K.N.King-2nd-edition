// 14-reverse-sentence.c, by JahanCodeWizard, 22-Mar-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 180)
// 14-reverse-sentence.c: reverses the words in a sentence.

#include <stdio.h>

#define N 50
int main(void) {
    char sentence[N];
    char term, temp;
    int i, j, last_index, word_len = 0;

    // ===== input =====
    printf("Enter a sentence: ");
    for (i = 0; i < N; i++) {
        scanf("%c", &temp);
        // breaking the loop if the term char is reached
        if (temp == '.' || temp == '!' || temp == '?') {
            term = temp;
            last_index = i - 1;
            break;
        } else {
            // if not term char, store it in the array
            sentence[i] = temp;
        }
    }

    // ===== output =====
    printf("Reversal of sentence: ");
    for (i = last_index; i >= 0; i--) {
        temp = sentence[i];
        
        if (temp != ' ') {
            // word_len counting
            word_len++;
        } else if (temp == ' ') {
            // printing the word
            for (j = i + 1; j <= i + word_len; j++) {
                printf("%c", sentence[j]);
            }
            // print the space
            printf("%c", temp);
            // reset the word_len value
            word_len = 0;
        }
    }
    // print first word (would be the last word now!)
    for (i = 0; i < word_len; i++) {
        printf("%c", sentence[i]);
    }

    // print the term char as the last char of the output
    printf("%c\n", term);

    return 0;
}
