// 7-fractions.c, by JahanCodeWizard, 16-Jan-2026 Fri
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 158)
// 7-fractions.c: This program is able to add, subtract, multiply or divid two fractions (By entering either +, -, *, / between fractions).

#include <stdio.h>

int main(void) {
    char operator;
    int num1, num2, denom1, denom2, answer_num, answer_denom;

    printf("Enter two fractions separated by one operator (-, +, *, /): ");
    scanf(" %d / %d %c %d / %d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator) {
        case '+':
                    answer_num = (num1 * denom2) + (num2 * denom1);
                    answer_denom = (denom1 * denom2);
                    break;
        case '-':
                    answer_num = (num1 * denom2) - (num2 * denom1);
                    answer_denom = (denom1 * denom2);
                    break;
        case '*':
                    answer_num = num1 * num2;
                    answer_denom = denom1 * denom2;
                    break;
        case '/':
                    answer_num = num1 * denom2;
                    answer_denom = denom1 * num2;
                    break;
        default:
                    // if not one of the afformentioned cases work, then something has to be wrong.
                    printf("Something went wrong!\n");
                    return 1;
    }

    printf("answer: %d/%d\n", answer_num, answer_denom);

    return 0;
}
