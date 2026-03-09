// 7-matrix-sum.c, by JahanCodeWizard, 08-Mar-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 179)
// 7-matrix-sum.c: Reads a 5x5 array of integers and then prints the row sums and the column sums.

#include <stdio.h>

#define N 5

int main(void) {
    int i, j, sum;
    int num, numbers[N][N] = {0};
    
    for (i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < N; j++) {
            scanf(" %d", &num);
            numbers[i][j] = num;    // storing values
        }
    }

    // Row total
    printf("\nRow totals: ");
    for (i = 0; i < N; i++) {
        sum = 0;
        for (j = 0; j < N; j++) {
            sum += numbers[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");

    // Col total
    printf("Column totals: ");
    for (i = 0; i < N; i++) {
        sum = 0;
        for (j = 0; j < N; j++) {
            sum += numbers[j][i];
        }
        printf("%d ", sum);
    }
    printf("\n");

    return 0;
}
