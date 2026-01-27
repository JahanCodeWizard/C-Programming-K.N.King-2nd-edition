// 11-name.c, by JahanCodeWizard, 25-Jan-2026 Sun
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 7, Page 158)
// 11-name.c: Takes a first and last name, displays the last name, a comma, and the first initial followed by a period

#include <stdio.h>
#include <ctype.h>

int main(void){
    char first_char, last_char;

    printf("Enter a first and last name: ");

    while ((first_char = getchar()) == ' ');    // skips initial spaces, also stores the first letter of the first name
    while ((last_char = getchar()) != ' ');     // skips the rest of first name
    while ((last_char = getchar()) == ' ');     // skips intermidiate spaces
    
    do {
        printf("%c", last_char); // prints last name
        last_char = getchar(); 
    } while ((last_char != '\n') && (last_char != ' ')); // after reaching the new line character or spaces after the last name letters, it will break out of the loop
    
    printf(", %c.\n", toupper(first_char));

    return 0;
}
