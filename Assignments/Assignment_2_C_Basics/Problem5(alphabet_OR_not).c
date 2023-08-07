/*
 ============================================================================
 Name        : problem5.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : program to check whether alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char input;

	while(1){

		printf("\nEnter any thing to check whether alphabet or not : ");
		fflush(stdin);fflush(stdout);
        scanf("%c", &input);
        if ((int)input >=65 && (int)input<=90) printf(" '%c' is an capital alphabet character",input);
        else if ((int)input >=97 && (int)input<=122) printf(" '%c' is an small alphabet character",input);
        else printf("'%c' is not an alphabet character",input );
	}


	return 0;
}
