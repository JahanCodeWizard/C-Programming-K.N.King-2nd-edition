// 17-magic-square.c, by JahanCodeWizard, 26-Mar-2026 Thu
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 181-182)
// 17-magic-square.c: This program createe a magic square between 1 and 99 (size is given)
// This program is compatible with C99 standard

#include <stdio.h>

int main(void) {
    int n;
    
    printf("This program creates a magic square of a specified size.\n");
    printf("This size must be an odd number between 1 andd 99.\n");
    
    printf("Enter size of magic square: ");
    scanf("%d", &n);
    
    // odd number between 1 to 99 check
    if (n % 2 == 0) {
        // print an error message and terminate the program
        printf("Error: size is an even number.\n");
        printf("size must be an odd number between 1 to 99.\n");
        printf("You have entered '%d' !\n", n);
        
        // termination with exit status 1 (indicating an error).
        return 1;
    }
    
    // ----- C99 only ----- ----- ----- VLA -----
    // initilizeing the magic_square array, i, j (for looping through the array) and num (for keeping the track of the number assignments)
    int row, col, num;
    int old_row, old_col;
    int magic_square[n][n];
    
    // intializing array
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            magic_square[row][col] = 0;
        }
    }
    
    
    // start by placing the number 1 in the middle of row 0
    row = 0, col = n /2 , num = 1;
    magic_square[row][col] = num;

    
    // creating the magic square loop
    for (num = 2; num <= n * n; num++) {
        // Updating indices and wrap around to the opposite side
        col++;
        row--;

        // Wrap around - col
        if (!((0 <= col) && (n > col))) {
            col = 0;
        }

        // Wrap around - row
        if (!((0 <= row) && (n > row))) {
            row = n - 1;
        }

        // occupance check
        if (magic_square[row][col] == 0) {
            magic_square[row][col] = num;
            old_row = row;
            old_col = col;
        } else {
            col = old_col;
            row =  old_row + 1;
            magic_square[row][col] = num;
        }

    }

    // print the magic_square array after the assignment;
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%d\t", magic_square[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
