// 12-eular-epsilon.c, by Hexenmeister, 21-Dec-2025 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 6, Page 124)
// 12-eular-epsilon.c: calculating mathmatical constant e

#include <stdio.h>

int main(void) {
    // declaration
    int fact = 1;
    float euler = 1.0f, epsilon, term = 1.0f;
    
    // input
    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    // calculating loop
    for (int i = 1; term >= epsilon; i++) {
        // calculating the factorial
        fact *= i;
       
        term = (1.000f / fact);

        euler += term;
    }

    // output
    printf("The Euler approximation is %f\n", euler);

    return 0;
}
