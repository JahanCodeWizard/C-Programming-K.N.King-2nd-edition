// 13-name-modified.c, by JahanCodeWizard, 21-Mar-2026 Sat
// From: C Programming: A modern Approach, 2nd edition By K. N. King (Ch. 8, Page 180)
// 13-name-modified.c: Takes a first and last name, displays the last name, a comma, and the first initial followed by a period

#include <stdio.h>
#include <ctype.h>

#define MAX 20

int main(void){
    char last_name[MAX];
    char first_char, last_char;
    int index = 0, max_index;

    printf("Enter a first and last name: ");

    while ((first_char = getchar()) == ' ');    // skips initial spaces, also stores the first letter of the first name
    while ((last_char = getchar()) != ' ');     // skips the rest of first name
    while ((last_char = getchar()) == ' ');     // skips intermidiate spaces
    
    do {
        last_name[index] = last_char;   // stores the last name one character at a time
        index++;                        // increment index value
        last_char = getchar();          // gets the next character 
    } while ((last_char != '\n') && (last_char != ' ')); // after reaching the new line character or spaces after the last name letters, it will break out of the loop
    
    max_index = index;

    printf("You entered the name: ");
    for (index = 0; index <= max_index; index++) {
        printf("%c", last_name[index]);
    }
    printf(", %c.\n", toupper(first_char));

    return 0;
}
