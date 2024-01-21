/*
 ============================================================================
 Name        : arrays&strings assignment problem6.c
 Author      : Mahmoud Tariq
 Version     : v1
 Copyright   :
 Description : length of string without using strlen
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
char arr[1000];
int len= 0;
printf("Enter a string: ");
fflush(stdout);
gets(arr);
fflush(stdin);
for(int i=0 ; arr[i]!= '\0' ; i++){
	len+=1;
}

printf("length is %d",len);
fflush(stdout);


	return 0;
}
