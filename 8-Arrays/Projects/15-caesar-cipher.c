// 15-caesar-cipher.c, by JahanCodeWizard, 22-Mar-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 180-181)
// 15-caesar-cipher.c: Encrypts a message using caesar cipher. 

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 80

int main(void) {
    char message[MAX_LEN];
    char ch;
    int i, last_index, n;
    
    // ===== input ===== message =====
    printf("Enter message to be encrypted: ");
    for (i = 0; i < MAX_LEN; i++) {
        scanf("%c", &ch);
        if (ch == '\n') {
            // break the for loop, and keep the last index (before the newline char)
            last_index = i - 1;
            break;
        } else {
            // store the message in the array
            message[i] = ch;
        }
    }
    
    // ===== input ===== shift (n) =====
    printf("Enter n amount (1-25): ");
    scanf(" %d", &n);

    // ==== encryption =====
    for (i = 0; i <= last_index; i++) {
        ch = message[i];
        
        if (islower(ch)) {
            // lower-case letter encryption
            message[i] = (((ch - 'a') + n) % 26 + 'a');
        } else if (isupper(ch)) {
            // upper-case letter encryption
            message[i] = (((ch - 'A') + n) % 26 + 'A');
        } else {
            // for any other character do NOT change it (don't encrypt)
            continue;
        }
    }

    // ==== output ===== encrypted message =====
    printf("Encrypted message: ");
    for (i = 0; i <= last_index; i++) {
        printf("%c", message[i]);
    }
    printf("\n");

    return 0;
}
