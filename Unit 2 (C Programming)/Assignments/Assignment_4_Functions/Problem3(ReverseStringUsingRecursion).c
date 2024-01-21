/*
 ============================================================================
 Name        : Functions assignment problem3.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : reverse string using recursion ***
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverseSentence();
int main(void) {
    printf("Enter a sentence: ");
    fflush(stdout);
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);

    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
        fflush(stdout);
    }
}
