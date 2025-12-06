// 11-two-digit-english-number.c, by Hexenmeister, 06-Dec-2025 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 5, Page 97)
// 11-two-digit-english-number.c: Enter a two-digit number then prints the english word for the number

#include <stdio.h>    

int main(void) {
    // declaration
    int number, units, tens;

    // input
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // input validation: only two digit numbers are acceptable
    if (!(10 <= number && number <= 99)) {
        printf("Invalid input: only two digit numbers are acceptable.");
        return 0;
    }

    // process + output
    units = number % 10;
    tens = number / 10;

    printf("You entered the number ");
    
    if (10 <= number && number <= 19) {
        switch (number) {
            case 10: printf("ten");
                     break;
            case 11: printf("eleven");
                     break;
            case 12: printf("twelve");
                     break;
            case 13: printf("thirteen");
                     break;
            case 14: printf("fourteen");
                     break;
            case 15: printf("fifteen");
                     break;
            case 16: printf("sixteen");
                     break;
            case 17: printf("seventeen");
                     break;
            case 18: printf("eighteen");
                     break;
            case 19: printf("nineteen");
                     break;
        }
    } else {
    
        switch (tens) {
            case 9: printf("ninty");
                    break;
            case 8: printf("eighty");
                    break;
            case 7: printf("seventy");
                    break;
            case 6: printf("sixty");
                    break;
            case 5: printf("fifty");
                    break;
            case 4: printf("forty");
                    break;
            case 3: printf("thirty");
                    break;
            case 2: printf("twenty");
                    break;
        }

        switch (units) {
            case 1: printf("-one");
                    break;
            case 2: printf("-two");
                    break;
            case 3: printf("-three");
                    break;
            case 4: printf("-four");
                    break;
            case 5: printf("-five");
                    break;
            case 6: printf("-six");
                    break;
            case 7: printf("-seven");
                    break;
            case 8: printf("-eight");
                    break;
            case 9: printf("-nine");
                    break;
        }

 
    }
   printf(".\n");

    return 0;
}
