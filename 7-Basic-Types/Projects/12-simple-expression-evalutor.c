// 12-simple-expression-evalutor.c, by JahanCodeWizard, 26-Jan-2026 Mon
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 158-159)
// 12-simple-expression-evalutor.c: evalutes a simple expression from left to right (using the +, -, * and / operators).

#include <stdio.h>

int main(void){
    float operand, result;
    char operator;

    printf("Enter an expression: ");
    scanf(" %f", &result);

    while((operator = getchar()) != '\n') {
        switch(operator) {
            case '+':   
                        scanf(" %f", &operand);
                        result += operand;
                        break;
            case '-':   
                        scanf(" %f", &operand);
                        result -= operand;
                        break;
            case '*':
                        scanf(" %f", &operand);
                        result *= operand;
                        break;
            case '/':
                        scanf(" %f", &operand);
                        result /= operand;
                        break;
            default:    
                        break;
        }
    }

    printf("Value of expression: %f \n", result);

    return 0;
}
