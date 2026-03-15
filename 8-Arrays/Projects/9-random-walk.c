// 9-random-walk.c, by JahanCodeWizard, 15-Mar-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 179-180)
// 9-random-walk.c: Simulates a random walk.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10
#define NEWLINE printf("\n")
#define UNTOUCHED '.'

// the values of each direction (Even nums -> Vertical, Odd nums -> Horizental)
#define UP      0
#define RIGHT   1
#define DOWN    2
#define LEFT    3

int main() {
    int i, j;
    int col, row, direction;
    
    // this array will containt each letter as foot print symbols on our board
    // we will use the variable named 'step' to index this array
    int step = 0;
    const char foot_print[26] = {   'A', 'B', 'C', 'D', 'E',
                                    'F', 'G', 'H', 'I', 'J',
                                    'K', 'L', 'M', 'N', 'O',
                                    'P', 'Q', 'R', 'S', 'T',
                                    'U', 'V', 'W', 'X', 'Y',
                                    'Z' };

    // a true value means that we can move to that direction from our position on the board
    // at board[0][0] in the beginning of out program, only moving down and right are allowed
    bool compass[4] = {[UP] = false, [RIGHT] = true, [DOWN] = true, [LEFT] = false};
    
    // initialize the board array with a default character
    char board[N][N];
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            // position indexing format - board[row][col]
            board[row][col] = UNTOUCHED;
        }
    }

    // initiate the srand in order to use rand() function
    srand((unsigned) time(NULL));

    // taking the first step
    // the first step is always at the [0][0] cordination
    row = 0, col = 0;
    board[row][col] = foot_print[step];

    // the walking loop
    for (step = 1; step < 26; /* incremention after foot_print assignment*/) {
        
        // use rand() to choose a random direction
        direction = rand() % 4;

        // updating the compass values (using if-else clauses)
        // checking - Up:
        if (((0 < row) && (9 >= row)) && (board[row - 1][col] == UNTOUCHED)) {
            compass[UP] = true;
        } else {
            compass[UP] = false;
        }
        // checking - Right:
        if (((9 > col) && (0 <= col)) && (board[row][col + 1] == UNTOUCHED)) {
            compass[RIGHT] = true;
        } else {
            compass[RIGHT] = false;
        }
        // checking - Down:
        if (((9 > row) && (0 <= row)) && (board[row + 1][col] == UNTOUCHED)) {
            compass[DOWN] = true;
        } else {
            compass[DOWN] = false;
        }
        // checking - Left:
        if (((0 < col) && (9 >= col)) && (board[row][col - 1] == UNTOUCHED)) {
            compass[LEFT] = true;
        } else {
            compass[LEFT] = false;
        }

        // termination if we are blocked
        if ((!compass[UP]) && (!compass[RIGHT]) && (!compass[DOWN]) && (!compass[LEFT])) {
            // print the last state of our board before termination
            printf("\t!!!   BLOCKED   !!!\n");
            for (i = 0; i < N; i++) {
                printf("\t");
                for (j = 0; j < N; j++) {
                    printf("%c ", board[i][j]);
                }
                NEWLINE;
            }
            NEWLINE;

            // termination using retrun the exit code no. 1
            return 1;
        }

        // moving - if-else clauses
        if ((direction == UP) && (compass[UP])) {
            // moving up 
            row -= 1;
        } else if ((direction == RIGHT)  && (compass[RIGHT])) {
            // moving right
            col += 1;
        } else if ((direction == DOWN)  && (compass[DOWN])) {
            // moving down
            row += 1;
        } else if ((direction == LEFT)  && (compass[LEFT])) {
            // moving left
            col -= 1;
        } else {
            continue;
        }

        // foot_print assignment
        // assign the foot_print value based on the step to the new coordinations
        if (board[row][col] == UNTOUCHED) {
            board[row][col] = foot_print[step];
            // incrementing the step value
            step++;
        } else {
            // let's try to move in another direction, shall we?
            continue;
        }
        
    }

    //  printing the board before exiting
    for (row = 0; row < N; row++) {
        printf("\t");
        for (col = 0; col < N; col++) {
            printf("%c ", board[row][col]);
        }
        NEWLINE;
    }
    NEWLINE;

    return 0;
}