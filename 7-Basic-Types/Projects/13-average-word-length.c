// 13-average-word-length.c, by JahanCodeWizard, 26-Jan-2026 Mon
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 159)
// 13-average-word-length.c: calculates the average word length in a given sentence.

#include <stdio.h>

int main(void){
    char ch;
    int c_count = 0, w_count = 0;
    float result;
    
    while ((ch = getchar()) == ' ');    // skipping initial spaces

    w_count++;  // counting the first word

    do {
        switch(ch) {
            case ' ':   // if the next char is not space, then +1 Word count
                        // also +1 Char count
                        if((ch = getchar()) != ' '){
                            w_count++;
                            c_count++;
                        }
                        break;

            default:    // if switch reach here then it means it is processing a char
                        c_count++;
                        break;
        }
    } while ((ch = getchar()) != '\n');

    printf("Average word length: %.1f\n", (float) c_count / w_count);

    return 0;
}
