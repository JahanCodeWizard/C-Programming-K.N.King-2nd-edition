// 8-grades.c, by JahanCodeWizard, 09-Mar-2026 Mon
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 179)
// 8-grades.c: prompts for five quiz grades for each of five students, then computes the total score and average score for each student, and the average score, high score, and low score for each quiz.

#include <stdio.h>

#define N 5

int main(void) {
    int quiz[N][N] = {0};
    int i, j, grade, sum, high, low;
    
    for (i = 0; i < N; i++) {
        printf("Enter grades for Quiz %d: ", (i + 1));
        for (j = 0; j < N; j++) {
            // storing grades
            scanf("%d", &quiz[i][j]);
        }
    }
    printf("\n");

    // student proc - total, avg
    for (i = 0; i < N; i++) {
        sum = 0;    // reset the sum value, to calculate the sum for current student
        for (j = 0; j < N; j++) {
            sum += quiz[j][i];
        }
        printf("Student No. %d SUM: %d AVG: %.2f\n", (i + 1), sum, ((float) sum / N) );
    }
    printf("\n");

    // quiz proc - avg (sum / N), high, low
    for (i = 0; i < N; i++) {
        sum = 0;
        high = 0;  // arbitary initial high value
        low = 100;  // arbitary initial low value
        for (j = 0; j < N; j++) {
            grade = quiz[i][j];
            sum += grade;
            if (grade < low)
                low = grade;
            if (grade > high)
                high = grade;
        }
        printf("Quiz No. %d AVG: %.2f High: %d, Low: %d\n", (i + 1), ((float) sum / N), high, low);
    }
    printf("\n");

    return 0;
}
