/*
 ============================================================================
 Name        : problem2.c
 Author      : Mahmoud Tariq
 Version     : V1
 Copyright   :
 Description : program to check CHARACTER is VOWEL or CONSONANT
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char VowelCONS(char);

int main(void) {
	char CHAR,result;
	while(1){
	printf("Enter English Character to check:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&CHAR);
	result = VowelCONS(CHAR);
	if(result == 1)printf(" %c is vowel\n",CHAR);
	else if(result == 0) printf(" %c is consonant\n",CHAR);

}

	return 0;
}

char VowelCONS(char CHAR){

	   if(CHAR == 'a' || CHAR == 'A' || CHAR == 'e' || CHAR == 'E' || CHAR == 'i' || CHAR == 'I' || CHAR == 'o' || CHAR == 'O' || CHAR == 'u' || CHAR == 'U'  ) return 1;
	   else return 0;
}
